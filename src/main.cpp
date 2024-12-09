/* ****************************************************************************/
/*  ROFL:ROFL:ROFL:ROFL 													  */
/*          _^___      										 				  */
/* L     __/   [] \    										 			      */
/* LOL===__        \   			MY ROFLCOPTER GOES BRRRRRR				  	  */
/* L      \________]  					by fdessoy-				  			  */
/*         I   I     			(fdessoy-@student.hive.fi)				  	  */
/*        --------/   										  				  */
/* ****************************************************************************/

#include <iostream>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstdlib>
#include <cstring>
#include <unistd.h>

/**
 * TO DO 
 *  
 * 1. parse the port input to make sure we are receiving numerical 16 bits info;
 * 2. Check weird inputs to htons();
 * 3. Check with group about password policy;
 * 4. encrypted port or no?
 * 5. port range
 */ 
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		std::string port = argv[1];
		std::string password = argv[2];
		if (password.empty() || port.empty())
			return (1);
		int socket_fd;

		socket_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		std::cout << socket_fd << std::endl;
		close(socket_fd);
	}
	else
		std::cout << "usage: ./ircserv <port> <password>" << std::endl;
	return (0);
}