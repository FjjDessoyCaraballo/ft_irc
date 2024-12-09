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

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		(void)argv;
		int socket_fd;

		socket_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		std::cout << socket_fd << std::endl;
		close(socket_fd);
	}
	else
		std::cout << "usage: ./ircserv <port> <password>" << std::endl;
	return (0);
}