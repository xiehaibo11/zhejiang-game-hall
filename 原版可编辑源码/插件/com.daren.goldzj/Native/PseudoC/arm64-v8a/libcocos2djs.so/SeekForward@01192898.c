
/* v8::internal::Scanner::SeekForward(int) */

void __thiscall v8::internal::Scanner::SeekForward(Scanner *this,int param_1)

{
  Scanner *pSVar1;
  LiteralBuffer *this_00;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  short *psVar11;
  ushort *puVar12;
  int *piVar13;
  byte *pbVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  Scanner *pSVar21;
  int *piVar22;
  ushort *puVar23;
  int local_6c;
  
  piVar22 = *(int **)(this + 8);
  if (*piVar22 == param_1) {
    return;
  }
  pSVar21 = this + 0x18;
  plVar8 = *(long **)pSVar21;
  lVar17 = plVar8[1];
  uVar16 = plVar8[4];
  if ((int)((ulong)(plVar8[2] - lVar17) >> 1) + (int)uVar16 + -1 == param_1) goto LAB_0119294c;
  uVar18 = (ulong)param_1;
  if ((uVar18 < uVar16) || (uVar16 + (plVar8[3] - lVar17 >> 1) <= uVar18)) {
    plVar8[4] = uVar18;
    plVar8[2] = lVar17;
    if ((char)plVar8[6] == '\0') {
      (**(code **)(*plVar8 + 0x28))();
    }
  }
  else {
    plVar8[2] = lVar17 + (uVar18 - uVar16) * 2;
  }
  plVar8 = *(long **)pSVar21;
  puVar15 = (ushort *)plVar8[2];
  if (puVar15 < (ushort *)plVar8[3]) {
LAB_01192930:
    uVar7 = (uint)*puVar15;
  }
  else {
    if ((char)plVar8[6] == '\0') {
      uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
      puVar15 = (ushort *)plVar8[2];
      if ((uVar16 & 1) != 0) goto LAB_01192930;
    }
    uVar7 = 0xffffffff;
  }
  plVar8[2] = (long)(puVar15 + 1);
  *(uint *)(this + 0x20) = uVar7;
  *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 0;
  piVar22 = *(int **)(this + 8);
LAB_0119294c:
  pSVar1 = this + 0x20;
  piVar13 = piVar22;
LAB_0119297c:
  lVar17 = *(long *)pSVar21;
  *piVar13 = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
             *(int *)(lVar17 + 0x20) + -1;
  uVar7 = *(uint *)pSVar1;
  uVar16 = (ulong)uVar7;
  if (uVar7 < 0x80) {
    cVar6 = (&DAT_019dbfed)[uVar16];
    switch(cVar6) {
    case '\0':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_011934f0:
        uVar7 = (uint)*puVar15;
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_011934f0;
        }
        uVar7 = 0xffffffff;
      }
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)(this + 0x20) = uVar7;
      cVar6 = ScanTemplateSpan(this);
      goto LAB_0119378c;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case '\x02':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_011934b8;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '\x02';
        goto LAB_0119378c;
      }
LAB_011934b8:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = (uint)uVar4;
      if (uVar4 - 0x30 < 10) {
        cVar6 = ScanNumber(this,true);
        goto LAB_0119378c;
      }
      if (uVar4 == 0x2e) {
        plVar8 = *(long **)pSVar21;
        psVar11 = (short *)plVar8[2];
        if ((short *)plVar8[3] <= psVar11) {
          if (((char)plVar8[6] != '\0') ||
             (uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8), (uVar16 & 1) == 0)) goto LAB_011942d0;
          psVar11 = (short *)plVar8[2];
        }
        if (*psVar11 == 0x2e) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_011935b8;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_011935b8:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_011935d8;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_011935d8:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\n';
          goto LAB_0119378c;
        }
      }
