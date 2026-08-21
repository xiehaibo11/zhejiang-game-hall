
/* v8::internal::Scanner::Next() */

undefined1 __thiscall v8::internal::Scanner::Next(Scanner *this)

{
  Scanner *pSVar1;
  Scanner *pSVar2;
  LiteralBuffer *pLVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  short *psVar15;
  ushort *puVar16;
  long lVar17;
  byte *pbVar18;
  ushort *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  ushort *puVar25;
  
  lVar24 = *(long *)this;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  if (*(char *)(*(long *)(this + 0x10) + 0x38) != 'p') {
    *(long *)(this + 8) = *(long *)(this + 0x10);
    *(long *)(this + 0x10) = lVar24;
    *(undefined1 *)(lVar24 + 0x38) = 0x70;
    goto LAB_0118c94c;
  }
  pSVar1 = this + 0x18;
  pSVar2 = this + 0x20;
  *(long *)(this + 8) = lVar24;
  *(undefined1 *)(lVar24 + 0x4c) = 0;
  do {
    lVar13 = *(long *)(this + 0x18);
    **(int **)(this + 8) =
         (int)((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8)) >> 1) +
         *(int *)(lVar13 + 0x20) + -1;
    uVar10 = *(uint *)(this + 0x20);
    uVar21 = (ulong)uVar10;
    if (0x7f < uVar10) {
      if (0xffff < (int)uVar10) {
LAB_0118c504:
        if (((uint)uVar21 & 0xfc00) == 0xd800) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if ((ushort *)plVar22[3] <= puVar19) {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118c520;
            }
            plVar22[2] = (long)(puVar19 + 1);
LAB_0118c794:
            plVar22 = *(long **)pSVar1;
            uVar21 = plVar22[1];
            uVar14 = plVar22[2];
            if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
              plVar22[2] = uVar21;
              plVar22[4] = plVar22[4] + ((long)(uVar14 - uVar21) >> 1) + -1;
              if ((char)plVar22[6] == '\0') {
                (**(code **)(*plVar22 + 0x28))();
              }
            }
            else {
              plVar22[2] = uVar14 - 2;
            }
LAB_0118c7b0:
            uVar21 = (ulong)*(uint *)pSVar2;
            goto LAB_0118c7bc;
          }
LAB_0118c520:
          uVar7 = *puVar19;
          plVar22[2] = (long)(puVar19 + 1);
          if ((uVar7 & 0xfc00) != 0xdc00) goto LAB_0118c794;
          uVar14 = (ulong)(*(uint *)pSVar2 << 10) & 0xffc00 | (ulong)uVar7 & 0x3ff;
          uVar21 = uVar14 + 0x10000;
          *(uint *)pSVar2 = (uint)uVar21;
          if ((uint)uVar21 < 0x80) {
            if (((&UNK_019ec06d)[uVar14] & 1) != 0) goto LAB_0118d68c;
            goto LAB_0118c7b0;
          }
        }
        else {
LAB_0118c7bc:
          if ((int)uVar21 == -1) {
            cVar9 = '\x0e';
            if (*(char *)(*(long *)pSVar1 + 0x30) != '\0') {
              cVar9 = 'm';
            }
            break;
          }
        }
        lVar17 = *(long *)pSVar1;
        lVar13 = *(long *)(lVar17 + 8);
        lVar4 = *(long *)(lVar17 + 0x10);
        iVar12 = *(int *)(lVar17 + 0x20);
        if ((uint)uVar21 < 0x80) goto LAB_0118c80c;
