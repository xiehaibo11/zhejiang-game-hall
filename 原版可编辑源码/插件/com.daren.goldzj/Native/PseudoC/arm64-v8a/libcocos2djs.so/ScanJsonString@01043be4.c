
/* v8::internal::JsonParser<unsigned char>::ScanJsonString(bool) */

undefined1  [16] __thiscall
v8::internal::JsonParser<unsigned_char>::ScanJsonString
          (JsonParser<unsigned_char> *this,bool param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  pbVar4 = *(byte **)(this + 0x30);
  uVar8 = (long)pbVar4 - *(long *)(this + 0x40);
  uVar9 = 0;
  uVar5 = 0;
  uVar11 = uVar8 & 0xffffffff;
  do {
    pbVar7 = *(byte **)(this + 0x38);
    if (pbVar4 != pbVar7) {
      while (((byte)(&DAT_019cc074)[*pbVar4] >> 3 & 1) == 0) {
        pbVar4 = pbVar4 + 1;
        if (pbVar7 == pbVar4) {
          *(byte **)(this + 0x30) = pbVar7;
          uVar3 = 0xd;
          goto LAB_01043ce8;
        }
      }
    }
    *(byte **)(this + 0x30) = pbVar4;
    if (pbVar4 == pbVar7) goto LAB_01043d98;
    bVar1 = *pbVar4;
    iVar10 = (int)uVar11;
    if (bVar1 != 0x5c) {
      if (bVar1 != 0x22) {
        uVar3 = (&DAT_019cbf74)[bVar1];
        goto LAB_01043ce8;
      }
      uVar2 = ((int)pbVar4 - *(int *)(this + 0x40)) - iVar10;
      uVar6 = (ulong)uVar2 << 0x20;
      *(byte **)(this + 0x30) = pbVar4 + 1;
      uVar11 = 2;
      if (10 < (int)uVar2 && !param_1) {
        uVar11 = 0;
      }
      uVar11 = uVar5 | 0xff < (int)uVar9 | uVar11;
      uVar8 = uVar8 & 0xffffffff;
      goto LAB_01043cfc;
    }
    pbVar4 = pbVar4 + 1;
    *(byte **)(this + 0x30) = pbVar4;
    if (pbVar4 == pbVar7) goto LAB_01043d98;
    if (((byte)(&DAT_019cc074)[*pbVar4] & 7) - 1 < 6) {
      uVar2 = iVar10 + 1;
    }
    else {
      if (((&DAT_019cc074)[*pbVar4] & 7) == 0) {
        uVar3 = (&DAT_019cbf74)[*pbVar4];
        goto LAB_01043ce8;
      }
      uVar2 = ScanUnicodeCharacter(this);
      if (uVar2 == 0xffffffff) {
        if (*(byte **)(this + 0x30) != *(byte **)(this + 0x38)) {
          uVar3 = (&DAT_019cbf74)[**(byte **)(this + 0x30)];
          goto LAB_01043ce8;
        }
LAB_01043d98:
        uVar3 = 0xd;
LAB_01043ce8:
        ReportUnexpectedToken(this,uVar3);
        uVar8 = 0;
        uVar6 = 0;
        uVar11 = 0;
LAB_01043cfc:
        auVar13._0_8_ = uVar6 | uVar8;
        auVar13._8_8_ = uVar11;
        return auVar13;
      }
      pbVar4 = *(byte **)(this + 0x30);
      iVar12 = 4;
      if ((int)uVar2 < 0x10000) {
        iVar12 = 5;
      }
      uVar9 = uVar9 | uVar2;
      uVar2 = iVar12 + iVar10;
    }
    uVar11 = (ulong)uVar2;
    pbVar4 = pbVar4 + 1;
    *(byte **)(this + 0x30) = pbVar4;
    uVar5 = 4;
  } while( true );
}

