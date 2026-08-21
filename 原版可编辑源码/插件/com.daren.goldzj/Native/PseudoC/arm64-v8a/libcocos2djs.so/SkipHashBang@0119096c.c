
/* v8::internal::Scanner::SkipHashBang() */

void __thiscall v8::internal::Scanner::SkipHashBang(Scanner *this)

{
  LiteralBuffer *this_00;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  ushort *puVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  short *psVar14;
  byte *pbVar15;
  ushort *puVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  uint uVar20;
  Scanner *pSVar21;
  Scanner *pSVar22;
  ushort *puVar23;
  int local_6c;
  
  pSVar22 = this + 0x20;
  if (*(uint *)pSVar22 != 0x23) {
    return;
  }
  pSVar21 = this + 0x18;
  plVar19 = *(long **)pSVar21;
  psVar14 = (short *)plVar19[2];
  if ((short *)plVar19[3] <= psVar14) {
    if ((char)plVar19[6] != '\0') {
      return;
    }
    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
    if ((uVar7 & 1) == 0) {
      return;
    }
    psVar14 = (short *)plVar19[2];
  }
  if (*psVar14 != 0x21) {
    return;
  }
  plVar19 = *(long **)pSVar21;
  puVar10 = (ushort *)plVar19[2];
  if ((int)((ulong)((long)puVar10 - plVar19[1]) >> 1) + (int)plVar19[4] != 1) {
    return;
  }
  do {
    puVar16 = (ushort *)plVar19[3];
    if (puVar10 == puVar16) {
LAB_01190a20:
      if (puVar10 != puVar16) {
        plVar19[2] = (long)(puVar10 + 1);
        uVar6 = (uint)*puVar10;
        goto LAB_01190a6c;
      }
    }
    else {
      do {
        uVar3 = *puVar10;
        if (((uVar3 - 0x2028 < 2) || (uVar3 == 10)) || (uVar3 == 0xd)) goto LAB_01190a20;
        puVar10 = puVar10 + 1;
      } while (puVar16 != puVar10);
    }
    plVar19[2] = (long)puVar16;
    puVar10 = puVar16;
    if ((char)plVar19[6] != '\0') break;
    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
    puVar10 = (ushort *)plVar19[2];
  } while ((uVar7 & 1) != 0);
  plVar19[2] = (long)(puVar10 + 1);
  uVar6 = 0xffffffff;
LAB_01190a6c:
  *(uint *)(this + 0x20) = uVar6;
  piVar11 = *(int **)(this + 8);
  piVar13 = piVar11;
LAB_01190a9c:
  do {
    lVar17 = *(long *)pSVar21;
    *piVar13 = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
               *(int *)(lVar17 + 0x20) + -1;
    uVar6 = *(uint *)pSVar22;
    uVar7 = (ulong)uVar6;
    if (uVar6 < 0x80) {
      cVar5 = (&DAT_019dbfed)[uVar7];
      switch(cVar5) {
      case '\0':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191598:
          uVar6 = (uint)*puVar10;
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191598;
          }
          uVar6 = 0xffffffff;
        }
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)(this + 0x20) = uVar6;
        cVar5 = ScanTemplateSpan(this);
        goto LAB_01191834;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case '\x02':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191560;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '\x02';
          goto LAB_01191834;
        }
LAB_01191560:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 - 0x30 < 10) {
          cVar5 = ScanNumber(this,true);
          goto LAB_01191834;
        }
        if (uVar3 == 0x2e) {
          plVar19 = *(long **)pSVar21;
          psVar14 = (short *)plVar19[2];
          if ((short *)plVar19[3] <= psVar14) {
            if (((char)plVar19[6] != '\0') ||
               (uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19), (uVar7 & 1) == 0))
            goto LAB_0119227c;
            psVar14 = (short *)plVar19[2];
          }
          if (*psVar14 == 0x2e) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119165c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_0119165c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119167c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_0119167c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\n';
            goto LAB_01191834;
          }
        }
LAB_0119227c:
        cVar5 = '\x02';
        goto LAB_01191834;
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
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
          uVar6 = (uint)*puVar10;
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) {
              uVar6 = (uint)*puVar10;
              goto LAB_011910b4;
            }
          }
          uVar6 = 0xffffffff;
        }
