
int FUN_0107c1f0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int local_44;
  
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  local_44 = 0;
  puVar7 = *(uint **)(param_1 + 0x348);
  if (puVar7 == (uint *)0x0) {
    puVar7 = (uint *)ft_mem_alloc(uVar8,0x300,&local_44);
    if (local_44 != 0) {
      return local_44;
    }
    puVar7[0xbe] = 0;
    *(uint **)(param_1 + 0x348) = puVar7;
    if (param_2 != 0) goto LAB_0107c228;
LAB_0107c264:
    uVar4 = puVar7[1];
joined_r0x0107c3a8:
    if (param_3 == 0) {
      uVar1 = *puVar7;
      param_3 = uVar4;
    }
    else {
      if ((uVar4 != 0) && (uVar4 != param_3)) goto LAB_0107c278;
      puVar7[1] = param_3;
      uVar1 = *puVar7;
    }
    if (((uVar1 != 0) && (param_3 != 0)) && (*(long *)(puVar7 + 10) == 0)) {
      lVar3 = ft_mem_realloc(uVar8,8,0,param_3 * uVar1,0,&local_44);
      *(long *)(puVar7 + 10) = lVar3;
      if (((local_44 == 0) && (1 < uVar1)) &&
         (*(ulong *)(puVar7 + 0xc) = lVar3 + (ulong)param_3 * 8, uVar1 != 2)) {
        lVar3 = (ulong)uVar1 - 2;
        uVar4 = param_3 << 1;
        puVar6 = puVar7 + 0xe;
        do {
          lVar3 = lVar3 + -1;
          *(ulong *)puVar6 = *(long *)(puVar7 + 10) + (ulong)uVar4 * 8;
          uVar4 = uVar4 + param_3;
          puVar6 = puVar6 + 2;
        } while (lVar3 != 0);
      }
    }
  }
  else {
    if (param_2 == 0) goto LAB_0107c264;
LAB_0107c228:
    if (*puVar7 == 0) {
      uVar9 = (ulong)param_2;
                    /* try { // try from 0107c290 to 0117c2b7 has its CatchHandler @ 0107c290
                       catch() { ... } // from try @ 0107c290 with catch @ 0107c290
                       catch() { ... } // from try @ 0107c2dc with catch @ 0107c290 */
      uVar2 = ft_mem_realloc(uVar8,0x38,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x48) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
                    /* try { // try from 0107c2b8 to 0117c2db has its CatchHandler @ 0107c304 */
      uVar2 = ft_mem_realloc(uVar8,0xe0,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x6a) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
                    /* try { // try from 0107c2dc to 0117c317 has its CatchHandler @ 0107c290 */
      uVar2 = ft_mem_realloc(uVar8,0x20,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x8e) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
                    /* catch() { ... } // from try @ 0107c2b8 with catch @ 0107c304 */
      lVar3 = ft_mem_realloc(uVar8,8,0,param_2 << 1,0,&local_44);
      *(long *)(puVar7 + 0x42) = lVar3;
      if (local_44 != 0) {
        return local_44;
      }
      *(ulong *)(puVar7 + 0x44) = lVar3 + uVar9 * 8;
      *(long *)(puVar7 + 0x46) = param_1 + 0xf8;
      *(long *)(puVar7 + 0x68) = param_1 + 0x138;
      *(long *)(puVar7 + 0x8c) = param_1 + 0x2d0;
      if (1 < param_2) {
        lVar3 = *(long *)(puVar7 + 0x48);
        uVar9 = 2;
        do {
          lVar3 = lVar3 + 0x38;
          uVar5 = (ulong)((int)uVar9 - 1);
          *(long *)(puVar7 + uVar9 * 2 + 0x46) = lVar3;
          uVar4 = (int)uVar9 + 1;
          *(long *)(puVar7 + uVar9 * 2 + 0x68) = *(long *)(puVar7 + uVar5 * 2 + 0x68) + 0xe0;
          *(long *)(puVar7 + uVar9 * 2 + 0x8c) = *(long *)(puVar7 + uVar5 * 2 + 0x8c) + 0x20;
          uVar9 = (ulong)uVar4;
        } while (uVar4 <= param_2);
      }
      *puVar7 = param_2;
      uVar4 = puVar7[1];
      local_44 = 0;
      goto joined_r0x0107c3a8;
    }
    if (*puVar7 == param_2) goto LAB_0107c264;
LAB_0107c278:
    local_44 = 3;
  }
  return local_44;
}

