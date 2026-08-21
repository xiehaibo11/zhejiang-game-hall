
/* v8::internal::Scanner::PeekAhead() */

char __thiscall v8::internal::Scanner::PeekAhead(Scanner *this)

{
  Scanner *pSVar1;
  Scanner *pSVar2;
  LiteralBuffer *this_00;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  ushort *puVar14;
  int *piVar15;
  byte *pbVar16;
  ushort *puVar17;
  undefined8 uVar18;
  byte *pbVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  int *piVar23;
  ushort *puVar24;
  int local_6c;
  
  lVar11 = *(long *)(this + 0x10);
  if (*(char *)(lVar11 + 0x38) != 'p') {
    return *(char *)(lVar11 + 0x38);
  }
  uVar18 = *(undefined8 *)(this + 8);
  *(long *)(this + 8) = lVar11;
  *(undefined1 *)(lVar11 + 0x4c) = 0;
  piVar23 = *(int **)(this + 8);
  pSVar1 = this + 0x18;
  pSVar2 = this + 0x20;
  piVar15 = piVar23;
LAB_0118e1f0:
  do {
    lVar11 = *(long *)pSVar1;
    *piVar15 = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
               *(int *)(lVar11 + 0x20) + -1;
    uVar8 = *(uint *)pSVar2;
    uVar20 = (ulong)uVar8;
    if (uVar8 < 0x80) {
      cVar7 = (&DAT_019dbfed)[uVar20];
      switch(cVar7) {
      case '\0':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eda8:
          uVar8 = (uint)*puVar17;
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118eda8;
          }
          uVar8 = 0xffffffff;
        }
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)(this + 0x20) = uVar8;
        cVar7 = ScanTemplateSpan(this);
        goto LAB_0118f044;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case '\x02':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118ed70;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '\x02';
          goto LAB_0118f044;
        }
LAB_0118ed70:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = (uint)uVar5;
        if (uVar5 - 0x30 < 10) {
          cVar7 = ScanNumber(this,true);
          goto LAB_0118f044;
        }
        if (uVar5 == 0x2e) {
          plVar21 = *(long **)pSVar1;
          psVar13 = (short *)plVar21[2];
          if ((short *)plVar21[3] <= psVar13) {
            if (((char)plVar21[6] != '\0') ||
               (uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21), (uVar20 & 1) == 0))
            goto LAB_0118fa8c;
            psVar13 = (short *)plVar21[2];
          }
          if (*psVar13 == 0x2e) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ee6c:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ee6c;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ee8c:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ee8c;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\n';
            goto LAB_0118f044;
          }
        }
