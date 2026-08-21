
/* v8::internal::Scanner::ScanNumber(bool) */

undefined8 __thiscall v8::internal::Scanner::ScanNumber(Scanner *this,bool param_1)

{
  LiteralBuffer *pLVar1;
  long lVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  Scanner *pSVar18;
  uint uVar19;
  ulong local_60;
  uint local_54;
  
  local_54 = 4;
  lVar11 = *(long *)(this + 8);
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(undefined1 *)(lVar11 + 0x1c) = 1;
  lVar11 = *(long *)(this + 0x18);
  iVar10 = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
           *(int *)(lVar11 + 0x20);
  iVar5 = iVar10 + -1;
  if (param_1) {
    lVar11 = *(long *)(this + 8);
    iVar10 = *(int *)(lVar11 + 0x18);
    if (*(int *)(lVar11 + 0x10) <= iVar10) {
      LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
      iVar10 = *(int *)(lVar11 + 0x18);
    }
    *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar10) = 0x2e;
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
    if (*(int *)(this + 0x20) == 0x5f) {
      return 0x6d;
    }
    uVar8 = ScanDecimalDigits(this,true);
    if ((uVar8 & 1) == 0) {
      return 0x6d;
    }
    uVar19 = 4;
LAB_01196c8c:
    uVar17 = *(uint *)(this + 0x20);
LAB_011970bc:
    if ((uVar17 | 0x20) == 0x65) {
      if ((uVar19 & 0xfffffffe) != 4) {
        return 0x6d;
      }
      lVar11 = *(long *)(this + 8);
      pLVar1 = (LiteralBuffer *)(lVar11 + 8);
      if (*(char *)(lVar11 + 0x1c) == '\0') {
LAB_011971d0:
        LiteralBuffer::AddTwoByteChar(pLVar1,uVar17);
      }
      else {
        if (0xff < (int)uVar17) {
          LiteralBuffer::ConvertToTwoByte(pLVar1);
          goto LAB_011971d0;
        }
        iVar10 = *(int *)(lVar11 + 0x18);
        if (*(int *)(lVar11 + 0x10) <= iVar10) {
          LiteralBuffer::ExpandBuffer(pLVar1);
          iVar10 = *(int *)(lVar11 + 0x18);
        }
        *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar17;
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      }
      plVar15 = *(long **)(this + 0x18);
      puVar13 = (ushort *)plVar15[2];
      if (puVar13 < (ushort *)plVar15[3]) {
LAB_011971ec:
        uVar17 = (uint)*puVar13;
      }
      else {
        if ((char)plVar15[6] == '\0') {
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
          puVar13 = (ushort *)plVar15[2];
          if ((uVar8 & 1) != 0) goto LAB_011971ec;
        }
        uVar17 = 0xffffffff;
      }
      plVar15[2] = (long)(puVar13 + 1);
      *(uint *)(this + 0x20) = uVar17;
      uVar8 = ScanSignedInteger(this);
      if ((uVar8 & 1) == 0) {
        return 0x6d;
      }
      uVar17 = *(uint *)(this + 0x20);
    }
    uVar16 = 0x57;
LAB_01197210:
    if (uVar17 - 0x30 < 10) {
      return 0x6d;
    }
    if (0x7f < uVar17) {
      if (((int)uVar17 < 0x10000) && (uVar8 = unibrow::ID_Start::Is(uVar17), (uVar8 & 1) != 0)) {
        return 0x6d;
      }
      goto LAB_0119724c;
    }
  }
  else {
    pSVar18 = this + 0x20;
    if (*(uint *)pSVar18 == 0x30) {
      lVar11 = *(long *)(this + 8);
      if (*(char *)(lVar11 + 0x1c) == '\0') {
        LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar11 + 8),0x30);
      }
      else {
        iVar14 = *(int *)(lVar11 + 0x18);
        if (*(int *)(lVar11 + 0x10) <= iVar14) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
          iVar14 = *(int *)(lVar11 + 0x18);
        }
        *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar14) = 0x30;
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      }
      plVar15 = *(long **)(this + 0x18);
      puVar13 = (ushort *)plVar15[2];
      if ((ushort *)plVar15[3] <= puVar13) {
        if ((char)plVar15[6] == '\0') {
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
          puVar13 = (ushort *)plVar15[2];
          if ((uVar8 & 1) != 0) goto LAB_01196d04;
        }
        plVar15[2] = (long)(puVar13 + 1);
        *(uint *)pSVar18 = 0xffffffff;
        goto LAB_01196fa0;
      }
