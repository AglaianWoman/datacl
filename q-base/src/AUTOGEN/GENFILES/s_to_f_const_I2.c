// START FUNC DECL
void
s_to_f_const_I2(
    short *X,
    const long long nX,
    short val
    )
// STOP FUNC DECL
{
  for ( long long i = 0; i < nX; i++ ) {
    X[i] = val;
  }
}