LAB_0118fa8c:
        cVar7 = '\x02';
        goto LAB_0118f044;
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
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
          uVar8 = (uint)*puVar17;
        }
        else if ((char)plVar21[6] == '\0') {
          uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
          puVar17 = (ushort *)plVar21[2];
          if ((uVar20 & 1) == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)*puVar17;
          }
        }
        else {
          uVar8 = 0xffffffff;
        }
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = uVar8;
        goto LAB_0118f044;
      case '\v':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ea58:
          uVar8 = (uint)*puVar17;
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118ea58;
          }
          uVar8 = 0xffffffff;
        }
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)(this + 0x20) = uVar8;
        if ((uVar8 == 0x2e) && (this[0x119] != (Scanner)0x0)) {
          plVar21 = *(long **)pSVar1;
          puVar17 = (ushort *)plVar21[2];
          if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f720:
            uVar5 = *puVar17;
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = (uint)uVar5;
            if (uVar5 - 0x30 < 10) {
              plVar21 = *(long **)pSVar1;
              uVar20 = plVar21[1];
              uVar12 = plVar21[2];
              if (uVar12 < uVar20 || uVar12 - uVar20 == 0) {
                plVar21[2] = uVar20;
                plVar21[4] = plVar21[4] + ((long)(uVar12 - uVar20) >> 1) + -1;
                if ((char)plVar21[6] == '\0') {
                  (**(code **)(*plVar21 + 0x28))();
                }
              }
              else {
                plVar21[2] = uVar12 - 2;
              }
              *(uint *)pSVar2 = 0x2e;
              cVar7 = '\v';
            }
            else {
              cVar7 = '\x04';
            }
          }
          else {
            if ((char)plVar21[6] == '\0') {
              uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
              puVar17 = (ushort *)plVar21[2];
              if ((uVar20 & 1) != 0) goto LAB_0118f720;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = 0xffffffff;
            cVar7 = '\x04';
          }
        }
        else {
          cVar7 = '\v';
          if ((uVar8 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ea9c:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ea9c;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x1f';
          }
        }
        goto LAB_0118f044;
      case '\x11':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ec78:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3e) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118efe8:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118efe8;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x0f';
            goto LAB_0118f044;
          }
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eca4:
              uVar5 = *puVar17;
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)uVar5;
              if (uVar5 == 0x3d) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ecc8:
                  uVar8 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118ecc8;
                  }
                  uVar8 = 0xffffffff;
                }
                plVar21[2] = (long)(puVar17 + 1);
                *(uint *)pSVar2 = uVar8;
                cVar7 = '6';
              }
              else {
                cVar7 = '5';
              }
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118eca4;
              }
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = 0xffffffff;
              cVar7 = '5';
            }
            goto LAB_0118f044;
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118ec78;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
        }
        cVar7 = '\x11';
        goto LAB_0118f044;
      case '\"':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e938:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eefc:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118eefc;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x12';
          }
          else if (uVar5 == 0x7c) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e964:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118e964;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = ' ';
          }
          else {
            cVar7 = '\"';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e938;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '\"';
        }
        goto LAB_0118f044;
      case '#':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118edd4:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118edf8:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118edf8;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x13';
          }
          else {
            cVar7 = '#';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118edd4;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '#';
        }
        goto LAB_0118f044;
      case '$':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ea04:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ef5c:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ef5c;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x14';
          }
          else if (uVar5 == 0x26) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ea30:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ea30;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '!';
          }
          else {
            cVar7 = '$';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118ea04;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '$';
        }
        goto LAB_0118f044;
      case '(':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e98c:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ef24:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ef24;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x18';
          }
          else if (uVar5 == 0x2a) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e9b8:
              uVar5 = *puVar17;
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)uVar5;
              if (uVar5 == 0x3d) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e9dc:
                  uVar8 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118e9dc;
                  }
                  uVar8 = 0xffffffff;
                }
                plVar21[2] = (long)(puVar17 + 1);
                *(uint *)pSVar2 = uVar8;
                cVar7 = '\x1b';
              }
              else {
                cVar7 = '+';
              }
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118e9b8;
              }
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = 0xffffffff;
              cVar7 = '+';
            }
          }
          else {
            cVar7 = '(';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e98c;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '(';
        }
        goto LAB_0118f044;
      case ')':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e248;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = ')';
          goto LAB_0118f044;
        }
LAB_0118e248:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = (uint)uVar5;
        if (uVar5 == 0x2a) {
          cVar7 = SkipMultiLineComment(this);
          break;
        }
        if (uVar5 != 0x2f) {
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f1ac:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118f1ac;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x19';
          }
          else {
            cVar7 = ')';
          }
          goto LAB_0118f044;
        }
        plVar21 = *(long **)pSVar1;
        psVar13 = (short *)plVar21[2];
        if (psVar13 < (short *)plVar21[3]) {
LAB_0118e274:
          if ((*psVar13 == 0x40) || (*psVar13 == 0x23)) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) {
                  uVar8 = (uint)*puVar17;
                  goto LAB_0118e29c;
                }
              }
              uVar8 = 0xffffffff;
            }
LAB_0118e29c:
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) {
                  uVar8 = (uint)*puVar17;
                  goto LAB_0118e2bc;
                }
              }
              uVar8 = 0xffffffff;
            }