LAB_01196d04:
      uVar3 = *puVar13;
      plVar15[2] = (long)(puVar13 + 1);
      uVar17 = uVar3 | 0x20;
      *(uint *)pSVar18 = (uint)uVar3;
      uVar4 = (undefined1)uVar3;
      if (uVar17 != 0x62) {
        if (uVar17 == 0x6f) {
          lVar11 = *(long *)(this + 8);
          pLVar1 = (LiteralBuffer *)(lVar11 + 8);
          if (*(char *)(lVar11 + 0x1c) == '\0') {
LAB_01196f14:
            LiteralBuffer::AddTwoByteChar(pLVar1,(uint)uVar3);
          }
          else {
            if (0xff < uVar3) {
              LiteralBuffer::ConvertToTwoByte(pLVar1);
              goto LAB_01196f14;
            }
            iVar14 = *(int *)(lVar11 + 0x18);
            if (*(int *)(lVar11 + 0x10) <= iVar14) {
              LiteralBuffer::ExpandBuffer(pLVar1);
              iVar14 = *(int *)(lVar11 + 0x18);
            }
            *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar14) = uVar4;
            *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          }
          plVar15 = *(long **)(this + 0x18);
          puVar13 = (ushort *)plVar15[2];
          if (puVar13 < (ushort *)plVar15[3]) {
LAB_01196f30:
            uVar17 = (uint)*puVar13;
          }
          else {
            if ((char)plVar15[6] == '\0') {
              uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
              puVar13 = (ushort *)plVar15[2];
              if ((uVar8 & 1) != 0) goto LAB_01196f30;
            }
            uVar17 = 0xffffffff;
          }
          uVar19 = 2;
          plVar15[2] = (long)(puVar13 + 1);
          *(uint *)(this + 0x20) = uVar17;
          local_54 = 2;
          uVar8 = ScanOctalDigits(this);
          goto joined_r0x01196f50;
        }
        if (uVar17 == 0x78) {
          lVar11 = *(long *)(this + 8);
          pLVar1 = (LiteralBuffer *)(lVar11 + 8);
          if (*(char *)(lVar11 + 0x1c) == '\0') {
LAB_01196e7c:
            LiteralBuffer::AddTwoByteChar(pLVar1,(uint)uVar3);
          }
          else {
            if (0xff < uVar3) {
              LiteralBuffer::ConvertToTwoByte(pLVar1);
              goto LAB_01196e7c;
            }
            iVar14 = *(int *)(lVar11 + 0x18);
            if (*(int *)(lVar11 + 0x10) <= iVar14) {
              LiteralBuffer::ExpandBuffer(pLVar1);
              iVar14 = *(int *)(lVar11 + 0x18);
            }
            *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar14) = uVar4;
            *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          }
          plVar15 = *(long **)(this + 0x18);
          puVar13 = (ushort *)plVar15[2];
          if (puVar13 < (ushort *)plVar15[3]) {
LAB_01196e98:
            uVar17 = (uint)*puVar13;
          }
          else {
            if ((char)plVar15[6] == '\0') {
              uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
              puVar13 = (ushort *)plVar15[2];
              if ((uVar8 & 1) != 0) goto LAB_01196e98;
            }
            uVar17 = 0xffffffff;
          }
          uVar19 = 3;
          plVar15[2] = (long)(puVar13 + 1);
          *(uint *)(this + 0x20) = uVar17;
          local_54 = 3;
          uVar8 = ScanHexDigits(this);
          goto joined_r0x01196f50;
        }
        if ((uVar3 & 0xfff8) != 0x30) {
          if ((uVar3 & 0xfffe) != 0x38) {
            if (uVar3 == 0x5f) {
              if (*(int *)(this + 0x15c) != 0) {
                return 0x6d;
              }
              lVar11 = *(long *)(this + 0x18);
              lVar2 = *(long *)(lVar11 + 8);
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar11 = *(long *)(lVar11 + 0x20);
              *(undefined4 *)(this + 0x15c) = 0xd4;
              lVar11 = lVar11 + ((ulong)(lVar12 - lVar2) >> 1);
              *(ulong *)(this + 0x160) = (ulong)((int)lVar11 - 1) | lVar11 << 0x20;
              return 0x6d;
            }
            goto LAB_01196fa0;
          }
          uVar19 = 5;
          bVar7 = false;
          local_54 = 5;
          goto LAB_01196fa4;
        }
        local_54 = 0;
        ScanImplicitOctalDigits(this,iVar5,(NumberKind *)&local_54);
        uVar19 = local_54;
        if ((local_54 & 0xfffffffe) != 4) goto LAB_01196f54;
        bVar7 = local_54 != 5;
        if (bVar7) goto LAB_01196fa4;
        goto LAB_01196fe4;
      }
      lVar11 = *(long *)(this + 8);
      pLVar1 = (LiteralBuffer *)(lVar11 + 8);
      if (*(char *)(lVar11 + 0x1c) == '\0') {
LAB_01196ec8:
        LiteralBuffer::AddTwoByteChar(pLVar1,(uint)uVar3);
      }
      else {
        if (0xff < uVar3) {
          LiteralBuffer::ConvertToTwoByte(pLVar1);
          goto LAB_01196ec8;
        }
        iVar14 = *(int *)(lVar11 + 0x18);
        if (*(int *)(lVar11 + 0x10) <= iVar14) {
          LiteralBuffer::ExpandBuffer(pLVar1);
          iVar14 = *(int *)(lVar11 + 0x18);
        }
        *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar14) = uVar4;
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      }
      plVar15 = *(long **)(this + 0x18);
      puVar13 = (ushort *)plVar15[2];
      if (puVar13 < (ushort *)plVar15[3]) {
LAB_01196ee4:
        uVar17 = (uint)*puVar13;
      }
      else {
        if ((char)plVar15[6] == '\0') {
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
          puVar13 = (ushort *)plVar15[2];
          if ((uVar8 & 1) != 0) goto LAB_01196ee4;
        }
        uVar17 = 0xffffffff;
      }
      uVar19 = 1;
      plVar15[2] = (long)(puVar13 + 1);
      *(uint *)(this + 0x20) = uVar17;
      local_54 = 1;
      uVar8 = ScanBinaryDigits(this);
