
undefined4 FUN_0105894c(long param_1,long *param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long local_58;
  
                    /* try { // try from 0105894c to 0115895b has its CatchHandler @ 01058974 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105894c with catch @ 01058974
                        */
  lVar6 = lws_vfs_tell();
  if ((*(byte *)(param_1 + 0x16c) & 1) != 0) {
    plVar2 = (long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0xd8) != *(long *)(param_1 + 0x18)) {
      inflateEnd(plVar2);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      iVar5 = inflateInit2_(plVar2,0xfffffff1,"1.2.8",0x70);
      if (iVar5 == 0) {
        lVar8 = lws_vfs_file_seek_set
                          (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0xd0));
        if (lVar8 < 0) goto LAB_01058b50;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        goto LAB_01058b50;
      }
      _lws_log(1,"inflate init failed\n");
      lVar8 = *(long *)(param_1 + 0xd8);
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 != lVar8) {
        do {
          uVar7 = lVar10 - lVar8;
          if (param_4 <= (ulong)(lVar10 - lVar8)) {
            uVar7 = param_4;
          }
          iVar5 = FUN_0105894c(param_1,param_2,param_3,uVar7);
          if (iVar5 != 0) {
            return 0x11;
          }
LAB_01058b50:
          lVar8 = *(long *)(param_1 + 0xd8);
                    /* catch() { ... } // from try @ 01058b8c with catch @ 01058b54 */
          lVar10 = *(long *)(param_1 + 0x18);
        } while (lVar10 != lVar8);
      }
      *param_2 = 0;
    }
                    /* try { // try from 01058b8c to 01158c53 has its CatchHandler @ 01058b54 */
    *(void **)(param_1 + 0x78) = param_3;
    bVar4 = *(int *)(param_1 + 0x68) == 0;
    *(int *)(param_1 + 0x80) = (int)param_4;
    do {
      if (bVar4) {
        lVar8 = *(long *)(param_1 + 0xd0);
        if (0x7f < (lVar8 - lVar6) + (ulong)*(uint *)(param_1 + 0x44)) {
          lVar8 = 0x80;
        }
        iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                          (*(long *)(param_1 + 0x30),&local_58,param_1 + 0xe8,lVar8);
        if (iVar5 != 0) {
          return 0x10;
        }
        lVar6 = local_58 + lVar6;
        *(int *)(param_1 + 0x68) = (int)local_58;
        *plVar2 = param_1 + 0xe8;
      }
      iVar5 = inflate(plVar2,0);
      uVar1 = iVar5 + 4;
      if ((uVar1 < 7) && ((0x47U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
        return *(undefined4 *)(&DAT_0145c9b0 + (long)(int)uVar1 * 4);
      }
    } while (((*(int *)(param_1 + 0x68) == 0) && (*(uint *)(param_1 + 0x80) != 0)) &&
            (bVar4 = true, lVar6 != *(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0x44)
                    /* catch() { ... } // from try @ 01058b84 with catch @ 01058c38 */));
    lVar6 = param_4 - *(uint *)(param_1 + 0x80);
    *param_2 = lVar6;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + lVar6;
    lVar6 = *(long *)(param_1 + 0x18) + *param_2;
    goto LAB_01058c64;
  }
                    /* catch() { ... } // from try @ 010589c8 with catch @ 01058988 */
  if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0xd0);
    if (param_4 <= (*(ulong *)(param_1 + 0xd0) - lVar6) + (ulong)*(uint *)(param_1 + 0x48)) {
      uVar7 = param_4;
    }
    iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                      (*(long *)(param_1 + 0x30),param_2,param_3,uVar7);
                    /* try { // try from 010589c0 to 011589c7 has its CatchHandler @ 01058a64 */
    if (iVar5 != 0) {
      return 0x10;
    }
    return 0;
  }
  *param_2 = 0;
  if (param_4 == 0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x18);
  if (uVar7 < 10) {
    __n = param_4;
    if (10 - uVar7 <= param_4) {
      __n = 10 - uVar7;
    }
    memcpy(param_3,&UNK_0145c9a0 + uVar7,__n);
    param_4 = param_4 - __n;
    *(size_t *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
    *param_2 = *param_2 + __n;
    if (param_4 == 0) {
      return 0;
    }
    uVar7 = *(ulong *)(param_1 + 0x18);
    param_3 = (void *)((long)param_3 + __n);
    if (9 < uVar7) goto LAB_01058a54;
  }
  else {
LAB_01058a54:
    uVar9 = (ulong)*(uint *)(param_1 + 0x44);
                    /* catch() { ... } // from try @ 010589c0 with catch @ 01058a64 */
    if (uVar7 < uVar9 + 10) {
      lVar6 = *(long *)(param_1 + 0x30);
      uVar11 = (*(long *)(param_1 + 0xd0) - *(ulong *)(lVar6 + 0x18)) + uVar9;
      uVar3 = param_4;
      if (uVar11 <= param_4) {
        uVar3 = uVar11;
      }
      if ((*(ulong *)(lVar6 + 0x18) < *(long *)(param_1 + 0xd0) + uVar9) && (uVar3 != 0)) {
        iVar5 = (**(code **)(*(long *)(lVar6 + 8) + 0x18))(lVar6,&local_58,param_3);
        if (iVar5 != 0) {
          return 0x10;
        }
        param_4 = param_4 - local_58;
        *param_2 = *param_2 + local_58;
        uVar7 = *(long *)(param_1 + 0x18) + local_58;
        *(ulong *)(param_1 + 0x18) = uVar7;
        if (param_4 == 0) {
          return 0;
        }
        param_3 = (void *)((long)param_3 + local_58);
      }
    }
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x44);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01058c7c with catch @ 01058ca4
                        */
  if (uVar7 < uVar9 + 10) {
    return 0;
  }
                    /* try { // try from 01058cb8 to 01158e57 has its CatchHandler @ 01058cb8
                       catch() { ... } // from try @ 01058cb8 with catch @ 01058cb8
                       catch() { ... } // from try @ 01058e84 with catch @ 01058cb8 */
  if (uVar9 + 0x12 <= uVar7) {
    return 0;
  }
  uVar11 = 0x12 - (uVar7 - uVar9);
  if (uVar11 <= param_4) {
    param_4 = uVar11;
  }
  memcpy(param_3,(void *)(param_1 + (uVar7 - uVar9) + 0xd6),param_4);
  *param_2 = *param_2 + param_4;
  lVar6 = *(long *)(param_1 + 0x18) + param_4;
LAB_01058c64:
  *(long *)(param_1 + 0x18) = lVar6;
                    /* try { // try from 01058c7c to 01158c8b has its CatchHandler @ 01058ca4 */
  return 0;
}