LAB_0118e2bc:
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)(this + 0x20) = uVar8;
            SkipSourceURLComment(this);
            piVar15 = *(int **)(this + 8);
            goto LAB_0118e1f0;
          }
        }
        else if (((char)plVar21[6] == '\0') &&
                (uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21), (uVar20 & 1) != 0)) {
          psVar13 = (short *)plVar21[2];
          goto LAB_0118e274;
        }
        plVar21 = *(long **)pSVar1;
        do {
          puVar17 = (ushort *)plVar21[2];
          puVar14 = (ushort *)plVar21[3];
          if (puVar17 == puVar14) {
LAB_0118e62c:
            if (puVar17 != puVar14) {
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)*puVar17;
              piVar15 = *(int **)(this + 8);
              goto LAB_0118e1f0;
            }
          }
          else {
            do {
              uVar5 = *puVar17;
              if (((uVar5 - 0x2028 < 2) || (uVar5 == 10)) || (uVar5 == 0xd)) goto LAB_0118e62c;
              puVar17 = puVar17 + 1;
            } while (puVar14 != puVar17);
          }
          plVar21[2] = (long)puVar14;
          if ((char)plVar21[6] != '\0') goto LAB_0118e664;
          uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
        } while ((uVar20 & 1) != 0);
        puVar14 = (ushort *)plVar21[2];
LAB_0118e664:
        plVar21[2] = (long)(puVar14 + 1);
        *(uint *)pSVar2 = 0xffffffff;
        piVar15 = *(int **)(this + 8);
        goto LAB_0118e1f0;
      case '*':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eb18:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eb3c:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118eb3c;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x1a';
          }
          else {
            cVar7 = '*';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118eb18;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '*';
        }
        goto LAB_0118f044;
      case ',':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e8e4:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eecc:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118eecc;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x1c';
          }
          else if (uVar5 == 0x2b) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118e910:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118e910;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '3';
          }
          else {
            cVar7 = ',';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e8e4;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = ',';
        }
        goto LAB_0118f044;
      case '-':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e418;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '-';
          goto LAB_0118f044;
        }
LAB_0118e418:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = (uint)uVar5;
        if (uVar5 != 0x2d) {
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f1dc:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118f1dc;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '\x1d';
          }
          else {
            cVar7 = '-';
          }
          goto LAB_0118f044;
        }
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e43c;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '4';
          goto LAB_0118f044;
        }
LAB_0118e43c:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = (uint)uVar5;
        if ((uVar5 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
          cVar7 = '4';
          goto LAB_0118f044;
        }
        cVar7 = SkipSingleHTMLComment(this);
        break;
      case '.':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ecf0:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ed14:
              uVar5 = *puVar17;
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)uVar5;
              if (uVar5 == 0x3d) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ed38:
                  uVar8 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118ed38;
                  }
                  uVar8 = 0xffffffff;
                }
                plVar21[2] = (long)(puVar17 + 1);
                *(uint *)pSVar2 = uVar8;
                cVar7 = '8';
              }
              else {
                cVar7 = '7';
              }
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ed14;
              }
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = 0xffffffff;
              cVar7 = '7';
            }
          }
          else {
            cVar7 = '.';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118ecf0;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '.';
        }
        goto LAB_0118f044;
      case '9':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e2f0;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = '9';
          goto LAB_0118f044;
        }