joined_r0x01196f50:
      if ((uVar8 & 1) == 0) {
        return 0x6d;
      }
LAB_01196f54:
      uVar17 = *(uint *)pSVar18;
    }
    else {
LAB_01196fa0:
      uVar19 = 4;
      bVar7 = true;
LAB_01196fa4:
      local_60 = 0;
      uVar9 = ScanDecimalAsSmi(this,&local_60,bVar7);
      uVar8 = local_60;
      if ((uVar9 & 1) == 0) {
        return 0x6d;
      }
      lVar11 = *(long *)(this + 8);
      if ((*(int *)(lVar11 + 0x18) < 0xb) && (local_60 >> 0x1e == 0)) {
        uVar17 = *(uint *)pSVar18;
        if (uVar17 != 0x2e) {
          if (uVar17 < 0x80) {
            if (((&DAT_019dc06d)[uVar17] & 1) == 0) goto LAB_01197180;
          }
          else {
            if (0xffff < (int)uVar17) {
LAB_01197180:
              *(int *)(lVar11 + 0x48) = (int)uVar8;
              if (uVar19 != 5) {
                return 0x58;
              }
              lVar12 = *(long *)(this + 0x18);
              lVar11 = *(long *)(lVar12 + 8);
              lVar2 = *(long *)(lVar12 + 0x10);
              iVar10 = *(int *)(lVar12 + 0x20);
              *(undefined4 *)(this + 0x158) = 299;
              *(long *)(this + 0x150) =
                   CONCAT44((int)((ulong)(lVar2 - lVar11) >> 1) + iVar10,iVar5) + -0x100000000;
              return 0x58;
            }
            uVar9 = unibrow::ID_Start::Is(uVar17);
            if ((uVar9 & 1) == 0) {
              lVar11 = *(long *)(this + 8);
              goto LAB_01197180;
            }
          }
        }
      }
LAB_01196fe4:
      uVar8 = ScanDecimalDigits(this,bVar7);
      if ((uVar8 & 1) == 0) {
        return 0x6d;
      }
      uVar17 = *(uint *)pSVar18;
      if (uVar17 == 0x2e) {
        lVar11 = *(long *)(this + 8);
        if (*(char *)(lVar11 + 0x1c) == '\0') {
          LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar11 + 8),0x2e);
        }
        else {
          iVar10 = *(int *)(lVar11 + 0x18);
          if (*(int *)(lVar11 + 0x10) <= iVar10) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
            iVar10 = *(int *)(lVar11 + 0x18);
          }
          *(undefined1 *)(*(long *)(lVar11 + 8) + (long)iVar10) = 0x2e;
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
        }
        plVar15 = *(long **)(this + 0x18);
        puVar13 = (ushort *)plVar15[2];
        if (puVar13 < (ushort *)plVar15[3]) {
LAB_011972a4:
          uVar3 = *puVar13;
          plVar15[2] = (long)(puVar13 + 1);
          *(uint *)pSVar18 = (uint)uVar3;
          if (uVar3 == 0x5f) {
            return 0x6d;
          }
        }
        else {
          if ((char)plVar15[6] == '\0') {
            uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
            puVar13 = (ushort *)plVar15[2];
            if ((uVar8 & 1) != 0) goto LAB_011972a4;
          }
          plVar15[2] = (long)(puVar13 + 1);
          *(uint *)pSVar18 = 0xffffffff;
        }
        uVar8 = ScanDecimalDigits(this,true);
        if ((uVar8 & 1) == 0) {
          return 0x6d;
        }
        goto LAB_01196c8c;
      }
    }
    if (uVar17 != 0x6e) goto LAB_011970bc;
    if (uVar19 - 1 < 4) {
      plVar15 = *(long **)(this + 0x18);
      iVar14 = 0;
      if (uVar19 != 4) {
        iVar14 = -2;
      }
      puVar13 = (ushort *)plVar15[2];
      iVar6 = (int)((ulong)((long)puVar13 - plVar15[1]) >> 1) + (int)plVar15[4] + -1;
      if (0x10000000 < (iVar14 - iVar10) + iVar6 + 1) {
        if (*(int *)(this + 0x15c) != 0) {
          return 0x6d;
        }
        *(undefined4 *)(this + 0x15c) = 0xb8;
        *(ulong *)(this + 0x160) = CONCAT44(iVar6,iVar5);
        return 0x6d;
      }
      if (puVar13 < (ushort *)plVar15[3]) {
LAB_01197154:
        uVar17 = (uint)*puVar13;
      }
      else {
        if ((char)plVar15[6] == '\0') {
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
          puVar13 = (ushort *)plVar15[2];
          if ((uVar8 & 1) != 0) goto LAB_01197154;
        }
        uVar17 = 0xffffffff;
      }
      plVar15[2] = (long)(puVar13 + 1);
      *(uint *)pSVar18 = uVar17;
      uVar16 = 0x59;
      goto LAB_01197210;
    }
    uVar16 = 0x57;
    uVar17 = 0x6e;
  }
  if (((&DAT_019dc06d)[uVar17] & 1) != 0) {
    return 0x6d;
  }
LAB_0119724c:
  if (uVar19 == 5) {
    lVar12 = *(long *)(this + 0x18);
    lVar11 = *(long *)(lVar12 + 8);
    lVar2 = *(long *)(lVar12 + 0x10);
    iVar10 = *(int *)(lVar12 + 0x20);
    *(undefined4 *)(this + 0x158) = 299;
    *(long *)(this + 0x150) =
         CONCAT44((int)((ulong)(lVar2 - lVar11) >> 1) + iVar10,iVar5) + -0x100000000;
    return uVar16;
  }
  return uVar16;
}