LAB_011910b4:
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = uVar6;
        goto LAB_01191834;
      case '\v':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191248:
          uVar6 = (uint)*puVar10;
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191248;
          }
          uVar6 = 0xffffffff;
        }
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)(this + 0x20) = uVar6;
        if ((uVar6 == 0x2e) && (this[0x119] != (Scanner)0x0)) {
          plVar19 = *(long **)pSVar21;
          puVar10 = (ushort *)plVar19[2];
          if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191f10:
            uVar3 = *puVar10;
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = (uint)uVar3;
            if (uVar3 - 0x30 < 10) {
              plVar19 = *(long **)pSVar21;
              uVar7 = plVar19[1];
              uVar12 = plVar19[2];
              if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
                plVar19[2] = uVar7;
                plVar19[4] = plVar19[4] + ((long)(uVar12 - uVar7) >> 1) + -1;
                if ((char)plVar19[6] == '\0') {
                  (**(code **)(*plVar19 + 0x28))();
                }
              }
              else {
                plVar19[2] = uVar12 - 2;
              }
              *(uint *)pSVar22 = 0x2e;
              cVar5 = '\v';
            }
            else {
              cVar5 = '\x04';
            }
          }
          else {
            if ((char)plVar19[6] == '\0') {
              uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
              puVar10 = (ushort *)plVar19[2];
              if ((uVar7 & 1) != 0) goto LAB_01191f10;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = 0xffffffff;
            cVar5 = '\x04';
          }
        }
        else {
          cVar5 = '\v';
          if ((uVar6 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119128c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_0119128c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1f';
          }
        }
        goto LAB_01191834;
      case '\x11':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191468:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011917d8:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011917d8;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x0f';
            goto LAB_01191834;
          }
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191494:
              uVar3 = *puVar10;
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_011914b8:
                  uVar6 = (uint)*puVar10;
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_011914b8;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar19[2] = (long)(puVar10 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '6';
              }
              else {
                cVar5 = '5';
              }
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191494;
              }
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '5';
            }
            goto LAB_01191834;
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191468;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
        }
        cVar5 = '\x11';
        goto LAB_01191834;
      case '\"':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191128:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011916ec:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011916ec;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x12';
          }
          else if (uVar3 == 0x7c) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191154:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191154;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = ' ';
          }
          else {
            cVar5 = '\"';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191128;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '\"';
        }
        goto LAB_01191834;
      case '#':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_011915c4:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011915e8:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011915e8;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x13';
          }
          else {
            cVar5 = '#';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_011915c4;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '#';
        }
        goto LAB_01191834;
      case '$':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_011911f4:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119174c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_0119174c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x14';
          }
          else if (uVar3 == 0x26) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191220:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191220;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '!';
          }
          else {
            cVar5 = '$';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_011911f4;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '$';
        }
        goto LAB_01191834;
      case '(':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119117c:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191714:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191714;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x18';
          }
          else if (uVar3 == 0x2a) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011911a8:
              uVar3 = *puVar10;
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_011911cc:
                  uVar6 = (uint)*puVar10;
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_011911cc;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar19[2] = (long)(puVar10 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x1b';
              }
              else {
                cVar5 = '+';
              }
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011911a8;
              }
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '+';
            }
          }
          else {
            cVar5 = '(';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_0119117c;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '(';
        }
        goto LAB_01191834;
      case ')':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01190af4;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ')';
          goto LAB_01191834;
        }