LAB_011942d0:
      cVar6 = '\x02';
      goto LAB_0119378c;
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
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
        uVar7 = (uint)*puVar15;
      }
      else if ((char)plVar8[6] == '\0') {
        uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
        puVar15 = (ushort *)plVar8[2];
        if ((uVar16 & 1) == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)*puVar15;
        }
      }
      else {
        uVar7 = 0xffffffff;
      }
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = uVar7;
      goto LAB_0119378c;
    case '\v':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193190:
        uVar7 = (uint)*puVar15;
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193190;
        }
        uVar7 = 0xffffffff;
      }
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)(this + 0x20) = uVar7;
      if ((uVar7 == 0x2e) && (this[0x119] != (Scanner)0x0)) {
        plVar8 = *(long **)pSVar21;
        puVar15 = (ushort *)plVar8[2];
        if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193ec4:
          uVar4 = *puVar15;
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = (uint)uVar4;
          if (uVar4 - 0x30 < 10) {
            plVar8 = *(long **)pSVar21;
            uVar16 = plVar8[1];
            uVar18 = plVar8[2];
            if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
              plVar8[2] = uVar16;
              plVar8[4] = plVar8[4] + ((long)(uVar18 - uVar16) >> 1) + -1;
              if ((char)plVar8[6] == '\0') {
                (**(code **)(*plVar8 + 0x28))();
              }
            }
            else {
              plVar8[2] = uVar18 - 2;
            }
            cVar6 = '\v';
            *(uint *)pSVar1 = 0x2e;
          }
          else {
            cVar6 = '\x04';
          }
        }
        else {
          if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) != 0) goto LAB_01193ec4;
          }
          plVar8[2] = (long)(puVar15 + 1);
          cVar6 = '\x04';
          *(uint *)pSVar1 = 0xffffffff;
        }
      }
      else {
        cVar6 = '\v';
        if ((uVar7 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_011931d4:
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_011931d4;
            }
            uVar7 = 0xffffffff;
          }
          plVar8[2] = (long)(puVar15 + 1);
          cVar6 = '\x1f';
          *(uint *)pSVar1 = uVar7;
        }
      }
      goto LAB_0119378c;
    case '\x11':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_011933c0:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3e) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193734;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193734:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x0f';
          goto LAB_0119378c;
        }
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_011933ec:
            uVar4 = *puVar15;
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = (uint)uVar4;
            if (uVar4 == 0x3d) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
                uVar7 = (uint)*puVar15;
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) {
                    uVar7 = (uint)*puVar15;
                    goto LAB_01193414;
                  }
                }
                uVar7 = 0xffffffff;
              }
LAB_01193414:
              plVar8[2] = (long)(puVar15 + 1);
              *(uint *)pSVar1 = uVar7;
              cVar6 = '6';
            }
            else {
              cVar6 = '5';
            }
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_011933ec;
            }
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = 0xffffffff;
            cVar6 = '5';
          }
          goto LAB_0119378c;
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_011933c0;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
      }
      cVar6 = '\x11';
      goto LAB_0119378c;
    case '\"':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193070:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193648;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193648:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x12';
        }
        else if (uVar4 == 0x7c) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_011930a0;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_011930a0:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = ' ';
        }
        else {
          cVar6 = '\"';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193070;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '\"';
      }
      goto LAB_0119378c;
    case '#':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_0119351c:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193544;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193544:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x13';
        }
        else {
          cVar6 = '#';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_0119351c;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '#';
      }
      goto LAB_0119378c;
    case '$':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_0119313c:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_011936a8;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_011936a8:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x14';
        }
        else if (uVar4 == 0x26) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_0119316c;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_0119316c:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '!';
        }
        else {
          cVar6 = '$';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_0119313c;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '$';
      }
      goto LAB_0119378c;
    case '(':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_011930c4:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193670;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193670:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x18';
        }
        else if (uVar4 == 0x2a) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_011930f0:
            uVar4 = *puVar15;
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = (uint)uVar4;
            if (uVar4 == 0x3d) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
                uVar7 = (uint)*puVar15;
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) {
                    uVar7 = (uint)*puVar15;
                    goto LAB_01193118;
                  }
                }
                uVar7 = 0xffffffff;
              }
LAB_01193118:
              plVar8[2] = (long)(puVar15 + 1);
              *(uint *)pSVar1 = uVar7;
              cVar6 = '\x1b';
            }
            else {
              cVar6 = '+';
            }
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_011930f0;
            }
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = 0xffffffff;
            cVar6 = '+';
          }
        }
        else {
          cVar6 = '(';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_011930c4;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '(';
      }
      goto LAB_0119378c;
    case ')':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_011929d4;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = ')';
        goto LAB_0119378c;
      }
