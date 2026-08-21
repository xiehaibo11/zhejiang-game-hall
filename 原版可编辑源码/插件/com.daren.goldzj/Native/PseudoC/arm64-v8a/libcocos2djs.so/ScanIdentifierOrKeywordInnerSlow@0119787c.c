
/* v8::internal::Scanner::ScanIdentifierOrKeywordInnerSlow(bool, bool) */

uint __thiscall
v8::internal::Scanner::ScanIdentifierOrKeywordInnerSlow(Scanner *this,bool param_1,bool param_2)

{
  LiteralBuffer *pLVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  
  do {
    while( true ) {
      uVar7 = *(uint *)(this + 0x20);
      if (uVar7 != 0x5c) break;
      plVar12 = *(long **)(this + 0x18);
      puVar9 = (ushort *)plVar12[2];
      if (puVar9 < (ushort *)plVar12[3]) {
LAB_01197a14:
        uVar5 = *puVar9;
        plVar12[2] = (long)(puVar9 + 1);
        *(uint *)(this + 0x20) = (uint)uVar5;
        if (uVar5 != 0x75) {
          uVar7 = 0xffffffff;
          goto LAB_01197a90;
        }
        plVar12 = *(long **)(this + 0x18);
        puVar9 = (ushort *)plVar12[2];
        if (puVar9 < (ushort *)plVar12[3]) {
LAB_01197a38:
          uVar7 = (uint)*puVar9;
        }
        else {
          if ((char)plVar12[6] == '\0') {
            uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
            puVar9 = (ushort *)plVar12[2];
            if ((uVar6 & 1) != 0) goto LAB_01197a38;
          }
          uVar7 = 0xffffffff;
        }
        plVar12[2] = (long)(puVar9 + 1);
        *(uint *)(this + 0x20) = uVar7;
        uVar7 = ScanUnicodeEscape<false>(this);
        if (uVar7 == 0x5c) {
          return 0x6d;
        }
        if (0x7f < uVar7) {
          if (0xffff < (int)uVar7) {
            return 0x6d;
          }
          goto LAB_01197a90;
        }
        if (((byte)(&DAT_019dc06d)[uVar7] >> 1 & 1) == 0) {
          return 0x6d;
        }
        if (param_2 == false) goto LAB_01197aa8;
        param_2 = ((&DAT_019dc0ed)[uVar7] & 2) == 0;
      }
      else {
        if ((char)plVar12[6] == '\0') {
          uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          puVar9 = (ushort *)plVar12[2];
          if ((uVar6 & 1) != 0) goto LAB_01197a14;
        }
        uVar7 = 0xffffffff;
        plVar12[2] = (long)(puVar9 + 1);
        *(undefined4 *)(this + 0x20) = 0xffffffff;
LAB_01197a90:
        uVar6 = unibrow::ID_Start::Is(uVar7);
        if (((uVar6 & 1) == 0) && (uVar6 = unibrow::ID_Continue::Is(uVar7), (uVar6 & 1) == 0)) {
          return 0x6d;
        }
LAB_01197aa8:
        param_2 = false;
      }
      lVar13 = *(long *)(this + 8);
      pLVar1 = (LiteralBuffer *)(lVar13 + 8);
      if (*(char *)(lVar13 + 0x1c) == '\0') {
LAB_01197b04:
        LiteralBuffer::AddTwoByteChar(pLVar1,uVar7);
        param_1 = true;
      }
      else {
        if (0xff < (int)uVar7) {
          LiteralBuffer::ConvertToTwoByte(pLVar1);
          goto LAB_01197b04;
        }
        iVar8 = *(int *)(lVar13 + 0x18);
        if (*(int *)(lVar13 + 0x10) <= iVar8) {
          LiteralBuffer::ExpandBuffer(pLVar1);
          iVar8 = *(int *)(lVar13 + 0x18);
        }
        *(char *)(*(long *)(lVar13 + 8) + (long)iVar8) = (char)uVar7;
        param_1 = true;
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
      }
    }
    if (0x7f < uVar7) {
      if ((int)uVar7 < 0x10000) {
        uVar6 = unibrow::ID_Start::Is(uVar7);
        if (((uVar6 & 1) != 0) || (uVar6 = unibrow::ID_Continue::Is(uVar7), (uVar6 & 1) != 0))
        goto LAB_01197958;
        uVar7 = *(uint *)(this + 0x20);
      }
LAB_01197900:
      if ((uVar7 & 0xfc00) != 0xd800) goto joined_r0x01197be8;
      plVar12 = *(long **)(this + 0x18);
      puVar9 = (ushort *)plVar12[2];
      if (puVar9 < (ushort *)plVar12[3]) {
LAB_0119791c:
        uVar5 = *puVar9;
        plVar12[2] = (long)(puVar9 + 1);
        if ((uVar5 & 0xfc00) == 0xdc00) {
          uVar6 = (ulong)(uint)(*(int *)(this + 0x20) << 10) & 0xffc00 | (ulong)uVar5 & 0x3ff;
          uVar7 = (int)uVar6 + 0x10000;
          *(uint *)(this + 0x20) = uVar7;
          if ((0x7f < uVar7) || (((byte)(&UNK_019ec06d)[uVar6] >> 1 & 1) == 0))
          goto joined_r0x01197be8;
          goto LAB_01197958;
        }
      }
      else {
        if ((char)plVar12[6] == '\0') {
          uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          puVar9 = (ushort *)plVar12[2];
          if ((uVar6 & 1) != 0) goto LAB_0119791c;
        }
        plVar12[2] = (long)(puVar9 + 1);
      }
      plVar12 = *(long **)(this + 0x18);
      uVar6 = plVar12[1];
      uVar2 = plVar12[2];
      if (uVar2 < uVar6 || uVar2 - uVar6 == 0) {
        plVar12[2] = uVar6;
        plVar12[4] = plVar12[4] + ((long)(uVar2 - uVar6) >> 1) + -1;
        if ((char)plVar12[6] == '\0') {
          (**(code **)(*plVar12 + 0x28))();
        }
      }
      else {
        plVar12[2] = uVar2 - 2;
      }
joined_r0x01197be8:
      if (((param_2 != false) && (lVar13 = *(long *)(this + 8), *(char *)(lVar13 + 0x1c) != '\0'))
         && (uVar7 = *(uint *)(lVar13 + 0x18), uVar7 - 2 < 9)) {
        pbVar10 = *(byte **)(lVar13 + 8);
        uVar6 = (ulong)(uVar7 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                      [pbVar10[1]] +
                       (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar10])
                & 0x3f;
        if (uVar7 == (byte)(&DAT_019dc1ed)[uVar6]) {
          pbVar11 = (&PTR_DAT_01cb57a0)[uVar6 * 2];
          do {
            bVar4 = *pbVar11;
            if (bVar4 == 0) {
              bVar4 = (&DAT_01cb57a8)[uVar6 * 0x10];
              if (bVar4 - 0x5c < 6) {
                return (uint)bVar4;
              }
              if ((0x8000510200200U >> uVar6 & 1) != 0) {
                if (param_1 == false) {
                  return (uint)bVar4;
                }
                return 0x65;
              }
              if (param_1 == false) {
                return (uint)bVar4;
              }
              if ((int)uVar6 != 0x25 && (int)uVar6 != 0x1d) {
                return 0x6e;
              }
              return 0x65;
            }
            bVar3 = *pbVar10;
            pbVar11 = pbVar11 + 1;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 == bVar3);
        }
      }
      return 0x5c;
    }
    if (((byte)(&DAT_019dc06d)[uVar7] >> 1 & 1) == 0) goto LAB_01197900;
LAB_01197958:
    uVar7 = *(uint *)(this + 0x20);
    if ((ulong)uVar7 < 0x80 && ((param_2 ^ 0xffU) & 1) == 0) {
      param_2 = ((&DAT_019dc0ed)[uVar7] & 2) == 0;
    }
    else {
      param_2 = false;
    }
    lVar13 = *(long *)(this + 8);
    pLVar1 = (LiteralBuffer *)(lVar13 + 8);
    if (*(char *)(lVar13 + 0x1c) == '\0') {
LAB_011979d4:
      LiteralBuffer::AddTwoByteChar(pLVar1,uVar7);
    }
    else {
      if (0xff < (int)uVar7) {
        LiteralBuffer::ConvertToTwoByte(pLVar1);
        goto LAB_011979d4;
      }
      iVar8 = *(int *)(lVar13 + 0x18);
      if (*(int *)(lVar13 + 0x10) <= iVar8) {
        LiteralBuffer::ExpandBuffer(pLVar1);
        iVar8 = *(int *)(lVar13 + 0x18);
      }
      *(char *)(*(long *)(lVar13 + 8) + (long)iVar8) = (char)uVar7;
      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
    }
    plVar12 = *(long **)(this + 0x18);
    puVar9 = (ushort *)plVar12[2];
    if (puVar9 < (ushort *)plVar12[3]) {
LAB_011979f0:
      uVar7 = (uint)*puVar9;
    }
    else {
      if ((char)plVar12[6] == '\0') {
        uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
        puVar9 = (ushort *)plVar12[2];
        if ((uVar6 & 1) != 0) goto LAB_011979f0;
      }
      uVar7 = 0xffffffff;
    }
    plVar12[2] = (long)(puVar9 + 1);
    *(uint *)(this + 0x20) = uVar7;
  } while( true );
}

