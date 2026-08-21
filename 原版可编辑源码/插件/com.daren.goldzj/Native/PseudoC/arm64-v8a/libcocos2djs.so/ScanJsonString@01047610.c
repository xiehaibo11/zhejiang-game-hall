
/* v8::internal::JsonParser<unsigned short>::ScanJsonString(bool) */

undefined1  [16] __thiscall
v8::internal::JsonParser<unsigned_short>::ScanJsonString
          (JsonParser<unsigned_short> *this,bool param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  puVar4 = *(ushort **)(this + 0x30);
  uVar8 = (long)puVar4 - *(long *)(this + 0x40);
  uVar11 = 0;
  uVar5 = 0;
  uVar10 = uVar8 >> 1;
  do {
    puVar7 = *(ushort **)(this + 0x38);
    if (puVar4 != puVar7) {
      do {
        uVar1 = *puVar4;
        if (uVar1 < 0x100) {
          if (((byte)(&DAT_019cc074)[uVar1] >> 3 & 1) != 0) break;
        }
        else {
          uVar11 = uVar11 | uVar1;
        }
        puVar4 = puVar4 + 1;
        if (puVar7 == puVar4) {
          *(ushort **)(this + 0x30) = puVar7;
          uVar3 = 0xd;
          goto LAB_0104772c;
        }
      } while( true );
    }
    *(ushort **)(this + 0x30) = puVar4;
    if (puVar4 == puVar7) {
LAB_010477f8:
      uVar3 = 0xd;
      goto LAB_0104772c;
    }
    uVar1 = *puVar4;
    iVar9 = (int)uVar10;
    if (uVar1 != 0x5c) {
      if (uVar1 == 0x22) {
        uVar2 = (int)((ulong)((long)puVar4 - *(long *)(this + 0x40)) >> 1) - iVar9;
        uVar6 = (ulong)uVar2 << 0x20;
        *(ushort **)(this + 0x30) = puVar4 + 1;
        uVar10 = 2;
        if (10 < (int)uVar2 && !param_1) {
          uVar10 = 0;
        }
        uVar10 = uVar5 | (int)uVar11 < 0x100 | uVar10;
        uVar5 = uVar8 >> 1 & 0xffffffff;
        goto LAB_01047740;
      }
      if (uVar1 < 0x100) {
        uVar3 = (&DAT_019cbf74)[uVar1];
        goto LAB_0104772c;
      }
LAB_010477f0:
      uVar3 = 0xc;
LAB_0104772c:
      ReportUnexpectedToken(this,uVar3);
      uVar5 = 0;
      uVar6 = 0;
      uVar10 = 0;
LAB_01047740:
      auVar13._0_8_ = uVar6 | uVar5;
      auVar13._8_8_ = uVar10;
      return auVar13;
    }
    puVar4 = puVar4 + 1;
    *(ushort **)(this + 0x30) = puVar4;
    if (puVar4 == puVar7) goto LAB_010477f8;
    uVar5 = (ulong)*puVar4;
    if (0xff < uVar5) goto LAB_010477f0;
    if (((byte)(&DAT_019cc074)[uVar5] & 7) - 1 < 6) {
      uVar2 = iVar9 + 1;
    }
    else {
      if (((&DAT_019cc074)[uVar5] & 7) == 0) {
        uVar3 = (&DAT_019cbf74)[uVar5];
        goto LAB_0104772c;
      }
      uVar2 = ScanUnicodeCharacter(this);
      if (uVar2 == 0xffffffff) {
        if (*(ushort **)(this + 0x30) == *(ushort **)(this + 0x38)) goto LAB_010477f8;
        uVar5 = (ulong)**(ushort **)(this + 0x30);
        if (uVar5 < 0x100) {
          uVar3 = (&DAT_019cbf74)[uVar5];
          goto LAB_0104772c;
        }
        goto LAB_010477f0;
      }
      puVar4 = *(ushort **)(this + 0x30);
      iVar12 = 4;
      if ((int)uVar2 < 0x10000) {
        iVar12 = 5;
      }
      uVar11 = uVar11 | uVar2;
      uVar2 = iVar12 + iVar9;
    }
    uVar10 = (ulong)uVar2;
    puVar4 = puVar4 + 1;
    *(ushort **)(this + 0x30) = puVar4;
    uVar5 = 4;
  } while( true );
}