LAB_011929d4:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = (uint)uVar4;
      if (uVar4 == 0x2a) {
        cVar6 = SkipMultiLineComment(this);
        break;
      }
      if (uVar4 != 0x2f) {
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_011938e8;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_011938e8:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x19';
        }
        else {
          cVar6 = ')';
        }
        goto LAB_0119378c;
      }
      plVar8 = *(long **)pSVar21;
      psVar11 = (short *)plVar8[2];
      if (psVar11 < (short *)plVar8[3]) {
LAB_01192a00:
        if ((*psVar11 != 0x40) && (*psVar11 != 0x23)) goto LAB_01192d48;
        plVar8 = *(long **)pSVar21;
        puVar15 = (ushort *)plVar8[2];
        if (puVar15 < (ushort *)plVar8[3]) {
          uVar7 = (uint)*puVar15;
        }
        else {
          if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) != 0) {
              uVar7 = (uint)*puVar15;
              goto LAB_01192a28;
            }
          }
          uVar7 = 0xffffffff;
        }
LAB_01192a28:
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = uVar7;
        plVar8 = *(long **)pSVar21;
        puVar15 = (ushort *)plVar8[2];
        if (puVar15 < (ushort *)plVar8[3]) {
          uVar7 = (uint)*puVar15;
        }
        else {
          if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) != 0) {
              uVar7 = (uint)*puVar15;
              goto LAB_01192a48;
            }
          }
          uVar7 = 0xffffffff;
        }
LAB_01192a48:
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)(this + 0x20) = uVar7;
        SkipSourceURLComment(this);
        piVar13 = *(int **)(this + 8);
      }
      else {
        if (((char)plVar8[6] == '\0') &&
           (uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8), (uVar16 & 1) != 0)) {
          psVar11 = (short *)plVar8[2];
          goto LAB_01192a00;
        }
LAB_01192d48:
        plVar8 = *(long **)pSVar21;
        do {
          puVar15 = (ushort *)plVar8[2];
          puVar12 = (ushort *)plVar8[3];
          if (puVar15 == puVar12) {
LAB_01192d88:
            if (puVar15 != puVar12) {
              plVar8[2] = (long)(puVar15 + 1);
              *(uint *)pSVar1 = (uint)*puVar15;
              piVar13 = *(int **)(this + 8);
              goto LAB_0119297c;
            }
          }
          else {
            do {
              uVar4 = *puVar15;
              if (((uVar4 - 0x2028 < 2) || (uVar4 == 10)) || (uVar4 == 0xd)) goto LAB_01192d88;
              puVar15 = puVar15 + 1;
            } while (puVar12 != puVar15);
          }
          plVar8[2] = (long)puVar12;
          if ((char)plVar8[6] != '\0') goto LAB_01192db8;
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
        } while ((uVar16 & 1) != 0);
        puVar12 = (ushort *)plVar8[2];
LAB_01192db8:
        plVar8[2] = (long)(puVar12 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        piVar13 = *(int **)(this + 8);
      }
      goto LAB_0119297c;
    case '*':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193254:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_0119327c;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_0119327c:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x1a';
        }
        else {
          cVar6 = '*';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193254;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '*';
      }
      goto LAB_0119378c;
    case ',':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_0119301c:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193618;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193618:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x1c';
        }
        else if (uVar4 == 0x2b) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_0119304c;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_0119304c:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '3';
        }
        else {
          cVar6 = ',';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_0119301c;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = ',';
      }
      goto LAB_0119378c;
    case '-':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01192b94;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '-';
        goto LAB_0119378c;
      }
LAB_01192b94:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = (uint)uVar4;
      if (uVar4 != 0x2d) {
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193918;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193918:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '\x1d';
        }
        else {
          cVar6 = '-';
        }
        goto LAB_0119378c;
      }
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01192bb8;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '4';
        goto LAB_0119378c;
      }
