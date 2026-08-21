
/* cocos2d::Image::initWithTGAData(cocos2d::sImageTGA*) */

void __thiscall cocos2d::Image::initWithTGAData(Image *this,sImageTGA *param_1)

{
  uint uVar1;
  sImageTGA sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  if (param_1 == (sImageTGA *)0x0) {
    uVar7 = 0;
    goto LAB_00f7edb4;
  }
  sVar2 = param_1[4];
  if (sVar2 == (sImageTGA)0x2) {
LAB_00f7ecc4:
    sVar2 = param_1[5];
    if (sVar2 == (sImageTGA)0x20) {
      *(undefined4 *)(this + 0x48) = 2;
      uVar8 = 0x20;
    }
    else if (sVar2 == (sImageTGA)0x18) {
      *(undefined4 *)(this + 0x48) = 3;
      uVar8 = 0x18;
    }
    else {
      if (sVar2 != (sImageTGA)0x10) goto LAB_00f7ed14;
      *(undefined4 *)(this + 0x48) = 9;
      uVar8 = 0x10;
    }
  }
  else if (sVar2 == (sImageTGA)0x3) {
    if (param_1[5] != (sImageTGA)0x8) {
LAB_00f7ed14:
      uVar7 = 0;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        free(*(void **)(param_1 + 0x10));
        uVar7 = 0;
        *(undefined8 *)(this + 0x28) = 0;
      }
      goto LAB_00f7edb4;
    }
    *(undefined4 *)(this + 0x48) = 6;
    uVar8 = 8;
  }
  else {
    if (sVar2 == (sImageTGA)0xa) goto LAB_00f7ecc4;
    uVar8 = (uint)(byte)param_1[5];
  }
  sVar3 = *(short *)(param_1 + 6);
  *(int *)(this + 0x38) = (int)sVar3;
  sVar4 = *(short *)(param_1 + 8);
  *(int *)(this + 0x3c) = (int)sVar4;
  uVar8 = (int)sVar4 * (int)sVar3 * uVar8;
  uVar1 = uVar8 + 7;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x10);
  *(long *)(this + 0x30) = (long)((ulong)uVar1 << 0x20) >> 0x23;
  *(undefined4 *)(this + 0x44) = 8;
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0x138))(local_40,plVar6,this + 0x158);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  uVar7 = 1;
LAB_00f7edb4:
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

