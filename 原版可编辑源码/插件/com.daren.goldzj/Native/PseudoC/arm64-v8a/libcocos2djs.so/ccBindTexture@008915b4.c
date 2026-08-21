
/* cocos2d::ccBindTexture(unsigned int, unsigned int) */

void cocos2d::ccBindTexture(uint param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)DAT_01d36d24;
  if ((*(uint *)(&DAT_01d1b2f4 + uVar1 * 8) != param_2) ||
     (*(uint *)(&DAT_01d1b2f0 + uVar1 * 8) != param_1)) {
    *(uint *)(&DAT_01d1b2f4 + uVar1 * 8) = param_2;
    *(uint *)(&DAT_01d1b2f0 + uVar1 * 8) = param_1;
  }
  glBindTexture();
  return;
}