LAB_01192bb8:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = (uint)uVar4;
      if ((uVar4 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
        cVar6 = '4';
        goto LAB_0119378c;
      }
      cVar6 = SkipSingleHTMLComment(this);
      break;
    case '.':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193438:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_0119345c:
            uVar4 = *puVar15;
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = (uint)uVar4;
            if (uVar4 == 0x3d) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
                uVar7 = (uint)*puVar15;
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) {
                    uVar7 = (uint)*puVar15;
                    goto LAB_01193484;
                  }
                }
                uVar7 = 0xffffffff;
              }
LAB_01193484:
              plVar8[2] = (long)(puVar15 + 1);
              *(uint *)pSVar1 = uVar7;
              cVar6 = '8';
            }
            else {
              cVar6 = '7';
            }
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_0119345c;
            }
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = 0xffffffff;
            cVar6 = '7';
          }
        }
        else {
          cVar6 = '.';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193438;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '.';
      }
      goto LAB_0119378c;
    case '9':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01192a78;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = '9';
        goto LAB_0119378c;
      }
LAB_01192a78:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      *(uint *)pSVar1 = (uint)uVar4;
      if (uVar4 != 0x21) {
        if (uVar4 == 0x3c) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_011939a4:
            uVar4 = *puVar15;
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = (uint)uVar4;
            if (uVar4 == 0x3d) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
LAB_011939c8:
                uVar7 = (uint)*puVar15;
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) goto LAB_011939c8;
                }
                uVar7 = 0xffffffff;
              }
              plVar8[2] = (long)(puVar15 + 1);
              cVar6 = '\x15';
              *(uint *)pSVar1 = uVar7;
            }
            else {
              cVar6 = '%';
            }
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_011939a4;
            }
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = 0xffffffff;
            cVar6 = '%';
          }
        }
        else if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193950;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193950:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = ';';
        }
        else {
          cVar6 = '9';
        }
        goto LAB_0119378c;
      }
      cVar6 = ScanHtmlComment(this);
      break;
    case ':':
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193200:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 == 0x3e) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
LAB_011936cc:
            uVar4 = *puVar15;
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = (uint)uVar4;
            if (uVar4 == 0x3e) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193878:
                uVar4 = *puVar15;
                plVar8[2] = (long)(puVar15 + 1);
                *(uint *)pSVar1 = (uint)uVar4;
                if (uVar4 == 0x3d) {
                  plVar8 = *(long **)pSVar21;
                  puVar15 = (ushort *)plVar8[2];
                  if (puVar15 < (ushort *)plVar8[3]) {
                    uVar7 = (uint)*puVar15;
                  }
                  else {
                    if ((char)plVar8[6] == '\0') {
                      uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                      puVar15 = (ushort *)plVar8[2];
                      if ((uVar16 & 1) != 0) {
                        uVar7 = (uint)*puVar15;
                        goto LAB_011938a0;
                      }
                    }
                    uVar7 = 0xffffffff;
                  }
LAB_011938a0:
                  plVar8[2] = (long)(puVar15 + 1);
                  *(uint *)pSVar1 = uVar7;
                  cVar6 = '\x17';
                }
                else {
                  cVar6 = '\'';
                }
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) goto LAB_01193878;
                }
                plVar8[2] = (long)(puVar15 + 1);
                *(uint *)pSVar1 = 0xffffffff;
                cVar6 = '\'';
              }
            }
            else if (uVar4 == 0x3d) {
              plVar8 = *(long **)pSVar21;
              puVar15 = (ushort *)plVar8[2];
              if (puVar15 < (ushort *)plVar8[3]) {
                uVar7 = (uint)*puVar15;
              }
              else {
                if ((char)plVar8[6] == '\0') {
                  uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
                  puVar15 = (ushort *)plVar8[2];
                  if ((uVar16 & 1) != 0) {
                    uVar7 = (uint)*puVar15;
                    goto LAB_011936fc;
                  }
                }
                uVar7 = 0xffffffff;
              }
LAB_011936fc:
              plVar8[2] = (long)(puVar15 + 1);
              *(uint *)pSVar1 = uVar7;
              cVar6 = '\x16';
            }
            else {
              cVar6 = '&';
            }
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) goto LAB_011936cc;
            }
            plVar8[2] = (long)(puVar15 + 1);
            *(uint *)pSVar1 = 0xffffffff;
            cVar6 = '&';
          }
        }
        else if (uVar4 == 0x3d) {
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar7 = (uint)*puVar15;
          }
          else {
            if ((char)plVar8[6] == '\0') {
              uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
              puVar15 = (ushort *)plVar8[2];
              if ((uVar16 & 1) != 0) {
                uVar7 = (uint)*puVar15;
                goto LAB_01193230;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01193230:
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = uVar7;
          cVar6 = '<';
        }
        else {
          cVar6 = ':';
        }
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193200;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = 0xffffffff;
        cVar6 = ':';
      }
      goto LAB_0119378c;
    case 'W':
      cVar6 = ScanNumber(this,false);
      goto LAB_0119378c;
    case 'Z':
      cVar6 = ScanString(this);
      goto LAB_0119378c;
    case '\\':
      lVar17 = *(long *)(this + 8);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(undefined1 *)(lVar17 + 0x1c) = 1;
      uVar7 = *(uint *)(this + 0x20);
      if (0x7f < uVar7) goto LAB_01193e38;
      if (uVar7 == 0x5c) goto LAB_01193e40;
      lVar17 = *(long *)(this + 8);
      iVar10 = *(int *)(lVar17 + 0x18);
      uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar7] >> 1);
      if (*(int *)(lVar17 + 0x10) <= iVar10) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
        iVar10 = *(int *)(lVar17 + 0x18);
      }
      *(char *)(*(long *)(lVar17 + 8) + (long)iVar10) = (char)uVar7;
      *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
      plVar8 = *(long **)pSVar21;
      goto LAB_01193300;
    case 'l':
      cVar6 = ScanPrivateName(this);
      goto LAB_0119378c;
    case 'o':
      lVar17 = *(long *)pSVar21;
      local_6c = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
                 *(int *)(lVar17 + 0x20);
      if (uVar7 < 0x80) goto LAB_01192ad8;
      while ((uVar18 = unibrow::WhiteSpace::Is((uint)uVar16), (uint)uVar16 >> 1 == 0x1014 ||
             ((uVar18 & 1) != 0))) {
        while( true ) {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar7 = *(uint *)pSVar1, uVar7 - 0x2028 < 2 || (uVar7 == 0xd)) || (uVar7 == 10)))) {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar8 = *(long **)pSVar21;
          puVar15 = (ushort *)plVar8[2];
          if (puVar15 < (ushort *)plVar8[3]) {
            uVar16 = (ulong)*puVar15;
          }
          else if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) == 0) {
              uVar16 = 0xffffffff;
            }
            else {
              uVar16 = (ulong)*puVar15;
            }
          }
          else {
            uVar16 = 0xffffffff;
          }
          plVar8[2] = (long)(puVar15 + 1);
          *(uint *)pSVar1 = (uint)uVar16;
          if (0x7f < (uint)uVar16) break;
