
void FUN_010abdac(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
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
    uVar4 = FT_RoundFix(*param_3);
    uVar5 = FT_RoundFix(param_3[1]);
    local_64 = FUN_010ac668(puVar1,uVar4 >> 0x10 & 0xffffffff,uVar5 >> 0x10,uVar9,&local_70);
    if (local_64 == 0) {
      uVar4 = FT_RoundFix(param_3[2]);
      uVar5 = FT_RoundFix(param_3[3]);
      local_64 = FUN_010ac668(puVar1,uVar4 >> 0x10 & 0xffffffff,uVar5 >> 0x10,uVar9,&uStack_6c);
      if (local_64 == 0) {
        uVar4 = FT_RoundFix(param_3[4]);
        uVar5 = FT_RoundFix(param_3[5]);
        local_64 = FUN_010ac668(puVar1,uVar4 >> 0x10 & 0xffffffff,uVar5 >> 0x10,uVar9,&local_68);
        if (local_64 == 0) {
                    /* try { // try from 010abeb4 to 011ac037 has its CatchHandler @ 010abeb4
                       catch() { ... } // from try @ 010abeb4 with catch @ 010abeb4
                       catch() { ... } // from try @ 010ac040 with catch @ 010abeb4
                       catch() { ... } // from try @ 010ac14c with catch @ 010abeb4
                       catch() { ... } // from try @ 010ac1e0 with catch @ 010abeb4
                       catch() { ... } // from try @ 010ac2e0 with catch @ 010abeb4
                       catch() { ... } // from try @ 010ac420 with catch @ 010abeb4 */
          uVar3 = *(uint *)(param_1 + uVar11 * 6 + 7);
          if (uVar3 != 0) {
            puVar10 = (uint *)param_1[uVar11 * 6 + 8];
            uVar8 = uVar3;
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
              goto LAB_010abff4;
              uVar8 = uVar8 - 1;
              puVar10 = puVar10 + 6;
            } while (uVar8 != 0);
          }
          puVar10 = (uint *)((long)param_1 + uVar11 * 0x30 + 0x3c);
          uVar2 = *puVar10;
          uVar8 = uVar3 + 1;
          if (uVar2 < uVar8) {
            local_64 = 0;
            uVar3 = uVar3 + 8 & 0xfffffff8;
            lVar6 = ft_mem_realloc(uVar9,0x18,uVar2,uVar3,param_1[uVar11 * 6 + 8],&local_64);
            param_1[uVar11 * 6 + 8] = lVar6;
            if (local_64 != 0) goto LAB_010abfb0;
            *puVar10 = uVar3;
          }
          else {
            lVar6 = param_1[uVar11 * 6 + 8];
          }
          lVar6 = lVar6 + (ulong)uVar8 * 0x18;
          puVar10 = (uint *)(lVar6 + -0x18);
          *puVar10 = 0;
          *(undefined4 *)(lVar6 + -8) = 0;
          *(uint *)(param_1 + uVar11 * 6 + 7) = uVar8;
LAB_010abff4:
          if (-1 < (int)local_70) {
            if (*puVar10 <= local_70) {
              uVar3 = local_70 + 8 >> 3;
              local_64 = 0;
              uVar8 = puVar10[1] + 7 >> 3;
              if (uVar8 < uVar3) {
                uVar3 = uVar3 + 7 & 0x3ffffff8;
                    /* try { // try from 010ac038 to 011ac03f has its CatchHandler @ 010ac548 */
                    /* try { // try from 010ac040 to 011ac143 has its CatchHandler @ 010abeb4 */
                uVar7 = ft_mem_realloc(uVar9,1,uVar8,uVar3,*(undefined8 *)(puVar10 + 2),&local_64);
                *(undefined8 *)(puVar10 + 2) = uVar7;
                if (local_64 != 0) goto LAB_010abfb0;
                puVar10[1] = uVar3 << 3;
              }
              *puVar10 = local_70 + 1;
            }
            *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_70 >> 3)) =
                 (byte)(0x80 >> (ulong)(local_70 & 7)) |
                 *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_70 >> 3));
          }
          if (-1 < (int)uStack_6c) {
            if (*puVar10 <= uStack_6c) {
              uVar3 = uStack_6c + 8 >> 3;
              local_64 = 0;
              uVar8 = puVar10[1] + 7 >> 3;
              if (uVar8 < uVar3) {
                uVar3 = uVar3 + 7 & 0x3ffffff8;
                uVar7 = ft_mem_realloc(uVar9,1,uVar8,uVar3,*(undefined8 *)(puVar10 + 2),&local_64);
                *(undefined8 *)(puVar10 + 2) = uVar7;
                if (local_64 != 0) goto LAB_010abfb0;
                puVar10[1] = uVar3 << 3;
              }
              *puVar10 = uStack_6c + 1;
            }
            *(byte *)(*(long *)(puVar10 + 2) + (ulong)(uStack_6c >> 3)) =
                 (byte)(0x80 >> (ulong)(uStack_6c & 7)) |
                 *(byte *)(*(long *)(puVar10 + 2) + (ulong)(uStack_6c >> 3));
          }
          if ((int)local_68 < 0) {
            return;
          }
          if (*puVar10 <= local_68) {
            uVar3 = local_68 + 8 >> 3;
            local_64 = 0;
            uVar8 = puVar10[1] + 7 >> 3;
            if (uVar8 < uVar3) {
                    /* try { // try from 010ac144 to 011ac14b has its CatchHandler @ 010ac4a8 */
                    /* try { // try from 010ac14c to 011ac1d7 has its CatchHandler @ 010abeb4 */
              uVar3 = uVar3 + 7 & 0x3ffffff8;
              uVar9 = ft_mem_realloc(uVar9,1,uVar8,uVar3,*(undefined8 *)(puVar10 + 2),&local_64);
              *(undefined8 *)(puVar10 + 2) = uVar9;
              if (local_64 != 0) goto LAB_010abfb0;
              puVar10[1] = uVar3 << 3;
            }
            *puVar10 = local_68 + 1;
          }
          *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_68 >> 3)) =
               (byte)(0x80 >> (ulong)(local_68 & 7)) |
               *(byte *)(*(long *)(puVar10 + 2) + (ulong)(local_68 >> 3));
          return;
        }
      }
    }
  }
  else {
    local_64 = 6;
  }
LAB_010abfb0:
  *(int *)(param_1 + 1) = local_64;
  return;
}

