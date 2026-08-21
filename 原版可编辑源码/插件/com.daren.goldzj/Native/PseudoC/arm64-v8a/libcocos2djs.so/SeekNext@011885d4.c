
/* v8::internal::Scanner::SeekNext(unsigned long) */

void __thiscall v8::internal::Scanner::SeekNext(Scanner *this,ulong param_1)

{
  LiteralBuffer *this_00;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  short *psVar13;
  ushort *puVar14;
  int *piVar15;
  byte *pbVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  Scanner *pSVar21;
  Scanner *pSVar22;
  ushort *puVar23;
  int local_6c;
  
  pSVar21 = this + 0x18;
  plVar7 = *(long **)pSVar21;
  this[0x60] = (Scanner)0x70;
  *(undefined4 *)(this + 100) = 0;
  this[0xb0] = (Scanner)0x70;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0x100] = (Scanner)0x70;
  *(undefined4 *)(this + 0x104) = 0;
  uVar18 = plVar7[4];
  if (param_1 < uVar18) {
    lVar10 = plVar7[1];
LAB_0118960c:
    plVar7[4] = param_1;
    plVar7[2] = lVar10;
    if ((char)plVar7[6] == '\0') {
      (**(code **)(*plVar7 + 0x28))();
    }
  }
  else {
    lVar10 = plVar7[1];
    if (uVar18 + (plVar7[3] - lVar10 >> 1) <= param_1) goto LAB_0118960c;
    plVar7[2] = lVar10 + (param_1 - uVar18) * 2;
  }
  plVar7 = *(long **)pSVar21;
  puVar17 = (ushort *)plVar7[2];
  if (puVar17 < (ushort *)plVar7[3]) {
LAB_0118865c:
    uVar6 = (uint)*puVar17;
  }
  else {
    if ((char)plVar7[6] == '\0') {
      uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
      puVar17 = (ushort *)plVar7[2];
      if ((uVar18 & 1) != 0) goto LAB_0118865c;
    }
    uVar6 = 0xffffffff;
  }
  plVar7[2] = (long)(puVar17 + 1);
  pSVar22 = this + 0x20;
  *(uint *)pSVar22 = uVar6;
  *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 0;
  piVar11 = *(int **)(this + 8);
  piVar15 = piVar11;
LAB_011886a0:
  do {
    lVar10 = *(long *)pSVar21;
    *piVar15 = (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1) +
               *(int *)(lVar10 + 0x20) + -1;
    uVar6 = *(uint *)pSVar22;
    uVar18 = (ulong)uVar6;
    if (uVar6 < 0x80) {
      cVar5 = (&DAT_019dbfed)[uVar18];
      switch(cVar5) {
      case '\0':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189180:
          uVar6 = (uint)*puVar17;
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01189180;
          }
          uVar6 = 0xffffffff;
        }
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)(this + 0x20) = uVar6;
        cVar5 = ScanTemplateSpan(this);
        goto LAB_0118941c;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case '\x02':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01189148;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '\x02';
          goto LAB_0118941c;
        }
LAB_01189148:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 - 0x30 < 10) {
          cVar5 = ScanNumber(this,true);
          goto LAB_0118941c;
        }
        if (uVar3 == 0x2e) {
          plVar7 = *(long **)pSVar21;
          psVar13 = (short *)plVar7[2];
          if ((short *)plVar7[3] <= psVar13) {
            if (((char)plVar7[6] != '\0') ||
               (uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7), (uVar18 & 1) == 0))
            goto LAB_01189e94;
            psVar13 = (short *)plVar7[2];
          }
          if (*psVar13 == 0x2e) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189244:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01189244;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189264:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01189264;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\n';
            goto LAB_0118941c;
          }
        }
