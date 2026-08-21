
/* v8::internal::BoyerMoorePositionInfo::SetInterval(v8::internal::Interval const&) */

void __thiscall
v8::internal::BoyerMoorePositionInfo::SetInterval(BoyerMoorePositionInfo *this,Interval *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = *(uint *)(this + 0x14);
  if (uVar3 == 3) {
    uVar10 = 3;
  }
  else {
    iVar2 = *(int *)param_1;
    if (iVar2 < 0x30) {
      iVar9 = 0;
      iVar6 = 0x30;
      uVar8 = 2;
    }
    else if (iVar2 < 0x3a) {
      iVar6 = 0x3a;
      uVar8 = 1;
      iVar9 = 0x30;
    }
    else if (iVar2 < 0x41) {
      iVar6 = 0x41;
      uVar8 = 2;
      iVar9 = 0x3a;
    }
    else if (iVar2 < 0x5b) {
      iVar6 = 0x5b;
      uVar8 = 1;
      iVar9 = 0x41;
    }
    else if (iVar2 < 0x5f) {
      iVar6 = 0x5f;
      uVar8 = 2;
      iVar9 = 0x5b;
    }
    else if (iVar2 == 0x5f) {
      iVar6 = 0x60;
      uVar8 = 1;
      iVar9 = 0x5f;
    }
    else if (iVar2 < 0x61) {
      iVar6 = 0x61;
      uVar8 = 2;
      iVar9 = 0x60;
    }
    else if (iVar2 < 0x7b) {
      iVar6 = 0x7b;
      uVar8 = 1;
      iVar9 = 0x61;
    }
    else {
      uVar10 = uVar3;
      if (0x10ffff < iVar2) goto LAB_015411bc;
      iVar6 = 0x110000;
      uVar8 = 2;
      iVar9 = 0x7b;
    }
    uVar10 = 3;
    if ((iVar9 <= iVar2) && (*(int *)(param_1 + 4) < iVar6)) {
      uVar10 = uVar8 | uVar3;
    }
  }
LAB_015411bc:
  *(uint *)(this + 0x14) = uVar10;
  uVar3 = *(uint *)param_1;
  if ((int)((*(int *)(param_1 + 4) - uVar3) + 1) < 0x80) {
    if ((int)uVar3 <= *(int *)(param_1 + 4)) {
      do {
        uVar4 = (ulong)((uVar3 & 0x7f) >> 6);
        uVar7 = 1L << ((ulong)(uVar3 & 0x7f) & 0x3f);
        if ((*(ulong *)(this + uVar4 * 8) & uVar7) == 0) {
          lVar5 = uVar4 * 8;
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          *(ulong *)(this + lVar5) = *(ulong *)(this + lVar5) | uVar7;
        }
      } while ((*(int *)(this + 0x10) != 0x80) &&
              (bVar1 = (int)uVar3 < *(int *)(param_1 + 4), uVar3 = uVar3 + 1, bVar1));
    }
    return;
  }
  *(undefined4 *)(this + 0x10) = 0x80;
  *(undefined8 *)this = 0xffffffffffffffff;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  return;
}

