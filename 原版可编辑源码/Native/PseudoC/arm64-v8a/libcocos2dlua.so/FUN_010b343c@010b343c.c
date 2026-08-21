
/* WARNING: Removing unreachable block (ram,0x010b359c) */

void FUN_010b343c(undefined8 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  
  pbVar3 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[2];
  pbVar5 = pbVar3;
  if (pbVar2 <= pbVar3) {
    if (pbVar3 < pbVar2) goto LAB_010b34d8;
    goto LAB_010b3894;
  }
  do {
    bVar8 = *pbVar5;
    if (0x25 < bVar8) break;
    if ((1L << ((ulong)bVar8 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar8 != 0x25) break;
      bVar8 = 0x25;
      while (((pbVar4 = pbVar5 + 1, bVar8 != 10 && (bVar8 != 0xd)) &&
             (pbVar5 = pbVar4, pbVar4 < pbVar2))) {
        bVar8 = *pbVar4;
      }
    }
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < pbVar2);
  if (pbVar2 <= pbVar5) goto LAB_010b3894;
LAB_010b34d8:
  pbVar4 = pbVar5;
  switch(*pbVar5) {
  case 0x28:
    iVar7 = 0;
    do {
      while( true ) {
        pbVar4 = pbVar5 + 1;
        bVar8 = *pbVar5;
        if (bVar8 != 0x5c) break;
        if (pbVar4 == pbVar2) {
          iVar6 = 3;
          pbVar5 = pbVar2;
          goto switchD_010b3884_caseD_0;
        }
        switch(*pbVar4) {
        case 0x28:
        case 0x29:
        case 0x5c:
        case 0x62:
        case 0x66:
        case 0x6e:
        case 0x72:
        case 0x74:
          pbVar4 = pbVar5 + 2;
          break;
        default:
          if ((pbVar4 < pbVar2) && ((*pbVar4 & 0xf8) == 0x30)) {
            lVar10 = 2;
            do {
              pbVar4 = pbVar5 + lVar10;
              if ((pbVar2 <= pbVar4) || (2 < (int)lVar10 - 1U)) break;
              lVar10 = lVar10 + 1;
            } while ((*pbVar4 & 0xf8) == 0x30);
          }
        }
joined_r0x010b3850:
        pbVar5 = pbVar4;
        pbVar4 = pbVar5;
        if (pbVar2 <= pbVar5) goto LAB_010b39c8;
      }
      if (bVar8 == 0x28) {
        iVar7 = iVar7 + 1;
        goto joined_r0x010b3850;
      }
      if (bVar8 != 0x29) goto joined_r0x010b3850;
      iVar7 = iVar7 + -1;
      iVar6 = 0;
      pbVar5 = pbVar4;
      if (iVar7 == 0) goto switchD_010b3884_caseD_0;
    } while (pbVar4 < pbVar2);
    goto LAB_010b39c8;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5c:
    break;
  case 0x2f:
    pbVar5 = pbVar5 + 1;
    break;
  case 0x3c:
    pbVar4 = pbVar5 + 1;
    if (pbVar4 < pbVar2) {
      if (*pbVar4 != 0x3c) {
LAB_010b38dc:
        do {
          bVar8 = *pbVar4;
          if (bVar8 < 0x26) {
            if ((1L << ((ulong)bVar8 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar8 != 0x25) goto LAB_010b3940;
              bVar8 = 0x25;
                    /* try { // try from 010b3928 to 011b392f has its CatchHandler @ 010b39c0 */
                    /* try { // try from 010b3930 to 011b39db has its CatchHandler @ 010b32c0 */
              while (((pbVar5 = pbVar4 + 1, bVar8 != 10 && (bVar8 != 0xd)) &&
                     (pbVar4 = pbVar5, pbVar5 < pbVar2))) {
                bVar8 = *pbVar5;
              }
            }
            pbVar4 = pbVar4 + 1;
            if (pbVar4 < pbVar2) goto LAB_010b38dc;
          }
LAB_010b3940:
          if ((pbVar2 <= pbVar4) ||
             (((9 < *pbVar4 - 0x30 &&
               ((uVar1 = *pbVar4 - 0x41, 0x25 < uVar1 ||
                ((1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0)))) ||
              (pbVar4 = pbVar4 + 1, pbVar2 <= pbVar4)))) goto LAB_010b39b4;
        } while( true );
      }
      goto LAB_010b3998;
    }
LAB_010b39b4:
                    /* catch() { ... } // from try @ 010b3928 with catch @ 010b39c0 */
    if ((pbVar2 <= pbVar4) || (*pbVar4 == 0x3e)) goto switchD_010b34f8_caseD_5b;
LAB_010b39c8:
    iVar6 = 3;
    pbVar5 = pbVar4;
    goto switchD_010b3884_caseD_0;
  case 0x3e:
    pbVar4 = pbVar5 + 1;
    if ((pbVar2 <= pbVar4) || (*pbVar4 != 0x3e)) {
      iVar6 = 3;
      pbVar5 = pbVar4;
      goto switchD_010b3884_caseD_0;
    }
LAB_010b3998:
    iVar6 = 0;
    pbVar5 = pbVar5 + 2;
    goto switchD_010b3884_caseD_0;
  case 0x5b:
  case 0x5d:
switchD_010b34f8_caseD_5b:
    iVar6 = 0;
    pbVar5 = pbVar4 + 1;
    goto switchD_010b3884_caseD_0;
  default:
    if (*pbVar5 == 0x7b) {
      iVar7 = 0;
      bVar8 = 0x7b;
LAB_010b360c:
      iVar6 = 0;
      if (bVar8 < 0x3c) {
        if (bVar8 == 0x25) {
          bVar8 = 0x25;
          while (((pbVar4 = pbVar5 + 1, bVar8 != 10 && (bVar8 != 0xd)) &&
                 (pbVar5 = pbVar4, pbVar4 < pbVar2))) {
            bVar8 = *pbVar4;
          }
LAB_010b35e4:
          iVar6 = 0;
        }
        else if (bVar8 == 0x28) {
          if (pbVar2 <= pbVar5) {
LAB_010b35d0:
            iVar6 = 3;
            pbVar5 = pbVar5 + 1;
LAB_010b39f0:
            if (iVar7 != 0) {
              iVar6 = 3;
            }
            goto switchD_010b3884_caseD_0;
          }
          iVar9 = 0;
          pbVar4 = pbVar5;
          do {
            while( true ) {
              pbVar5 = pbVar4 + 1;
              bVar8 = *pbVar4;
              if (bVar8 != 0x5c) break;
              if (pbVar5 == pbVar2) {
                iVar6 = 3;
                pbVar5 = pbVar2 + 1;
                goto LAB_010b39f0;
              }
              switch(*pbVar5) {
              case 0x28:
              case 0x29:
              case 0x5c:
              case 0x62:
              case 0x66:
              case 0x6e:
              case 0x72:
              case 0x74:
                pbVar5 = pbVar4 + 2;
                break;
              default:
                if ((pbVar5 < pbVar2) && ((*pbVar5 & 0xf8) == 0x30)) {
                  lVar10 = 2;
                  do {
                    pbVar5 = pbVar4 + lVar10;
                    if ((pbVar2 <= pbVar5) || (2 < (int)lVar10 - 1U)) break;
                    lVar10 = lVar10 + 1;
                  } while ((*pbVar5 & 0xf8) == 0x30);
                }
              }
LAB_010b3780:
              pbVar4 = pbVar5;
              if (pbVar2 <= pbVar5) goto LAB_010b35d0;
            }
            if (bVar8 == 0x28) {
              iVar9 = iVar9 + 1;
            }
            else {
              if (bVar8 != 0x29) goto LAB_010b3780;
              iVar9 = iVar9 + -1;
              if (iVar9 == 0) goto LAB_010b35e4;
            }
            iVar6 = 3;
            pbVar4 = pbVar5;
          } while (pbVar5 < pbVar2);
        }
LAB_010b35e8:
        pbVar5 = pbVar5 + 1;
        if (iVar6 != 0) goto LAB_010b39f0;
      }
      else if (bVar8 == 0x3c) {
        while (pbVar5 = pbVar5 + 1, pbVar5 < pbVar2) {
          do {
            bVar8 = *pbVar5;
            if (0x25 < bVar8) break;
            if ((1L << ((ulong)bVar8 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar8 != 0x25) break;
              bVar8 = 0x25;
              while (((pbVar4 = pbVar5 + 1, bVar8 != 10 && (bVar8 != 0xd)) &&
                     (pbVar5 = pbVar4, pbVar4 < pbVar2))) {
                bVar8 = *pbVar4;
              }
            }
            pbVar5 = pbVar5 + 1;
          } while (pbVar5 < pbVar2);
          if ((pbVar2 <= pbVar5) ||
             ((9 < *pbVar5 - 0x30 &&
              ((uVar1 = *pbVar5 - 0x41, 0x25 < uVar1 ||
               ((1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0)))))) break;
        }
        if ((pbVar5 < pbVar2) && (*pbVar5 != 0x3e)) {
          pbVar5 = pbVar5 + 1;
          iVar6 = 3;
          goto LAB_010b39f0;
        }
        iVar6 = 0;
        pbVar5 = pbVar5 + 2;
      }
      else {
        if (bVar8 != 0x7b) {
          iVar6 = 0;
          if (bVar8 != 0x7d) goto LAB_010b35e8;
          iVar7 = iVar7 + -1;
          if (iVar7 != 0) goto LAB_010b35e4;
          iVar6 = 0;
          pbVar5 = pbVar5 + 1;
          goto LAB_010b39f0;
        }
        iVar6 = 0;
        iVar7 = iVar7 + 1;
        pbVar5 = pbVar5 + 1;
      }
      if (pbVar2 <= pbVar5) goto LAB_010b39f0;
      bVar8 = *pbVar5;
      goto LAB_010b360c;
    }
  }
  while (pbVar5 < pbVar2) {
    iVar6 = 0;
    switch(*pbVar5) {
    case 0:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2f:
    case 0x3c:
    case 0x3e:
    case 0x5b:
    case 0x5d:
    case 0x7b:
    case 0x7d:
      goto switchD_010b3884_caseD_0;
    default:
      pbVar5 = pbVar5 + 1;
    }
  }
LAB_010b3894:
  iVar6 = 0;
switchD_010b3884_caseD_0:
  iVar7 = 3;
  if (pbVar3 != pbVar5 || pbVar2 <= pbVar5) {
    iVar7 = iVar6;
  }
  *(int *)(param_1 + 3) = iVar7;
  *param_1 = pbVar5;
  return;
}