LAB_01189e94:
        cVar5 = '\x02';
        goto LAB_0118941c;
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
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
          uVar6 = (uint)*puVar17;
        }
        else if ((char)plVar7[6] == '\0') {
          uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar17 = (ushort *)plVar7[2];
          if ((uVar18 & 1) == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)*puVar17;
          }
        }
        else {
          uVar6 = 0xffffffff;
        }
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = uVar6;
        goto LAB_0118941c;
      case '\v':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188e30:
          uVar6 = (uint)*puVar17;
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188e30;
          }
          uVar6 = 0xffffffff;
        }
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)(this + 0x20) = uVar6;
        if ((uVar6 == 0x2e) && (this[0x119] != (Scanner)0x0)) {
          plVar7 = *(long **)pSVar21;
          puVar17 = (ushort *)plVar7[2];
          if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189b28:
            uVar3 = *puVar17;
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = (uint)uVar3;
            if (uVar3 - 0x30 < 10) {
              plVar7 = *(long **)pSVar21;
              uVar18 = plVar7[1];
              uVar12 = plVar7[2];
              if (uVar12 < uVar18 || uVar12 - uVar18 == 0) {
                plVar7[2] = uVar18;
                plVar7[4] = plVar7[4] + ((long)(uVar12 - uVar18) >> 1) + -1;
                if ((char)plVar7[6] == '\0') {
                  (**(code **)(*plVar7 + 0x28))();
                }
              }
              else {
                plVar7[2] = uVar12 - 2;
              }
              *(uint *)pSVar22 = 0x2e;
              cVar5 = '\v';
            }
            else {
              cVar5 = '\x04';
            }
          }
          else {
            if ((char)plVar7[6] == '\0') {
              uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
              puVar17 = (ushort *)plVar7[2];
              if ((uVar18 & 1) != 0) goto LAB_01189b28;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = 0xffffffff;
            cVar5 = '\x04';
          }
        }
        else {
          cVar5 = '\v';
          if ((uVar6 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188e74:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188e74;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1f';
          }
        }
        goto LAB_0118941c;
      case '\x11':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189050:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011893c0:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011893c0;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x0f';
            goto LAB_0118941c;
          }
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_0118907c:
              uVar3 = *puVar17;
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_011890a0:
                  uVar6 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_011890a0;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar7[2] = (long)(puVar17 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '6';
              }
              else {
                cVar5 = '5';
              }
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_0118907c;
              }
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '5';
            }
            goto LAB_0118941c;
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01189050;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
        }
        cVar5 = '\x11';
        goto LAB_0118941c;
      case '\"':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188d10:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011892d4:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011892d4;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x12';
          }
          else if (uVar3 == 0x7c) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188d3c:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188d3c;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = ' ';
          }
          else {
            cVar5 = '\"';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188d10;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '\"';
        }
        goto LAB_0118941c;
      case '#':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_011891ac:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011891d0:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011891d0;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x13';
          }
          else {
            cVar5 = '#';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_011891ac;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '#';
        }
        goto LAB_0118941c;
      case '$':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188ddc:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189334:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01189334;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x14';
          }
          else if (uVar3 == 0x26) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188e08:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188e08;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '!';
          }
          else {
            cVar5 = '$';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188ddc;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '$';
        }
        goto LAB_0118941c;
      case '(':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188d64:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011892fc:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011892fc;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x18';
          }
          else if (uVar3 == 0x2a) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188d90:
              uVar3 = *puVar17;
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188db4:
                  uVar6 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_01188db4;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar7[2] = (long)(puVar17 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x1b';
              }
              else {
                cVar5 = '+';
              }
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188d90;
              }
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '+';
            }
          }
          else {
            cVar5 = '(';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188d64;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '(';
        }
        goto LAB_0118941c;
      case ')':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_011886f8;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ')';
          goto LAB_0118941c;
        }
