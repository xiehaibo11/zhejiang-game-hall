
/* v8::internal::JsonParser<unsigned short>::ScanUnicodeCharacter() */

int __thiscall
v8::internal::JsonParser<unsigned_short>::ScanUnicodeCharacter(JsonParser<unsigned_short> *this)

{
  ushort *puVar1;
  long lVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lVar2 = *(long *)(this + 0x30);
  puVar3 = *(ushort **)(this + 0x38);
  puVar1 = (ushort *)(lVar2 + 2);
  *(ushort **)(this + 0x30) = puVar1;
  if (puVar1 == puVar3) {
    uVar5 = 0xffffffcf;
LAB_01047868:
    uVar7 = (uVar5 | 0x20) - 0x27;
    if (5 < (uVar5 | 0x20) - 0x31) {
      uVar7 = 0xffffffff;
    }
    if ((int)uVar7 < 0) {
      return -1;
    }
    uVar5 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar5 = *puVar1 - 0x30;
    if (9 < uVar5) goto LAB_01047868;
  }
  puVar1 = (ushort *)(lVar2 + 4);
  *(ushort **)(this + 0x30) = puVar1;
  if (puVar1 == puVar3) {
    uVar7 = 0xffffffcf;
LAB_010478b8:
    iVar4 = (uVar7 | 0x20) - 0x27;
    if (5 < (uVar7 | 0x20) - 0x31) {
      iVar4 = -1;
    }
    iVar6 = iVar4 + uVar5 * 0x10;
    if (iVar4 < 0) {
      return -1;
    }
  }
  else {
    uVar7 = *puVar1 - 0x30;
    if (9 < uVar7) goto LAB_010478b8;
    iVar6 = uVar7 + uVar5 * 0x10;
  }
  puVar1 = (ushort *)(lVar2 + 6);
  *(ushort **)(this + 0x30) = puVar1;
  if (puVar1 == puVar3) {
    uVar5 = 0xffffffcf;
  }
  else {
    uVar5 = *puVar1 - 0x30;
    if (uVar5 < 10) {
      iVar6 = uVar5 + iVar6 * 0x10;
      goto LAB_0104792c;
    }
  }
  iVar4 = (uVar5 | 0x20) - 0x27;
  if (5 < (uVar5 | 0x20) - 0x31) {
    iVar4 = -1;
  }
  iVar6 = iVar4 + iVar6 * 0x10;
  if (iVar4 < 0) {
    return -1;
  }
LAB_0104792c:
  puVar1 = (ushort *)(lVar2 + 8);
  *(ushort **)(this + 0x30) = puVar1;
  if (puVar1 == puVar3) {
    uVar5 = 0xffffffcf;
  }
  else {
    uVar5 = *puVar1 - 0x30;
    if (uVar5 < 10) {
      return uVar5 + iVar6 * 0x10;
    }
  }
  iVar4 = (uVar5 | 0x20) - 0x27;
  if (5 < (uVar5 | 0x20) - 0x31) {
    iVar4 = -1;
  }
  if (iVar4 < 0) {
    return -1;
  }
  return iVar4 + iVar6 * 0x10;
}