LAB_0118e2f0:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        *(uint *)pSVar2 = (uint)uVar5;
        if (uVar5 != 0x21) {
          if (uVar5 == 0x3c) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f24c:
              uVar5 = *puVar17;
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)uVar5;
              if (uVar5 == 0x3d) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f270:
                  uVar8 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118f270;
                  }
                  uVar8 = 0xffffffff;
                }
                plVar21[2] = (long)(puVar17 + 1);
                *(uint *)pSVar2 = uVar8;
                cVar7 = '\x15';
              }
              else {
                cVar7 = '%';
              }
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118f24c;
              }
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = 0xffffffff;
              cVar7 = '%';
            }
          }
          else if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f214:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118f214;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = ';';
          }
          else {
            cVar7 = '9';
          }
          goto LAB_0118f044;
        }
        cVar7 = ScanHtmlComment(this);
        break;
      case ':':
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eac4:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 == 0x3e) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118ef84:
              uVar5 = *puVar17;
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = (uint)uVar5;
              if (uVar5 == 0x3e) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f140:
                  uVar5 = *puVar17;
                  plVar21[2] = (long)(puVar17 + 1);
                  *(uint *)pSVar2 = (uint)uVar5;
                  if (uVar5 == 0x3d) {
                    plVar21 = *(long **)pSVar1;
                    puVar17 = (ushort *)plVar21[2];
                    if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f164:
                      uVar8 = (uint)*puVar17;
                    }
                    else {
                      if ((char)plVar21[6] == '\0') {
                        uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                        puVar17 = (ushort *)plVar21[2];
                        if ((uVar20 & 1) != 0) goto LAB_0118f164;
                      }
                      uVar8 = 0xffffffff;
                    }
                    plVar21[2] = (long)(puVar17 + 1);
                    *(uint *)pSVar2 = uVar8;
                    cVar7 = '\x17';
                  }
                  else {
                    cVar7 = '\'';
                  }
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118f140;
                  }
                  plVar21[2] = (long)(puVar17 + 1);
                  *(uint *)pSVar2 = 0xffffffff;
                  cVar7 = '\'';
                }
              }
              else if (uVar5 == 0x3d) {
                plVar21 = *(long **)pSVar1;
                puVar17 = (ushort *)plVar21[2];
                if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118efb0:
                  uVar8 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar21[6] == '\0') {
                    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                    puVar17 = (ushort *)plVar21[2];
                    if ((uVar20 & 1) != 0) goto LAB_0118efb0;
                  }
                  uVar8 = 0xffffffff;
                }
                plVar21[2] = (long)(puVar17 + 1);
                *(uint *)pSVar2 = uVar8;
                cVar7 = '\x16';
              }
              else {
                cVar7 = '&';
              }
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118ef84;
              }
              plVar21[2] = (long)(puVar17 + 1);
              *(uint *)pSVar2 = 0xffffffff;
              cVar7 = '&';
            }
          }
          else if (uVar5 == 0x3d) {
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118eaf0:
              uVar8 = (uint)*puVar17;
            }
            else {
              if ((char)plVar21[6] == '\0') {
                uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
                puVar17 = (ushort *)plVar21[2];
                if ((uVar20 & 1) != 0) goto LAB_0118eaf0;
              }
              uVar8 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = uVar8;
            cVar7 = '<';
          }
          else {
            cVar7 = ':';
          }
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118eac4;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
          cVar7 = ':';
        }
        goto LAB_0118f044;
      case 'W':
        cVar7 = ScanNumber(this,false);
        goto LAB_0118f044;
      case 'Z':
        cVar7 = ScanString(this);
        goto LAB_0118f044;
      case '\\':
        lVar11 = *(long *)(this + 8);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(undefined1 *)(lVar11 + 0x1c) = 1;
        uVar8 = *(uint *)(this + 0x20);
        if (0x7f < uVar8) {
LAB_0118f704:
          bVar6 = true;
          bVar9 = false;
          goto LAB_0118f03c;
        }
        if (uVar8 != 0x5c) {
          lVar11 = *(long *)(this + 8);
          iVar10 = *(int *)(lVar11 + 0x18);
          uVar22 = (uint)((byte)(&DAT_019dc0ed)[uVar8] >> 1);
          if (*(int *)(lVar11 + 0x10) <= iVar10) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
            iVar10 = *(int *)(lVar11 + 0x18);
          }
          *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar8;
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          plVar21 = *(long **)pSVar1;
          goto LAB_0118ebc0;
        }
        plVar21 = *(long **)pSVar1;
