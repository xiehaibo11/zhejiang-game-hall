
/* cocos2d::Image::initWithTGAData(cocos2d::sImageTGA*) */

void __thiscall cocos2d::Image::initWithTGAData(Image *this,sImageTGA *param_1)

{
  uint uVar1;
  sImageTGA sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  if (param_1 == (sImageTGA *)0x0) {
                    /* try { // try from 009976e4 to 00a976ef has its CatchHandler @ 0099796c */
    uVar8 = 0;
    goto LAB_009977ac;
  }
  sVar2 = param_1[4];
  if (sVar2 == (sImageTGA)0x2) {
LAB_009976b8:
    sVar2 = param_1[5];
    if (sVar2 == (sImageTGA)0x20) {
      *(undefined4 *)(this + 0x2c) = 2;
      uVar7 = 0x20;
    }
    else {
                    /* try { // try from 009976c4 to 00a976db has its CatchHandler @ 00997970 */
      if (sVar2 == (sImageTGA)0x18) {
        *(undefined4 *)(this + 0x2c) = 3;
                    /* try { // try from 00997730 to 00a9774f has its CatchHandler @ 00997918 */
        uVar7 = 0x18;
      }
      else {
        if (sVar2 != (sImageTGA)0x10) goto LAB_00997708;
        *(undefined4 *)(this + 0x2c) = 9;
        uVar7 = 0x10;
      }
    }
  }
  else if (sVar2 == (sImageTGA)0x3) {
                    /* try { // try from 009976f0 to 00a976fb has its CatchHandler @ 00997968 */
    if (param_1[5] != (sImageTGA)0x8) {
LAB_00997708:
      uVar8 = 0;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        free(*(void **)(param_1 + 0x10));
        uVar8 = 0;
        *(undefined8 *)(this + 0x10) = 0;
      }
      goto LAB_009977ac;
    }
                    /* try { // try from 009976fc to 00a97713 has its CatchHandler @ 00997980 */
    *(undefined4 *)(this + 0x2c) = 6;
    uVar7 = 8;
  }
  else {
    if (sVar2 == (sImageTGA)0xa) goto LAB_009976b8;
    uVar7 = (uint)(byte)param_1[5];
  }
  sVar3 = *(short *)(param_1 + 6);
  *(int *)(this + 0x20) = (int)sVar3;
  sVar4 = *(short *)(param_1 + 8);
  *(int *)(this + 0x24) = (int)sVar4;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = (int)sVar4 * (int)sVar3 * uVar7;
                    /* try { // try from 00997764 to 00a977cb has its CatchHandler @ 00997980 */
  uVar1 = uVar7 + 7;
  if (-1 < (int)uVar7) {
    uVar1 = uVar7;
  }
  *(undefined4 *)(this + 0x28) = 9;
  *(undefined8 *)(this + 0x10) = uVar8;
  *(long *)(this + 0x18) = (long)((ulong)uVar1 << 0x20) >> 0x23;
  this[0x134] = (Image)0x0;
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0x100))(local_40,plVar6,this + 0x138);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  uVar8 = 1;
LAB_009977ac:
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

