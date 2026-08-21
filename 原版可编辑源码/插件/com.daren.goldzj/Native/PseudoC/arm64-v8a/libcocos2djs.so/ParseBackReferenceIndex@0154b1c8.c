
/* v8::internal::RegExpParser::ParseBackReferenceIndex(int*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseBackReferenceIndex(RegExpParser *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)(this + 0x30);
  iVar2 = *(int *)(this + 0x40);
  lVar9 = (long)iVar2;
  if (iVar2 < *(int *)(lVar5 + 0x24)) {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      lVar8 = *(long *)(lVar5 + 0x28);
      uVar4 = (uint)*(ushort *)(lVar8 + lVar9 * 2);
    }
    else {
      lVar8 = *(long *)(lVar5 + 0x28);
      uVar4 = (uint)*(byte *)(lVar8 + lVar9);
    }
    uVar6 = lVar9 + 1;
    if (((((byte)this[0x3c] >> 4 & 1) != 0) && ((int)uVar6 < *(int *)(lVar5 + 0x24))) &&
       ((uVar4 & 0xfc00) == 0xd800)) {
      if (*(char *)(lVar5 + 0x20) == '\0') {
        uVar7 = (uint)*(ushort *)(lVar8 + uVar6 * 2);
      }
      else {
        uVar7 = (uint)*(byte *)(lVar8 + uVar6);
      }
      if ((uVar7 & 0xfc00) == 0xdc00) {
        uVar4 = (uVar7 & 0x3ff | (uVar4 & 0x3ff) << 10) + 0x10000;
      }
    }
  }
  else {
    uVar6 = (ulong)(iVar2 + 1);
    uVar4 = 0x200000;
  }
  iVar3 = uVar4 - 0x30;
  *(int *)(this + 0x40) = (int)uVar6;
  Advance(this);
  iVar1 = *(int *)(this + 0x38);
  while (iVar1 - 0x30U < 10) {
    iVar3 = (iVar1 - 0x30U) + iVar3 * 10;
    if (0x10000 < iVar3) goto LAB_0154b2a0;
    Advance(this);
    iVar1 = *(int *)(this + 0x38);
  }
  if (*(int *)(this + 0x44) < iVar3) {
    if (this[0x4f] == (RegExpParser)0x0) {
      ScanForCaptures(this);
    }
    if (*(int *)(this + 0x48) < iVar3) {
LAB_0154b2a0:
      *(int *)(this + 0x40) = iVar2 + -1;
      this[0x4c] = (RegExpParser)(iVar2 <= *(int *)(*(long *)(this + 0x30) + 0x24));
      Advance(this);
      return 0;
    }
  }
  *param_1 = iVar3;
  return 1;
}