LAB_0118c7e8:
        uVar14 = unibrow::WhiteSpace::Is((uint)uVar21);
        if (((uint)uVar21 >> 1 == 0x1014) || ((uVar14 & 1) != 0)) {
          do {
            if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
               (((uVar10 = *(uint *)pSVar2, uVar10 - 0x2028 < 2 || (uVar10 == 0xd)) ||
                (uVar10 == 10)))) {
              *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
            }
            plVar22 = *(long **)pSVar1;
            puVar19 = (ushort *)plVar22[2];
            if (puVar19 < (ushort *)plVar22[3]) {
              uVar21 = (ulong)*puVar19;
            }
            else {
              if ((char)plVar22[6] == '\0') {
                uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                puVar19 = (ushort *)plVar22[2];
                if ((uVar21 & 1) != 0) {
                  uVar21 = (ulong)*puVar19;
                  goto LAB_0118c85c;
                }
              }
              uVar21 = 0xffffffff;
            }
LAB_0118c85c:
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar21;
            if (0x7f < (uint)uVar21) goto LAB_0118c7e8;
LAB_0118c80c:
            if (((byte)(&DAT_019dc06d)[uVar21] >> 3 & 1) == 0) break;
          } while( true );
        }
        lVar17 = *(long *)pSVar1;
        if ((int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
            *(int *)(lVar17 + 0x20) == (int)((ulong)(lVar4 - lVar13) >> 1) + iVar12)
        goto LAB_0118d210;
        cVar9 = 'o';
        goto LAB_0118c6f0;
      }
      uVar21 = unibrow::ID_Start::Is(uVar10);
      if ((uVar21 & 1) == 0) {
        uVar21 = (ulong)*(uint *)pSVar2;
        goto LAB_0118c504;
      }
LAB_0118d68c:
      lVar13 = *(long *)(this + 8);
      bVar8 = true;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(undefined1 *)(lVar13 + 0x1c) = 1;
      uVar10 = *(uint *)(this + 0x20);
      if (0x7f < uVar10) {
        bVar11 = false;
        goto LAB_0118dba0;
      }
      if (uVar10 != 0x5c) {
        lVar13 = *(long *)(this + 8);
        iVar12 = *(int *)(lVar13 + 0x18);
        uVar23 = (uint)((byte)(&DAT_019dc0ed)[uVar10] >> 1);
        if (*(int *)(lVar13 + 0x10) <= iVar12) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar13 + 8));
          iVar12 = *(int *)(lVar13 + 0x18);
        }
        *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar10;
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
        plVar22 = *(long **)pSVar1;
        goto LAB_0118d700;
      }
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118df4c:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 != 0x75) {
          uVar10 = 0xffffffff;
          goto LAB_0118e040;
        }
        plVar22 = *(long **)pSVar1;
        puVar19 = (ushort *)plVar22[2];
        if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118df74:
          uVar10 = (uint)*puVar19;
        }
        else {
          if ((char)plVar22[6] == '\0') {
            uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
            puVar19 = (ushort *)plVar22[2];
            if ((uVar21 & 1) != 0) goto LAB_0118df74;
          }
          uVar10 = 0xffffffff;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)(this + 0x20) = uVar10;
        uVar10 = ScanUnicodeEscape<false>(this);
        if (uVar10 != 0x5c) {
          if (0x7f < uVar10) {
            if ((int)uVar10 < 0x10000) goto LAB_0118e040;
            goto LAB_0118dce8;
          }
          if (((&DAT_019dc06d)[uVar10] & 1) == 0) goto LAB_0118dce8;
          bVar8 = true;
          goto LAB_0118e050;
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118df4c;
        }
        uVar10 = 0xffffffff;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
LAB_0118e040:
        uVar21 = unibrow::ID_Start::Is(uVar10);
        if ((uVar21 & 1) != 0) {
          bVar8 = false;
LAB_0118e050:
          lVar13 = *(long *)(this + 8);
          pLVar3 = (LiteralBuffer *)(lVar13 + 8);
          if (*(char *)(lVar13 + 0x1c) == '\0') {
LAB_0118e0f0:
            LiteralBuffer::AddTwoByteChar(pLVar3,uVar10);
            if (!bVar8) goto LAB_0118e09c;
LAB_0118e100:
            bVar8 = ((&DAT_019dc0ed)[uVar10] & 2) == 0;
          }
          else {
            if (0xff < (int)uVar10) {
              LiteralBuffer::ConvertToTwoByte(pLVar3);
              goto LAB_0118e0f0;
            }
            iVar12 = *(int *)(lVar13 + 0x18);
            if (*(int *)(lVar13 + 0x10) <= iVar12) {
              LiteralBuffer::ExpandBuffer(pLVar3);
              iVar12 = *(int *)(lVar13 + 0x18);
            }
            *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar10;
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
            if (bVar8) goto LAB_0118e100;
LAB_0118e09c:
            bVar8 = false;
          }
          bVar11 = true;
          goto LAB_0118dba0;
        }
      }