LAB_01192ad8:
          if (((byte)(&DAT_019dc06d)[uVar16] >> 3 & 1) == 0) goto LAB_01192f8c;
        }
      }
      goto LAB_01192f8c;
    }
    if (cVar6 != 'o') goto LAB_0119378c;
  }
  else {
    if ((int)uVar7 < 0x10000) {
      uVar16 = unibrow::ID_Start::Is(uVar7);
      if ((uVar16 & 1) == 0) {
        uVar16 = (ulong)*(uint *)pSVar1;
        goto LAB_01192c1c;
      }
LAB_01193d24:
      lVar17 = *(long *)(this + 8);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(undefined1 *)(lVar17 + 0x1c) = 1;
      uVar7 = *(uint *)(this + 0x20);
      if (0x7f < uVar7) {
LAB_01193e38:
        bVar5 = true;
        bVar9 = false;
        goto LAB_01193784;
      }
      if (uVar7 != 0x5c) {
        lVar17 = *(long *)(this + 8);
        iVar10 = *(int *)(lVar17 + 0x18);
        uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar7] >> 1);
        if (*(int *)(lVar17 + 0x10) <= iVar10) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
          iVar10 = *(int *)(lVar17 + 0x18);
        }
        *(char *)(*(long *)(lVar17 + 8) + (long)iVar10) = (char)uVar7;
        *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
        plVar8 = *(long **)pSVar21;
        goto LAB_01193d90;
      }