LAB_011886f8:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 == 0x2a) {
          cVar5 = SkipMultiLineComment(this);
          break;
        }
        if (uVar3 != 0x2f) {
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189578:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01189578;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x19';
          }
          else {
            cVar5 = ')';
          }
          goto LAB_0118941c;
        }
        plVar7 = *(long **)pSVar21;
        psVar13 = (short *)plVar7[2];
        if (psVar13 < (short *)plVar7[3]) {
LAB_01188724:
          if ((*psVar13 == 0x40) || (*psVar13 == 0x23)) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188748:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188748;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188768:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188768;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)(this + 0x20) = uVar6;
            SkipSourceURLComment(this);
            piVar15 = *(int **)(this + 8);
            goto LAB_011886a0;
          }
        }
        else if (((char)plVar7[6] == '\0') &&
                (uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7), (uVar18 & 1) != 0)) {
          psVar13 = (short *)plVar7[2];
          goto LAB_01188724;
        }
        plVar7 = *(long **)pSVar21;
        do {
          puVar17 = (ushort *)plVar7[2];
          puVar14 = (ushort *)plVar7[3];
          if (puVar17 == puVar14) {
LAB_01188a6c:
            if (puVar17 != puVar14) {
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)*puVar17;
              piVar15 = *(int **)(this + 8);
              goto LAB_011886a0;
            }
          }
          else {
            do {
              uVar3 = *puVar17;
              if (((uVar3 - 0x2028 < 2) || (uVar3 == 10)) || (uVar3 == 0xd)) goto LAB_01188a6c;
              puVar17 = puVar17 + 1;
            } while (puVar14 != puVar17);
          }
          plVar7[2] = (long)puVar14;
          if ((char)plVar7[6] != '\0') goto LAB_01188a98;
          uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
        } while ((uVar18 & 1) != 0);
        puVar14 = (ushort *)plVar7[2];
LAB_01188a98:
        plVar7[2] = (long)(puVar14 + 1);
        *(uint *)pSVar22 = 0xffffffff;
        piVar15 = *(int **)(this + 8);
        goto LAB_011886a0;
      case '*':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188ef0:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188f14:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188f14;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1a';
          }
          else {
            cVar5 = '*';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188ef0;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '*';
        }
        goto LAB_0118941c;
      case ',':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188cbc:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011892a4:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011892a4;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1c';
          }
          else if (uVar3 == 0x2b) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188ce8:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188ce8;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '3';
          }
          else {
            cVar5 = ',';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188cbc;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ',';
        }
        goto LAB_0118941c;
      case '-':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188894;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '-';
          goto LAB_0118941c;
        }
LAB_01188894:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 != 0x2d) {
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011895a8:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011895a8;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1d';
          }
          else {
            cVar5 = '-';
          }
          goto LAB_0118941c;
        }
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_011888b8;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '4';
          goto LAB_0118941c;
        }
LAB_011888b8:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if ((uVar3 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
          cVar5 = '4';
          goto LAB_0118941c;
        }
        cVar5 = SkipSingleHTMLComment(this);
        break;
      case '.':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_011890c8:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011890ec:
              uVar3 = *puVar17;
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189110:
                  uVar6 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_01189110;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar7[2] = (long)(puVar17 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '8';
              }
              else {
                cVar5 = '7';
              }
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011890ec;
              }
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '7';
            }
          }
          else {
            cVar5 = '.';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_011890c8;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '.';
        }
        goto LAB_0118941c;
      case '9':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188798;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '9';
          goto LAB_0118941c;
        }
