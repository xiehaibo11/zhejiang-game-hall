
uint FUN_0108b070(long param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  size_t __n;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  byte *local_88;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  uint local_64;
  
  lVar16 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar16 + 0x270);
                    /* try { // try from 0108b0a0 to 0118b0a7 has its CatchHandler @ 0108b0c4 */
  local_64 = 0;
                    /* try { // try from 0108b0a8 to 0118b0df has its CatchHandler @ 0108b06c */
  uVar10 = *(undefined8 *)(lVar16 + 0xb8);
  lVar14 = *(long *)(lVar16 + 0x100);
  plVar13 = *(long **)(*(long *)(lVar16 + 0xf0) + 0x60);
  if (plVar13 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0108b144 with catch @ 0108b168 */
    iVar3 = *(int *)(lVar16 + 0x22c) + *(int *)(lVar16 + 0x228);
    local_64 = FT_Stream_Seek(lVar11,*(long *)(lVar16 + 0x220) + *(long *)(lVar16 + 0x248) +
                                     (ulong)(uint)(iVar3 * param_2));
    if (local_64 != 0) {
      return local_64;
    }
    local_64 = FT_Stream_EnterFrame(lVar11,iVar3 * 2);
    if (local_64 != 0) {
      return local_64;
    }
    uVar9 = *(uint *)(lVar16 + 0x228);
    lVar4 = (long)(int)uVar9;
    pbVar6 = *(byte **)(lVar11 + 0x40);
    uVar2 = 0;
    if ((uVar9 & 0xff) != 0) {
      uVar7 = uVar9 - 1;
      pbVar8 = pbVar6;
      do {
        uVar9 = uVar9 - 1;
        uVar2 = (uint)*pbVar8 | uVar2 << 8;
        pbVar8 = pbVar8 + 1;
      } while ((uVar9 & 0xff) != 0);
      pbVar6 = pbVar6 + ((ulong)uVar7 & 0xff) + 1;
    }
    uVar9 = *(uint *)(lVar16 + 0x22c);
    uVar15 = 0;
    if ((uVar9 & 0xff) == 0) {
      uVar12 = 0;
    }
    else {
      pbVar8 = pbVar6;
      uVar7 = uVar9;
      do {
        uVar7 = uVar7 - 1;
        uVar15 = (ulong)*pbVar8 | uVar15 << 8;
        pbVar8 = pbVar8 + 1;
      } while ((uVar7 & 0xff) != 0);
      uVar12 = 0;
      if ((uVar9 & 0xff) != 0) {
        pbVar6 = pbVar6 + lVar4 + ((ulong)(uVar9 - 1) & 0xff);
        do {
          pbVar6 = pbVar6 + 1;
          uVar9 = uVar9 - 1;
          uVar12 = (ulong)*pbVar6 | uVar12 << 8;
        } while ((uVar9 & 0xff) != 0);
      }
    }
    FT_Stream_ExitFrame(lVar11);
    if (*(uint *)(lVar16 + 0x238) <= uVar2) {
      return 9;
    }
    __n = uVar12 - uVar15;
    if (__n == 0) {
      return 0;
    }
    __dest = (void *)ft_mem_alloc(uVar10,__n,&local_64);
                    /* try { // try from 0108b3f8 to 0118b3fb has its CatchHandler @ 0108b7ac */
    if (local_64 != 0) {
      return local_64;
    }
    iVar3 = FT_Stream_ReadAt(lVar11,*(long *)(lVar16 + 0x248) + uVar15,__dest,__n);
                    /* try { // try from 0108b420 to 0118b42b has its CatchHandler @ 0108b7dc */
    if (iVar3 != 0) {
      return iVar3;
    }
    local_64 = 0;
    goto LAB_0108b2a4;
  }
                    /* catch() { ... } // from try @ 0108b0a0 with catch @ 0108b0c4 */
  local_64 = (**(code **)*plVar13)(plVar13[1],param_2,&local_88);
  if (local_64 != 0) {
    return local_64;
  }
  uVar9 = *(uint *)(lVar16 + 0x228);
  if ((uVar9 & 0xff) == 0) {
    uVar2 = 0;
    if ((int)local_80 == 0) goto LAB_0108b25c;
LAB_0108b110:
                    /* catch() { ... } // from try @ 0108b14c with catch @ 0108b110 */
    __n = (size_t)(int)((int)local_80 - uVar9);
    __dest = (void *)ft_mem_alloc(uVar10,__n,&local_64);
    if (local_64 == 0) {
                    /* try { // try from 0108b144 to 0118b14b has its CatchHandler @ 0108b168 */
      memcpy(__dest,local_88 + *(int *)(lVar16 + 0x228),__n);
                    /* try { // try from 0108b14c to 0118b183 has its CatchHandler @ 0108b110 */
    }
  }
  else {
    uVar2 = 0;
    pbVar6 = local_88;
    uVar7 = uVar9;
    do {
      uVar7 = uVar7 - 1;
      uVar2 = (uint)*pbVar6 | uVar2 << 8;
      pbVar6 = pbVar6 + 1;
    } while ((uVar7 & 0xff) != 0);
    if ((int)local_80 != 0) goto LAB_0108b110;
LAB_0108b25c:
    __n = 0;
    __dest = (void *)0x0;
  }
  (**(code **)(*plVar13 + 8))(plVar13[1],&local_88);
  if (local_64 != 0) {
    return local_64;
  }