LAB_0118dce8:
      cVar9 = 'm';
      break;
    }
    cVar9 = (&DAT_019dbfed)[uVar21];
    switch(cVar9) {
    case '\0':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cd44:
        uVar10 = (uint)*puVar19;
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118cd44;
        }
        uVar10 = 0xffffffff;
      }
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)(this + 0x20) = uVar10;
      cVar9 = ScanTemplateSpan(this);
      goto LAB_0118c928;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case '\x02':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if ((ushort *)plVar22[3] <= puVar19) {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118cd70;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '\x02';
        goto LAB_0118c928;
      }
LAB_0118cd70:
      uVar7 = *puVar19;
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = (uint)uVar7;
      if (uVar7 - 0x30 < 10) {
        bVar8 = true;
        goto LAB_0118cd90;
      }
      if (uVar7 == 0x2e) {
        plVar22 = *(long **)pSVar1;
        psVar15 = (short *)plVar22[2];
        if ((short *)plVar22[3] <= psVar15) {
          if (((char)plVar22[6] != '\0') ||
             (uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22), (uVar21 & 1) == 0))
          goto LAB_0118db24;
          psVar15 = (short *)plVar22[2];
        }
        if (*psVar15 == 0x2e) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cf14:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cf14;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cf34:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cf34;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\n';
          goto LAB_0118c928;
        }
      }
LAB_0118db24:
      cVar9 = '\x02';
      goto LAB_0118c928;
    case '\x03':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\f':
    case '\r':
    case '\x1e':
    case '/':
    case 'm':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
        uVar10 = (uint)*puVar19;
      }
      else if ((char)plVar22[6] == '\0') {
        uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
        puVar19 = (ushort *)plVar22[2];
        if ((uVar21 & 1) == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)*puVar19;
        }
      }
      else {
        uVar10 = 0xffffffff;
      }
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = uVar10;
      goto LAB_0118c928;
    case '\v':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118c9d0:
        uVar10 = (uint)*puVar19;
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c9d0;
        }
        uVar10 = 0xffffffff;
      }
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)(this + 0x20) = uVar10;
      if ((uVar10 != 0x2e) || (this[0x119] == (Scanner)0x0)) {
        cVar9 = '\v';
        if ((uVar10 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ca18:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118ca18;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x1f';
        }
        goto LAB_0118c928;
      }
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d7bc:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 - 0x30 < 10) {
          plVar22 = *(long **)pSVar1;
          uVar21 = plVar22[1];
          uVar14 = plVar22[2];
          if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
            plVar22[2] = uVar21;
            plVar22[4] = plVar22[4] + ((long)(uVar14 - uVar21) >> 1) + -1;
            if ((char)plVar22[6] == '\0') {
              (**(code **)(*plVar22 + 0x28))();
            }
          }
          else {
            plVar22[2] = uVar14 - 2;
          }
          *(uint *)pSVar2 = 0x2e;
          cVar9 = '\v';
          goto LAB_0118c928;
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118d7bc;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
      }
      cVar9 = '\x04';
      goto LAB_0118c928;
    case '\x11':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cda8:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3e) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d098:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d098;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x0f';
        }
        else if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cdd4:
            uVar7 = *puVar19;
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar7;
            if (uVar7 == 0x3d) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cdf8:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118cdf8;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              cVar9 = '6';
            }
            else {
              cVar9 = '5';
            }
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cdd4;
            }
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar9 = '5';
          }
        }
        else {
          cVar9 = '\x11';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118cda8;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '\x11';
      }
      goto LAB_0118c928;
    case '\"':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ca44:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cf7c:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cf7c;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x12';
        }
        else if (uVar7 == 0x7c) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ca70:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118ca70;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = ' ';
        }
        else {
          cVar9 = '\"';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118ca44;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '\"';
      }
      goto LAB_0118c928;
    case '#':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ce20:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ce44:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118ce44;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x13';
        }
        else {
          cVar9 = '#';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118ce20;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '#';
      }
      goto LAB_0118c928;
    case '$':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cbb8:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d060:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d060;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x14';
        }
        else if (uVar7 == 0x26) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cbe4:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cbe4;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '!';
        }
        else {
          cVar9 = '$';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118cbb8;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '$';
      }
      goto LAB_0118c928;
    case '(':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118caec:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cfd4:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cfd4;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x18';
        }
        else if (uVar7 == 0x2a) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cb18:
            uVar7 = *puVar19;
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar7;
            if (uVar7 == 0x3d) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cb3c:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118cb3c;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              cVar9 = '\x1b';
            }
            else {
              cVar9 = '+';
            }
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cb18;
            }
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar9 = '+';
          }
        }
        else {
          cVar9 = '(';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118caec;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '(';
      }
      goto LAB_0118c928;
    case ')':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118c28c:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x2a) {
          cVar9 = SkipMultiLineComment(this);
          break;
        }
        if (uVar7 == 0x2f) {
          plVar22 = *(long **)pSVar1;
          psVar15 = (short *)plVar22[2];
          if (psVar15 < (short *)plVar22[3]) {
LAB_0118c2b8:
            if ((*psVar15 == 0x40) || (*psVar15 == 0x23)) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) {
                    uVar10 = (uint)*puVar19;
                    goto LAB_0118c2e0;
                  }
                }
                uVar10 = 0xffffffff;
              }