LAB_01190af4:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 == 0x2a) {
          cVar5 = SkipMultiLineComment(this);
          break;
        }
        if (uVar3 != 0x2f) {
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011919b4:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011919b4;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x19';
          }
          else {
            cVar5 = ')';
          }
          goto LAB_01191834;
        }
        plVar19 = *(long **)pSVar21;
        psVar14 = (short *)plVar19[2];
        if (psVar14 < (short *)plVar19[3]) {
LAB_01190b20:
          if ((*psVar14 == 0x40) || (*psVar14 == 0x23)) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01190b44:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01190b44;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01190b64:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01190b64;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)(this + 0x20) = uVar6;
            SkipSourceURLComment(this);
            piVar13 = *(int **)(this + 8);
            goto LAB_01190a9c;
          }
        }
        else if (((char)plVar19[6] == '\0') &&
                (uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19), (uVar7 & 1) != 0)) {
          psVar14 = (short *)plVar19[2];
          goto LAB_01190b20;
        }
        plVar19 = *(long **)pSVar21;
        do {
          puVar10 = (ushort *)plVar19[2];
          puVar16 = (ushort *)plVar19[3];
          if (puVar10 == puVar16) {
LAB_01190e6c:
            if (puVar10 != puVar16) {
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)*puVar10;
              piVar13 = *(int **)(this + 8);
              goto LAB_01190a9c;
            }
          }
          else {
            do {
              uVar3 = *puVar10;
              if (((uVar3 - 0x2028 < 2) || (uVar3 == 10)) || (uVar3 == 0xd)) goto LAB_01190e6c;
              puVar10 = puVar10 + 1;
            } while (puVar16 != puVar10);
          }
          plVar19[2] = (long)puVar16;
          if ((char)plVar19[6] != '\0') goto LAB_01190e98;
          uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
        } while ((uVar7 & 1) != 0);
        puVar16 = (ushort *)plVar19[2];
LAB_01190e98:
        plVar19[2] = (long)(puVar16 + 1);
        *(uint *)pSVar22 = 0xffffffff;
        piVar13 = *(int **)(this + 8);
        goto LAB_01190a9c;
      case '*':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191308:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_0119132c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_0119132c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1a';
          }
          else {
            cVar5 = '*';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191308;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '*';
        }
        goto LAB_01191834;
      case ',':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_011910d4:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011916bc:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011916bc;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1c';
          }
          else if (uVar3 == 0x2b) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191100:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191100;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '3';
          }
          else {
            cVar5 = ',';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_011910d4;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ',';
        }
        goto LAB_01191834;
      case '-':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01190c94;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '-';
          goto LAB_01191834;
        }
LAB_01190c94:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 != 0x2d) {
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011919e4:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011919e4;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '\x1d';
          }
          else {
            cVar5 = '-';
          }
          goto LAB_01191834;
        }
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01190cb8;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '4';
          goto LAB_01191834;
        }
LAB_01190cb8:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if ((uVar3 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
          cVar5 = '4';
          goto LAB_01191834;
        }
        cVar5 = SkipSingleHTMLComment(this);
        break;
      case '.':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_011914e0:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191504:
              uVar3 = *puVar10;
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191528:
                  uVar6 = (uint)*puVar10;
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_01191528;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar19[2] = (long)(puVar10 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '8';
              }
              else {
                cVar5 = '7';
              }
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191504;
              }
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '7';
            }
          }
          else {
            cVar5 = '.';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_011914e0;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '.';
        }
        goto LAB_01191834;
      case '9':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01190b94;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = '9';
          goto LAB_01191834;
        }