LAB_01188798:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 != 0x21) {
          if (uVar3 == 0x3c) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189664:
              uVar3 = *puVar17;
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189688:
                  uVar6 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_01189688;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar7[2] = (long)(puVar17 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x15';
              }
              else {
                cVar5 = '%';
              }
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01189664;
              }
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '%';
            }
          }
          else if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_011895e0:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_011895e0;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = ';';
          }
          else {
            cVar5 = '9';
          }
          goto LAB_0118941c;
        }
        cVar5 = ScanHtmlComment(this);
        break;
      case ':':
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188e9c:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_0118935c:
              uVar3 = *puVar17;
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3e) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_0118950c:
                  uVar3 = *puVar17;
                  plVar7[2] = (long)(puVar17 + 1);
                  *(uint *)pSVar22 = (uint)uVar3;
                  if (uVar3 == 0x3d) {
                    plVar7 = *(long **)pSVar21;
                    puVar17 = (ushort *)plVar7[2];
                    if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189530:
                      uVar6 = (uint)*puVar17;
                    }
                    else {
                      if ((char)plVar7[6] == '\0') {
                        uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                        puVar17 = (ushort *)plVar7[2];
                        if ((uVar18 & 1) != 0) goto LAB_01189530;
                      }
                      uVar6 = 0xffffffff;
                    }
                    plVar7[2] = (long)(puVar17 + 1);
                    *(uint *)pSVar22 = uVar6;
                    cVar5 = '\x17';
                  }
                  else {
                    cVar5 = '\'';
                  }
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118950c;
                  }
                  plVar7[2] = (long)(puVar17 + 1);
                  *(uint *)pSVar22 = 0xffffffff;
                  cVar5 = '\'';
                }
              }
              else if (uVar3 == 0x3d) {
                plVar7 = *(long **)pSVar21;
                puVar17 = (ushort *)plVar7[2];
                if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189388:
                  uVar6 = (uint)*puVar17;
                }
                else {
                  if ((char)plVar7[6] == '\0') {
                    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar17 = (ushort *)plVar7[2];
                    if ((uVar18 & 1) != 0) goto LAB_01189388;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar7[2] = (long)(puVar17 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x16';
              }
              else {
                cVar5 = '&';
              }
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_0118935c;
              }
              plVar7[2] = (long)(puVar17 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '&';
            }
          }
          else if (uVar3 == 0x3d) {
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188ec8:
              uVar6 = (uint)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188ec8;
              }
              uVar6 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '<';
          }
          else {
            cVar5 = ':';
          }
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188e9c;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ':';
        }
        goto LAB_0118941c;
      case 'W':
        cVar5 = ScanNumber(this,false);
        goto LAB_0118941c;
      case 'Z':
        cVar5 = ScanString(this);
        goto LAB_0118941c;
      case '\\':
        lVar10 = *(long *)(this + 8);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined1 *)(lVar10 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) {
LAB_01189aa0:
          bVar4 = true;
          bVar8 = false;
          goto LAB_01189414;
        }
        if (uVar6 != 0x5c) {
          lVar10 = *(long *)(this + 8);
          iVar9 = *(int *)(lVar10 + 0x18);
          uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
          if (*(int *)(lVar10 + 0x10) <= iVar9) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar10 + 8));
            iVar9 = *(int *)(lVar10 + 0x18);
          }
          *(char *)(*(long *)(lVar10 + 8) + (long)iVar9) = (char)uVar6;
          *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
          plVar7 = *(long **)pSVar21;
          goto LAB_01188f98;
        }
LAB_01189aa8:
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189ab8:
          uVar3 = *puVar17;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 != 0x75) {
            uVar6 = 0xffffffff;
            goto LAB_01189bf4;
          }
          plVar7 = *(long **)pSVar21;
          puVar17 = (ushort *)plVar7[2];
          if (puVar17 < (ushort *)plVar7[3]) {
LAB_01189adc:
            uVar6 = (uint)*puVar17;
          }
          else {
            if ((char)plVar7[6] == '\0') {
              uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
              puVar17 = (ushort *)plVar7[2];
              if ((uVar18 & 1) != 0) goto LAB_01189adc;
            }
            uVar6 = 0xffffffff;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)(this + 0x20) = uVar6;
          uVar6 = ScanUnicodeEscape<false>(this);
          if (uVar6 == 0x5c) goto LAB_01189fe0;
          if (0x7f < uVar6) {
            if ((int)uVar6 < 0x10000) goto LAB_01189bf4;
            goto LAB_01189fe0;
          }
          if (((&DAT_019dc06d)[uVar6] & 1) == 0) goto LAB_01189fe0;
          bVar8 = true;
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01189ab8;
          }
          uVar6 = 0xffffffff;
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = 0xffffffff;
LAB_01189bf4:
          uVar18 = unibrow::ID_Start::Is(uVar6);
          if ((uVar18 & 1) == 0) goto LAB_01189fe0;
          bVar8 = false;
        }
        lVar10 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar10 + 8);
        if (*(char *)(lVar10 + 0x1c) == '\0') {
LAB_0118a0a0:
          LiteralBuffer::AddTwoByteChar(this_00,uVar6);
          if (!bVar8) goto LAB_01189c50;
LAB_0118a0b0:
          bVar4 = ((&DAT_019dc0ed)[uVar6] & 2) == 0;
        }
        else {
          if (0xff < (int)uVar6) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_0118a0a0;
          }
          iVar9 = *(int *)(lVar10 + 0x18);
          if (*(int *)(lVar10 + 0x10) <= iVar9) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar9 = *(int *)(lVar10 + 0x18);
          }
          *(char *)(*(long *)(lVar10 + 8) + (long)iVar9) = (char)uVar6;
          *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
          if (bVar8) goto LAB_0118a0b0;