LAB_0118c2e0:
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118c300:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118c300;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)(this + 0x20) = uVar10;
              SkipSourceURLComment(this);
              goto LAB_0118c6ec;
            }
          }
          else if (((char)plVar22[6] == '\0') &&
                  (uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22), (uVar21 & 1) != 0)) {
            psVar15 = (short *)plVar22[2];
            goto LAB_0118c2b8;
          }
          plVar22 = *(long **)pSVar1;
          do {
            puVar19 = (ushort *)plVar22[2];
            puVar16 = (ushort *)plVar22[3];
            if (puVar19 == puVar16) {
LAB_0118c698:
              if (puVar19 != puVar16) {
                plVar22[2] = (long)(puVar19 + 1);
                uVar10 = (uint)*puVar19;
                goto LAB_0118c6e0;
              }
            }
            else {
              do {
                uVar7 = *puVar19;
                if (((uVar7 - 0x2028 < 2) || (uVar7 == 10)) || (uVar7 == 0xd)) goto LAB_0118c698;
                puVar19 = puVar19 + 1;
              } while (puVar16 != puVar19);
            }
            plVar22[2] = (long)puVar16;
            if ((char)plVar22[6] != '\0') goto LAB_0118c6c4;
            uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          } while ((uVar21 & 1) != 0);
          puVar16 = (ushort *)plVar22[2];
LAB_0118c6c4:
          plVar22[2] = (long)(puVar16 + 1);
          uVar10 = 0xffffffff;
LAB_0118c6e0:
          *(uint *)pSVar2 = uVar10;
          goto LAB_0118c6ec;
        }
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d268:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d268;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x19';
        }
        else {
          cVar9 = ')';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c28c;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = ')';
      }
      goto LAB_0118c928;
    case '*':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118c984:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118c9a8:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118c9a8;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x1a';
        }
        else {
          cVar9 = '*';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c984;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '*';
      }
      goto LAB_0118c928;
    case ',':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ca98:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cfac:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cfac;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x1c';
        }
        else if (uVar7 == 0x2b) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cac4:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cac4;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '3';
        }
        else {
          cVar9 = ',';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118ca98;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = ',';
      }
      goto LAB_0118c928;
    case '-':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if ((ushort *)plVar22[3] <= puVar19) {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c478;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '-';
        goto LAB_0118c928;
      }
LAB_0118c478:
      uVar7 = *puVar19;
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = (uint)uVar7;
      if (uVar7 != 0x2d) {
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d298:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d298;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '\x1d';
        }
        else {
          cVar9 = '-';
        }
        goto LAB_0118c928;
      }
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if ((ushort *)plVar22[3] <= puVar19) {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c49c;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '4';
        goto LAB_0118c928;
      }