LAB_01190b94:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        *(uint *)pSVar22 = (uint)uVar3;
        if (uVar3 != 0x21) {
          if (uVar3 == 0x3c) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191a54:
              uVar3 = *puVar10;
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191a78:
                  uVar6 = (uint)*puVar10;
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_01191a78;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar19[2] = (long)(puVar10 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x15';
              }
              else {
                cVar5 = '%';
              }
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191a54;
              }
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '%';
            }
          }
          else if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191a1c:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191a1c;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = ';';
          }
          else {
            cVar5 = '9';
          }
          goto LAB_01191834;
        }
        cVar5 = ScanHtmlComment(this);
        break;
      case ':':
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_011912b4:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191774:
              uVar3 = *puVar10;
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = (uint)uVar3;
              if (uVar3 == 0x3e) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191924:
                  uVar3 = *puVar10;
                  plVar19[2] = (long)(puVar10 + 1);
                  *(uint *)pSVar22 = (uint)uVar3;
                  if (uVar3 == 0x3d) {
                    plVar19 = *(long **)pSVar21;
                    puVar10 = (ushort *)plVar19[2];
                    if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191948:
                      uVar6 = (uint)*puVar10;
                    }
                    else {
                      if ((char)plVar19[6] == '\0') {
                        uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                        puVar10 = (ushort *)plVar19[2];
                        if ((uVar7 & 1) != 0) goto LAB_01191948;
                      }
                      uVar6 = 0xffffffff;
                    }
                    plVar19[2] = (long)(puVar10 + 1);
                    *(uint *)pSVar22 = uVar6;
                    cVar5 = '\x17';
                  }
                  else {
                    cVar5 = '\'';
                  }
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_01191924;
                  }
                  plVar19[2] = (long)(puVar10 + 1);
                  *(uint *)pSVar22 = 0xffffffff;
                  cVar5 = '\'';
                }
              }
              else if (uVar3 == 0x3d) {
                plVar19 = *(long **)pSVar21;
                puVar10 = (ushort *)plVar19[2];
                if (puVar10 < (ushort *)plVar19[3]) {
LAB_011917a0:
                  uVar6 = (uint)*puVar10;
                }
                else {
                  if ((char)plVar19[6] == '\0') {
                    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                    puVar10 = (ushort *)plVar19[2];
                    if ((uVar7 & 1) != 0) goto LAB_011917a0;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar19[2] = (long)(puVar10 + 1);
                *(uint *)pSVar22 = uVar6;
                cVar5 = '\x16';
              }
              else {
                cVar5 = '&';
              }
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01191774;
              }
              plVar19[2] = (long)(puVar10 + 1);
              *(uint *)pSVar22 = 0xffffffff;
              cVar5 = '&';
            }
          }
          else if (uVar3 == 0x3d) {
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_011912e0:
              uVar6 = (uint)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_011912e0;
              }
              uVar6 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = uVar6;
            cVar5 = '<';
          }
          else {
            cVar5 = ':';
          }
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_011912b4;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
          cVar5 = ':';
        }
        goto LAB_01191834;
      case 'W':
        cVar5 = ScanNumber(this,false);
        goto LAB_01191834;
      case 'Z':
        cVar5 = ScanString(this);
        goto LAB_01191834;
      case '\\':
        lVar17 = *(long *)(this + 8);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(undefined1 *)(lVar17 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) {
LAB_01191e88:
          bVar4 = true;
          bVar8 = false;
          goto LAB_0119182c;
        }
        if (uVar6 != 0x5c) {
          lVar17 = *(long *)(this + 8);
          iVar9 = *(int *)(lVar17 + 0x18);
          uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
          if (*(int *)(lVar17 + 0x10) <= iVar9) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
            iVar9 = *(int *)(lVar17 + 0x18);
          }
          *(char *)(*(long *)(lVar17 + 8) + (long)iVar9) = (char)uVar6;
          *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
          plVar19 = *(long **)pSVar21;
          goto LAB_011913b0;
        }
LAB_01191e90:
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191ea0:
          uVar3 = *puVar10;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar3;
          if (uVar3 != 0x75) {
            uVar6 = 0xffffffff;
            goto LAB_01191fdc;
          }
          plVar19 = *(long **)pSVar21;
          puVar10 = (ushort *)plVar19[2];
          if (puVar10 < (ushort *)plVar19[3]) {
LAB_01191ec4:
            uVar6 = (uint)*puVar10;
          }
          else {
            if ((char)plVar19[6] == '\0') {
              uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
              puVar10 = (ushort *)plVar19[2];
              if ((uVar7 & 1) != 0) goto LAB_01191ec4;
            }
            uVar6 = 0xffffffff;
          }
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)(this + 0x20) = uVar6;
          uVar6 = ScanUnicodeEscape<false>(this);
          if (uVar6 == 0x5c) goto LAB_011923c8;
          if (0x7f < uVar6) {
            if ((int)uVar6 < 0x10000) goto LAB_01191fdc;
            goto LAB_011923c8;
          }
          if (((&DAT_019dc06d)[uVar6] & 1) == 0) goto LAB_011923c8;
          bVar8 = true;
        }
        else {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01191ea0;
          }
          uVar6 = 0xffffffff;
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = 0xffffffff;
LAB_01191fdc:
          uVar7 = unibrow::ID_Start::Is(uVar6);
          if ((uVar7 & 1) == 0) goto LAB_011923c8;
          bVar8 = false;
        }
        lVar17 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar17 + 8);
        if (*(char *)(lVar17 + 0x1c) == '\0') {
LAB_01192488:
          LiteralBuffer::AddTwoByteChar(this_00,uVar6);
          if (!bVar8) goto LAB_01192038;
LAB_01192498:
          bVar4 = ((&DAT_019dc0ed)[uVar6] & 2) == 0;
        }
        else {
          if (0xff < (int)uVar6) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_01192488;
          }
          iVar9 = *(int *)(lVar17 + 0x18);
          if (*(int *)(lVar17 + 0x10) <= iVar9) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar9 = *(int *)(lVar17 + 0x18);
          }
          *(char *)(*(long *)(lVar17 + 8) + (long)iVar9) = (char)uVar6;
          *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
          if (bVar8) goto LAB_01192498;
