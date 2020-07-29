#include <stdio.h>

/*
    TODO:
        Write a program that prints the following shapes with asterisks 

        *********              ***                 *                           *                                              
        *              *          *         *            ***                       *  *                                              
        *              *        *              *        *****                  *      *                                            
        *              *        *              *            *                    *          *                                  
        *              *        *              *            *                  *              *                                 
        *              *        *              *            *                    *           *                           
        *              *         *           *              *                       *       *                            
        *              *           *       *                *                          *  *                                  
        *********              ***                  *                             *                                           
*/

int main(void) {
    printf("%s", "*********\n* \t*\n*\t*\n* \t*\n* \t*\n* \t*\n*********\n\n");
    printf("%s", "   ***\n  *   *\n *     *\n *     *\n *     *\n  *   *\n   ***\n\n");
    printf("%s", "    *\n   ***\n  *****\n    *\n    *\n    *\n    *\n    *\n\n");
    printf("%s", "    *\n   * *\n  *   *\n *     *\n  *   *\n   * *\n    *\n\n");
}