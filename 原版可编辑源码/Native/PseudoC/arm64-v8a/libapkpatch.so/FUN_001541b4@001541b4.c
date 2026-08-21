
void FUN_001541b4(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  size_t __n;
  char cVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint3 uVar14;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  byte bVar15;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (0x10 < (*(long *)(param_1 + 0x18) - (long)pbVar1) + 1U) {
    bVar11 = pbVar1[2];
    bVar15 = pbVar1[5];
    uVar14 = CONCAT12(bVar15,CONCAT11(pbVar1[3],pbVar1[1]));
    bVar12 = pbVar1[10];
    bVar16 = pbVar1[0xb];
    uVar18 = CONCAT17(-(9 < pbVar1[0xe] - 0x30),
                      CONCAT16(-(9 < pbVar1[0xc] - 0x30),
                               CONCAT15(-(9 < bVar12 - 0x30),
                                        CONCAT14(-(9 < (CONCAT12(bVar12,(ushort)pbVar1[8]) & 0xffff)
                                                       - 0x30),
                                                 CONCAT13(-(9 < pbVar1[6] - 0x30),
                                                          CONCAT12(-(9 < pbVar1[4] - 0x30),
                                                                   CONCAT11(-(9 < bVar11 - 0x30),
                                                                            -(9 < (CONCAT12(bVar11,(
                                                  ushort)*pbVar1) & 0xffff) - 0x30)))))))) &
             0x909090909090909;
    uVar17 = CONCAT17(-(9 < pbVar1[0xf] - 0x30),
                      CONCAT16(-(9 < pbVar1[0xd] - 0x30),
                               CONCAT15(-(9 < bVar16 - 0x30),
                                        CONCAT14(-(9 < (CONCAT12(bVar16,(ushort)pbVar1[9]) & 0xffff)
                                                       - 0x30),
                                                 CONCAT13(-(9 < pbVar1[7] - 0x30),
                                                          CONCAT12(-(9 < bVar15 - 0x30),
                                                                   CONCAT11(-(9 < ((uVar14 & 0xff00)
                                                                                  >> 8) - 0x30),
                                                                            -(9 < (uVar14 & 0xff) -
                                                                                  0x30)))))))) &
             0x7979797979797979 ^ 0xd0d0d0d0d0d0d0d0;
    cVar10 = (char)uVar17 + pbVar1[1] + ((char)uVar18 + *pbVar1) * '\x10';
    cVar13 = (char)(uVar17 >> 0x38) + pbVar1[0xf] + ((char)(uVar18 >> 0x38) + pbVar1[0xe]) * '\x10';
    local_68 = CONCAT71((int7)(CONCAT17(cVar13,CONCAT16((char)(uVar17 >> 0x30) + pbVar1[0xd] +
                                                        ((char)(uVar18 >> 0x30) + pbVar1[0xc]) *
                                                        '\x10',CONCAT15((char)(uVar17 >> 0x28) +
                                                                        bVar16 + ((char)(uVar18 >>
                                                                                        0x28) +
                                                                                 bVar12) * '\x10',
                                                                        CONCAT14((char)(uVar17 >>
                                                                                       0x20) +
                                                                                 pbVar1[9] +
                                                                                 ((char)(uVar18 >>
                                                                                        0x20) +
                                                                                 pbVar1[8]) * '\x10'
                                                                                 ,CONCAT13((char)(
                                                  uVar17 >> 0x18) + pbVar1[7] +
                                                  ((char)(uVar18 >> 0x18) + pbVar1[6]) * '\x10',
                                                  CONCAT12((char)(uVar17 >> 0x10) + bVar15 +
                                                           ((char)(uVar18 >> 0x10) + pbVar1[4]) *
                                                           '\x10',CONCAT11((char)(uVar17 >> 8) +
                                                                           pbVar1[3] +
                                                                           ((char)(uVar18 >> 8) +
                                                                           bVar11) * '\x10',cVar10))
                                                  ))))) >> 8),cVar13);
    local_68 = CONCAT17(cVar10,(undefined7)local_68);
    puVar9 = (undefined1 *)((ulong)&local_68 | 2);
    puVar7 = (undefined1 *)((ulong)&local_68 | 6);
    do {
      uVar2 = puVar9[-1];
      puVar9[-1] = *puVar7;
      *puVar7 = uVar2;
      bVar4 = puVar9 < puVar7 + -1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + -1;
    } while (bVar4);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    iVar5 = FUN_00154108(local_68,&local_60,0x20,0x20,&DAT_0011694a);
    if (iVar5 != 0) {
      lVar8 = param_2[1];
      __n = (size_t)iVar5;
      uVar17 = lVar8 + __n;
      if (uVar17 < (ulong)param_2[2]) {
        pvVar6 = (void *)*param_2;
      }
      else {
        uVar18 = param_2[2] << 1;
        if (uVar17 <= uVar18) {
          uVar17 = uVar18;
        }
        param_2[2] = uVar17;
        pvVar6 = realloc((void *)*param_2,uVar17);
        *param_2 = pvVar6;
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = param_2[1];
      }
      memmove((void *)((long)pvVar6 + lVar8),&local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

