
/* cocos2d::PUSphere::merge(cocos2d::PUSphere const&) */

void __thiscall cocos2d::PUSphere::merge(PUSphere *this,PUSphere *param_1)

{
  long lVar1;
  PUSphere *pPVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 4);
  pPVar2 = this + 4;
  fVar7 = (float)uVar5 - (float)*(undefined8 *)pPVar2;
  fVar8 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)*(undefined8 *)pPVar2 >> 0x20);
  fVar6 = *(float *)(param_1 + 0xc) - *(float *)(this + 0xc);
  fVar9 = *(float *)param_1 - *(float *)this;
  fVar3 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
  if (fVar3 <= fVar9 * fVar9) {
    if (0.0 < fVar9) {
      uVar5 = *(undefined8 *)(param_1 + 4);
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined8 *)pPVar2 = uVar5;
      *(undefined4 *)this = *(undefined4 *)param_1;
    }
  }
  else {
    fVar3 = fVar3 * fVar3;
    Vec3::Vec3((Vec3 *)&local_68);
    fVar4 = *(float *)param_1;
    if (*(float *)this < fVar3 + fVar4) {
      fVar9 = (fVar9 + fVar3) / (fVar3 + fVar3);
      local_60 = fVar6 * fVar9 + *(float *)(this + 0xc);
      local_68 = CONCAT44(fVar8 * fVar9 + (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                          fVar7 * fVar9 + (float)*(undefined8 *)(this + 4));
    }
    *(float *)(this + 0xc) = local_60;
    *(undefined8 *)pPVar2 = local_68;
    *(float *)this = (fVar4 + fVar3 + *(float *)this) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

