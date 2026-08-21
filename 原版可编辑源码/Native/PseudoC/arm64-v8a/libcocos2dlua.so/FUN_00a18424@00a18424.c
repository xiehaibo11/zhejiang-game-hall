
void FUN_00a18424(long param_1,ushort *param_2,uint param_3,ulong param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  uint uVar24;
  undefined2 local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar17 = *(uint *)(param_1 + 0x44);
  uVar18 = uVar17 & 0xff;
  uVar21 = uVar17 >> 8 & 0xff;
  uVar5 = uVar17 >> 0x10;
  if ((param_3 & 0xffffff80) == 0xe0000) {
    param_3 = param_3 & 0x7f;
    uVar19 = param_3 + 0x20;
    if (0x19 < (param_3 - 0x41 & 0xff)) {
      uVar19 = param_3;
    }
    switch(uVar19) {
    case 0x61:
      if (uVar5 != 5) break;
      uVar18 = uVar18 | uVar21 << 8 | 0x10000;
LAB_00a189c4:
      uVar13 = 0;
      goto LAB_00a189e4;
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x69:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
      break;
    case 0x68:
      if (uVar5 == 7) {
        uVar18 = uVar18 | uVar21 << 8 | 0x30000;
        goto LAB_00a189c4;
      }
      break;
    case 0x6a:
      if (uVar5 == 4) {
        uVar18 = uVar18 | uVar21 << 8 | 0x50000;
        goto LAB_00a189c4;
      }
      break;
    case 0x6b:
      if (uVar5 == 4) {
        uVar18 = uVar18 | uVar21 << 8 | 0x60000;
        goto LAB_00a189c4;
      }
      break;
    case 0x6f:
      if (uVar5 == 6) {
        uVar18 = uVar18 | uVar21 << 8 | 0x20000;
        goto LAB_00a189c4;
      }
      break;
    case 0x7a:
      if (uVar5 == 4) {
        uVar18 = uVar18 | uVar21 << 8 | 0x70000;
        goto LAB_00a189c4;
      }
      break;
    case 0x7f:
      uVar13 = 0;
      *(uint *)(param_1 + 0x44) = uVar18 | uVar21 << 8;
      goto LAB_00a189e8;
    default:
      if (uVar19 == 1) {
        uVar18 = uVar18 | uVar21 << 8 | 0x40000;
        goto LAB_00a189c4;
      }
    }
    uVar19 = 0;
    if (uVar17 >> 0x12 == 0) {
      uVar19 = uVar17 & 0xffff0000;
    }
    uVar13 = 0;
    uVar19 = uVar19 | uVar18;
  }
  else {
    uVar19 = 0;
    if (uVar17 >> 0x12 == 0) {
      uVar19 = uVar5;
    }
    bVar7 = (byte)param_3;
    if (0x7f < param_3) {
LAB_00a18530:
      uVar17 = 1 << (ulong)(param_3 & 0xf);
      uVar5 = param_3 >> 4;
      bVar9 = param_3 - 0x2100 < 0x30;
      bVar10 = 0x51a < param_3 - 0x4e00 >> 4;
      bVar14 = 0xa5;
      if (param_3 != 0x20af) {
        bVar14 = 0;
      }
      bVar11 = param_3 < 0x460;
      puVar1 = (ushort *)(&DAT_0130e75a + (ulong)uVar5 * 4);
      if (!bVar11) {
        puVar1 = (ushort *)(&UNK_0130e872 + (ulong)(uVar5 - 0x210) * 4);
      }
      uVar6 = param_3 - 0x378;
      if (!bVar11 && !bVar9) {
        puVar1 = (ushort *)(&UNK_0130e87e + (ulong)(uVar5 - 0x4e0) * 4);
      }
      uVar22 = *(uint *)(&DAT_012fc634 + (ulong)uVar19 * 4);
      if ((!bVar11 && !bVar9) && bVar10) {
        puVar1 = (ushort *)(&DAT_0130fcea + (ulong)(uVar5 - 0xff0) * 4);
      }
      pbVar2 = &DAT_012fd63c + uVar6;
      if (0x57 < uVar6) {
        pbVar2 = &DAT_012fc5e4 + (param_3 - 0x2010);
      }
      pbVar3 = &DAT_012fc8f4 + (param_3 - 0xa0);
      if (param_3 >= 0xc0) {
        pbVar3 = &DAT_012fc5e4 + (param_3 - 0x2010);
      }
      cVar23 = bVar7 + 0x40;
      do {
        switch(uVar22 & 7) {
        case 1:
          if (param_3 < 0x100) {
            local_6c = CONCAT11(local_6c._1_1_,bVar7);
            if ((char)bVar7 < '\0') {
              uVar17 = 3;
              if (uVar21 != 1) {
                uVar17 = 6;
              }
              uVar13 = (ulong)uVar17;
              if (param_4 < uVar13) {
LAB_00a18b24:
                uVar13 = 0xfffffffe;
                goto LAB_00a189e8;
              }
              if (uVar21 != 1) {
                *param_2 = 0x2e1b;
                *(char *)(param_2 + 1) = 'A';
                param_2 = (ushort *)((long)param_2 + 3);
              }
              *param_2 = 0x4e1b;
              uVar18 = uVar18 | uVar19 << 0x10 | 0x100;
              *(byte *)(param_2 + 1) = bVar7 ^ 0x80;
              goto LAB_00a189e4;
            }
            if (0x9f < param_3) {
              pbVar20 = pbVar3;
              if (param_3 < 0xc0 || uVar5 == 0x201) goto LAB_00a18800;
              goto LAB_00a186f4;
            }
            local_6c = CONCAT11(local_6c._1_1_,bVar7);
          }
          else {
            pbVar20 = pbVar2;
            if (0x57 < uVar6 && uVar5 != 0x201) {
LAB_00a186f4:
              bVar16 = bVar14;
              if (param_3 != 0x20ac) goto joined_r0x00a18808;
              bVar16 = 0xa4;
              local_6c = CONCAT11(local_6c._1_1_,0xa4);
LAB_00a18a60:
              uVar17 = 3;
              if (uVar21 != 2) {
                uVar17 = 6;
              }
              uVar13 = (ulong)uVar17;
              if (param_4 < uVar13) goto LAB_00a18b94;
              if (uVar21 != 2) {
                *(char *)(param_2 + 1) = 'F';
                *param_2 = 0x2e1b;
                param_2 = (ushort *)((long)param_2 + 3);
              }
              *(byte *)(param_2 + 1) = bVar16 ^ 0x80;
              uVar18 = uVar18 | uVar19 << 0x10 | 0x200;
              *param_2 = 0x4e1b;
              goto LAB_00a189e4;
            }
LAB_00a18800:
            bVar16 = *pbVar20;
joined_r0x00a18808:
            if (bVar16 != 0) {
              local_6c._1_1_ = (char)(local_6c >> 8);
              local_6c = CONCAT11(local_6c._1_1_,bVar16);
              if ((char)bVar16 < '\0') goto LAB_00a18a60;
            }
          }
          break;
        case 2:
          if (0x7f < param_3) {
            if (param_3 == 0xa5) {
              uVar24 = 0x5c;
LAB_00a18b70:
              cVar23 = (char)uVar24;
              local_6c = CONCAT11(local_6c._1_1_,cVar23);
            }
            else {
              if (param_3 == 0x203e) {
                uVar24 = 0x7e;
                goto LAB_00a18b70;
              }
              if ((0x3e < param_3 - 0xff61) ||
                 (local_6c = CONCAT11(local_6c._1_1_,cVar23), cVar23 < '\0')) goto LAB_00a1882c;
            }
            uVar17 = 4;
            if (uVar18 == 1) {
              uVar17 = 1;
            }
            uVar13 = (ulong)uVar17;
            if (param_4 < uVar13) goto LAB_00a18b94;
            if (uVar18 != 1) {
              *param_2 = 0x281b;
              *(char *)(param_2 + 1) = 'J';
              param_2 = (ushort *)((long)param_2 + 3);
            }
            *(char *)param_2 = cVar23;
            if ((param_3 == 0xd) || (param_3 == 10)) {
              uVar21 = 0;
            }
            uVar18 = uVar21 << 8 | uVar19 << 0x10 | 1;
            goto LAB_00a189e4;
          }
          if ((param_3 != 0x5c) && (uVar24 = param_3, param_3 != 0x7e)) goto LAB_00a18b70;
LAB_00a1882c:
          iVar12 = FUN_00a153d0(param_1,&local_6c,param_3,2);
          if (iVar12 != -1) {
            if (iVar12 != 2) {
switchD_00a186c8_default:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if ((-1 < (char)local_6c) && (-1 < (short)local_6c)) {
              uVar17 = 2;
              if (uVar18 != 3) {
                uVar17 = 5;
              }
              uVar13 = (ulong)uVar17;
              if (uVar13 <= param_4) {
                if (uVar18 != 3) {
                  *param_2 = 0x241b;
                  *(char *)(param_2 + 1) = 'B';
                  param_2 = (ushort *)((long)param_2 + 3);
                }
                *(char *)param_2 = (char)local_6c;
                uVar18 = uVar19 << 0x10 | uVar21 << 8 | 3;
                goto LAB_00a18d0c;
              }
              goto LAB_00a18b24;
            }
          }
          if ((((bVar11 || bVar9) || !bVar10) || param_3 - 0xff00 < 0x60) &&
             ((uVar17 & puVar1[1]) != 0)) {
            uVar24 = (uint)puVar1[1] & uVar17 - 1;
            uVar24 = (uVar24 >> 1 & 0x55555555) + (uVar24 & 0x55555555);
            uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
            uVar24 = (uVar24 >> 4 & 0xffffff0f) + (uVar24 & 0xf0f0f0f);
            uVar4 = *(ushort *)
                     (&DAT_0130fd02 + ((ulong)*puVar1 + (ulong)((uVar24 & 0xf) + (uVar24 >> 8))) * 2
                     );
            local_6c = uVar4 >> 8 | uVar4 << 8;
            if (((ushort)(uVar4 | uVar4 >> 8) >> 7 & 1) == 0) {
              uVar17 = 2;
              if (uVar18 != 4) {
                uVar17 = 6;
              }
              uVar13 = (ulong)uVar17;
              if (param_4 < uVar13) goto LAB_00a18b94;
              if (uVar18 != 4) {
                param_2[0] = 0x241b;
                param_2[1] = 0x4428;
                param_2 = param_2 + 2;
              }
              *param_2 = local_6c;
              uVar18 = uVar19 << 0x10 | uVar21 << 8 | 4;
              goto LAB_00a189e4;
            }
          }
          break;
        case 3:
          iVar12 = FUN_00a158bc(param_1,&local_6c,param_3,2);
          if (iVar12 != -1) {
            if (iVar12 != 2) goto switchD_00a186c8_default;
            if ((-1 < (char)local_6c) && (-1 < (short)local_6c)) {
              uVar17 = 2;
              if (uVar18 != 5) {
                uVar17 = 5;
              }
              uVar13 = (ulong)uVar17;
              if (param_4 < uVar13) goto LAB_00a18b94;
              if (uVar18 != 5) {
                *param_2 = 0x241b;
                *(char *)(param_2 + 1) = 'A';
                param_2 = (ushort *)((long)param_2 + 3);
              }
              *(char *)param_2 = (char)local_6c;
              *(char *)((long)param_2 + 1) = local_6c._1_1_;
              uVar18 = uVar19 << 0x10 | uVar21 << 8 | 5;
              goto LAB_00a189e4;
            }
          }
          break;
        case 4:
          iVar12 = FUN_00a15fac(param_1,&local_6c,param_3,2);
          if (iVar12 != -1) {
            if (iVar12 != 2) goto switchD_00a186c8_default;
            if ((-1 < (char)local_6c) && (-1 < (short)local_6c)) {
              uVar17 = 2;
              if (uVar18 != 6) {
                uVar17 = 6;
              }
              uVar13 = (ulong)uVar17;
              if (param_4 < uVar13) goto LAB_00a18b94;
              if (uVar18 != 6) {
                param_2[0] = 0x241b;
                param_2[1] = 0x4328;
                param_2 = param_2 + 2;
              }
              *(char *)param_2 = (char)local_6c;
              uVar18 = uVar19 << 0x10 | uVar21 << 8 | 6;
LAB_00a18d0c:
              *(char *)((long)param_2 + 1) = local_6c._1_1_;
              goto LAB_00a189e4;
            }
          }
          break;
        case 5:
          if (param_3 < 0x80) {
            if ((param_3 != 0x5c) && (param_3 != 0x7e)) {
              local_6c = CONCAT11(local_6c._1_1_,bVar7);
            }
          }
          else {
            if (param_3 == 0x203e) {
              uVar15 = 0x7e;
            }
            else {
              if (param_3 != 0xa5) {
                if ((0x3e < param_3 - 0xff61) ||
                   (local_6c = CONCAT11(local_6c._1_1_,cVar23), -1 < cVar23)) break;
                uVar17 = 4;
                if (uVar18 == 2) {
                  uVar17 = 1;
                }
                uVar13 = (ulong)uVar17;
                if (param_4 < uVar13) goto LAB_00a18b94;
                if (uVar18 != 2) {
                  *(char *)(param_2 + 1) = 'I';
                  *param_2 = 0x281b;
                  param_2 = (ushort *)((long)param_2 + 3);
                }
                *(byte *)param_2 = bVar7 - 0x40;
                uVar18 = uVar19 << 0x10 | uVar21 << 8 | 2;
                goto LAB_00a189e4;
              }
              uVar15 = 0x5c;
            }
            local_6c = CONCAT11(local_6c._1_1_,uVar15);
          }
          break;
        default:
          goto switchD_00a186c8_default;
        }
        uVar22 = uVar22 >> 3;
      } while (uVar22 != 0);
      uVar13 = 0xffffffff;
      goto LAB_00a189e8;
    }
    local_6c = CONCAT11(local_6c._1_1_,bVar7);
    if ((char)bVar7 < '\0') goto LAB_00a18530;
    uVar17 = 4;
    if (uVar18 == 0) {
      uVar17 = 1;
    }
    uVar13 = (ulong)uVar17;
    if (param_4 < uVar13) {
LAB_00a18b94:
      uVar13 = 0xfffffffe;
      goto LAB_00a189e8;
    }
    if (uVar18 != 0) {
      *param_2 = 0x281b;
      *(char *)(param_2 + 1) = 'B';
      param_2 = (ushort *)((long)param_2 + 3);
    }
    *(byte *)param_2 = bVar7;
    if ((param_3 == 0xd) || (param_3 == 10)) {
      uVar21 = 0;
    }
    uVar19 = uVar19 << 0x10;
  }
  uVar18 = uVar19 & 0xffff0000 | uVar19 & 0xff | uVar21 << 8;
LAB_00a189e4:
  *(uint *)(param_1 + 0x44) = uVar18;
LAB_00a189e8:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

