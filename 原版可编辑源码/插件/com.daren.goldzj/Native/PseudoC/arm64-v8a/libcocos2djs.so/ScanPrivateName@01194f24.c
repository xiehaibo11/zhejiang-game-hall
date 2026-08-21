
/* v8::internal::Scanner::ScanPrivateName() */

undefined8 __thiscall v8::internal::Scanner::ScanPrivateName(Scanner *this)

{
  LiteralBuffer *pLVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  ushort *puVar18;
  byte *pbVar19;
  long *plVar20;
  ushort *puVar21;
  
  lVar16 = *(long *)(this + 8);
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(undefined1 *)(lVar16 + 0x1c) = 1;
  plVar20 = *(long **)(this + 0x18);
  puVar18 = (ushort *)plVar20[2];
  if (puVar18 < (ushort *)plVar20[3]) {
LAB_01194f60:
    uVar7 = *puVar18;
    uVar10 = (uint)uVar7;
    if (0x7f < uVar7) goto LAB_01195214;
    if (((&DAT_019dc06d)[uVar7] & 1) == 0) goto LAB_0119521c;
  }
  else {
    if (((char)plVar20[6] == '\0') &&
       (uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20), (uVar11 & 1) != 0)) {
      puVar18 = (ushort *)plVar20[2];
      goto LAB_01194f60;
    }
    uVar10 = 0xffffffff;
LAB_01195214:
    uVar11 = unibrow::ID_Start::Is(uVar10);
    if ((uVar11 & 1) == 0) {
LAB_0119521c:
      if (*(int *)(this + 0x15c) != 0) {
        return 0x6d;
      }
      lVar16 = *(long *)(this + 0x18);
      lVar2 = *(long *)(lVar16 + 8);
      lVar4 = *(long *)(lVar16 + 0x10);
      lVar16 = *(long *)(lVar16 + 0x20);
      *(undefined4 *)(this + 0x15c) = 0x102;
      lVar16 = lVar16 + ((ulong)(lVar4 - lVar2) >> 1);
      *(ulong *)(this + 0x160) = (ulong)((int)lVar16 - 1) | lVar16 << 0x20;
      return 0x6d;
    }
  }
  lVar16 = *(long *)(this + 8);
  iVar14 = *(int *)(this + 0x20);
  pLVar1 = (LiteralBuffer *)(lVar16 + 8);
  if (*(char *)(lVar16 + 0x1c) == '\0') {
LAB_01194fd4:
    LiteralBuffer::AddTwoByteChar(pLVar1,iVar14);
  }
  else {
    if (0xff < iVar14) {
      LiteralBuffer::ConvertToTwoByte(pLVar1);
      goto LAB_01194fd4;
    }
    iVar13 = *(int *)(lVar16 + 0x18);
    if (*(int *)(lVar16 + 0x10) <= iVar13) {
      LiteralBuffer::ExpandBuffer(pLVar1);
      iVar13 = *(int *)(lVar16 + 0x18);
    }
    *(char *)(*(long *)(lVar16 + 8) + (long)iVar13) = (char)iVar14;
    *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
  }
  plVar20 = *(long **)(this + 0x18);
  puVar18 = (ushort *)plVar20[2];
  if (puVar18 < (ushort *)plVar20[3]) {
LAB_01194ff0:
    uVar7 = *puVar18;
    plVar20[2] = (long)(puVar18 + 1);
    *(uint *)(this + 0x20) = (uint)uVar7;
    if (uVar7 < 0x80) {
      if (uVar7 == 0x5c) {
        plVar20 = *(long **)(this + 0x18);
        puVar18 = (ushort *)plVar20[2];
        if (puVar18 < (ushort *)plVar20[3]) {
LAB_011952c8:
          uVar7 = *puVar18;
          plVar20[2] = (long)(puVar18 + 1);
          *(uint *)(this + 0x20) = (uint)uVar7;
          if (uVar7 != 0x75) {
            uVar10 = 0xffffffff;
            goto LAB_01195334;
          }
          plVar20 = *(long **)(this + 0x18);
          puVar18 = (ushort *)plVar20[2];
          if (puVar18 < (ushort *)plVar20[3]) {
LAB_011952ec:
            uVar10 = (uint)*puVar18;
          }
          else {
            if ((char)plVar20[6] == '\0') {
              uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20);
              puVar18 = (ushort *)plVar20[2];
              if ((uVar11 & 1) != 0) goto LAB_011952ec;
            }
            uVar10 = 0xffffffff;
          }
          plVar20[2] = (long)(puVar18 + 1);
          *(uint *)(this + 0x20) = uVar10;
          uVar10 = ScanUnicodeEscape<false>(this);
          if (uVar10 == 0x5c) {
            return 0x6d;
          }
          if (0x7f < uVar10) {
            if (0xffff < (int)uVar10) {
              return 0x6d;
            }
            goto LAB_01195334;
          }
          if (((&DAT_019dc06d)[uVar10] & 1) == 0) {
            return 0x6d;
          }
          bVar12 = true;
        }
        else {
          if ((char)plVar20[6] == '\0') {
            uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20);
            puVar18 = (ushort *)plVar20[2];
            if ((uVar11 & 1) != 0) goto LAB_011952c8;
          }
          uVar10 = 0xffffffff;
          plVar20[2] = (long)(puVar18 + 1);
          *(undefined4 *)(this + 0x20) = 0xffffffff;
LAB_01195334:
          uVar11 = unibrow::ID_Start::Is(uVar10);
          if ((uVar11 & 1) == 0) {
            return 0x6d;
          }
          bVar12 = false;
        }
        lVar16 = *(long *)(this + 8);
        pLVar1 = (LiteralBuffer *)(lVar16 + 8);
        if (*(char *)(lVar16 + 0x1c) == '\0') {
LAB_011953ac:
          LiteralBuffer::AddTwoByteChar(pLVar1,uVar10);
          if (!bVar12) goto LAB_01195390;
LAB_011953bc:
          bVar8 = ((&DAT_019dc0ed)[uVar10] & 2) == 0;
        }
        else {
          if (0xff < (int)uVar10) {
            LiteralBuffer::ConvertToTwoByte(pLVar1);
            goto LAB_011953ac;
          }
          iVar14 = *(int *)(lVar16 + 0x18);
          if (*(int *)(lVar16 + 0x10) <= iVar14) {
            LiteralBuffer::ExpandBuffer(pLVar1);
            iVar14 = *(int *)(lVar16 + 0x18);
          }
          *(char *)(*(long *)(lVar16 + 8) + (long)iVar14) = (char)uVar10;
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
          if (bVar12) goto LAB_011953bc;
LAB_01195390:
          bVar8 = false;
        }
        bVar12 = true;
      }
      else {
        lVar16 = *(long *)(this + 8);
        iVar14 = *(int *)(lVar16 + 0x18);
        uVar10 = (uint)((byte)(&DAT_019dc0ed)[uVar7] >> 1);
        if (*(int *)(lVar16 + 0x10) <= iVar14) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar16 + 8));
          iVar14 = *(int *)(lVar16 + 0x18);
        }
        *(char *)(*(long *)(lVar16 + 8) + (long)iVar14) = (char)uVar7;
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
        plVar20 = *(long **)(this + 0x18);
        do {
          puVar3 = (ushort *)plVar20[3];
          puVar18 = (ushort *)plVar20[2];
          puVar21 = puVar18;
          for (; puVar18 != puVar3; puVar18 = puVar18 + 1) {
            uVar7 = *puVar18;
            puVar21 = puVar18;
            if (0x7f < (ulong)uVar7) {
              uVar10 = uVar10 | 0x10;
              break;
            }
            uVar10 = (byte)(&DAT_019dc0ed)[uVar7] | uVar10;
            if (((&DAT_019dc0ed)[uVar7] & 1) != 0) break;
            lVar16 = *(long *)(this + 8);
            iVar14 = *(int *)(lVar16 + 0x18);
            if (*(int *)(lVar16 + 0x10) <= iVar14) {
              LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar16 + 8));
              iVar14 = *(int *)(lVar16 + 0x18);
            }
            *(char *)(*(long *)(lVar16 + 8) + (long)iVar14) = (char)uVar7;
            *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
            puVar21 = puVar3;
          }
          if (puVar21 != (ushort *)plVar20[3]) {
            plVar20[2] = (long)(puVar21 + 1);
            uVar15 = (uint)*puVar21;
            goto LAB_0119511c;
          }
          plVar20[2] = (long)puVar21;
          if ((char)plVar20[6] != '\0') goto LAB_01195110;
          uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20);
        } while ((uVar11 & 1) != 0);
        puVar21 = (ushort *)plVar20[2];
