/*
© [2013] LinkedIn Corp. All rights reserved.
Licensed under the Apache License, Version 2.0 (the "License"); you may
not use this file except in compliance with the License. You may obtain
a copy of the License at  http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an "AS IS"
BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
*/
#include "qtypes.h"
#include "mmap.h"
#include "add_fld.h"
#include "auxil.h"
#include "dbauxil.h"
#include "is_tbl.h"
#include "meta_globals.h"

// START FUNC DECL
int
set_nR(
	char *tbl,
	char *str_nR
	)
// STOP FUNC DECL
{
  int status = 0;
  int tbl_id; TBL_REC_TYPE tbl_rec;
  long long nR; char *endptr;
  //------------------------------------------------
  if ( ( str_nR == NULL ) || ( *str_nR == '\0' ) ) { go_BYE(-1); }
  nR = strtoll(str_nR, &endptr, 10);
  if ( nR <= 0 ) { go_BYE(-1);}
  if ( ( tbl == NULL ) || ( *tbl == '\0' ) ) { go_BYE(-1); }
  //------------------------------------------------
  status = is_tbl(tbl, &tbl_id, &tbl_rec);
  cBYE(status);
  chk_range(tbl_id, 0, g_n_tbl);
  g_tbls[tbl_id].nR = nR;
 BYE:
  return(status);
}
