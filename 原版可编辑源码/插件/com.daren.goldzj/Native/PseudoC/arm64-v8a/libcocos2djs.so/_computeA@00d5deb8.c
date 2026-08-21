
/* dragonBones::IKConstraint::_computeA() */

void __thiscall dragonBones::IKConstraint::_computeA(IKConstraint *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  
  lVar1 = *(long *)(this + 0x20);
  fVar7 = *(float *)(lVar1 + 0x28);
  fVar6 = *(float *)(lVar1 + 0x2c);
  fVar2 = atan2f(*(float *)(*(long *)(this + 0x18) + 0x2c) - fVar6,
                 *(float *)(*(long *)(this + 0x18) + 0x28) - fVar7);
  fVar9 = *(float *)(lVar1 + 0x34);
  fVar8 = *(float *)(lVar1 + 0x38);
  fVar5 = fVar2 + 3.1415927;
  if (0.0 <= fVar8) {
    fVar5 = fVar2;
  }
  fVar2 = fmodf((fVar5 - fVar9) + 3.1415927,6.2831855);
  fVar5 = -3.1415927;
  if (fVar2 <= 0.0) {
    fVar5 = 3.1415927;
  }
  fVar9 = fVar9 + *(float *)(this + 0x3c) * (fVar2 + fVar5);
  *(float *)(lVar1 + 0x34) = fVar9;
  sincosf(fVar9,&fStack_54,&local_58);
  fVar5 = 1.0;
  if (fVar9 != 0.0) {
    fVar5 = local_58;
  }
  fVar2 = 0.0;
  if (fVar9 != 0.0) {
    fVar2 = fStack_54;
  }
  *(float *)(lVar1 + 0x10) = fVar5;
  *(float *)(lVar1 + 0x14) = fVar2;
  fVar3 = fVar5;
  fVar4 = fVar2;
  if (*(float *)(lVar1 + 0x30) != 0.0) {
    sincosf(*(float *)(lVar1 + 0x30) + fVar9,&fStack_64,&local_68);
    fVar3 = local_68;
    fVar4 = fStack_64;
  }
  *(float *)(lVar1 + 0x18) = -fVar4;
  *(float *)(lVar1 + 0x1c) = fVar3;
  if (fVar8 != 1.0) {
    *(float *)(lVar1 + 0x10) = fVar5 * fVar8;
    *(float *)(lVar1 + 0x14) = fVar2 * fVar8;
  }
  fVar5 = *(float *)(lVar1 + 0x3c);
  if (fVar5 != 1.0) {
    *(float *)(lVar1 + 0x18) = fVar5 * -fVar4;
    *(float *)(lVar1 + 0x1c) = fVar3 * fVar5;
  }
  *(float *)(lVar1 + 0x20) = fVar7;
  *(float *)(lVar1 + 0x24) = fVar6;
  return;
}

