
/* v8::internal::JsonParser<unsigned short>::ScanJsonPropertyKey(v8::internal::JsonParser<unsigned
   short>::JsonContinuation*) */

undefined1  [16] __thiscall
v8::internal::JsonParser<unsigned_short>::ScanJsonPropertyKey
          (JsonParser<unsigned_short> *this,JsonContinuation *param_1)

{
  short *psVar1;
  ushort *puVar2;
  long lVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = *(ushort **)(this + 0x30);
  if (*(ushort **)(this + 0x38) != puVar2) {
    uVar6 = (uint)*puVar2;
    if (*puVar2 == 0x5c) {
      puVar9 = puVar2 + 1;
      *(ushort **)(this + 0x30) = puVar9;
      if ((puVar9 == *(ushort **)(this + 0x38)) || (*puVar9 != 0x75)) goto LAB_01047af0;
      uVar6 = ScanUnicodeCharacter(this);
    }
    uVar5 = uVar6 - 0x30;
    if (uVar5 < 10) {
      if (uVar6 == 0x30) {
        lVar3 = *(long *)(this + 0x30);
        psVar1 = (short *)(lVar3 + 2);
        *(short **)(this + 0x30) = psVar1;
        if ((psVar1 != *(short **)(this + 0x38)) && (*psVar1 == 0x22)) {
          *(long *)(this + 0x30) = lVar3 + 4;
          uVar12 = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_01047a34:
          uVar11 = 0;
          uVar10 = 0;
          uVar8 = 8;
          goto LAB_01047b10;
        }
      }
      else {
        while( true ) {
          uVar12 = (ulong)uVar5;
          puVar4 = *(ushort **)(this + 0x38);
          puVar9 = (ushort *)(*(long *)(this + 0x30) + 2);
          if (puVar9 != puVar4) {
            while( true ) {
              uVar6 = *puVar9 - 0x30;
              if ((9 < uVar6) || (0x19999999U - ((int)(*puVar9 - 0x2d) >> 3) < (uint)uVar12)) break;
              puVar9 = puVar9 + 1;
              uVar12 = (ulong)(uVar6 + (uint)uVar12 * 10);
              if (puVar4 == puVar9) {
                *(ushort **)(this + 0x30) = puVar4;
                goto LAB_01047af0;
              }
            }
          }
          *(ushort **)(this + 0x30) = puVar9;
          if (puVar9 == puVar4) goto LAB_01047af0;
          uVar6 = (uint)uVar12;
          if (*puVar9 != 0x5c) break;
          puVar9 = puVar9 + 1;
          *(ushort **)(this + 0x30) = puVar9;
          if ((puVar9 == puVar4) || (*puVar9 != 0x75)) goto LAB_01047af0;
          iVar7 = ScanUnicodeCharacter(this);
          if ((9 < iVar7 - 0x30U) || (0x19999999U - (iVar7 + -0x2d >> 3) < uVar6))
          goto LAB_01047af0;
          uVar5 = (iVar7 - 0x30U) + uVar6 * 10;
        }
        if (*puVar9 == 0x22) {
          *(ushort **)(this + 0x30) = puVar9 + 1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          if (uVar6 <= *(uint *)(param_1 + 0x1c)) {
            uVar6 = *(uint *)(param_1 + 0x1c);
          }
          *(uint *)(param_1 + 0x1c) = uVar6;
          goto LAB_01047a34;
        }
      }
    }
  }
LAB_01047af0:
  *(ushort **)(this + 0x30) = puVar2;
  auVar13 = ScanJsonString(this,true);
  uVar12 = auVar13._0_8_;
  uVar10 = uVar12 & 0xffffffff00000000;
  uVar11 = auVar13._8_8_ & 0xffffff00;
  uVar8 = auVar13._8_8_ & 0xff;
LAB_01047b10:
  auVar13._0_8_ = uVar10 | uVar12 & 0xffffffff;
  auVar13._8_8_ = uVar11 | uVar8;
  return auVar13;
}