LAB_0118c49c:
      uVar7 = *puVar19;
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = (uint)uVar7;
      if ((uVar7 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
        cVar9 = '4';
        goto LAB_0118c928;
      }
      cVar9 = SkipSingleHTMLComment(this);
      break;
    case '.':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ce78:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118ce9c:
            uVar7 = *puVar19;
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar7;
            if (uVar7 == 0x3d) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cec0:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118cec0;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              cVar9 = '8';
            }
            else {
              cVar9 = '7';
            }
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118ce9c;
            }
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar9 = '7';
          }
        }
        else {
          cVar9 = '.';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118ce78;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '.';
      }
      goto LAB_0118c928;
    case '9':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if ((ushort *)plVar22[3] <= puVar19) {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118c32c;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = '9';
        goto LAB_0118c928;
      }
LAB_0118c32c:
      uVar7 = *puVar19;
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = (uint)uVar7;
      if (uVar7 != 0x21) {
        if (uVar7 == 0x3c) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d2e0:
            uVar7 = *puVar19;
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar7;
            if (uVar7 == 0x3d) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d304:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118d304;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              cVar9 = '\x15';
            }
            else {
              cVar9 = '%';
            }
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d2e0;
            }
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar9 = '%';
          }
        }
        else if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d238:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118d238;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = ';';
        }
        else {
          cVar9 = '9';
        }
        goto LAB_0118c928;
      }
      cVar9 = ScanHtmlComment(this);
      break;
    case ':':
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cb64:
        uVar7 = *puVar19;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = (uint)uVar7;
        if (uVar7 == 0x3e) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cffc:
            uVar7 = *puVar19;
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = (uint)uVar7;
            if (uVar7 == 0x3e) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d1b0:
                uVar7 = *puVar19;
                plVar22[2] = (long)(puVar19 + 1);
                *(uint *)pSVar2 = (uint)uVar7;
                if (uVar7 == 0x3d) {
                  plVar22 = *(long **)pSVar1;
                  puVar19 = (ushort *)plVar22[2];
                  if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d1d4:
                    uVar10 = (uint)*puVar19;
                  }
                  else {
                    if ((char)plVar22[6] == '\0') {
                      uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                      puVar19 = (ushort *)plVar22[2];
                      if ((uVar21 & 1) != 0) goto LAB_0118d1d4;
                    }
                    uVar10 = 0xffffffff;
                  }
                  plVar22[2] = (long)(puVar19 + 1);
                  *(uint *)pSVar2 = uVar10;
                  cVar9 = '\x17';
                }
                else {
                  cVar9 = '\'';
                }
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118d1b0;
                }
                plVar22[2] = (long)(puVar19 + 1);
                *(uint *)pSVar2 = 0xffffffff;
                cVar9 = '\'';
              }
            }
            else if (uVar7 == 0x3d) {
              plVar22 = *(long **)pSVar1;
              puVar19 = (ushort *)plVar22[2];
              if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d028:
                uVar10 = (uint)*puVar19;
              }
              else {
                if ((char)plVar22[6] == '\0') {
                  uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
                  puVar19 = (ushort *)plVar22[2];
                  if ((uVar21 & 1) != 0) goto LAB_0118d028;
                }
                uVar10 = 0xffffffff;
              }
              plVar22[2] = (long)(puVar19 + 1);
              *(uint *)pSVar2 = uVar10;
              cVar9 = '\x16';
            }
            else {
              cVar9 = '&';
            }
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cffc;
            }
            plVar22[2] = (long)(puVar19 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar9 = '&';
          }
        }
        else if (uVar7 == 0x3d) {
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118cb90:
            uVar10 = (uint)*puVar19;
          }
          else {
            if ((char)plVar22[6] == '\0') {
              uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
              puVar19 = (ushort *)plVar22[2];
              if ((uVar21 & 1) != 0) goto LAB_0118cb90;
            }
            uVar10 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = uVar10;
          cVar9 = '<';
        }
        else {
          cVar9 = ':';
        }
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118cb64;
        }
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        cVar9 = ':';
      }
      goto LAB_0118c928;
    case 'W':
      bVar8 = false;
