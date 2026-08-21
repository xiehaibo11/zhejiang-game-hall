
void bn_mul_low_normal(ulong *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 00afd98c to 00bfd98f has its CatchHandler @ 00afdac4 */
  bn_mul_words(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    iVar2 = param_4 + 4;
    while( true ) {
      bn_mul_add_words(param_1 + 1,param_2,iVar2 + -5,param_3[1]);
      if (iVar2 + -6 == 0) break;
                    /* try { // try from 00afd9d4 to 00bfda1f has its CatchHandler @ 00afdad8 */
      iVar1 = iVar2 + -4;
      bn_mul_add_words(param_1 + 2,param_2,iVar2 + -6,param_3[2]);
      if (iVar1 < 4) {
        return;
      }
      bn_mul_add_words(param_1 + 3,param_2,iVar2 + -7,param_3[3]);
      if (iVar2 + -8 == 0) {
        return;
      }
      bn_mul_add_words(param_1 + 4,param_2,iVar2 + -8,param_3[4]);
      iVar2 = iVar1;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
      if (iVar1 < 6) {
        return;
      }
    }
  }
                    /* try { // try from 00afda20 to 00bfda57 has its CatchHandler @ 00afd938 */
  return;
}

