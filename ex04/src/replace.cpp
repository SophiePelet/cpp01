/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 12:00:58 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/12 17:07:59 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

/*
	Opens a file and replaces all occurrences of a target string (s1) with a new string (s2),
 	saving the result into a new file named "<filename>.replace"
	- If the string to find (s1) is empty, it uses `my_file.rdbuf()` to dump the content of the
	original file into the new file
 	- If s1 isn't empty, reads the original file into a string buffer using
	`rdbuf()`, storinng it into `lines`
 	- Loops through the text using `lines.find(s1, prev_pos)`
	`find` searches for the next occurrence of `s1` starting from where 
	the last match left off (`prev_pos`).
 	- Inside the loop, it appends everything up to the match into `new_content`, swaps `s1`
	with `s2`, and advances the position marker.
	After the loop, it appends any remaining text, writes the updated content to the new file, and exits.
*/
int	replace(std::string filename, std::string s1, std::string s2) {
	(void)s2;
	std::ifstream	my_file(filename.c_str());
	if (!my_file.is_open()) {
		std::cerr << "Error: couldn't open " << filename << "\n";
		return (0);
	}
	std::ofstream	new_file((filename + ".replace").c_str());
	if (!new_file.is_open()) {
		std::cerr << "Error: couldn't create the new file\n";
		my_file.close();
		return (0);
	}
	
	if (s1.size() == 0) {
		new_file << my_file.rdbuf();
		my_file.close();
		return (1);
	}

	std::stringstream	buffer;
	buffer << my_file.rdbuf();
	std::string	lines = buffer.str();
	my_file.close();

	std::string	new_content;
	size_t	pos = 0;
	size_t	prev_pos = 0;

	while ((pos = lines.find(s1, prev_pos)) != std::string::npos) {
		new_content.append(lines, prev_pos, pos - prev_pos);
		new_content.append(s2);
		prev_pos = pos + s1.size();
	}
	new_content.append(lines, prev_pos, std::string::npos);
	new_file << new_content;
	new_file.close();
	return (1);
}