LAB_0118cd90:
      cVar9 = ScanNumber(this,bVar8);
      goto LAB_0118c928;
    case 'Z':
      cVar9 = ScanString(this);
      goto LAB_0118c928;
    case '\\':
      lVar13 = *(long *)(this + 8);
      bVar8 = true;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(undefined1 *)(lVar13 + 0x1c) = 1;
      uVar10 = *(uint *)(this + 0x20);
      if (0x7f < uVar10) {
        bVar11 = false;
        goto LAB_0118d0f4;
      }
      if (uVar10 != 0x5c) {
        lVar13 = *(long *)(this + 8);
        iVar12 = *(int *)(lVar13 + 0x18);
        uVar23 = (uint)((byte)(&DAT_019dc0ed)[uVar10] >> 1);
        if (*(int *)(lVar13 + 0x10) <= iVar12) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar13 + 8));
          iVar12 = *(int *)(lVar13 + 0x18);
        }
        *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar10;
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
        plVar22 = *(long **)pSVar1;
        goto LAB_0118cc88;
      }
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if ((ushort *)plVar22[3] <= puVar19) {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118d60c;
        }
        uVar10 = 0xffffffff;
        plVar22[2] = (long)(puVar19 + 1);
        *(uint *)pSVar2 = 0xffffffff;
LAB_0118d88c:
        uVar21 = unibrow::ID_Start::Is(uVar10);
        if ((uVar21 & 1) != 0) {
          bVar8 = false;
          goto LAB_0118d89c;
        }
        goto LAB_0118dce8;
      }
LAB_0118d60c:
      uVar7 = *puVar19;
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)pSVar2 = (uint)uVar7;
      if (uVar7 != 0x75) {
        uVar10 = 0xffffffff;
        goto LAB_0118d88c;
      }
      plVar22 = *(long **)pSVar1;
      puVar19 = (ushort *)plVar22[2];
      if (puVar19 < (ushort *)plVar22[3]) {
LAB_0118d634:
        uVar10 = (uint)*puVar19;
      }
      else {
        if ((char)plVar22[6] == '\0') {
          uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
          puVar19 = (ushort *)plVar22[2];
          if ((uVar21 & 1) != 0) goto LAB_0118d634;
        }
        uVar10 = 0xffffffff;
      }
      plVar22[2] = (long)(puVar19 + 1);
      *(uint *)(this + 0x20) = uVar10;
      uVar10 = ScanUnicodeEscape<false>(this);
      if (uVar10 == 0x5c) goto LAB_0118dce8;
      if (0x7f < uVar10) {
        if ((int)uVar10 < 0x10000) goto LAB_0118d88c;
        goto LAB_0118dce8;
      }
      if (((&DAT_019dc06d)[uVar10] & 1) == 0) goto LAB_0118dce8;
      bVar8 = true;