LAB_01189c50:
          bVar4 = false;
        }
        bVar8 = true;
        goto LAB_01189414;
      case 'l':
        cVar5 = ScanPrivateName(this);
        goto LAB_0118941c;
      case 'o':
        lVar10 = *(long *)pSVar21;
        local_6c = (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1) +
                   *(int *)(lVar10 + 0x20);
        if (uVar6 < 0x80) goto LAB_011887f4;
LAB_011887dc:
        uVar12 = unibrow::WhiteSpace::Is((uint)uVar18);
        if (((uint)uVar18 >> 1 == 0x1014) || ((uVar12 & 1) != 0)) {
          do {
            if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
               (((uVar6 = *(uint *)pSVar22, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10)))
               ) {
              *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
            }
            plVar7 = *(long **)pSVar21;
            puVar17 = (ushort *)plVar7[2];
            if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188840:
              uVar18 = (ulong)*puVar17;
            }
            else {
              if ((char)plVar7[6] == '\0') {
                uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar17 = (ushort *)plVar7[2];
                if ((uVar18 & 1) != 0) goto LAB_01188840;
              }
              uVar18 = 0xffffffff;
            }
            plVar7[2] = (long)(puVar17 + 1);
            *(uint *)pSVar22 = (uint)uVar18;
            if (0x7f < (uint)uVar18) goto LAB_011887dc;
LAB_011887f4:
            if (((byte)(&DAT_019dc06d)[uVar18] >> 3 & 1) == 0) break;
          } while( true );
        }
        goto LAB_01188c30;
      }
      if (cVar5 != 'o') goto LAB_0118941c;
    }
    else {
      if ((int)uVar6 < 0x10000) {
        uVar18 = unibrow::ID_Start::Is(uVar6);
        if ((uVar18 & 1) == 0) {
          uVar18 = (ulong)*(uint *)pSVar22;
          goto LAB_01188914;
        }
LAB_0118998c:
        lVar10 = *(long *)(this + 8);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined1 *)(lVar10 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) goto LAB_01189aa0;
        if (uVar6 == 0x5c) goto LAB_01189aa8;
        lVar10 = *(long *)(this + 8);
        iVar9 = *(int *)(lVar10 + 0x18);
        uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
        if (*(int *)(lVar10 + 0x10) <= iVar9) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar10 + 8));
          iVar9 = *(int *)(lVar10 + 0x18);
        }
        *(char *)(*(long *)(lVar10 + 8) + (long)iVar9) = (char)uVar6;
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
        plVar7 = *(long **)pSVar21;
        break;
      }
LAB_01188914:
      if (((uint)uVar18 & 0xfc00) == 0xd800) {
        plVar7 = *(long **)pSVar21;
        puVar17 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar17) {
          if ((char)plVar7[6] == '\0') {
            uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar17 = (ushort *)plVar7[2];
            if ((uVar18 & 1) != 0) goto LAB_01188934;
          }
          plVar7[2] = (long)(puVar17 + 1);
LAB_01188b40:
          plVar7 = *(long **)pSVar21;
          uVar18 = plVar7[1];
          uVar12 = plVar7[2];
          if (uVar12 < uVar18 || uVar12 - uVar18 == 0) {
            plVar7[2] = uVar18;
            plVar7[4] = plVar7[4] + ((long)(uVar12 - uVar18) >> 1) + -1;
            if ((char)plVar7[6] == '\0') {
              (**(code **)(*plVar7 + 0x28))();
            }
          }
          else {
            plVar7[2] = uVar12 - 2;
          }
LAB_01188b58:
          uVar18 = (ulong)*(uint *)pSVar22;
          goto LAB_01188b5c;
        }
