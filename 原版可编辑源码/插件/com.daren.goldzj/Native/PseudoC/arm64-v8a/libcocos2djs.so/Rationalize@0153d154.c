
/* v8::internal::QuickCheckDetails::Rationalize(bool) */

byte __thiscall v8::internal::QuickCheckDetails::Rationalize(QuickCheckDetails *this,bool param_1)

{
  ushort uVar1;
  uint uVar2;
  QuickCheckDetails *pQVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = 0xff;
  if (!param_1) {
    uVar4 = 0xffff;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if ((int)*(uint *)this < 1) {
    return 0;
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  bVar5 = 0;
  uVar9 = 0;
  iVar10 = 8;
  pQVar3 = this;
  if (!param_1) {
    iVar10 = 0x10;
  }
  do {
    uVar1 = *(ushort *)(pQVar3 + 4);
    uVar8 = uVar8 + 1;
    uVar7 = (uVar4 & uVar1) << (ulong)(uVar9 & 0x1f) | uVar7;
    *(uint *)(this + 0x1c) = uVar7;
    bVar5 = bVar5 | (uVar1 & 0xff) != 0;
    uVar2 = uVar9 & 0x1f;
    uVar9 = uVar9 + iVar10;
    uVar6 = (uVar4 & *(ushort *)(pQVar3 + 6)) << (ulong)uVar2 | uVar6;
    *(uint *)(this + 0x20) = uVar6;
    pQVar3 = pQVar3 + 6;
  } while (uVar8 < *(uint *)this);
  return bVar5;
}

