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
core_f1f2_to_s(
    const char *op,
    char *f1_X, 
    FLD_TYPE f1type,
    char *f2_X, 
    FLD_TYPE f2type,
    long long nR,
    char *rslt_buf, 
    int sz_rslt_buf
    )
;
//----------------------------
extern int 
f1f2_to_s(
	  const char *tbl,
	  const char *f1,
	  const char *f2,
	  const char *op,
	  char *rslt_buf,
	  int sz_rslt_buf
	  )
;
//----------------------------
