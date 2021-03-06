#include <stdio.h>
#include <stdbool.h>
#include "constants.h"
#include "macros.h"
#include "qtypes.h"
#include "fsize.h"
#include "add_fld.h"
#include "auxil.h"
#include "dbauxil.h"
#include "is_tbl.h"
#include "del_tbl.h"
#include "aux_fld_meta.h"
#include "meta_globals.h"

// START FUNC DECL
int
rename_tbl(
	char *old_tbl,
	char *new_tbl
	)
// STOP FUNC DECL
{
  int status = 0;
  int old_tbl_id, new_tbl_id;
  //------------------------------------------------
  if ( ( new_tbl == NULL ) || ( *new_tbl == '\0' ) ) { go_BYE(-1); }
  if ( ( old_tbl == NULL ) || ( *old_tbl == '\0' ) ) { go_BYE(-1); }
  if ( strcmp(new_tbl, old_tbl) == 0 ) { go_BYE(-1); }
  //------------------------------------------------
  status = is_tbl(old_tbl, &old_tbl_id); cBYE(status);
  chk_range(old_tbl_id, 0, g_n_tbl);
  status = is_tbl(new_tbl, &new_tbl_id); cBYE(status);
  if ( new_tbl_id >= 0 ) { 
    status = del_tbl(NULL, new_tbl_id);
  }
  status = chk_tbl_name(new_tbl); cBYE(status);
  strcpy(g_tbl[old_tbl_id].name, new_tbl);
  //------------------------------------------------
 BYE:
  return(status);
}
