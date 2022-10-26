
/* PA5 Part1 action:
 * (1) delete this put your token.c from PA4 here
 * (2) modify your PA4 code to supported quoted fields as described in the
 * writeup.
 */

/*
 * hint at the start of each field check if the first character in the field
 * is a double quote, if not do the code processing from PA4
 * if the first character is a double quote add code to process the quoted field.
 * it is often easier to just have two disinct sections of code one for
 * unquoted fields and one for quoted fields than to try and merge them into
 * one code body and use flag variables. the logic gets hard to read
 * and hard to debug when merged. This is just a suggestion.
 */ 

/*
 * delete this comment. Here is the additional code snippet for printing 
 * error messages when handling quoted fields
 * fprintf(stderr, "%s: drop line %lu, quoted field not terminated\n",
 *          argv0, lineno);
 *
 * continue to use the error messages you had in PA4.
 */
