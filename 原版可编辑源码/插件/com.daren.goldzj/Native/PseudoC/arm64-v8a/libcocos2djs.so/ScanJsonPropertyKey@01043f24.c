
/* v8::internal::JsonParser<unsigned char>::ScanJsonPropertyKey(v8::internal::JsonParser<unsigned
   char>::JsonContinuation*) */

undefined1  [16] __thiscall
v8::internal::JsonParser<unsigned_char>::ScanJsonPropertyKey
          (JsonParser<unsigned_char> *this,JsonContinuation *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  pbVar2 = *(byte **)(this + 0x30);
  if (*(byte **)(this + 0x38) != pbVar2) {
    uVar6 = (uint)*pbVar2;
    if (*pbVar2 == 0x5c) {
      pbVar9 = pbVar2 + 1;
      *(byte **)(this + 0x30) = pbVar9;
      if ((pbVar9 == *(byte **)(this + 0x38)) || (*pbVar9 != 0x75)) goto LAB_0104408c;
      uVar6 = ScanUnicodeCharacter(this);
    }
    uVar5 = uVar6 - 0x30;
    if (uVar5 < 10) {
      if (uVar6 == 0x30) {
        lVar3 = *(long *)(this + 0x30);
        pcVar1 = (char *)(lVar3 + 1);
        *(char **)(this + 0x30) = pcVar1;
        if ((pcVar1 != *(char **)(this + 0x38)) && (*pcVar1 == '\"')) {
          *(long *)(this + 0x30) = lVar3 + 2;
          uVar12 = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_01043fd0:
          uVar11 = 0;
          uVar10 = 0;
          uVar8 = 8;
          goto LAB_010440ac;
        }
      }
      else {
        while( true ) {
          uVar12 = (ulong)uVar5;
          pbVar4 = *(byte **)(this + 0x38);
          pbVar9 = (byte *)(*(long *)(this + 0x30) + 1);
          if (pbVar9 != pbVar4) {
            while( true ) {
              uVar6 = *pbVar9 - 0x30;
              if ((9 < uVar6) || (0x19999999U - ((int)(*pbVar9 - 0x2d) >> 3) < (uint)uVar12)) break;
              pbVar9 = pbVar9 + 1;
              uVar12 = (ulong)(uVar6 + (uint)uVar12 * 10);
              if (pbVar4 == pbVar9) {
                *(byte **)(this + 0x30) = pbVar4;
                goto LAB_0104408c;
              }
            }
          }
          *(byte **)(this + 0x30) = pbVar9;
          if (pbVar9 == pbVar4) goto LAB_0104408c;
          uVar6 = (uint)uVar12;
          if (*pbVar9 != 0x5c) break;
          pbVar9 = pbVar9 + 1;
          *(byte **)(this + 0x30) = pbVar9;
          if ((pbVar9 == pbVar4) || (*pbVar9 != 0x75)) goto LAB_0104408c;
          iVar7 = ScanUnicodeCharacter(this);
          if ((9 < iVar7 - 0x30U) || (0x19999999U - (iVar7 + -0x2d >> 3) < uVar6))
          goto LAB_0104408c;
          uVar5 = (iVar7 - 0x30U) + uVar6 * 10;
        }
        if (*pbVar9 == 0x22) {
          *(byte **)(this + 0x30) = pbVar9 + 1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          if (uVar6 <= *(uint *)(param_1 + 0x1c)) {
            uVar6 = *(uint *)(param_1 + 0x1c);
          }
          *(uint *)(param_1 + 0x1c) = uVar6;
          goto LAB_01043fd0;
        }
      }
    }
  }
LAB_0104408c:
  *(byte **)(this + 0x30) = pbVar2;
  auVar13 = ScanJsonString(this,true);
  uVar12 = auVar13._0_8_;
  uVar10 = uVar12 & 0xffffffff00000000;
  uVar11 = auVar13._8_8_ & 0xffffff00;
  uVar8 = auVar13._8_8_ & 0xff;
LAB_010440ac:
  auVar13._0_8_ = uVar10 | uVar12 & 0xffffffff;
  auVar13._8_8_ = uVar11 | uVar8;
  return auVar13;
}