LAB_01193e40:
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193e50:
        uVar4 = *puVar15;
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar4;
        if (uVar4 != 0x75) {
          uVar7 = 0xffffffff;
          goto LAB_01193f9c;
        }
        plVar8 = *(long **)pSVar21;
        puVar15 = (ushort *)plVar8[2];
        if (puVar15 < (ushort *)plVar8[3]) {
LAB_01193e78:
          uVar7 = (uint)*puVar15;
        }
        else {
          if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) != 0) goto LAB_01193e78;
          }
          uVar7 = 0xffffffff;
        }
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)(this + 0x20) = uVar7;
        uVar7 = ScanUnicodeEscape<false>(this);
        if (uVar7 == 0x5c) goto LAB_01194444;
        if (0x7f < uVar7) {
          if ((int)uVar7 < 0x10000) goto LAB_01193f9c;
          goto LAB_01194444;
        }
        if (((&DAT_019dc06d)[uVar7] & 1) == 0) goto LAB_01194444;
        bVar9 = true;
      }
      else {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01193e50;
        }
        plVar8[2] = (long)(puVar15 + 1);
        uVar7 = 0xffffffff;
        *(uint *)pSVar1 = 0xffffffff;
LAB_01193f9c:
        uVar16 = unibrow::ID_Start::Is(uVar7);
        if ((uVar16 & 1) == 0) goto LAB_01194444;
        bVar9 = false;
      }
      lVar17 = *(long *)(this + 8);
      this_00 = (LiteralBuffer *)(lVar17 + 8);
      if (*(char *)(lVar17 + 0x1c) == '\0') {
LAB_01194508:
        LiteralBuffer::AddTwoByteChar(this_00,uVar7);
        if (!bVar9) goto LAB_01193ff8;
LAB_01194518:
        bVar5 = ((&DAT_019dc0ed)[uVar7] & 2) == 0;
      }
      else {
        if (0xff < (int)uVar7) {
          LiteralBuffer::ConvertToTwoByte(this_00);
          goto LAB_01194508;
        }
        iVar10 = *(int *)(lVar17 + 0x18);
        if (*(int *)(lVar17 + 0x10) <= iVar10) {
          LiteralBuffer::ExpandBuffer(this_00);
          iVar10 = *(int *)(lVar17 + 0x18);
        }
        *(char *)(*(long *)(lVar17 + 8) + (long)iVar10) = (char)uVar7;
        *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
        if (bVar9) goto LAB_01194518;
LAB_01193ff8:
        bVar5 = false;
      }
      bVar9 = true;
      goto LAB_01193784;
    }
LAB_01192c1c:
    if (((uint)uVar16 & 0xfc00) == 0xd800) {
      plVar8 = *(long **)pSVar21;
      puVar15 = (ushort *)plVar8[2];
      if ((ushort *)plVar8[3] <= puVar15) {
        if ((char)plVar8[6] == '\0') {
          uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar15 = (ushort *)plVar8[2];
          if ((uVar16 & 1) != 0) goto LAB_01192c3c;
        }
        plVar8[2] = (long)(puVar15 + 1);
LAB_01192e7c:
        plVar8 = *(long **)pSVar21;
        uVar16 = plVar8[1];
        uVar18 = plVar8[2];
        if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
          plVar8[2] = uVar16;
          plVar8[4] = plVar8[4] + ((long)(uVar18 - uVar16) >> 1) + -1;
          if ((char)plVar8[6] == '\0') {
            (**(code **)(*plVar8 + 0x28))();
          }
        }
        else {
          plVar8[2] = uVar18 - 2;
        }
LAB_01192e94:
        uVar16 = (ulong)*(uint *)pSVar1;
        goto LAB_01192e98;
      }
