
/* cocos2d::utils::nextPOT(int) */

int cocos2d::utils::nextPOT(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U | (int)(param_1 - 1U) >> 1;
  uVar1 = uVar1 | (int)uVar1 >> 2;
  uVar1 = uVar1 | (int)uVar1 >> 4;
  uVar1 = uVar1 | (int)uVar1 >> 8;
  return (uVar1 | (int)uVar1 >> 0x10) + 1;
}

