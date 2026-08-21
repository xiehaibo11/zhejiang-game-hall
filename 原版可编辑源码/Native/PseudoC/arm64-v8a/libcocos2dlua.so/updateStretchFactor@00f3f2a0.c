
/* cocos2d::Sprite::updateStretchFactor() */

void __thiscall cocos2d::Sprite::updateStretchFactor(Sprite *this)

{
  long lVar1;
  Size *pSVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Size local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(*(long *)this + 0x168))();
  Size::Size(local_30,pSVar2);
                    /* try { // try from 00f3f2e0 to 0103f417 has its CatchHandler @ 00f3f484 */
  if (*(int *)(this + 0x42c) == 2) {
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar3 = (float)*(undefined8 *)(this + 0x410);
    fVar5 = (float)((ulong)*(undefined8 *)(this + 0x410) >> 0x20);
    fVar7 = (float)*(undefined8 *)(this + 0x41c);
    fVar8 = (float)((ulong)*(undefined8 *)(this + 0x41c) >> 0x20);
    fVar9 = (float)*(undefined8 *)(this + 0x424);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 0x424) >> 0x20);
    uVar4 = CONCAT44((((local_30._4_4_ -
                       ((float)((ulong)*(undefined8 *)(this + 0x438) >> 0x20) - fVar5)) -
                      fVar5 * fVar8) - fVar5 * (((float)((ulong)uVar6 >> 0x20) - fVar8) - fVar10)) /
                     (fVar5 * fVar10),
                     (((local_30._0_4_ - ((float)*(undefined8 *)(this + 0x438) - fVar3)) -
                      fVar3 * fVar7) - fVar3 * (((float)uVar6 - fVar7) - fVar9)) / (fVar3 * fVar9));
  }
  else {
    if (*(int *)(this + 0x42c) != 0) goto LAB_00f3f344;
    uVar4 = CONCAT44(local_30._4_4_ / (float)((ulong)*(undefined8 *)(this + 0x438) >> 0x20),
                     local_30._0_4_ / (float)*(undefined8 *)(this + 0x438));
  }
  *(ulong *)(this + 0x430) =
       uVar4 & CONCAT44(-(uint)(0.0 < (float)(uVar4 >> 0x20)),-(uint)(0.0 < (float)uVar4));
LAB_00f3f344:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

