
/* v8::internal::JsonParser<unsigned char>::ScanUnicodeCharacter() */

int __thiscall
v8::internal::JsonParser<unsigned_char>::ScanUnicodeCharacter(JsonParser<unsigned_char> *this)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lVar2 = *(long *)(this + 0x30);
  pbVar3 = *(byte **)(this + 0x38);
  pbVar1 = (byte *)(lVar2 + 1);
  *(byte **)(this + 0x30) = pbVar1;
  if (pbVar1 == pbVar3) {
    uVar5 = 0xffffffcf;
LAB_01043e04:
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
    uVar5 = *pbVar1 - 0x30;
    if (9 < uVar5) goto LAB_01043e04;
  }
  pbVar1 = (byte *)(lVar2 + 2);
  *(byte **)(this + 0x30) = pbVar1;
  if (pbVar1 == pbVar3) {
    uVar7 = 0xffffffcf;
LAB_01043e54:
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
    uVar7 = *pbVar1 - 0x30;
    if (9 < uVar7) goto LAB_01043e54;
    iVar6 = uVar7 + uVar5 * 0x10;
  }
  pbVar1 = (byte *)(lVar2 + 3);
  *(byte **)(this + 0x30) = pbVar1;
  if (pbVar1 == pbVar3) {
    uVar5 = 0xffffffcf;
  }
  else {
    uVar5 = *pbVar1 - 0x30;
    if (uVar5 < 10) {
      iVar6 = uVar5 + iVar6 * 0x10;
      goto LAB_01043ec8;
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
LAB_01043ec8:
  pbVar1 = (byte *)(lVar2 + 4);
  *(byte **)(this + 0x30) = pbVar1;
  if (pbVar1 == pbVar3) {
    uVar5 = 0xffffffcf;
  }
  else {
    uVar5 = *pbVar1 - 0x30;
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