LAB_01188934:
        uVar3 = *puVar17;
        plVar7[2] = (long)(puVar17 + 1);
        if ((uVar3 & 0xfc00) != 0xdc00) goto LAB_01188b40;
        uVar12 = (ulong)(*(uint *)pSVar22 << 10) & 0xffc00 | (ulong)uVar3 & 0x3ff;
        uVar18 = uVar12 + 0x10000;
        *(uint *)pSVar22 = (uint)uVar18;
        if ((uint)uVar18 < 0x80) {
          if (((&UNK_019ec06d)[uVar12] & 1) != 0) goto LAB_0118998c;
          goto LAB_01188b58;
        }
      }
      else {
LAB_01188b5c:
        if ((int)uVar18 == -1) {
          cVar5 = '\x0e';
          if (*(char *)(*(long *)pSVar21 + 0x30) != '\0') {
            cVar5 = 'm';
          }
          goto LAB_0118941c;
        }
      }
      lVar10 = *(long *)pSVar21;
      local_6c = (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1) +
                 *(int *)(lVar10 + 0x20);
      if ((uint)uVar18 < 0x80) goto LAB_01188ba0;
LAB_01188b88:
      uVar12 = unibrow::WhiteSpace::Is((uint)uVar18);
      if (((uint)uVar18 >> 1 == 0x1014) || ((uVar12 & 1) != 0)) {
        do {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar6 = *(uint *)pSVar22, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10))))
          {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar7 = *(long **)pSVar21;
          puVar17 = (ushort *)plVar7[2];
          if (puVar17 < (ushort *)plVar7[3]) {
LAB_01188bec:
            uVar18 = (ulong)*puVar17;
          }
          else {
            if ((char)plVar7[6] == '\0') {
              uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
              puVar17 = (ushort *)plVar7[2];
              if ((uVar18 & 1) != 0) goto LAB_01188bec;
            }
            uVar18 = 0xffffffff;
          }
          plVar7[2] = (long)(puVar17 + 1);
          *(uint *)pSVar22 = (uint)uVar18;
          if (0x7f < (uint)uVar18) goto LAB_01188b88;
LAB_01188ba0:
          if (((byte)(&DAT_019dc06d)[uVar18] >> 3 & 1) == 0) break;
        } while( true );
      }
LAB_01188c30:
      lVar10 = *(long *)pSVar21;
      if ((int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1) +
          *(int *)(lVar10 + 0x20) == local_6c) goto LAB_01189fe0;
    }
    piVar15 = *(int **)(this + 8);
  } while( true );
  while( true ) {
    plVar7[2] = (long)puVar23;
    if ((char)plVar7[6] != '\0') goto LAB_01189ed8;
    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if ((uVar18 & 1) == 0) break;
    puVar14 = (ushort *)plVar7[3];
    puVar17 = (ushort *)plVar7[2];
    puVar23 = puVar17;
    for (; puVar17 != puVar14; puVar17 = puVar17 + 1) {
      uVar3 = *puVar17;
      puVar23 = puVar17;
      if (0x7f < (ulong)uVar3) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar3] | uVar20;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar10 = *(long *)(this + 8);
      iVar9 = *(int *)(lVar10 + 0x18);
      if (*(int *)(lVar10 + 0x10) <= iVar9) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar10 + 8));
        iVar9 = *(int *)(lVar10 + 0x18);
      }
      *(char *)(*(long *)(lVar10 + 8) + (long)iVar9) = (char)uVar3;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      puVar23 = puVar14;
    }
    if (puVar23 != (ushort *)plVar7[3]) {
      plVar7[2] = (long)(puVar23 + 1);
      uVar6 = (uint)*puVar23;
      goto LAB_01189ee4;
    }
  }
  puVar23 = (ushort *)plVar7[2];
LAB_01189ed8:
  plVar7[2] = (long)(puVar23 + 1);
  uVar6 = 0xffffffff;
