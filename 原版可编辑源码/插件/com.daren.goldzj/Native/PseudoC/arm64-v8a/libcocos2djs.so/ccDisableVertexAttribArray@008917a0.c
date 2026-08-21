
/* cocos2d::ccDisableVertexAttribArray(unsigned int) */

void cocos2d::ccDisableVertexAttribArray(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10) {
    uVar1 = 1 << (ulong)(param_1 & 0x1f);
    if ((DAT_01d36d18 & uVar1) != 0) {
      glDisableVertexAttribArray();
      DAT_01d36d18 = DAT_01d36d18 & (uVar1 ^ 0xffffffff);
    }
  }
  return;
}