LAB_01195110:
        plVar20[2] = (long)(puVar21 + 1);
        uVar15 = 0xffffffff;
LAB_0119511c:
        *(uint *)(this + 0x20) = uVar15;
        if ((uVar10 & 0x12) == 0) {
          uVar10 = *(uint *)(*(long *)(this + 8) + 0x18);
          if (8 < uVar10 - 2) {
            return 0x6c;
          }
          pbVar17 = *(byte **)(*(long *)(this + 8) + 8);
          uVar11 = (ulong)(uVar10 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                          [pbVar17[1]] +
                          (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                      [*pbVar17]) & 0x3f;
          if (uVar10 != (byte)(&DAT_019dc1ed)[uVar11]) {
            return 0x6c;
          }
          pbVar19 = (&PTR_DAT_01cb57a0)[uVar11 * 2];
          while (bVar6 = *pbVar19, bVar6 != 0) {
            bVar5 = *pbVar17;
            pbVar19 = pbVar19 + 1;
            pbVar17 = pbVar17 + 1;
            if (bVar6 != bVar5) {
              return 0x6c;
            }
          }
          cVar9 = (&DAT_01cb57a8)[uVar11 * 0x10];
          goto LAB_011951d8;
        }
        if ((uVar10 >> 4 & 1) == 0) {
          return 0x6c;
        }
        bVar12 = false;
        bVar8 = (uVar10 & 2) == 0 || (uVar10 & 0x10) == 0;
      }
    }
    else {
      bVar12 = false;
      bVar8 = true;
    }
  }
  else {
    if ((char)plVar20[6] == '\0') {
      uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20);
      puVar18 = (ushort *)plVar20[2];
      if ((uVar11 & 1) != 0) goto LAB_01194ff0;
    }
    bVar12 = false;
    plVar20[2] = (long)(puVar18 + 1);
    *(undefined4 *)(this + 0x20) = 0xffffffff;
    bVar8 = true;
  }
  cVar9 = ScanIdentifierOrKeywordInnerSlow(this,bVar12,bVar8);
LAB_011951d8:
  if (cVar9 == 'm') {
    return 0x6d;
  }
  return 0x6c;
}