LAB_01189ee4:
  *(uint *)pSVar22 = uVar6;
  if ((uVar20 & 0x12) != 0) goto LAB_011893f8;
  uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar6 - 2 < 9) {
    pbVar16 = *(byte **)(*(long *)(this + 8) + 8);
    uVar18 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                   [pbVar16[1]] +
                    (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar16]) &
             0x3f;
    if (uVar6 == (byte)(&DAT_019dc1ed)[uVar18]) {
      pbVar19 = (&PTR_DAT_01cb57a0)[uVar18 * 2];
      do {
        bVar2 = *pbVar19;
        if (bVar2 == 0) goto LAB_01189f7c;
        bVar1 = *pbVar16;
        pbVar19 = pbVar19 + 1;
        cVar5 = '\\';
        pbVar16 = pbVar16 + 1;
      } while (bVar2 == bVar1);
      goto LAB_0118941c;
    }
  }
  goto LAB_01189f74;
LAB_01189fe0:
  cVar5 = 'm';
  goto LAB_0118941c;
LAB_01189f7c:
  cVar5 = (&DAT_01cb57a8)[uVar18 * 0x10];
  goto LAB_0118941c;
  while( true ) {
    plVar7[2] = (long)puVar23;
    if ((char)plVar7[6] != '\0') goto LAB_011893dc;
    uVar18 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if ((uVar18 & 1) == 0) break;
LAB_01188f98:
    puVar14 = (ushort *)plVar7[3];
    puVar17 = (ushort *)plVar7[2];
    puVar23 = puVar17;
    for (; puVar17 != puVar14; puVar17 = puVar17 + 1) {
      uVar3 = *puVar17;
      puVar23 = puVar17;
      if (0x7f < (ulong)uVar3) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar3] | uVar20;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar10 = *(long *)(this + 8);
      iVar9 = *(int *)(lVar10 + 0x18);
      if (*(int *)(lVar10 + 0x10) <= iVar9) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar10 + 8));
        iVar9 = *(int *)(lVar10 + 0x18);
      }
      *(char *)(*(long *)(lVar10 + 8) + (long)iVar9) = (char)uVar3;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      puVar23 = puVar14;
    }
    if (puVar23 != (ushort *)plVar7[3]) {
      plVar7[2] = (long)(puVar23 + 1);
      uVar6 = (uint)*puVar23;
      goto LAB_011893e8;
    }
  }
  puVar23 = (ushort *)plVar7[2];
LAB_011893dc:
  plVar7[2] = (long)(puVar23 + 1);
  uVar6 = 0xffffffff;
LAB_011893e8:
  *(uint *)pSVar22 = uVar6;
  if ((uVar20 & 0x12) == 0) {
    uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar6 - 2 < 9) {
      pbVar16 = *(byte **)(*(long *)(this + 8) + 8);
      uVar18 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                     [pbVar16[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar16])
               & 0x3f;
      if (uVar6 == (byte)(&DAT_019dc1ed)[uVar18]) {
        pbVar19 = (&PTR_DAT_01cb57a0)[uVar18 * 2];
        do {
          bVar2 = *pbVar19;
          if (bVar2 == 0) goto LAB_01189f7c;
          bVar1 = *pbVar16;
          pbVar19 = pbVar19 + 1;
          cVar5 = '\\';
          pbVar16 = pbVar16 + 1;
        } while (bVar2 == bVar1);
        goto LAB_0118941c;
      }
    }
  }
  else {
LAB_011893f8:
    if ((uVar20 >> 4 & 1) != 0) {
      bVar8 = false;
      bVar4 = (uVar20 & 2) == 0 || (uVar20 & 0x10) == 0;
LAB_01189414:
      cVar5 = ScanIdentifierOrKeywordInnerSlow(this,bVar8,bVar4);
      goto LAB_0118941c;
    }
  }
LAB_01189f74:
  cVar5 = '\\';
LAB_0118941c:
  *(char *)(piVar11 + 0xe) = cVar5;
  lVar10 = *(long *)pSVar21;
  piVar11[1] = (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1) +
               *(int *)(lVar10 + 0x20) + -1;
  return;
}

