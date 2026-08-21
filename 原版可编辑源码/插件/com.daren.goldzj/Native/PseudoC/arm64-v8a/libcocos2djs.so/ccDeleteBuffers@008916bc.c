
/* cocos2d::ccDeleteBuffers(int, unsigned int const*) */

void cocos2d::ccDeleteBuffers(int param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = (ulong)(uint)param_1;
  if (0 < param_1) {
    uVar2 = DAT_01d1b2e0;
    do {
      if (*param_2 == uVar2) {
        uVar2 = 0xffffffff;
        puVar3 = &DAT_01d1b2e0;
LAB_00891710:
        *puVar3 = 0xffffffff;
      }
      else {
        puVar3 = &DAT_01d1b2e4;
        if (*param_2 == DAT_01d1b2e4) goto LAB_00891710;
      }
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  glDeleteBuffers();
  return;
}