LAB_01192038:
          bVar4 = false;
        }
        bVar8 = true;
        goto LAB_0119182c;
      case 'l':
        cVar5 = ScanPrivateName(this);
        goto LAB_01191834;
      case 'o':
        lVar17 = *(long *)pSVar21;
        local_6c = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
                   *(int *)(lVar17 + 0x20);
        if (uVar6 < 0x80) goto LAB_01190bf0;
LAB_01190bd8:
        uVar12 = unibrow::WhiteSpace::Is((uint)uVar7);
        if (((uint)uVar7 >> 1 == 0x1014) || ((uVar12 & 1) != 0)) {
          do {
            if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
               (((uVar6 = *(uint *)pSVar22, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10)))
               ) {
              *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
            }
            plVar19 = *(long **)pSVar21;
            puVar10 = (ushort *)plVar19[2];
            if (puVar10 < (ushort *)plVar19[3]) {
LAB_01190c38:
              uVar7 = (ulong)*puVar10;
            }
            else {
              if ((char)plVar19[6] == '\0') {
                uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
                puVar10 = (ushort *)plVar19[2];
                if ((uVar7 & 1) != 0) goto LAB_01190c38;
              }
              uVar7 = 0xffffffff;
            }
            plVar19[2] = (long)(puVar10 + 1);
            *(uint *)pSVar22 = (uint)uVar7;
            if (0x7f < (uint)uVar7) goto LAB_01190bd8;
LAB_01190bf0:
            if (((byte)(&DAT_019dc06d)[uVar7] >> 3 & 1) == 0) break;
          } while( true );
        }
        goto LAB_01191048;
      }
      if (cVar5 != 'o') goto LAB_01191834;
    }
    else {
      if ((int)uVar6 < 0x10000) {
        uVar7 = unibrow::ID_Start::Is(uVar6);
        if ((uVar7 & 1) == 0) {
          uVar7 = (ulong)*(uint *)pSVar22;
          goto LAB_01190d14;
        }
LAB_01191d74:
        lVar17 = *(long *)(this + 8);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(undefined1 *)(lVar17 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) goto LAB_01191e88;
        if (uVar6 == 0x5c) goto LAB_01191e90;
        lVar17 = *(long *)(this + 8);
        iVar9 = *(int *)(lVar17 + 0x18);
        uVar20 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
        if (*(int *)(lVar17 + 0x10) <= iVar9) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
          iVar9 = *(int *)(lVar17 + 0x18);
        }
        *(char *)(*(long *)(lVar17 + 8) + (long)iVar9) = (char)uVar6;
        *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
        plVar19 = *(long **)pSVar21;
        break;
      }
LAB_01190d14:
      if (((uint)uVar7 & 0xfc00) == 0xd800) {
        plVar19 = *(long **)pSVar21;
        puVar10 = (ushort *)plVar19[2];
        if ((ushort *)plVar19[3] <= puVar10) {
          if ((char)plVar19[6] == '\0') {
            uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
            puVar10 = (ushort *)plVar19[2];
            if ((uVar7 & 1) != 0) goto LAB_01190d34;
          }
          plVar19[2] = (long)(puVar10 + 1);
LAB_01190f40:
          plVar19 = *(long **)pSVar21;
          uVar7 = plVar19[1];
          uVar12 = plVar19[2];
          if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
            plVar19[2] = uVar7;
            plVar19[4] = plVar19[4] + ((long)(uVar12 - uVar7) >> 1) + -1;
            if ((char)plVar19[6] == '\0') {
              (**(code **)(*plVar19 + 0x28))();
            }
          }
          else {
            plVar19[2] = uVar12 - 2;
          }
LAB_01190f58:
          uVar7 = (ulong)*(uint *)pSVar22;
          goto LAB_01190f5c;
        }