LAB_0108b2a4:
  puVar1 = (undefined4 *)(*(long *)(lVar16 + 600) + (ulong)uVar2 * 0x10);
  *(undefined4 *)(param_1 + 0xa9c) = *puVar1;
  uVar5 = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = uVar5;
  lVar11 = *(long *)(lVar16 + 0x240) + (ulong)uVar2 * 0x150;
  uVar5 = *(undefined8 *)(lVar11 + 0x118);
                    /* try { // try from 0108b2e0 to 0118b323 has its CatchHandler @ 0108b2e0
                       catch() { ... } // from try @ 0108b2e0 with catch @ 0108b2e0
                       catch() { ... } // from try @ 0108b6dc with catch @ 0108b2e0 */
  *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(lVar11 + 0x120);
  *(undefined8 *)(param_1 + 0xac0) = uVar5;
  uVar5 = *(undefined8 *)(lVar11 + 0x108);
  *(undefined8 *)(param_1 + 0xab8) = *(undefined8 *)(lVar11 + 0x110);
  *(undefined8 *)(param_1 + 0xab0) = uVar5;
  uVar5 = *(undefined8 *)(lVar11 + 0x128);
  *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(lVar11 + 0x130);
  *(undefined8 *)(param_1 + 0xad0) = uVar5;
  uVar9 = *(uint *)(lVar11 + 4);
  uVar2 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0xa98) = uVar9;
  if (-1 < (int)uVar9) {
    (**(code **)(lVar14 + 0x20))(__dest,__n,0x10ea);
  }
                    /* try { // try from 0108b324 to 0118b333 has its CatchHandler @ 0108b80c */
  local_64 = (**(code **)(param_1 + 0xb80))
                       (param_1,(long)__dest + (long)(int)uVar2,(int)__n - uVar2);
                    /* try { // try from 0108b334 to 0118b33f has its CatchHandler @ 0108b7ec */
  ft_mem_free(uVar10,__dest);
  uVar2 = local_64;
  if (((plVar13 != (long *)0x0) && (local_64 == 0)) && (uVar2 = 0, *(long *)(*plVar13 + 0x10) != 0))
  {
    lVar11 = FT_RoundFix(*(undefined8 *)(param_1 + 0x40));
    local_88 = (byte *)(lVar11 >> 0x10);
                    /* try { // try from 0108b368 to 0118b36b has its CatchHandler @ 0108b7d4 */
    local_80 = 0;
                    /* try { // try from 0108b370 to 0118b37f has its CatchHandler @ 0108b7d0 */
    local_78 = FT_RoundFix(*(undefined8 *)(param_1 + 0x50));
    local_78 = local_78 >> 0x10;
                    /* try { // try from 0108b380 to 0118b38b has its CatchHandler @ 0108b7cc */
    lStack_70 = FT_RoundFix(*(undefined8 *)(param_1 + 0x58));
    lStack_70 = lStack_70 >> 0x10;
    uVar2 = (**(code **)(*plVar13 + 0x10))(plVar13[1],param_2,0,&local_88);
                    /* try { // try from 0108b3a8 to 0118b3ab has its CatchHandler @ 0108b7b8 */
                    /* try { // try from 0108b3b4 to 0118b3c3 has its CatchHandler @ 0108b7b4 */
    *(long *)(param_1 + 0x40) = (long)local_88 << 0x10;
    *(long *)(param_1 + 0x58) = lStack_70 << 0x10;
    *(long *)(param_1 + 0x50) = local_78 << 0x10;
                    /* try { // try from 0108b3c4 to 0118b3cf has its CatchHandler @ 0108b7b0 */
  }
  return uVar2;
}