LAB_0118f560:
        puVar17 = (ushort *)plVar21[2];
        if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f570:
          uVar5 = *puVar17;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar5;
          if (uVar5 != 0x75) {
            uVar8 = 0xffffffff;
            goto LAB_0118f7ec;
          }
          plVar21 = *(long **)pSVar1;
          puVar17 = (ushort *)plVar21[2];
          if (puVar17 < (ushort *)plVar21[3]) {
LAB_0118f594:
            uVar8 = (uint)*puVar17;
          }
          else {
            if ((char)plVar21[6] == '\0') {
              uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
              puVar17 = (ushort *)plVar21[2];
              if ((uVar20 & 1) != 0) goto LAB_0118f594;
            }
            uVar8 = 0xffffffff;
          }
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)(this + 0x20) = uVar8;
          uVar8 = ScanUnicodeEscape<false>(this);
          if (uVar8 == 0x5c) goto LAB_0118fbf0;
          if (0x7f < uVar8) {
            if ((int)uVar8 < 0x10000) goto LAB_0118f7ec;
            goto LAB_0118fbf0;
          }
          if (((&DAT_019dc06d)[uVar8] & 1) == 0) goto LAB_0118fbf0;
          bVar9 = true;
        }
        else {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118f570;
          }
          uVar8 = 0xffffffff;
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = 0xffffffff;
LAB_0118f7ec:
          uVar20 = unibrow::ID_Start::Is(uVar8);
          if ((uVar20 & 1) == 0) goto LAB_0118fbf0;
          bVar9 = false;
        }
        lVar11 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar11 + 8);
        if (*(char *)(lVar11 + 0x1c) == '\0') {
LAB_0118fcb0:
          LiteralBuffer::AddTwoByteChar(this_00,uVar8);
          if (!bVar9) goto LAB_0118f848;
LAB_0118fcc0:
          bVar6 = ((&DAT_019dc0ed)[uVar8] & 2) == 0;
        }
        else {
          if (0xff < (int)uVar8) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_0118fcb0;
          }
          iVar10 = *(int *)(lVar11 + 0x18);
          if (*(int *)(lVar11 + 0x10) <= iVar10) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar10 = *(int *)(lVar11 + 0x18);
          }
          *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar8;
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          if (bVar9) goto LAB_0118fcc0;
LAB_0118f848:
          bVar6 = false;
        }
        bVar9 = true;
        goto LAB_0118f03c;
      case 'l':
        cVar7 = ScanPrivateName(this);
        goto LAB_0118f044;
      case 'o':
        lVar11 = *(long *)pSVar1;
        local_6c = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
                   *(int *)(lVar11 + 0x20);
        if (uVar8 < 0x80) goto LAB_0118e35c;
        while ((uVar12 = unibrow::WhiteSpace::Is((uint)uVar20), (uint)uVar20 >> 1 == 0x1014 ||
               ((uVar12 & 1) != 0))) {
          while( true ) {
            if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
               (((uVar8 = *(uint *)pSVar2, uVar8 - 0x2028 < 2 || (uVar8 == 0xd)) || (uVar8 == 10))))
            {
              *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
            }
            plVar21 = *(long **)pSVar1;
            puVar17 = (ushort *)plVar21[2];
            if (puVar17 < (ushort *)plVar21[3]) {
              uVar20 = (ulong)*puVar17;
            }
            else if ((char)plVar21[6] == '\0') {
              uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
              puVar17 = (ushort *)plVar21[2];
              if ((uVar20 & 1) == 0) {
                uVar20 = 0xffffffff;
              }
              else {
                uVar20 = (ulong)*puVar17;
              }
            }
            else {
              uVar20 = 0xffffffff;
            }
            plVar21[2] = (long)(puVar17 + 1);
            *(uint *)pSVar2 = (uint)uVar20;
            if (0x7f < (uint)uVar20) break;
LAB_0118e35c:
            if (((byte)(&DAT_019dc06d)[uVar20] >> 3 & 1) == 0) goto LAB_0118e850;
          }
        }
        goto LAB_0118e850;
      }
      if (cVar7 != 'o') goto LAB_0118f044;
    }
    else {
      if ((int)uVar8 < 0x10000) {
        uVar20 = unibrow::ID_Start::Is(uVar8);
        if ((uVar20 & 1) == 0) {
          uVar20 = (ulong)*(uint *)pSVar2;
          goto LAB_0118e4ac;
        }
LAB_0118f5ec:
        lVar11 = *(long *)(this + 8);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(undefined1 *)(lVar11 + 0x1c) = 1;
        uVar8 = *(uint *)(this + 0x20);
        if (0x7f < uVar8) goto LAB_0118f704;
        if (uVar8 == 0x5c) {
          plVar21 = *(long **)pSVar1;
          goto LAB_0118f560;
        }
        lVar11 = *(long *)(this + 8);
        iVar10 = *(int *)(lVar11 + 0x18);
        uVar22 = (uint)((byte)(&DAT_019dc0ed)[uVar8] >> 1);
        if (*(int *)(lVar11 + 0x10) <= iVar10) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
          iVar10 = *(int *)(lVar11 + 0x18);
        }
        *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar8;
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
        plVar21 = *(long **)pSVar1;
        break;
      }
