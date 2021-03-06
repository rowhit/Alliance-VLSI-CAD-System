/*------------------------------------------------------------\
|                                                             |
| This file is part of the Alliance CAD System Copyright      |
| (C) Laboratoire LIP6 - Département ASIM Universite P&M Curie|
|                                                             |
| Home page      : http://www-asim.lip6.fr/alliance/          |
| E-mail         : mailto:alliance-users@asim.lip6.fr       |
|                                                             |
| This progam is  free software; you can redistribute it      |
| and/or modify it under the  terms of the GNU General Public |
| License as  published by the Free Software Foundation;      |
| either version 2 of the License, or (at your option) any    |
| later version.                                              |
|                                                             |
| Alliance VLSI  CAD System  is distributed  in the hope that |
| it  will be useful, but WITHOUT  ANY WARRANTY;              |
| without even the  implied warranty of MERCHANTABILITY or    |
| FITNESS FOR A PARTICULAR PURPOSE. See the GNU General       |
| Public License for more details.                            |
|                                                             |
| You should have received a copy  of the GNU General Public  |
| License along with the GNU C Library; see the file COPYING. |
| If not, write to the Free Software Foundation, Inc.,        |
| 675 Mass Ave, Cambridge, MA 02139, USA.                     |
|                                                             |
\------------------------------------------------------------*/

/*------------------------------------------------------------\
|                                                             |
| Tool    :                   XSCH                           |
|                                                             |
| File    :                   Menu.c                          |
|                                                             |
| Authors :              Jacomme Ludovic                      |
|                                                             |
| Date    :                   01.06.96                        |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                         Include Files                       |
|                                                             |
\------------------------------------------------------------*/

# include <stdio.h>
# include <Xm/Xm.h>
# include <Xm/PushBG.h>

# include "mut.h"
# include "aut.h"
# include "mlo.h"
# include "XSB.h"
# include "XTB.h"
# include "XMS.h"

# include "XMS_menu.h"
# include "XMS_panel.h"
# include "XMS_setup.h"

/*------------------------------------------------------------\
|                                                             |
|                           Constants                         |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                            Types                            |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                          Variables                          |
|                                                             |
\------------------------------------------------------------*/

   XschMenuItem XschSetupMenu[] =

         {
           {
             "Default Config",
             'D',
             NULL,
             NULL,
             &xmPushButtonGadgetClass,
             False,
             False,
             False,
             CallbackSetupDefaultConfig,
             (XtPointer)NULL,
             (Widget)NULL,
             (Widget)NULL,
             (XschMenuItem *)NULL
           }
           ,
           {
             "Load Config",
             'L',
             NULL,
             NULL,
             &xmPushButtonGadgetClass,
             False,
             False,
             False,
             CallbackSetupLoadConfig,
             (XtPointer)NULL,
             (Widget)NULL,
             (Widget)NULL,
             (XschMenuItem *)NULL
           }
           ,
           {
             "Save Config",
             'S',
             NULL,
             NULL,
             &xmPushButtonGadgetClass,
             False,
             False,
             False,
             CallbackSetupSaveConfig,
             (XtPointer)NULL,
             (Widget)NULL,
             (Widget)NULL,
             (XschMenuItem *)NULL
           }
           ,
           {
             "Informations",
             'I',
             NULL,
             NULL,
             &xmPushButtonGadgetClass,
             False,
             False,
             False,
             CallbackSetupInformations,
             (XtPointer)NULL,
             (Widget)NULL,
             (Widget)NULL,
             (XschMenuItem *)NULL
           }
           ,
           NULL
         };


/*------------------------------------------------------------\
|                                                             |
|                          Functions                          |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                          Functions                          |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                  CallbackSetupLoadConfig                    |
|                                                             |
\------------------------------------------------------------*/

void CallbackSetupLoadConfig( MyWidget, ClientData, CallData )

     Widget  MyWidget;
     caddr_t ClientData;
     caddr_t CallData;
{
  autbegin();

  XschLoadConfig( XSCH_TRUE );

  autend();
}

/*------------------------------------------------------------\
|                                                             |
|                  CallbackSetupSaveConfig                    |
|                                                             |
\------------------------------------------------------------*/

void CallbackSetupSaveConfig( MyWidget, ClientData, CallData )

     Widget  MyWidget;
     caddr_t ClientData;
     caddr_t CallData;
{
  autbegin();

  XschSaveConfig();

  autend();
}

/*------------------------------------------------------------\
|                                                             |
|                CallbackSetupDefaultConfig                   |
|                                                             |
\------------------------------------------------------------*/

void CallbackSetupDefaultConfig( MyWidget, ClientData, CallData )

     Widget  MyWidget;
     caddr_t ClientData;
     caddr_t CallData;
{
  autbegin();

  XschDefaultConfig();

  autend();
}

/*------------------------------------------------------------\
|                                                             |
|                CallbackSetupInformations                    |
|                                                             |
\------------------------------------------------------------*/

void CallbackSetupInformations( MyWidget, ClientData, CallData )

     Widget  MyWidget;
     caddr_t ClientData;
     caddr_t CallData;
{
  autbegin();

  XschDisplayInformations();

  autend();
}

