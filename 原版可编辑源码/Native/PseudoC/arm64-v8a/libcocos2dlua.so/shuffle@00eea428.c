
/* cocos2d::TurnOffTiles::shuffle(unsigned int*, unsigned int) */

TurnOffTiles * __thiscall
cocos2d::TurnOffTiles::shuffle(TurnOffTiles *this,uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
                    /* try { // try from 00eea42c to 00fea4cb has its CatchHandler @ 00eea3bc */
  if (-1 < (int)(param_2 - 1)) {
    puVar4 = param_1 + (int)(param_2 - 1);
    do {
      uVar3 = rand();
      this = (TurnOffTiles *)(ulong)uVar3;
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
                    /* catch() { ... } // from try @ 00eea410 with catch @ 00eea480 */
  return this;
}