LAB_01192c3c:
      uVar4 = *puVar15;
      plVar8[2] = (long)(puVar15 + 1);
      if ((uVar4 & 0xfc00) != 0xdc00) goto LAB_01192e7c;
      uVar18 = (ulong)(*(uint *)pSVar1 << 10) & 0xffc00 | (ulong)uVar4 & 0x3ff;
      uVar16 = uVar18 + 0x10000;
      *(uint *)pSVar1 = (uint)uVar16;
      if ((uint)uVar16 < 0x80) {
        if (((&UNK_019ec06d)[uVar18] & 1) != 0) goto LAB_01193d24;
        goto LAB_01192e94;
      }
    }
    else {
LAB_01192e98:
      if ((int)uVar16 == -1) {
        cVar6 = '\x0e';
        if (*(char *)(*(long *)pSVar21 + 0x30) != '\0') {
          cVar6 = 'm';
        }
        goto LAB_0119378c;
      }
    }
    lVar17 = *(long *)pSVar21;
    local_6c = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
               *(int *)(lVar17 + 0x20);
    if ((uint)uVar16 < 0x80) goto LAB_01192ee0;
LAB_01192ec4:
    uVar18 = unibrow::WhiteSpace::Is((uint)uVar16);
    if (((uint)uVar16 >> 1 == 0x1014) || ((uVar18 & 1) != 0)) {
      do {
        if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
           (((uVar7 = *(uint *)pSVar1, uVar7 - 0x2028 < 2 || (uVar7 == 0xd)) || (uVar7 == 10)))) {
          *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
        }
        plVar8 = *(long **)pSVar21;
        puVar15 = (ushort *)plVar8[2];
        if (puVar15 < (ushort *)plVar8[3]) {
          uVar16 = (ulong)*puVar15;
        }
        else {
          if ((char)plVar8[6] == '\0') {
            uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
            puVar15 = (ushort *)plVar8[2];
            if ((uVar16 & 1) != 0) {
              uVar16 = (ulong)*puVar15;
              goto LAB_01192f30;
            }
          }
          uVar16 = 0xffffffff;
        }
LAB_01192f30:
        plVar8[2] = (long)(puVar15 + 1);
        *(uint *)pSVar1 = (uint)uVar16;
        if (0x7f < (uint)uVar16) goto LAB_01192ec4;
LAB_01192ee0:
        if (((byte)(&DAT_019dc06d)[uVar16] >> 3 & 1) == 0) break;
      } while( true );
    }
LAB_01192f8c:
    lVar17 = *(long *)pSVar21;
    if ((int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
        *(int *)(lVar17 + 0x20) == local_6c) goto LAB_01194444;
  }
  piVar13 = *(int **)(this + 8);
  goto LAB_0119297c;
  while( true ) {
    plVar8[2] = (long)puVar23;
    if ((char)plVar8[6] != '\0') goto LAB_0119374c;
    uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
    if ((uVar16 & 1) == 0) break;
LAB_01193300:
    puVar12 = (ushort *)plVar8[3];
    puVar15 = (ushort *)plVar8[2];
    puVar23 = puVar15;
    for (; puVar15 != puVar12; puVar15 = puVar15 + 1) {
      uVar4 = *puVar15;
      puVar23 = puVar15;
      if (0x7f < (ulong)uVar4) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar4] | uVar20;
      if (((&DAT_019dc0ed)[uVar4] & 1) != 0) break;
      lVar17 = *(long *)(this + 8);
      iVar10 = *(int *)(lVar17 + 0x18);
      if (*(int *)(lVar17 + 0x10) <= iVar10) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
        iVar10 = *(int *)(lVar17 + 0x18);
      }
      *(char *)(*(long *)(lVar17 + 8) + (long)iVar10) = (char)uVar4;
      *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
      puVar23 = puVar12;
    }
    if (puVar23 != (ushort *)plVar8[3]) {
      plVar8[2] = (long)(puVar23 + 1);
      uVar7 = (uint)*puVar23;
      goto LAB_01193758;
    }
  }
  puVar23 = (ushort *)plVar8[2];
LAB_0119374c:
  plVar8[2] = (long)(puVar23 + 1);
  uVar7 = 0xffffffff;
