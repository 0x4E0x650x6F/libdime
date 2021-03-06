/**
 * @file
 * @brief	Functions for folder operations.
 */

#include <core/magma.h>

/**
 * @brief	Check to see if a specified directory exists, or if specified, create it if it doesn't exist.
 * @param	path	a managed string containing the ful pathname of the directory.
 * @param	create	if true, attempt to create the directory if it does not already exist.
 * @return	-1 if the directory doesn't exist or couldn't be created, 0 if the directory exists, or 1 if the directory was created.
 */
int_t folder_exists(stringer_t *path, bool_t create) {

	DIR *d;

	if ((d = opendir(st_char_get(path)))) {
		closedir(d);
		return 0;
	}

	if (create && mkdir(st_char_get(path), S_IRWXU) == 0) {
		return 1;
	}
	return -1;
}
