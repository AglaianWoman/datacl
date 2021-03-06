#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "macros.h"
// START FUNC DECL
int
core_wisifxthenyelsez___XTYPE__(
				  char *X,
				  char *nn_X,
				  long long nR,
				  __ITYPE__ yval,
				  char *in_Y,
				  char *nn_Y,
				  __ITYPE__ zval,
				  char *in_Z,
				  char *nn_Z,
				  char *in_W,
				  char *nn_W,
				  bool *ptr_is_some_null
				  )
// STOP FUNC DECL
{
  int status = 0;
  __ITYPE__ *W = (__ITYPE__ *)in_W;
  __ITYPE__ *Y = (__ITYPE__ *)in_Y;
  __ITYPE__ *Z = (__ITYPE__ *)in_Z;
  cilkfor ( long long i = 0; i < nR; i++ ) { 
    if ( ( nn_X == NULL ) || ( nn_X[i] == 1 ) ) { 
      if ( X[i] == 1 ) { /* x is true => w := y */
	if ( in_Y == NULL ) {  /*use scalar value */
	  W[i] = yval;
	  nn_W[i] = 1;
	}
	else {
	  if ( ( nn_Y == NULL ) || ( nn_Y[i] == 1 ) ) {
	    W[i] = Y[i];
	    nn_W[i] = 1;
	  }
	  else {
	    W[i] = 0;
	    nn_W[i] = 0;
	    *ptr_is_some_null = false;
	  }
	}
      }
      else if ( X[i] == 0 ) {
	if ( in_Z == NULL ) {  /*use scalar value */
	  W[i] = zval;
	  nn_W[i] = 1;
	}
	else {
	  if ( ( nn_Z == NULL ) || ( nn_Z[i] == 1 ) ) {
	    W[i] = Z[i];
	    nn_W[i] = 1;
	  }
	  else {
	    W[i] = 0;
	    nn_W[i] = 0;
	    *ptr_is_some_null = false;
	  }
	}
      }
      else {
	status = -1; continue;
      }
    }
    else { 
      W[i] = 0;
      nn_W[i] = 0;
      *ptr_is_some_null = false;
    }
  }
  return status ;
}