LAB_0118d89c:
      lVar13 = *(long *)(this + 8);
      pLVar3 = (LiteralBuffer *)(lVar13 + 8);
      if (*(char *)(lVar13 + 0x1c) == '\0') {
LAB_0118dd5c:
        LiteralBuffer::AddTwoByteChar(pLVar3,uVar10);
        if (!bVar8) goto LAB_0118d8e8;
LAB_0118dd6c:
        bVar8 = ((&DAT_019dc0ed)[uVar10] & 2) == 0;
      }
      else {
        if (0xff < (int)uVar10) {
          LiteralBuffer::ConvertToTwoByte(pLVar3);
          goto LAB_0118dd5c;
        }
        iVar12 = *(int *)(lVar13 + 0x18);
        if (*(int *)(lVar13 + 0x10) <= iVar12) {
          LiteralBuffer::ExpandBuffer(pLVar3);
          iVar12 = *(int *)(lVar13 + 0x18);
        }
        *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar10;
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
        if (bVar8) goto LAB_0118dd6c;
LAB_0118d8e8:
        bVar8 = false;
      }
      bVar11 = true;
      goto LAB_0118d0f4;
    case 'l':
      cVar9 = ScanPrivateName(this);
      goto LAB_0118c928;
    case 'o':
      lVar17 = *(long *)pSVar1;
      lVar13 = *(long *)(lVar17 + 8);
      lVar4 = *(long *)(lVar17 + 0x10);
      iVar12 = *(int *)(lVar17 + 0x20);
      if (uVar10 < 0x80) goto LAB_0118c394;
      while ((uVar14 = unibrow::WhiteSpace::Is((uint)uVar21), (uint)uVar21 >> 1 == 0x1014 ||
             ((uVar14 & 1) != 0))) {
        while( true ) {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar10 = *(uint *)pSVar2, uVar10 - 0x2028 < 2 || (uVar10 == 0xd)) || (uVar10 == 10))
             )) {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar22 = *(long **)pSVar1;
          puVar19 = (ushort *)plVar22[2];
          if (puVar19 < (ushort *)plVar22[3]) {
            uVar21 = (ulong)*puVar19;
          }
          else if ((char)plVar22[6] == '\0') {
            uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
            puVar19 = (ushort *)plVar22[2];
            if ((uVar21 & 1) == 0) {
              uVar21 = 0xffffffff;
            }
            else {
              uVar21 = (ulong)*puVar19;
            }
          }
          else {
            uVar21 = 0xffffffff;
          }
          plVar22[2] = (long)(puVar19 + 1);
          *(uint *)pSVar2 = (uint)uVar21;
          if (0x7f < (uint)uVar21) break;
LAB_0118c394:
          if (((byte)(&DAT_019dc06d)[uVar21] >> 3 & 1) == 0) goto LAB_0118c43c;
        }
      }
LAB_0118c43c:
      lVar17 = *(long *)pSVar1;
      if ((int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
          *(int *)(lVar17 + 0x20) == (int)((ulong)(lVar4 - lVar13) >> 1) + iVar12) {
LAB_0118d210:
        cVar9 = 'm';
        goto LAB_0118c928;
      }
LAB_0118c6ec:
      cVar9 = 'o';
    }
LAB_0118c6f0:
  } while (cVar9 == 'o');
  goto LAB_0118c928;
  while( true ) {
    plVar22[2] = (long)puVar25;
    if ((char)plVar22[6] != '\0') goto LAB_0118db68;
    uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
    if ((uVar21 & 1) == 0) break;
LAB_0118d700:
    puVar16 = (ushort *)plVar22[3];
    puVar19 = (ushort *)plVar22[2];
    puVar25 = puVar19;
    for (; puVar19 != puVar16; puVar19 = puVar19 + 1) {
      uVar7 = *puVar19;
      puVar25 = puVar19;
      if (0x7f < (ulong)uVar7) {
        uVar23 = uVar23 | 0x10;
        break;
      }
      uVar23 = (byte)(&DAT_019dc0ed)[uVar7] | uVar23;
      if (((&DAT_019dc0ed)[uVar7] & 1) != 0) break;
      lVar13 = *(long *)(this + 8);
      iVar12 = *(int *)(lVar13 + 0x18);
      if (*(int *)(lVar13 + 0x10) <= iVar12) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar13 + 8));
        iVar12 = *(int *)(lVar13 + 0x18);
      }
      *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar7;
      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
      puVar25 = puVar16;
    }
    if (puVar25 != (ushort *)plVar22[3]) {
      plVar22[2] = (long)(puVar25 + 1);
      uVar10 = (uint)*puVar25;
      goto LAB_0118db74;
    }
  }
  puVar25 = (ushort *)plVar22[2];
LAB_0118db68:
  plVar22[2] = (long)(puVar25 + 1);
  uVar10 = 0xffffffff;
