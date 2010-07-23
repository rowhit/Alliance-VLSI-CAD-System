#ifndef __P
# if defined(__STDC__) ||  defined(__GNUC__)
#  define __P(x) x
# else
#  define __P(x) ()
# endif
#endif
/*------------------------------------------------------------\
|                                                             |
| Tool    :                     RUT                           |
|                                                             |
| File    :                  rutunify.h                       |
|                                                             |
| Authors :                Jacomme Ludovic                    |
|                                                             |
| Date    :                   27.06.95                        |
|                                                             |
\------------------------------------------------------------*/

# ifndef RUT_UNIFY_H
# define RUT_UNIFY_H

/*------------------------------------------------------------\
|                                                             |
|                           Constants                         |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                            Mask                             |
|                                                             |
\------------------------------------------------------------*/

# define RUT_UNIFY_LEFT            0x0008
# define RUT_UNIFY_UP              0x0004
# define RUT_UNIFY_RIGHT           0x0002
# define RUT_UNIFY_BOTTOM          0x0001

/*------------------------------------------------------------\
|                                                             |
|                            Unify Case                       |
|                                                             |
\------------------------------------------------------------*/

# define RUT_UNIFY_NOTHING        0
# define RUT_UNIFY_DELETE         1
# define RUT_UNIFY_STRETCH        2
# define RUT_UNIFY_CROSS          3

/*------------------------------------------------------------\
|                                                             |
|                            Macros                           |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                            Types                            |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                           Functions                         |
|                                                             |
\------------------------------------------------------------*/

# endif