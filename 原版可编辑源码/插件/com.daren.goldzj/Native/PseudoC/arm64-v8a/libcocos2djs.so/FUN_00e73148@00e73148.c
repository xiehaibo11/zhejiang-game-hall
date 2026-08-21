
/* WARNING: Type propagation algorithm not settling */

int FUN_00e73148(long *param_1,long param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  void *__dest;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 local_b8 [2];
  int local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int local_94;
  byte *local_90;
  byte *local_88;
  byte *pbStack_80;
  int local_78;
  byte *local_70 [2];
  
  FUN_00e72cdc(param_1,&local_88);
  if (local_78 != 0) {
    local_90 = local_88;
    iVar11 = *(int *)(param_2 + 0xc);
    pbVar22 = pbStack_80;
    if (iVar11 == 7) {
      lVar20 = *param_1;
      lVar21 = param_1[2];
      *param_1 = (long)(local_88 + 1);
      param_1[2] = (long)(pbStack_80 + -1);
      FUN_00e72cdc(param_1,local_b8);
      *param_1 = lVar20;
      param_1[2] = lVar21;
      uVar19 = 1;
      if (local_a8 != 3) {
        lVar20 = 0;
        iVar11 = 7;
        goto LAB_00e7322c;
      }
      iVar11 = 8;
    }
    else {
      uVar19 = param_4;
      if (local_78 != 3) {
        lVar20 = 0;
        uVar19 = 1;
        goto LAB_00e7322c;
      }
    }
    if (param_4 != 0) {
      local_88 = local_88 + 1;
      if (uVar19 == 0) {
        return 0;
      }
      lVar20 = 1;
      pbVar22 = pbStack_80 + -1;
LAB_00e7322c:
      lVar21 = *(long *)(param_3 + lVar20 * 8);
      uVar8 = *(uint *)(param_2 + 0x18);
      do {
        pbVar13 = local_88;
        while (pbVar13 < pbVar22) {
          bVar15 = *pbVar13;
          if (0x25 < bVar15) break;
          if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar15 != 0x25) break;
            bVar2 = 0x25;
            while ((pbVar13 = pbVar13 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
              if (pbVar22 <= pbVar13) goto LAB_00e73288;
              bVar15 = *pbVar13;
              bVar2 = bVar15;
            }
          }
          else {
LAB_00e73288:
            pbVar13 = pbVar13 + 1;
          }
        }
        if (7 < iVar11 - 1U) {
          return 3;
        }
        puVar1 = (ulong *)(lVar21 + (ulong)uVar8);
        local_90 = pbVar13;
        switch(iVar11) {
        case 1:
          if ((((pbVar22 <= pbVar13 + 3) || (*pbVar13 != 0x74)) || (pbVar13[1] != 0x72)) ||
             ((pbVar13[2] != 0x75 || (pbVar13[3] != 0x65)))) {
            if ((((pbVar13 + 4 < pbVar22) && ((*pbVar13 == 0x66 && (pbVar13[1] == 0x61)))) &&
                (pbVar13[2] == 0x6c)) && (pbVar13[3] == 0x73)) {
              local_90 = pbVar13 + 6;
              if (pbVar13[4] != 0x65) {
                local_90 = pbVar13;
              }
              cVar10 = *(char *)(param_2 + 0x1c);
              goto joined_r0x00e73d08;
            }
            uVar24 = 0;
            cVar10 = *(char *)(param_2 + 0x1c);
            goto joined_r0x00e73d08;
          }
          local_90 = pbVar13 + 5;
          uVar24 = 1;
          cVar10 = *(char *)(param_2 + 0x1c);
          if (cVar10 == '\x04') goto LAB_00e73884;
          goto LAB_00e7351c;
        case 2:
          if (pbVar22 <= pbVar13) {
LAB_00e73cfc:
            cVar10 = *(char *)(param_2 + 0x1c);
joined_r0x00e73d08:
            uVar24 = 0;
            goto joined_r0x00e73d08;
          }
          bVar15 = *pbVar13;
          if ((bVar15 == 0x2d) || (bVar15 == 0x2b)) {
            pbVar14 = pbVar13 + 1;
            if (pbVar14 != pbVar22) {
              bVar7 = bVar15 == 0x2d;
              bVar15 = *pbVar14;
              uVar24 = 0;
              if ((bVar15 != 0x2b) && (bVar15 != 0x2d)) goto joined_r0x00e73424;
              goto LAB_00e73510;
            }
            goto LAB_00e73cfc;
          }
          bVar7 = false;
          pbVar14 = pbVar13;
joined_r0x00e73424:
          if (pbVar14 < pbVar22) {
            uVar24 = 0;
            bVar3 = false;
            pbVar12 = pbVar14;
            while( true ) {
              pbVar5 = pbVar14 + 1;
              if (((bVar15 < 0x21) && ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) != 0)) ||
                 (pbVar14 = pbVar12, (char)bVar15 < '\0')) break;
              cVar10 = (&DAT_0197bb0c)[(ulong)bVar15 & 0x7f];
              if (((long)cVar10 < 0) || ('\t' < cVar10)) break;
              if ((long)uVar24 < 0xccccccd) {
                if ((uVar24 == 0xccccccc) && ('\a' < cVar10)) {
                  bVar3 = true;
                  uVar24 = 0xccccccc;
                }
                else {
                  uVar24 = (long)cVar10 + uVar24 * 10;
                }
              }
              else {
                bVar3 = true;
              }
              pbVar14 = pbVar12 + 1;
              if (pbVar22 <= pbVar5) break;
              pbVar12 = pbVar12 + 1;
              bVar15 = *pbVar5;
              pbVar14 = pbVar5;
            }
            if (bVar3) {
              uVar24 = 0x7fffffff;
            }
            uVar16 = -uVar24;
            if (!bVar7) {
              uVar16 = uVar24;
            }
            if (pbVar14 != pbVar13) goto LAB_00e73bd0;
            goto LAB_00e73cfc;
          }
          uVar16 = 0;
          if (pbVar14 == pbVar13) goto LAB_00e73cfc;
LAB_00e73bd0:
          if ((pbVar22 <= pbVar14) || (*pbVar14 != 0x23)) {
LAB_00e73e18:
            cVar10 = *(char *)(param_2 + 0x1c);
            uVar24 = uVar16;
            local_90 = pbVar14;
            goto joined_r0x00e73d08;
          }
          pbVar13 = pbVar14 + 1;
          uVar24 = 0;
          if ((pbVar13 < pbVar22) && (uVar16 - 2 < 0x23)) {
            bVar15 = *pbVar13;
            if ((bVar15 == 0x2d) || (bVar15 == 0x2b)) {
              pbVar13 = pbVar14 + 2;
              if (pbVar13 == pbVar22) goto LAB_00e73cfc;
              bVar7 = bVar15 == 0x2d;
              bVar15 = *pbVar13;
              uVar24 = 0;
              if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_00e73510;
              lVar21 = 2;
            }
            else {
              bVar7 = false;
              lVar21 = 1;
            }
            lVar23 = lVar21;
            if (pbVar13 < pbVar22) {
              uVar8 = 0;
              if ((uint)uVar16 != 0) {
                uVar8 = 0x7fffffff / (uint)uVar16;
              }
              uVar18 = (ulong)uVar8;
              uVar24 = 0;
              bVar3 = false;
              while( true ) {
                lVar6 = lVar23 + 1;
                if (((bVar15 < 0x21) && ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) != 0)) ||
                   (lVar23 = lVar21, (char)bVar15 < '\0')) break;
                cVar10 = (&DAT_0197bb0c)[(ulong)bVar15 & 0x7f];
                iVar17 = (int)cVar10;
                if ((iVar17 < 0) || ((long)uVar16 <= (long)iVar17)) break;
                if ((long)uVar18 < (long)uVar24) {
                  bVar3 = true;
                }
                else if ((uVar24 == uVar18) && ((char)(-1 - (char)uVar8 * (char)uVar16) < cVar10)) {
                  bVar3 = true;
                  uVar24 = uVar18;
                }
                else {
                  uVar24 = (long)iVar17 + uVar24 * uVar16;
                }
                lVar23 = lVar21 + 1;
                if (pbVar22 <= pbVar14 + lVar6) break;
                lVar21 = lVar21 + 1;
                bVar15 = pbVar14[lVar6];
                lVar23 = lVar6;
              }
              if (bVar3) {
                uVar24 = 0x7fffffff;
              }
              uVar16 = -uVar24;
              if (!bVar7) {
                uVar16 = uVar24;
              }
            }
            else {
              uVar16 = 0;
            }
            if (lVar23 == 1) goto LAB_00e73cfc;
            pbVar14 = pbVar14 + lVar23;
            goto LAB_00e73e18;
          }
          goto LAB_00e73510;
        case 3:
          uVar9 = 0;
          break;
        case 4:
          uVar9 = 3;
          break;
        default:
          if (pbVar13 < pbVar22) {
            lVar21 = param_1[4];
            iVar17 = (int)pbVar22 - (int)pbVar13;
            if (local_78 == 2) {
              uVar8 = iVar17 - 2;
              uVar24 = *puVar1;
            }
            else {
              if (local_78 != 4) {
                return 3;
              }
              uVar8 = iVar17 - 1;
              uVar24 = *puVar1;
            }
            local_90 = pbVar13 + 1;
            if (uVar24 != 0) {
              local_90 = pbVar13 + 1;
              FUN_00e139fc(lVar21);
              *puVar1 = 0;
            }
            __dest = (void *)FUN_00e1388c(lVar21,uVar8 + 1,&local_94);
            if (local_94 != 0) {
              return local_94;
            }
            memcpy(__dest,pbVar13 + 1,(ulong)uVar8);
            *(undefined1 *)((long)__dest + (ulong)uVar8) = 0;
            *puVar1 = (ulong)__dest;
            goto joined_r0x00e73aec;
          }
          goto joined_r0x00e73804;
        case 7:
          if (pbVar22 <= pbVar13) {
            return 3;
          }
          bVar15 = 0x7d;
          if (*pbVar13 != 0x7b) {
            bVar15 = 0;
          }
          bVar2 = 0x5d;
          if (*pbVar13 != 0x5b) {
            bVar2 = bVar15;
          }
          if (bVar2 == 0) {
            if (pbVar22 <= pbVar13) {
              return 3;
            }
            do {
              while( true ) {
                bVar15 = *pbVar13;
                if (0x25 < bVar15) goto LAB_00e73b70;
                if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) break;
LAB_00e73b18:
                pbVar13 = pbVar13 + 1;
                if (pbVar22 <= pbVar13) goto LAB_00e73b70;
              }
              if ((ulong)bVar15 != 0x25) break;
              bVar2 = 0x25;
              while ((pbVar13 = pbVar13 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
                if (pbVar22 <= pbVar13) goto LAB_00e73b18;
                bVar15 = *pbVar13;
                bVar2 = bVar15;
              }
            } while (pbVar13 < pbVar22);
LAB_00e73b70:
            if (pbVar22 <= pbVar13) {
              return 3;
            }
            if (*pbVar13 != 0) {
              local_70[0] = pbVar13;
              FUN_00e775a0(local_70,pbVar22,0);
              return 3;
            }
            uVar24 = 0;
LAB_00e73c7c:
            local_90 = pbVar13 + 1;
            iVar17 = (int)uVar24;
          }
          else {
            if (pbVar22 <= pbVar13 + 1) {
              return 3;
            }
            uVar24 = 0;
            pbVar13 = pbVar13 + 1;
joined_r0x00e73588:
            do {
              if (pbVar13 < pbVar22) {
                bVar15 = *pbVar13;
                if (bVar15 < 0x26) {
                  if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) != 0) {
LAB_00e735a4:
                    pbVar13 = pbVar13 + 1;
                    goto joined_r0x00e73588;
                  }
                  if ((ulong)bVar15 == 0x25) {
                    bVar4 = 0x25;
                    while ((pbVar13 = pbVar13 + 1, bVar15 != 10 && (bVar4 != 0xd))) {
                      if (pbVar22 <= pbVar13) goto LAB_00e735a4;
                      bVar15 = *pbVar13;
                      bVar4 = bVar15;
                    }
                    goto joined_r0x00e73588;
                  }
                }
              }
              local_70[0] = pbVar13;
              if (pbVar22 <= pbVar13) break;
              if (*pbVar13 == bVar2) goto LAB_00e73c7c;
              if (3 < uVar24) break;
              uVar9 = FUN_00e775a0(local_70,pbVar22,0);
              local_b8[uVar24] = uVar9;
              if (local_70[0] == pbVar13) {
                return 3;
              }
              uVar24 = uVar24 + 1;
              pbVar13 = local_70[0];
            } while (local_70[0] < pbVar22);
            iVar17 = (int)uVar24;
            local_90 = local_70[0];
          }
          if (iVar17 < 4) {
            return 3;
          }
          local_70[0] = local_90;
          uVar24 = FT_RoundFix(local_b8[0]);
          *puVar1 = uVar24;
          uVar24 = FT_RoundFix(local_b8[1]);
          puVar1[1] = uVar24;
          uVar24 = FT_RoundFix(CONCAT44(uStack_a4,local_a8));
          puVar1[2] = uVar24;
          uVar24 = FT_RoundFix(local_a0);
          puVar1[3] = uVar24;
          goto joined_r0x00e73aec;
        case 8:
          lVar23 = param_1[4];
          lVar21 = FUN_00e13bcc(lVar23,8,0,param_4 << 2,0,&local_94);
          if (local_94 != 0) {
            return local_94;
          }
          uVar8 = FUN_00e788fc(&local_90,pbVar22,param_4,lVar21,0);
          if (((int)uVar8 < 0) || (uVar8 < param_4)) {
LAB_00e73e3c:
            local_94 = 3;
            FUN_00e139fc(lVar23,lVar21);
            return local_94;
          }
          while (local_90 < pbVar22) {
            bVar15 = *local_90;
            if (0x25 < bVar15) break;
            if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar15 != 0x25) break;
              bVar2 = 0x25;
              while ((local_90 = local_90 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
                if (pbVar22 <= local_90) goto LAB_00e736f8;
                bVar15 = *local_90;
                bVar2 = bVar15;
              }
            }
            else {
LAB_00e736f8:
              local_90 = local_90 + 1;
            }
          }
          uVar8 = FUN_00e788fc(&local_90,pbVar22,param_4,lVar21 + (ulong)param_4 * 8,0);
          if (((int)uVar8 < 0) || (uVar8 < param_4)) goto LAB_00e73e3c;
          while (local_90 < pbVar22) {
            bVar15 = *local_90;
            if (0x25 < bVar15) break;
            if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar15 != 0x25) break;
              bVar2 = 0x25;
              while ((local_90 = local_90 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
                if (pbVar22 <= local_90) goto LAB_00e737a0;
                bVar15 = *local_90;
                bVar2 = bVar15;
              }
            }
            else {
LAB_00e737a0:
              local_90 = local_90 + 1;
            }
          }
          uVar8 = FUN_00e788fc(&local_90,pbVar22,param_4,lVar21 + (ulong)(param_4 * 2) * 8,0);
          if (((int)uVar8 < 0) || (uVar8 < param_4)) goto LAB_00e73e3c;
          while (local_90 < pbVar22) {
            bVar15 = *local_90;
            if (0x25 < bVar15) break;
            if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar15 != 0x25) break;
              bVar2 = 0x25;
              while ((local_90 = local_90 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
                if (pbVar22 <= local_90) goto LAB_00e73960;
                bVar15 = *local_90;
                bVar2 = bVar15;
              }
            }
            else {
LAB_00e73960:
              local_90 = local_90 + 1;
            }
          }
          uVar8 = FUN_00e788fc(&local_90,pbVar22,param_4,lVar21 + (ulong)(param_4 * 3) * 8,0);
          if (((int)uVar8 < 0) || (uVar8 < param_4)) goto LAB_00e73e3c;
          while (local_90 < pbVar22) {
            bVar15 = *local_90;
            if (0x25 < bVar15) break;
            if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar15 != 0x25) break;
              bVar2 = 0x25;
              while ((local_90 = local_90 + 1, bVar15 != 10 && (bVar2 != 0xd))) {
                if (pbVar22 <= local_90) goto LAB_00e73a14;
                bVar15 = *local_90;
                bVar2 = bVar15;
              }
            }
            else {
LAB_00e73a14:
              local_90 = local_90 + 1;
            }
          }
          if (param_4 != 0) {
            uVar24 = 0;
            do {
              puVar25 = *(undefined8 **)(param_3 + uVar24 * 8);
              uVar9 = FT_RoundFix(*(undefined8 *)(lVar21 + uVar24 * 8));
              *puVar25 = uVar9;
              iVar17 = (int)uVar24;
              uVar9 = FT_RoundFix(*(undefined8 *)(lVar21 + (ulong)(param_4 + iVar17) * 8));
              puVar25[1] = uVar9;
              uVar9 = FT_RoundFix(*(undefined8 *)(lVar21 + (ulong)(param_4 * 2 + iVar17) * 8));
              puVar25[2] = uVar9;
              uVar9 = FT_RoundFix(*(undefined8 *)(lVar21 + (ulong)(param_4 * 3 + iVar17) * 8));
              uVar24 = uVar24 + 1;
              puVar25[3] = uVar9;
            } while (param_4 != uVar24);
          }
          FUN_00e139fc(lVar23,lVar21);
joined_r0x00e73aec:
          if (uVar19 == 1) {
            return 0;
          }
          goto LAB_00e732f0;
        }
        uVar24 = FUN_00e775a0(&local_90,pbVar22,uVar9);
LAB_00e73510:
        cVar10 = *(char *)(param_2 + 0x1c);
joined_r0x00e73d08:
        if (cVar10 == '\x04') {
LAB_00e73884:
          *(int *)puVar1 = (int)uVar24;
        }
        else {
LAB_00e7351c:
          if (cVar10 == '\x02') {
            *(short *)puVar1 = (short)uVar24;
          }
          else if (cVar10 == '\x01') {
            *(char *)puVar1 = (char)uVar24;
          }
          else {
            *puVar1 = uVar24;
          }
        }
joined_r0x00e73804:
        if (uVar19 == 1) {
          return 0;
        }
LAB_00e732f0:
        uVar19 = uVar19 - 1;
        lVar20 = lVar20 + 1;
        lVar21 = *(long *)(param_3 + lVar20 * 8);
        uVar8 = *(uint *)(param_2 + 0x18);
        local_88 = local_90;
      } while( true );
    }
  }
  return 3;
}

