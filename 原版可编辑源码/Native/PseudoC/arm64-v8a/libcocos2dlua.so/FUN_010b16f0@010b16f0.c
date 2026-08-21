
int FUN_010b16f0(long param_1,long param_2,int param_3,long *param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong __n;
  ulong uVar13;
  undefined1 *puVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  void *__src;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  void *pvVar22;
  ulong uVar23;
  long lVar24;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  int local_64;
  
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 == param_5) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_2 + 200;
      if (param_4 == (long *)0x0) {
        lVar21 = 0;
        lVar24 = 0;
      }
      else {
        lVar24 = *param_4;
        lVar21 = param_4[1];
      }
      FT_Outline_Get_CBox(lVar1,&local_88);
                    /* try { // try from 010b1770 to 011b17c3 has its CatchHandler @ 010b1814 */
      uVar2 = local_88 + lVar24;
      uVar23 = uVar2 & 0xffffffffffffffc0;
      uVar20 = local_80 + lVar21 & 0xffffffffffffffc0;
      local_78 = lVar24 + local_78 + 0x3f & 0xffffffffffffffc0;
      uVar19 = local_78 - uVar23 >> 6;
      uVar12 = lVar21 + local_70 + 0x3f;
      local_70 = uVar12 & 0xffffffffffffffc0;
                    /* try { // try from 010b17c4 to 011b182f has its CatchHandler @ 010b1674 */
      uVar13 = local_70 - uVar20 >> 6;
      __n = uVar19;
      uVar16 = uVar19;
      if (param_3 == 3) {
        uVar16 = uVar19 * 3;
        __n = uVar16 + 3 & 0x1ffffffffffffffc;
      }
      uVar3 = uVar13 * 3;
      if (param_3 != 4) {
        uVar3 = uVar13;
      }
      if ((((long)uVar12 >> 6) + 0x80000000U | ((long)uVar2 >> 6) + 0x80000000U) >> 0x20 == 0) {
                    /* catch() { ... } // from try @ 010b16d0 with catch @ 010b1810 */
                    /* catch() { ... } // from try @ 010b1770 with catch @ 010b1814 */
        if ((uVar3 >> 0xf == 0) && (uVar16 < 0x8000)) {
          local_88 = uVar23;
          local_80 = uVar20;
          if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) {
            ft_mem_free(uVar8,*(undefined8 *)(param_2 + 0xa8));
            *(undefined8 *)(param_2 + 0xa8) = 0;
            *(uint *)(*(long *)(param_2 + 0x128) + 8) =
                 *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
          }
          uVar7 = ft_mem_alloc(uVar8,__n * uVar3,&local_64);
          *(undefined8 *)(param_2 + 0xa8) = uVar7;
          if (local_64 == 0) {
            lVar24 = lVar24 - uVar23;
            lVar21 = lVar21 - uVar20;
            *(uint *)(*(long *)(param_2 + 0x128) + 8) =
                 *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
            *(undefined4 *)(param_2 + 0x90) = 0x62697473;
            *(int *)(param_2 + 0xc0) = (int)(uVar2 >> 6);
            *(int *)(param_2 + 0xc4) = (int)(uVar12 >> 6);
            *(undefined1 *)(param_2 + 0xb2) = 2;
            *(undefined2 *)(param_2 + 0xb0) = 0x100;
            *(int *)(param_2 + 0x98) = (int)uVar3;
            *(int *)(param_2 + 0x9c) = (int)uVar16;
            *(int *)(param_2 + 0xa0) = (int)__n;
            if (lVar21 != 0 || lVar24 != 0) {
              FT_Outline_Translate(lVar1,lVar24,lVar21);
            }
            bVar6 = true;
            local_d8 = 1;
            local_e8 = param_2 + 0x98;
            lStack_e0 = lVar1;
            local_64 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_e8);
            if (local_64 == 0) {
              iVar17 = (int)uVar13;
              if (((param_3 == 3) && (iVar17 != 0)) && (iVar18 = (int)uVar19, iVar18 != 0)) {
                puVar14 = (undefined1 *)(*(long *)(param_2 + 0xa8) + (ulong)(iVar18 - 1));
                puVar10 = (undefined1 *)(*(long *)(param_2 + 0xa8) + uVar16 + -1);
                uVar12 = uVar13 & 0xffffffff;
                iVar15 = -iVar18;
                puVar11 = puVar10;
                puVar9 = puVar14;
                do {
                  do {
                    uVar4 = *puVar14;
                    iVar15 = iVar15 + 1;
                    puVar10[-2] = uVar4;
                    puVar10[-1] = uVar4;
                    *puVar10 = uVar4;
                    puVar10 = puVar10 + -3;
                    puVar14 = puVar14 + -1;
                  } while (iVar15 != 0);
                  uVar5 = (int)uVar12 - 1;
                  uVar12 = (ulong)uVar5;
                  puVar14 = puVar9 + __n;
                  puVar10 = puVar11 + __n;
                  iVar15 = -iVar18;
                  puVar11 = puVar10;
                  puVar9 = puVar14;
                } while (uVar5 != 0);
              }
              if ((param_3 == 4) && (iVar17 != 0)) {
                pvVar22 = *(void **)(param_2 + 0xa8);
                iVar17 = -iVar17;
                __src = (void *)((long)pvVar22 + __n * (uVar3 - uVar13));
                local_64 = 0;
                do {
                  memcpy(pvVar22,__src,__n);
                  memcpy((void *)((long)pvVar22 + __n),__src,__n);
                  pvVar22 = (void *)((long)((long)pvVar22 + __n) + __n);
                  memcpy(pvVar22,__src,__n);
                  iVar17 = iVar17 + 1;
                  __src = (void *)((long)__src + __n);
                  pvVar22 = (void *)((long)pvVar22 + __n);
                } while (iVar17 != 0);
              }
              bVar6 = false;
              local_64 = 0;
            }
            if (lVar21 != 0 || lVar24 != 0) {
              FT_Outline_Translate(lVar1,-lVar24,-lVar21);
            }
            if (bVar6) {
              ft_mem_free(uVar8,*(undefined8 *)(param_2 + 0xa8));
              *(undefined8 *)(param_2 + 0xa8) = 0;
              *(uint *)(*(long *)(param_2 + 0x128) + 8) =
                   *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
            }
          }
        }
        else {
          local_64 = 0x62;
        }
      }
      else {
        local_64 = 0x17;
      }
    }
    else {
      local_64 = 0x13;
    }
  }
  else {
    local_64 = 6;
  }
  return local_64;
}