LAB_0118e4ac:
      if (((uint)uVar20 & 0xfc00) == 0xd800) {
        plVar21 = *(long **)pSVar1;
        puVar17 = (ushort *)plVar21[2];
        if ((ushort *)plVar21[3] <= puVar17) {
          if ((char)plVar21[6] == '\0') {
            uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
            puVar17 = (ushort *)plVar21[2];
            if ((uVar20 & 1) != 0) goto LAB_0118e4cc;
          }
          plVar21[2] = (long)(puVar17 + 1);
LAB_0118e730:
          plVar21 = *(long **)pSVar1;
          uVar20 = plVar21[1];
          uVar12 = plVar21[2];
          if (uVar12 < uVar20 || uVar12 - uVar20 == 0) {
            plVar21[2] = uVar20;
            plVar21[4] = plVar21[4] + ((long)(uVar12 - uVar20) >> 1) + -1;
            if ((char)plVar21[6] == '\0') {
              (**(code **)(*plVar21 + 0x28))();
            }
          }
          else {
            plVar21[2] = uVar12 - 2;
          }
LAB_0118e748:
          uVar20 = (ulong)*(uint *)pSVar2;
          goto LAB_0118e74c;
        }
LAB_0118e4cc:
        uVar5 = *puVar17;
        plVar21[2] = (long)(puVar17 + 1);
        if ((uVar5 & 0xfc00) != 0xdc00) goto LAB_0118e730;
        uVar12 = (ulong)(*(uint *)pSVar2 << 10) & 0xffc00 | (ulong)uVar5 & 0x3ff;
        uVar20 = uVar12 + 0x10000;
        *(uint *)pSVar2 = (uint)uVar20;
        if ((uint)uVar20 < 0x80) {
          if (((&UNK_019ec06d)[uVar12] & 1) != 0) goto LAB_0118f5ec;
          goto LAB_0118e748;
        }
      }
      else {
LAB_0118e74c:
        if ((int)uVar20 == -1) {
          cVar7 = '\x0e';
          if (*(char *)(*(long *)pSVar1 + 0x30) != '\0') {
            cVar7 = 'm';
          }
          goto LAB_0118f044;
        }
      }
      lVar11 = *(long *)pSVar1;
      local_6c = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
                 *(int *)(lVar11 + 0x20);
      if ((uint)uVar20 < 0x80) goto LAB_0118e79c;
