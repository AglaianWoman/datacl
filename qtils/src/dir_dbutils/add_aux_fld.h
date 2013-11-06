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
extern int
add_aux_fld(
	char *tbl,
	int in_tbl_id,
	char *fld,
	int in_fld_id,
	int ddir_id,
	char *filename,
	char *str_auxtype, /* "nn" or "sz" */
	int *ptr_aux_fld_id,
	FLD_REC_TYPE *ptr_aux_fld_rec
	);
