
void FUN_010a6b50(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint local_14fc;
  undefined1 auStack_14f8 [8];
  long local_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined8 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  uint local_14b0;
  long local_f8;
  undefined1 auStack_f0 [40];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_60;
  undefined1 *local_58;
  
  lVar5 = *(long *)(param_2 + 0xb8);
  memset(auStack_f0,0,0xb0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x147) = 0;
  lVar6 = *(long *)(af_script_classes + (ulong)*(uint *)(*param_1 + 8) * 8);
  local_f8 = lVar5;
  if (param_1 == (long *)0x0) {
LAB_010a6bc8:
    if ((*(int *)(lVar6 + 0x14) != 0) && (param_1 != (long *)0x0)) {
      iVar2 = FT_Get_Char_Index(*(undefined8 *)param_1[8]);
      if (iVar2 != 0) goto LAB_010a6be8;
      if ((param_1 != (long *)0x0) && (*(int *)(lVar6 + 0x18) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6e20 with catch @ 010a6f08
                        */
        iVar2 = FT_Get_Char_Index(*(undefined8 *)param_1[8]);
        if (iVar2 != 0) goto LAB_010a6be8;
      }
    }
  }
  else {
    iVar2 = FT_Get_Char_Index(*(undefined8 *)param_1[8],*(undefined4 *)(lVar6 + 0x10));
    if (iVar2 == 0) goto LAB_010a6bc8;
LAB_010a6be8:
    iVar2 = FT_Load_Glyph(param_2,iVar2,1);
    if ((iVar2 == 0) && (lVar5 = *(long *)(param_2 + 0x98), 0 < *(short *)(lVar5 + 0xca))) {
      memset(auStack_14f8,0,0x1400);
      local_14b0 = *(uint *)(param_1 + 9);
      local_60 = 0;
      uStack_14e0 = 0x10000;
      local_14e8 = 0x10000;
                    /* try { // try from 010a6c54 to 011a6c5b has its CatchHandler @ 010a6f34 */
      local_14d8 = 0;
      uStack_14d0 = 0;
                    /* try { // try from 010a6c5c to 011a6db7 has its CatchHandler @ 010a6c00 */
      local_14c8 = 0;
      local_14f0 = param_2;
      local_58 = auStack_14f8;
      iVar2 = FUN_010a4adc(&local_f8,lVar5 + 200);
      if (iVar2 == 0) {
        local_14fc = 0;
        iVar2 = FUN_010a50f8(&local_f8,0);
        if (iVar2 == 0) {
          FUN_010a5544(&local_f8,0,0,0);
          if (0 < (int)local_b0) {
            local_14fc = 0;
            uVar3 = local_a8;
            do {
              uVar4 = *(ulong *)(uVar3 + 0x20);
              if ((((uVar4 != 0) && (uVar3 < uVar4)) && (uVar3 == *(ulong *)(uVar4 + 0x20))) &&
                 (local_14fc < 0x10)) {
                uVar1 = (ulong)local_14fc;
                local_14fc = local_14fc + 1;
                lVar6 = (long)*(short *)(uVar3 + 2) - (long)*(short *)(uVar4 + 2);
                lVar5 = -lVar6;
                if (-1 < lVar6) {
                  lVar5 = lVar6;
                }
                param_1[uVar1 * 3 + 0xd] = lVar5;
              }
              uVar3 = uVar3 + 0x58;
            } while (uVar3 < local_a8 + (long)(int)local_b0 * 0x58);
          }
          FUN_010a5784(&local_14fc,param_1 + 0xd,(ulong)local_14b0 / 100);
          *(uint *)(param_1 + 0xc) = local_14fc;
          local_14fc = 0;
          iVar2 = FUN_010a50f8(&local_f8,1);
          if (iVar2 == 0) {
            FUN_010a5544(&local_f8,0,0,1);
            if (0 < (int)local_88) {
              local_14fc = 0;
              uVar3 = local_80;
              do {
                uVar4 = *(ulong *)(uVar3 + 0x20);
                if (((uVar4 != 0) && (uVar3 < uVar4)) &&
                   ((uVar3 == *(ulong *)(uVar4 + 0x20) && (local_14fc < 0x10)))) {
                  uVar1 = (ulong)local_14fc;
                  local_14fc = local_14fc + 1;
                  lVar6 = (long)*(short *)(uVar3 + 2) - (long)*(short *)(uVar4 + 2);
                  lVar5 = -lVar6;
                  if (-1 < lVar6) {
                    lVar5 = lVar6;
                  }
                  param_1[uVar1 * 3 + 0x148] = lVar5;
                }
                    /* try { // try from 010a6db8 to 011a6dc3 has its CatchHandler @ 010a6f20 */
                uVar3 = uVar3 + 0x58;
              } while (uVar3 < local_80 + (long)(int)local_88 * 0x58);
            }
            FUN_010a5784(&local_14fc,param_1 + 0x148,(ulong)local_14b0 / 100);
            *(uint *)(param_1 + 0x147) = local_14fc;
            iVar2 = (int)param_1[0xc];
            lVar5 = local_f8;
            goto joined_r0x010a6df4;
          }
        }
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6a80 with catch @ 010a6bfc
                        */
  iVar2 = (int)param_1[0xc];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6c5c with catch @ 010a6c00
                       catch(type#1 @ 00000000) { ... } // from try @ 010a6e28 with catch @ 010a6c00
                        */
  lVar5 = local_f8;
joined_r0x010a6df4:
  if (iVar2 == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar3 = param_1[0xd];
  }
                    /* try { // try from 010a6e20 to 011a6e27 has its CatchHandler @ 010a6f08 */
  param_1[0x3d] = (long)uVar3 / 5;
  param_1[0x3e] = uVar3;
  *(undefined1 *)(param_1 + 0x3f) = 0;
                    /* try { // try from 010a6e28 to 011a6f37 has its CatchHandler @ 010a6c00 */
  if ((int)param_1[0x147] == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar3 = param_1[0x148];
  }
  param_1[0x179] = uVar3;
  param_1[0x178] = (long)uVar3 / 5;
  *(undefined1 *)(param_1 + 0x17a) = 0;
  if (lVar5 != 0) {
    local_b0 = 0;
    local_f8 = lVar5;
    ft_mem_free(lVar5,local_a8);
    local_a8 = 0;
    uStack_a0 = 0;
    ft_mem_free(lVar5,local_98);
    local_98 = 0;
    local_88 = 0;
    ft_mem_free(lVar5,local_80);
    local_80 = 0;
    uStack_78 = 0;
    ft_mem_free(lVar5,local_70);
    local_70 = 0;
    ft_mem_free(lVar5,local_b8);
    local_c0 = 0;
    local_b8 = 0;
    ft_mem_free(lVar5,local_c8);
  }
  return;
}

