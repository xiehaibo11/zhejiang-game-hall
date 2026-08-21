
void FUN_00e6ad94(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  int local_64;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  uVar11 = (ulong)(param_2 != 0);
  if (*(int *)(param_1 + 2) == 1) {
    uVar9 = *param_1;
    puVar1 = param_1 + uVar11 * 6 + 3;
    uVar5 = FT_RoundFix(*param_3);
    uVar6 = FT_RoundFix(param_3[1]);
    local_64 = FUN_00e6b624(puVar1,uVar5 >> 0x10 & 0xffffffff,uVar6 >> 0x10,uVar9,&local_70);
    if (local_64 == 0) {
      uVar5 = FT_RoundFix(param_3[2]);
      uVar6 = FT_RoundFix(param_3[3]);
      local_64 = FUN_00e6b624(puVar1,uVar5 >> 0x10 & 0xffffffff,uVar6 >> 0x10,uVar9,&uStack_6c);
      if (local_64 == 0) {
        uVar5 = FT_RoundFix(param_3[4]);
        uVar6 = FT_RoundFix(param_3[5]);
        local_64 = FUN_00e6b624(puVar1,uVar5 >> 0x10 & 0xffffffff,uVar6 >> 0x10,uVar9,&local_68);
        if (local_64 == 0) {
          uVar3 = *(uint *)(param_1 + uVar11 * 6 + 7);
          if (uVar3 != 0) {
            puVar10 = (uint *)param_1[uVar11 * 6 + 8];
            uVar4 = uVar3;
            do {
              uVar2 = *puVar10;
              if ((((local_70 < uVar2) &&
                   ((0x80U >> (ulong)(local_70 & 7) &
                    (uint)*(byte *)(*(long *)(puVar10 + 2) +
                                   ((long)((ulong)local_70 << 0x20) >> 0x23))) != 0)) ||
                  ((uStack_6c < uVar2 &&
                   ((0x80U >> (ulong)(uStack_6c & 7) &
                    (uint)*(byte *)(*(long *)(puVar10 + 2) +
                                   ((long)((ulong)uStack_6c << 0x20) >> 0x23))) != 0)))) ||
                 ((local_68 < uVar2 &&
                  ((0x80U >> (ulong)(local_68 & 7) &
                   (uint)*(byte *)(*(long *)(puVar10 + 2) +
                                  ((long)((ulong)local_68 << 0x20) >> 0x23))) != 0))))
              goto LAB_00e6afdc;
              uVar4 = uVar4 - 1;
              puVar10 = puVar10 + 6;
            } while (uVar4 != 0);
          }
          puVar10 = (uint *)((long)param_1 + uVar11 * 0x30 + 0x3c);
          uVar2 = *puVar10;
          uVar4 = uVar3 + 1;
          if (uVar2 < uVar4) {
            local_64 = 0;
            uVar3 = uVar3 + 8 & 0xfffffff8;
            lVar7 = FUN_00e13bcc(uVar9,0x18,uVar2,uVar3,param_1[uVar11 * 6 + 8],&local_64);
            param_1[uVar11 * 6 + 8] = lVar7;
            if (local_64 != 0) goto LAB_00e6af98;
            *puVar10 = uVar3;
          }
          else {
            lVar7 = param_1[uVar11 * 6 + 8];
          }
          lVar7 = lVar7 + (ulong)uVar4 * 0x18;
          puVar10 = (uint *)(lVar7 + -0x18);
          *puVar10 = 0;
          *(undefined4 *)(lVar7 + -8) = 0;
          *(uint *)(param_1 + uVar11 * 6 + 7) = uVar4;
LAB_00e6afdc:
          if (-1 < (int)local_70) {
            if (*puVar10 <= local_70) {
              local_64 = 0;
              uVar3 = puVar10[1] + 7 >> 3;
              uVar4 = local_70 + 8 >> 3;
              if (uVar3 < uVar4) {
                uVar4 = uVar4 + 7 & 0x3ffffff8;
                uVar8 = FUN_00e13bcc(uVar9,1,uVar3,uVar4,*(undefined8 *)(puVar10 + 2),&local_64);
                *(undefined8 *)(puVar10 + 2) = uVar8;
                if (local_64 != 0) goto LAB_00e6af98;
                puVar10[1] = uVar4 << 3;
              }
              *puVar10 = local_70 + 1;
            }
            *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_70 >> 3)) =
                 *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_70 >> 3)) |
                 (byte)(0x80 >> (ulong)(local_70 & 7));
          }
          if (-1 < (int)uStack_6c) {
            if (*puVar10 <= uStack_6c) {
              local_64 = 0;
              uVar3 = puVar10[1] + 7 >> 3;
              uVar4 = uStack_6c + 8 >> 3;
              if (uVar3 < uVar4) {
                uVar4 = uVar4 + 7 & 0x3ffffff8;
                uVar8 = FUN_00e13bcc(uVar9,1,uVar3,uVar4,*(undefined8 *)(puVar10 + 2),&local_64);
                *(undefined8 *)(puVar10 + 2) = uVar8;
                if (local_64 != 0) goto LAB_00e6af98;
                puVar10[1] = uVar4 << 3;
              }
              *puVar10 = uStack_6c + 1;
            }
            *(byte *)(*(long *)(puVar10 + 2) + (ulong)(uStack_6c >> 3)) =
                 *(byte *)(*(long *)(puVar10 + 2) + (ulong)(uStack_6c >> 3)) |
                 (byte)(0x80 >> (ulong)(uStack_6c & 7));
          }
          if ((int)local_68 < 0) {
            return;
          }
          if (*puVar10 <= local_68) {
            local_64 = 0;
            uVar3 = puVar10[1] + 7 >> 3;
            uVar4 = local_68 + 8 >> 3;
            if (uVar3 < uVar4) {
              uVar4 = uVar4 + 7 & 0x3ffffff8;
              uVar9 = FUN_00e13bcc(uVar9,1,uVar3,uVar4,*(undefined8 *)(puVar10 + 2),&local_64);
              *(undefined8 *)(puVar10 + 2) = uVar9;
              if (local_64 != 0) goto LAB_00e6af98;
              puVar10[1] = uVar4 << 3;
            }
            *puVar10 = local_68 + 1;
          }
          *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_68 >> 3)) =
               *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_68 >> 3)) |
               (byte)(0x80 >> (ulong)(local_68 & 7));
          return;
        }
      }
    }
  }
  else {
    local_64 = 6;
  }
LAB_00e6af98:
  *(int *)(param_1 + 1) = local_64;
  return;
}