LAB_0118e778:
      uVar12 = unibrow::WhiteSpace::Is((uint)uVar20);
      if (((uint)uVar20 >> 1 == 0x1014) || ((uVar12 & 1) != 0)) {
        do {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar8 = *(uint *)pSVar2, uVar8 - 0x2028 < 2 || (uVar8 == 0xd)) || (uVar8 == 10)))) {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar21 = *(long **)pSVar1;
          puVar17 = (ushort *)plVar21[2];
          if (puVar17 < (ushort *)plVar21[3]) {
            uVar20 = (ulong)*puVar17;
          }
          else {
            if ((char)plVar21[6] == '\0') {
              uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
              puVar17 = (ushort *)plVar21[2];
              if ((uVar20 & 1) != 0) {
                uVar20 = (ulong)*puVar17;
                goto LAB_0118e7e8;
              }
            }
            uVar20 = 0xffffffff;
          }
LAB_0118e7e8:
          plVar21[2] = (long)(puVar17 + 1);
          *(uint *)pSVar2 = (uint)uVar20;
          if (0x7f < (uint)uVar20) goto LAB_0118e778;
LAB_0118e79c:
          if (((byte)(&DAT_019dc06d)[uVar20] >> 3 & 1) == 0) break;
        } while( true );
      }
LAB_0118e850:
      lVar11 = *(long *)pSVar1;
      if ((int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
          *(int *)(lVar11 + 0x20) == local_6c) goto LAB_0118fbf0;
    }
    piVar15 = *(int **)(this + 8);
  } while( true );
  while( true ) {
    plVar21[2] = (long)puVar24;
    if ((char)plVar21[6] != '\0') goto LAB_0118fad0;
    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
    if ((uVar20 & 1) == 0) break;
    puVar14 = (ushort *)plVar21[3];
    puVar17 = (ushort *)plVar21[2];
    puVar24 = puVar17;
    for (; puVar17 != puVar14; puVar17 = puVar17 + 1) {
      uVar5 = *puVar17;
      puVar24 = puVar17;
      if (0x7f < (ulong)uVar5) {
        uVar22 = uVar22 | 0x10;
        break;
      }
      uVar22 = (byte)(&DAT_019dc0ed)[uVar5] | uVar22;
      if (((&DAT_019dc0ed)[uVar5] & 1) != 0) break;
      lVar11 = *(long *)(this + 8);
      iVar10 = *(int *)(lVar11 + 0x18);
      if (*(int *)(lVar11 + 0x10) <= iVar10) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
        iVar10 = *(int *)(lVar11 + 0x18);
      }
      *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar5;
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      puVar24 = puVar14;
    }
    if (puVar24 != (ushort *)plVar21[3]) {
      plVar21[2] = (long)(puVar24 + 1);
      uVar8 = (uint)*puVar24;
      goto LAB_0118fadc;
    }
  }
  puVar24 = (ushort *)plVar21[2];
LAB_0118fad0:
  plVar21[2] = (long)(puVar24 + 1);
  uVar8 = 0xffffffff;
LAB_0118fadc:
  *(uint *)pSVar2 = uVar8;
  if ((uVar22 & 0x12) != 0) goto joined_r0x0118fafc;
  uVar8 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar8 - 2 < 9) {
    pbVar16 = *(byte **)(*(long *)(this + 8) + 8);
    uVar20 = (ulong)(uVar8 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                   [pbVar16[1]] +
                    (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar16]) &
             0x3f;
    if (uVar8 == (byte)(&DAT_019dc1ed)[uVar20]) {
      pbVar19 = (&PTR_DAT_01cb57a0)[uVar20 * 2];
      do {
        bVar4 = *pbVar19;
        if (bVar4 == 0) goto LAB_0118fb8c;
        bVar3 = *pbVar16;
        pbVar19 = pbVar19 + 1;
        cVar7 = '\\';
        pbVar16 = pbVar16 + 1;
      } while (bVar4 == bVar3);
      goto LAB_0118f044;
    }
  }
  goto LAB_0118fb84;