LAB_01193758:
  *(uint *)pSVar1 = uVar7;
  if ((uVar20 & 0x12) != 0) goto LAB_01193768;
  uVar7 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar7 - 2 < 9) {
    pbVar14 = *(byte **)(*(long *)(this + 8) + 8);
    uVar16 = (ulong)(uVar7 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                   [pbVar14[1]] +
                    (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar14]) &
             0x3f;
    if (uVar7 == (byte)(&DAT_019dc1ed)[uVar16]) {
      pbVar19 = (&PTR_DAT_01cb57a0)[uVar16 * 2];
      do {
        bVar3 = *pbVar19;
        if (bVar3 == 0) goto LAB_011943c8;
        bVar2 = *pbVar14;
        pbVar19 = pbVar19 + 1;
        cVar6 = '\\';
        pbVar14 = pbVar14 + 1;
      } while (bVar3 == bVar2);
      goto LAB_0119378c;
    }
  }
  goto LAB_011943c0;
LAB_011943c8:
  cVar6 = (&DAT_01cb57a8)[uVar16 * 0x10];
  goto LAB_0119378c;
LAB_01194444:
  cVar6 = 'm';
  goto LAB_0119378c;
  while( true ) {
    plVar8[2] = (long)puVar23;
    if ((char)plVar8[6] != '\0') goto LAB_01194320;
    uVar16 = (**(code **)(*plVar8 + 0x28))(plVar8);
    if ((uVar16 & 1) == 0) break;
LAB_01193d90:
    puVar12 = (ushort *)plVar8[3];
    puVar15 = (ushort *)plVar8[2];
    puVar23 = puVar15;
    for (; puVar15 != puVar12; puVar15 = puVar15 + 1) {
      uVar4 = *puVar15;
      puVar23 = puVar15;
      if (0x7f < (ulong)uVar4) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar4] | uVar20;
      if (((&DAT_019dc0ed)[uVar4] & 1) != 0) break;
      lVar17 = *(long *)(this + 8);
      iVar10 = *(int *)(lVar17 + 0x18);
      if (*(int *)(lVar17 + 0x10) <= iVar10) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
        iVar10 = *(int *)(lVar17 + 0x18);
      }
      *(char *)(*(long *)(lVar17 + 8) + (long)iVar10) = (char)uVar4;
      *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
      puVar23 = puVar12;
    }
    if (puVar23 != (ushort *)plVar8[3]) {
      plVar8[2] = (long)(puVar23 + 1);
      uVar7 = (uint)*puVar23;
      goto LAB_0119432c;
    }
  }
  puVar23 = (ushort *)plVar8[2];
LAB_01194320:
  plVar8[2] = (long)(puVar23 + 1);
  uVar7 = 0xffffffff;
LAB_0119432c:
  *(uint *)pSVar1 = uVar7;
  if ((uVar20 & 0x12) == 0) {
    uVar7 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar7 - 2 < 9) {
      pbVar14 = *(byte **)(*(long *)(this + 8) + 8);
      uVar16 = (ulong)(uVar7 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                     [pbVar14[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar14])
               & 0x3f;
      if (uVar7 == (byte)(&DAT_019dc1ed)[uVar16]) {
        pbVar19 = (&PTR_DAT_01cb57a0)[uVar16 * 2];
        do {
          bVar3 = *pbVar19;
          if (bVar3 == 0) goto LAB_011943c8;
          bVar2 = *pbVar14;
          pbVar19 = pbVar19 + 1;
          cVar6 = '\\';
          pbVar14 = pbVar14 + 1;
        } while (bVar3 == bVar2);
        goto LAB_0119378c;
      }
    }
  }
  else {
LAB_01193768:
    if ((uVar20 >> 4 & 1) != 0) {
      bVar9 = false;
      bVar5 = (uVar20 & 2) == 0 || (uVar20 & 0x10) == 0;
LAB_01193784:
      cVar6 = ScanIdentifierOrKeywordInnerSlow(this,bVar9,bVar5);
      goto LAB_0119378c;
    }
  }
LAB_011943c0:
  cVar6 = '\\';
LAB_0119378c:
  *(char *)(piVar22 + 0xe) = cVar6;
  lVar17 = *(long *)pSVar21;
  piVar22[1] = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
               *(int *)(lVar17 + 0x20) + -1;
  return;
}

