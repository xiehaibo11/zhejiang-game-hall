
/* cocos2d::ShuffleTiles::shuffle(unsigned int*, unsigned int) */

ShuffleTiles * __thiscall
cocos2d::ShuffleTiles::shuffle(ShuffleTiles *this,uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
                    /* catch() { ... } // from try @ 00ee90bc with catch @ 00ee9228 */
  if (-1 < (int)(param_2 - 1)) {
                    /* try { // try from 00ee9244 to 00fe927b has its CatchHandler @ 00ee9244
                       catch() { ... } // from try @ 00ee9244 with catch @ 00ee9244
                       catch() { ... } // from try @ 00ee92b0 with catch @ 00ee9244 */
    puVar4 = param_1 + (int)(param_2 - 1);
    do {
      uVar3 = rand();
      this = (ShuffleTiles *)(ulong)uVar3;
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = (int)uVar3 / (int)param_2;
      }
      uVar3 = uVar3 - iVar2 * param_2;
      uVar1 = *puVar4;
      param_2 = param_2 - 1;
      *puVar4 = param_1[uVar3];
      param_1[uVar3] = uVar1;
      puVar4 = puVar4 + -1;
    } while (0 < (int)param_2);
  }
                    /* try { // try from 00ee927c to 00fe928b has its CatchHandler @ 00ee9340 */
  return this;
}