LAB_0118fb8c:
  cVar7 = (&DAT_01cb57a8)[uVar20 * 0x10];
  goto LAB_0118f044;
LAB_0118fbf0:
  cVar7 = 'm';
  goto LAB_0118f044;
  while( true ) {
    plVar21[2] = (long)puVar24;
    if ((char)plVar21[6] != '\0') goto LAB_0118f004;
    uVar20 = (**(code **)(*plVar21 + 0x28))(plVar21);
    if ((uVar20 & 1) == 0) break;
LAB_0118ebc0:
    puVar14 = (ushort *)plVar21[3];
    puVar17 = (ushort *)plVar21[2];
    puVar24 = puVar17;
    for (; puVar17 != puVar14; puVar17 = puVar17 + 1) {
      uVar5 = *puVar17;
      puVar24 = puVar17;
      if (0x7f < (ulong)uVar5) {
        uVar22 = uVar22 | 0x10;
        break;
      }
      uVar22 = (byte)(&DAT_019dc0ed)[uVar5] | uVar22;
      if (((&DAT_019dc0ed)[uVar5] & 1) != 0) break;
      lVar11 = *(long *)(this + 8);
      iVar10 = *(int *)(lVar11 + 0x18);
      if (*(int *)(lVar11 + 0x10) <= iVar10) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar11 + 8));
        iVar10 = *(int *)(lVar11 + 0x18);
      }
      *(char *)(*(long *)(lVar11 + 8) + (long)iVar10) = (char)uVar5;
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      puVar24 = puVar14;
    }
    if (puVar24 != (ushort *)plVar21[3]) {
      plVar21[2] = (long)(puVar24 + 1);
      uVar8 = (uint)*puVar24;
      goto LAB_0118f010;
    }
  }
  puVar24 = (ushort *)plVar21[2];
LAB_0118f004:
  plVar21[2] = (long)(puVar24 + 1);
  uVar8 = 0xffffffff;
LAB_0118f010:
  *(uint *)pSVar2 = uVar8;
  if ((uVar22 & 0x12) == 0) {
    uVar8 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar8 - 2 < 9) {
      pbVar16 = *(byte **)(*(long *)(this + 8) + 8);
      uVar20 = (ulong)(uVar8 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                     [pbVar16[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar16])
               & 0x3f;
      if (uVar8 == (byte)(&DAT_019dc1ed)[uVar20]) {
        pbVar19 = (&PTR_DAT_01cb57a0)[uVar20 * 2];
        do {
          bVar4 = *pbVar19;
          if (bVar4 == 0) goto LAB_0118fb8c;
          bVar3 = *pbVar16;
          pbVar19 = pbVar19 + 1;
          cVar7 = '\\';
          pbVar16 = pbVar16 + 1;
        } while (bVar4 == bVar3);
        goto LAB_0118f044;
      }
    }
  }
  else {
joined_r0x0118fafc:
    if ((uVar22 >> 4 & 1) != 0) {
      bVar9 = false;
      bVar6 = (uVar22 & 2) == 0 || (uVar22 & 0x10) == 0;
LAB_0118f03c:
      cVar7 = ScanIdentifierOrKeywordInnerSlow(this,bVar9,bVar6);
      goto LAB_0118f044;
    }
  }
LAB_0118fb84:
  cVar7 = '\\';
LAB_0118f044:
  *(char *)(piVar23 + 0xe) = cVar7;
  lVar11 = *(long *)(this + 0x18);
  piVar23[1] = (int)((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)) >> 1) +
               *(int *)(lVar11 + 0x20) + -1;
  lVar11 = *(long *)(this + 8);
  *(undefined8 *)(this + 8) = uVar18;
  *(long *)(this + 0x10) = lVar11;
  return *(char *)(lVar11 + 0x38);
}

