/*
 * This file is part of the Alliance CAD System
 * Copyright (C) Laboratoire LIP6 - Département ASIM
 * Universite Pierre et Marie Curie
 * 
 * Home page          : http://www-asim.lip6.fr/alliance/
 * E-mail             : mailto:alliance-users@asim.lip6.fr
 * 
 * This progam is  free software; you can redistribute it  and/or modify it
 * under the  terms of the GNU  General Public License as  published by the
 * Free Software Foundation;  either version 2 of the License,  or (at your
 * option) any later version.
 * 
 * Alliance VLSI  CAD System  is distributed  in the hope  that it  will be
 * useful, but WITHOUT  ANY WARRANTY; without even the  implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 * 
 * You should have received a copy  of the GNU General Public License along
 * with the GNU C Library; see the  file COPYING. If not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*
 * 
 * Tool    : alcbanner front end
 * Date    : 1996,97
 * Author  : Czo <Olivier.Sirol@lip6.fr>
 */

#ident "$Id: alcbanner.c,v 1.3 2002/09/30 16:19:42 czo Exp $"


/*
 * ####===========================================================####
 * ##                                                               ##
 * ##                         Include Files                         ##
 * ##                                                               ##
 * ####===========================================================####
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* for getopt #include <getopt.h> would be best */
#include <unistd.h>
extern char *optarg;
extern int optind, opterr, optopt;

#include "mut.h"


/*
 * ####===========================================================####
 * ##                                                               ##
 * ##                           Constants                           ##
 * ##                                                               ##
 * ####===========================================================####
 */


/*
 * ####===========================================================####
 * ##                                                               ##
 * ##                             Types                             ##
 * ##                                                               ##
 * ####===========================================================####
 */
/*
 * ####===========================================================####
 * ##                                                               ##
 * ##                           Variables                           ##
 * ##                                                               ##
 * ####===========================================================####
 */

char * BAN_Program_name;

/*
 * ####===========================================================####
 * ##                                                               ##
 * ##                           Functions                           ##
 * ##                                                               ##
 * ####===========================================================####
 */



/*================================================================####
 * Fpt Usage   
 *     
 */

void
ban_usage ()
{
  printf ("\
Usage : \n\
%s \"ToolName\" \"ToolVersion\" \"ToolPurpose\" \"ToolDate\" \n\
\n\
", BAN_Program_name);

}



/*================================================================####
 *  Main                        
 *                                                            
 */

int
main (argc, argv)
     int argc;
     char *argv[];
{
  int parsed_option;
  int arguments_left;

  char * ToolName;
  char * ToolVersion;
  char * ToolPurpose;
  char * ToolDate;



  mbkenv ();

  BAN_Program_name = mbkstrdup (argv[0]);


  while ((parsed_option = getopt (argc, argv, "h")) != -1)
    {
      /* printf("Val renv : '%c' pour '%c' \n",parsed_option, optopt); */

      switch (parsed_option)
	{

	case 'h':
	default:
	  ban_usage ();
	  fprintf ( stderr, "## %s ERROR : Bad command line.\n" , BAN_Program_name);
	  EXIT (1);
	  break;

	}
    }

  /* Apres process des switches il reste des command line arguments */
  /* numerotes argv[optind+i] avec i=0..arguments_left-1 */

  arguments_left = argc - optind;

  if (arguments_left != 4)
    {
      ban_usage ();
      fprintf ( stderr, "## %s ERROR : Need 4 args on command line.\n" , BAN_Program_name);
      EXIT (1);
    }
  else
    {
       ToolName    = mbkstrdup (argv[optind    ]);
       ToolVersion = mbkstrdup (argv[optind + 1]);
       ToolPurpose = mbkstrdup (argv[optind + 2]);
       ToolDate    = mbkstrdup (argv[optind + 3]);
    }



  alliancebanner (ToolName, 
		  ToolVersion,
		  ToolPurpose,
		  ToolDate,
		  ALLIANCE_VERSION);

  return (0);

}