LAB_0118db74:
  *(uint *)pSVar2 = uVar10;
  if ((uVar23 & 0x12) == 0) {
    uVar10 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar10 - 2 < 9) {
      pbVar18 = *(byte **)(*(long *)(this + 8) + 8);
      uVar21 = (ulong)(uVar10 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                      [pbVar18[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar18])
               & 0x3f;
      if (uVar10 == (byte)(&DAT_019dc1ed)[uVar21]) {
        pbVar20 = (&PTR_DAT_01cb57a0)[uVar21 * 2];
        do {
          bVar6 = *pbVar20;
          if (bVar6 == 0) {
            cVar9 = (&DAT_01cb57a8)[uVar21 * 0x10];
            break;
          }
          bVar5 = *pbVar18;
          pbVar20 = pbVar20 + 1;
          cVar9 = '\\';
          pbVar18 = pbVar18 + 1;
        } while (bVar6 == bVar5);
        goto LAB_0118c928;
      }
    }
  }
  else if ((uVar23 >> 4 & 1) != 0) {
    bVar11 = false;
    bVar8 = (uVar23 & 2) == 0 || (uVar23 & 0x10) == 0;
LAB_0118dba0:
    cVar9 = ScanIdentifierOrKeywordInnerSlow(this,bVar11,bVar8);
    goto LAB_0118c928;
  }
  cVar9 = '\\';
  goto LAB_0118c928;
  while( true ) {
    plVar22[2] = (long)puVar25;
    if ((char)plVar22[6] != '\0') goto LAB_0118d0bc;
    uVar21 = (**(code **)(*plVar22 + 0x28))(plVar22);
    if ((uVar21 & 1) == 0) break;
LAB_0118cc88:
    puVar16 = (ushort *)plVar22[3];
    puVar19 = (ushort *)plVar22[2];
    puVar25 = puVar19;
    for (; puVar19 != puVar16; puVar19 = puVar19 + 1) {
      uVar7 = *puVar19;
      puVar25 = puVar19;
      if (0x7f < (ulong)uVar7) {
        uVar23 = uVar23 | 0x10;
        break;
      }
      uVar23 = (byte)(&DAT_019dc0ed)[uVar7] | uVar23;
      if (((&DAT_019dc0ed)[uVar7] & 1) != 0) break;
      lVar13 = *(long *)(this + 8);
      iVar12 = *(int *)(lVar13 + 0x18);
      if (*(int *)(lVar13 + 0x10) <= iVar12) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar13 + 8));
        iVar12 = *(int *)(lVar13 + 0x18);
      }
      *(char *)(*(long *)(lVar13 + 8) + (long)iVar12) = (char)uVar7;
      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
      puVar25 = puVar16;
    }
    if (puVar25 != (ushort *)plVar22[3]) {
      plVar22[2] = (long)(puVar25 + 1);
      uVar10 = (uint)*puVar25;
      goto LAB_0118d0c8;
    }
  }
  puVar25 = (ushort *)plVar22[2];
LAB_0118d0bc:
  plVar22[2] = (long)(puVar25 + 1);
  uVar10 = 0xffffffff;
LAB_0118d0c8:
  *(uint *)pSVar2 = uVar10;
  if ((uVar23 & 0x12) == 0) {
    uVar10 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar10 - 2 < 9) {
      pbVar18 = *(byte **)(*(long *)(this + 8) + 8);
      uVar21 = (ulong)(uVar10 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                      [pbVar18[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar18])
               & 0x3f;
      if (uVar10 == (byte)(&DAT_019dc1ed)[uVar21]) {
        pbVar20 = (&PTR_DAT_01cb57a0)[uVar21 * 2];
        do {
          bVar6 = *pbVar20;
          if (bVar6 == 0) {
            cVar9 = (&DAT_01cb57a8)[uVar21 * 0x10];
            break;
          }
          bVar5 = *pbVar18;
          pbVar20 = pbVar20 + 1;
          cVar9 = '\\';
          pbVar18 = pbVar18 + 1;
        } while (bVar6 == bVar5);
        goto LAB_0118c928;
      }
    }
  }
  else if ((uVar23 >> 4 & 1) != 0) {
    bVar11 = false;
    bVar8 = (uVar23 & 2) == 0 || (uVar23 & 0x10) == 0;
LAB_0118d0f4:
    cVar9 = ScanIdentifierOrKeywordInnerSlow(this,bVar11,bVar8);
    goto LAB_0118c928;
  }
  cVar9 = '\\';
LAB_0118c928:
  *(char *)(lVar24 + 0x38) = cVar9;
  lVar13 = *(long *)pSVar1;
  *(int *)(lVar24 + 4) =
       (int)((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8)) >> 1) +
       *(int *)(lVar13 + 0x20) + -1;
LAB_0118c94c:
  return *(undefined1 *)(*(long *)this + 0x38);
}

