
/* cocos2d::ccVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const*)
    */

void cocos2d::ccVertexAttribPointer
               (uint param_1,int param_2,uint param_3,uchar param_4,int param_5,void *param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = DAT_01d1b2e0;
  uVar2 = (ulong)param_1;
  if (0xf < param_1) {
    return;
  }
  (&DAT_01d1b0e8)[uVar2 * 8] = param_2;
  (&DAT_01d1b0ec)[uVar2 * 8] = param_3;
  (&DAT_01d1b0f0)[uVar2 * 0x20] = param_4;
  (&DAT_01d1b0f4)[uVar2 * 8] = param_5;
  *(uint *)(&DAT_01d1b0e0 + uVar2 * 0x20) = param_1;
  (&DAT_01d1b0e4)[uVar2 * 8] = uVar1;
  (&DAT_01d1b0f8)[uVar2 * 4] = param_6;
  glVertexAttribPointer();
  return;
}

