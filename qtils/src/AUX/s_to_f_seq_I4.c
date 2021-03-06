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
// START FUNC DECL
void
s_to_f_seq_I4(
    int *X,
    const long long nX,
    const int start,
    const int incr
    )
// STOP FUNC DECL
{
  int val = start;
  for ( long long i = 0; i < nX; i++ ) {
    X[i] = val;
    val += incr;
  }
}
