
/* WARNING: Removing unreachable block (ram,0x010b48f0) */
/* WARNING: Removing unreachable block (ram,0x010b4804) */

void FUN_010b4544(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  pbVar10 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  do {
    if ((pbVar10 <= pbVar3) || (bVar6 = *pbVar3, 0x25 < bVar6)) break;
    if ((1L << ((ulong)bVar6 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar6 != 0x25) break;
      bVar6 = 0x25;
      while (((pbVar4 = pbVar3 + 1, bVar6 != 10 && (bVar6 != 0xd)) &&
             (pbVar3 = pbVar4, pbVar4 < pbVar10))) {
        bVar6 = *pbVar4;
      }
    }
    pbVar3 = pbVar3 + 1;
  } while( true );
  *param_1 = (long)pbVar3;
  if (pbVar10 <= pbVar3) {
    return;
  }
  bVar6 = *pbVar3;
  if (bVar6 == 0x7b) {
    *(undefined4 *)(param_2 + 2) = 3;
    iVar5 = 0;
    *param_2 = pbVar3;
    do {
      bVar6 = *pbVar3;
      iVar8 = 0;
      if (bVar6 < 0x3c) {
        if (bVar6 == 0x25) {
          bVar6 = 0x25;
          while (((pbVar4 = pbVar3 + 1, bVar6 != 10 && (bVar6 != 0xd)) &&
                 (pbVar3 = pbVar4, pbVar4 < pbVar10))) {
            bVar6 = *pbVar4;
          }
LAB_010b4938:
          iVar8 = 0;
        }
        else if (bVar6 == 0x28) {
          if (pbVar10 <= pbVar3) {
LAB_010b4924:
            iVar8 = 3;
            pbVar3 = pbVar3 + 1;
            break;
          }
          iVar9 = 0;
          pbVar4 = pbVar3;
          do {
            while( true ) {
              pbVar3 = pbVar4 + 1;
              bVar6 = *pbVar4;
              if (bVar6 != 0x5c) break;
              if (pbVar3 == pbVar10) {
                iVar8 = 3;
                pbVar3 = pbVar10 + 1;
                goto LAB_010b4b48;
              }
              switch(*pbVar3) {
              case 0x28:
              case 0x29:
              case 0x5c:
              case 0x62:
              case 0x66:
              case 0x6e:
              case 0x72:
              case 0x74:
                pbVar3 = pbVar4 + 2;
                break;
              default:
                if ((pbVar3 < pbVar10) && ((*pbVar3 & 0xf8) == 0x30)) {
                  lVar7 = 2;
                  do {
                    pbVar3 = pbVar4 + lVar7;
                    if ((pbVar10 <= pbVar3) || (2 < (int)lVar7 - 1U)) break;
                    lVar7 = lVar7 + 1;
                  } while ((*pbVar3 & 0xf8) == 0x30);
                }
              }
LAB_010b4878:
              pbVar4 = pbVar3;
              if (pbVar10 <= pbVar3) goto LAB_010b4924;
            }
            if (bVar6 == 0x28) {
              iVar9 = iVar9 + 1;
            }
            else {
              if (bVar6 != 0x29) goto LAB_010b4878;
              iVar9 = iVar9 + -1;
              if (iVar9 == 0) goto LAB_010b4938;
            }
            iVar8 = 3;
            pbVar4 = pbVar3;
          } while (pbVar3 < pbVar10);
        }
LAB_010b493c:
        pbVar3 = pbVar3 + 1;
        if (iVar8 != 0) break;
      }
      else if (bVar6 == 0x3c) {
        while (pbVar3 = pbVar3 + 1, pbVar3 < pbVar10) {
          do {
            bVar6 = *pbVar3;
            if (0x25 < bVar6) break;
            if ((1L << ((ulong)bVar6 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar6 != 0x25) break;
              bVar6 = 0x25;
              while (((pbVar4 = pbVar3 + 1, bVar6 != 10 && (bVar6 != 0xd)) &&
                     (pbVar3 = pbVar4, pbVar4 < pbVar10))) {
                bVar6 = *pbVar4;
              }
            }
            pbVar3 = pbVar3 + 1;
          } while (pbVar3 < pbVar10);
          if ((pbVar10 <= pbVar3) ||
             ((9 < *pbVar3 - 0x30 &&
              ((uVar1 = *pbVar3 - 0x41, 0x25 < uVar1 ||
               ((1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0)))))) break;
        }
        if ((pbVar3 < pbVar10) && (*pbVar3 != 0x3e)) {
          pbVar3 = pbVar3 + 1;
          iVar8 = 3;
          break;
        }
        iVar8 = 0;
        pbVar3 = pbVar3 + 2;
      }
      else {
        if (bVar6 != 0x7b) {
          if (bVar6 != 0x7d) goto LAB_010b493c;
          iVar5 = iVar5 + -1;
          if (iVar5 != 0) goto LAB_010b4938;
          pbVar3 = pbVar3 + 1;
          goto LAB_010b4b50;
        }
        iVar8 = 0;
        iVar5 = iVar5 + 1;
        pbVar3 = pbVar3 + 1;
      }
    } while (pbVar3 < pbVar10);
LAB_010b4b48:
    if (iVar5 == 0 && iVar8 == 0) {
LAB_010b4b50:
      param_2[1] = pbVar3;
      pbVar10 = pbVar3;
      goto joined_r0x010b4b18;
    }
  }
  else {
    if (bVar6 == 0x5b) {
      *param_2 = pbVar3;
      *(undefined4 *)(param_2 + 2) = 3;
      *param_1 = (long)(pbVar3 + 1);
      pbVar3 = pbVar3 + 1;
      do {
        if ((pbVar10 <= pbVar3) || (bVar6 = *pbVar3, 0x25 < bVar6)) goto LAB_010b49f8;
        if ((1L << ((ulong)bVar6 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar6 != 0x25) goto LAB_010b49f8;
          bVar6 = 0x25;
          while (((pbVar4 = pbVar3 + 1, bVar6 != 10 && (bVar6 != 0xd)) &&
                 (pbVar3 = pbVar4, pbVar4 < pbVar10))) {
            bVar6 = *pbVar4;
          }
        }
        pbVar3 = pbVar3 + 1;
      } while( true );
    }
    if (bVar6 == 0x28) {
      *(undefined4 *)(param_2 + 2) = 2;
      iVar5 = 0;
      *param_2 = pbVar3;
      pbVar4 = pbVar3;
      do {
        while( true ) {
          pbVar3 = pbVar4 + 1;
          bVar6 = *pbVar4;
          if (bVar6 != 0x5c) break;
          if (pbVar3 == pbVar10) {
            pbVar3 = pbVar10;
            pbVar10 = (byte *)param_2[1];
            goto joined_r0x010b4b18;
          }
          switch(*pbVar3) {
          case 0x28:
          case 0x29:
          case 0x5c:
          case 0x62:
          case 0x66:
          case 0x6e:
          case 0x72:
          case 0x74:
            pbVar3 = pbVar4 + 2;
            break;
          default:
            if ((pbVar3 < pbVar10) && ((*pbVar3 & 0xf8) == 0x30)) {
              lVar7 = 2;
              do {
                pbVar3 = pbVar4 + lVar7;
                if ((pbVar10 <= pbVar3) || (2 < (int)lVar7 - 1U)) break;
                lVar7 = lVar7 + 1;
              } while ((*pbVar3 & 0xf8) == 0x30);
            }
          }
LAB_010b4674:
          pbVar4 = pbVar3;
          if (pbVar10 <= pbVar3) goto LAB_010b4afc;
        }
        if (bVar6 == 0x28) {
          iVar5 = iVar5 + 1;
        }
        else {
          if (bVar6 != 0x29) goto LAB_010b4674;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            param_2[1] = pbVar3;
            goto LAB_010b4b5c;
          }
        }
        pbVar4 = pbVar3;
      } while (pbVar3 < pbVar10);
    }
    else {
      *param_2 = pbVar3;
      uVar2 = 4;
      if (*pbVar3 != 0x2f) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_2 + 2) = uVar2;
      FUN_010b343c(param_1);
      pbVar3 = (byte *)*param_1;
      if ((int)param_1[3] == 0) goto LAB_010b4b50;
    }
  }
  goto LAB_010b4afc;
LAB_010b4ac0:
  *param_1 = (long)pbVar3;
  iVar5 = iVar8;
  if (pbVar10 <= pbVar3) goto LAB_010b4afc;
  goto LAB_010b4a14;
LAB_010b49f8:
  *param_1 = (long)pbVar3;
  if (pbVar3 < pbVar10) {
    iVar5 = 1;
LAB_010b4a14:
    if ((int)param_1[3] == 0) {
      if (*pbVar3 == 0x5d) {
        iVar8 = iVar5 + -1;
        if (iVar8 == 0 || iVar5 < 1) {
          pbVar3 = pbVar3 + 1;
          param_2[1] = pbVar3;
          goto LAB_010b4b5c;
        }
      }
      else {
        iVar8 = iVar5;
        if (*pbVar3 == 0x5b) {
          iVar8 = iVar5 + 1;
        }
      }
      *param_1 = (long)pbVar3;
      FUN_010b343c(param_1);
      pbVar3 = (byte *)*param_1;
      do {
        if (((byte *)param_1[2] <= pbVar3) || (bVar6 = *pbVar3, 0x25 < bVar6)) goto LAB_010b4ac0;
        if ((1L << ((ulong)bVar6 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar6 != 0x25) goto LAB_010b4ac0;
          bVar6 = 0x25;
          while (((pbVar4 = pbVar3 + 1, bVar6 != 10 && (bVar6 != 0xd)) &&
                 (pbVar3 = pbVar4, pbVar4 < (byte *)param_1[2]))) {
            bVar6 = *pbVar4;
          }
        }
        pbVar3 = pbVar3 + 1;
      } while( true );
    }
  }
LAB_010b4afc:
  pbVar10 = (byte *)param_2[1];
joined_r0x010b4b18:
  if (pbVar10 == (byte *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
LAB_010b4b5c:
  *param_1 = (long)pbVar3;
  return;
}