LAB_01190d34:
        uVar3 = *puVar10;
        plVar19[2] = (long)(puVar10 + 1);
        if ((uVar3 & 0xfc00) != 0xdc00) goto LAB_01190f40;
        uVar12 = (ulong)(*(uint *)pSVar22 << 10) & 0xffc00 | (ulong)uVar3 & 0x3ff;
        uVar7 = uVar12 + 0x10000;
        *(uint *)pSVar22 = (uint)uVar7;
        if ((uint)uVar7 < 0x80) {
          if (((&UNK_019ec06d)[uVar12] & 1) != 0) goto LAB_01191d74;
          goto LAB_01190f58;
        }
      }
      else {
LAB_01190f5c:
        if ((int)uVar7 == -1) {
          cVar5 = '\x0e';
          if (*(char *)(*(long *)pSVar21 + 0x30) != '\0') {
            cVar5 = 'm';
          }
          goto LAB_01191834;
        }
      }
      lVar17 = *(long *)pSVar21;
      local_6c = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
                 *(int *)(lVar17 + 0x20);
      if ((uint)uVar7 < 0x80) goto LAB_01190fa0;
LAB_01190f88:
      uVar12 = unibrow::WhiteSpace::Is((uint)uVar7);
      if (((uint)uVar7 >> 1 == 0x1014) || ((uVar12 & 1) != 0)) {
        do {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar6 = *(uint *)pSVar22, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10))))
          {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar19 = *(long **)pSVar21;
          puVar10 = (ushort *)plVar19[2];
          if (puVar10 < (ushort *)plVar19[3]) {
            uVar7 = (ulong)*puVar10;
          }
          else {
            if ((char)plVar19[6] == '\0') {
              uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
              puVar10 = (ushort *)plVar19[2];
              if ((uVar7 & 1) != 0) {
                uVar7 = (ulong)*puVar10;
                goto LAB_01190ff4;
              }
            }
            uVar7 = 0xffffffff;
          }
LAB_01190ff4:
          plVar19[2] = (long)(puVar10 + 1);
          *(uint *)pSVar22 = (uint)uVar7;
          if (0x7f < (uint)uVar7) goto LAB_01190f88;
LAB_01190fa0:
          if (((byte)(&DAT_019dc06d)[uVar7] >> 3 & 1) == 0) break;
        } while( true );
      }
LAB_01191048:
      lVar17 = *(long *)pSVar21;
      if ((int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
          *(int *)(lVar17 + 0x20) == local_6c) goto LAB_011923c8;
    }
    piVar13 = *(int **)(this + 8);
  } while( true );
  while( true ) {
    plVar19[2] = (long)puVar23;
    if ((char)plVar19[6] != '\0') goto LAB_011922c0;
    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
    if ((uVar7 & 1) == 0) break;
    puVar16 = (ushort *)plVar19[3];
    puVar10 = (ushort *)plVar19[2];
    puVar23 = puVar10;
    for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
      uVar3 = *puVar10;
      puVar23 = puVar10;
      if (0x7f < (ulong)uVar3) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar3] | uVar20;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar17 = *(long *)(this + 8);
      iVar9 = *(int *)(lVar17 + 0x18);
      if (*(int *)(lVar17 + 0x10) <= iVar9) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
        iVar9 = *(int *)(lVar17 + 0x18);
      }
      *(char *)(*(long *)(lVar17 + 8) + (long)iVar9) = (char)uVar3;
      *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
      puVar23 = puVar16;
    }
    if (puVar23 != (ushort *)plVar19[3]) {
      plVar19[2] = (long)(puVar23 + 1);
      uVar6 = (uint)*puVar23;
      goto LAB_011922cc;
    }
  }
  puVar23 = (ushort *)plVar19[2];
LAB_011922c0:
  plVar19[2] = (long)(puVar23 + 1);
  uVar6 = 0xffffffff;
