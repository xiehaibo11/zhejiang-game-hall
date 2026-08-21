
/* astcIsValid(unsigned char const*) */

bool astcIsValid(uchar *param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(int *)param_1 != 0x5ca1ab13) {
    return false;
  }
  bVar1 = param_1[4];
  bVar2 = param_1[5];
  if (3 < (byte)(bVar2 - 3 | bVar1 - 3 | param_1[6] - 3)) {
                    /* try { // try from 009a3f6c to 00aa3f9b has its CatchHandler @ 009a4010 */
                    /* try { // try from 009a3fa0 to 00aa3fa7 has its CatchHandler @ 009a400c */
                    /* try { // try from 009a3fa8 to 00aa402b has its CatchHandler @ 009a3ebc */
    return param_1[6] == '\x01' &&
           (bVar2 < 0xd &&
           ((bVar2 | 2) != 0xb &&
           (bVar2 != 7 &&
           (3 < bVar2 && (bVar1 < 0xd && ((bVar1 | 2) != 0xb && (3 < bVar1 && bVar1 != 7)))))));
  }
  return true;
}