LAB_011922cc:
  *(uint *)pSVar22 = uVar6;
  if ((uVar20 & 0x12) != 0) goto LAB_01191810;
  uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar6 - 2 < 9) {
    pbVar15 = *(byte **)(*(long *)(this + 8) + 8);
    uVar7 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[pbVar15[1]]
                   + (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar15]) &
            0x3f;
    if (uVar6 == (byte)(&DAT_019dc1ed)[uVar7]) {
      pbVar18 = (&PTR_DAT_01cb57a0)[uVar7 * 2];
      do {
        bVar2 = *pbVar18;
        if (bVar2 == 0) goto LAB_01192364;
        bVar1 = *pbVar15;
        pbVar18 = pbVar18 + 1;
        cVar5 = '\\';
        pbVar15 = pbVar15 + 1;
      } while (bVar2 == bVar1);
      goto LAB_01191834;
    }
  }
  goto LAB_0119235c;
LAB_01192364:
  cVar5 = (&DAT_01cb57a8)[uVar7 * 0x10];
  goto LAB_01191834;
LAB_011923c8:
  cVar5 = 'm';
  goto LAB_01191834;
  while( true ) {
    plVar19[2] = (long)puVar23;
    if ((char)plVar19[6] != '\0') goto LAB_011917f4;
    uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19);
    if ((uVar7 & 1) == 0) break;
LAB_011913b0:
    puVar16 = (ushort *)plVar19[3];
    puVar10 = (ushort *)plVar19[2];
    puVar23 = puVar10;
    for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
      uVar3 = *puVar10;
      puVar23 = puVar10;
      if (0x7f < (ulong)uVar3) {
        uVar20 = uVar20 | 0x10;
        break;
      }
      uVar20 = (byte)(&DAT_019dc0ed)[uVar3] | uVar20;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar17 = *(long *)(this + 8);
      iVar9 = *(int *)(lVar17 + 0x18);
      if (*(int *)(lVar17 + 0x10) <= iVar9) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar17 + 8));
        iVar9 = *(int *)(lVar17 + 0x18);
      }
      *(char *)(*(long *)(lVar17 + 8) + (long)iVar9) = (char)uVar3;
      *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
      puVar23 = puVar16;
    }
    if (puVar23 != (ushort *)plVar19[3]) {
      plVar19[2] = (long)(puVar23 + 1);
      uVar6 = (uint)*puVar23;
      goto LAB_01191800;
    }
  }
  puVar23 = (ushort *)plVar19[2];
LAB_011917f4:
  plVar19[2] = (long)(puVar23 + 1);
  uVar6 = 0xffffffff;
LAB_01191800:
  *(uint *)pSVar22 = uVar6;
  if ((uVar20 & 0x12) == 0) {
    uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar6 - 2 < 9) {
      pbVar15 = *(byte **)(*(long *)(this + 8) + 8);
      uVar7 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                    [pbVar15[1]] +
                     (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar15]) &
              0x3f;
      if (uVar6 == (byte)(&DAT_019dc1ed)[uVar7]) {
        pbVar18 = (&PTR_DAT_01cb57a0)[uVar7 * 2];
        do {
          bVar2 = *pbVar18;
          if (bVar2 == 0) goto LAB_01192364;
          bVar1 = *pbVar15;
          pbVar18 = pbVar18 + 1;
          cVar5 = '\\';
          pbVar15 = pbVar15 + 1;
        } while (bVar2 == bVar1);
        goto LAB_01191834;
      }
    }
  }
  else {
LAB_01191810:
    if ((uVar20 >> 4 & 1) != 0) {
      bVar8 = false;
      bVar4 = (uVar20 & 2) == 0 || (uVar20 & 0x10) == 0;
LAB_0119182c:
      cVar5 = ScanIdentifierOrKeywordInnerSlow(this,bVar8,bVar4);
      goto LAB_01191834;
    }
  }
LAB_0119235c:
  cVar5 = '\\';
LAB_01191834:
  *(char *)(piVar11 + 0xe) = cVar5;
  lVar17 = *(long *)pSVar21;
  piVar11[1] = (int)((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8)) >> 1) +
               *(int *)(lVar17 + 0x20) + -1;
  return;
}

