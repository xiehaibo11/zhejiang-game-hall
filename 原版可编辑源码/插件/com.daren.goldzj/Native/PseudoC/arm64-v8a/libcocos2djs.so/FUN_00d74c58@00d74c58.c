
int FUN_00d74c58(long param_1,int param_2,uint param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  void *__dest;
  ulong uVar3;
  ulong __n;
  void *__src;
  int local_54;
  
  uVar3 = *(ulong *)(param_1 + 0x4a0);
  __n = (ulong)param_3;
  if (uVar3 + 1 < 2) {
    uVar3 = 0xffffffffffffffff;
  }
  else if (uVar3 < param_3 + 1) {
    png_zstream_error(param_1,0xfffffffc);
    return -4;
  }
  uVar3 = uVar3 - (param_3 + 1);
  if (uVar3 < *param_4) {
    *param_4 = uVar3;
  }
  iVar2 = FUN_00d73574(param_1,*(undefined4 *)(param_1 + 0x250));
  if (iVar2 == 1) {
    return -7;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  local_54 = param_2 - param_3;
  iVar2 = FUN_00d767f0(param_1,*(undefined4 *)(param_1 + 0x250),*(long *)(param_1 + 0x4d0) + __n,
                       &local_54,0,param_4);
  if (iVar2 != 0) {
    if (iVar2 != 1) goto LAB_00d74d44;
    iVar2 = inflateReset(param_1 + 0x178);
    if (iVar2 == 0) {
      uVar3 = *param_4;
      lVar1 = __n + uVar3 + 1;
      __dest = (void *)png_malloc_base(param_1,lVar1);
      if (__dest == (void *)0x0) {
        png_zstream_error(param_1,0xfffffffc);
        *(undefined4 *)(param_1 + 0x170) = 0;
        return -4;
      }
      iVar2 = FUN_00d767f0(param_1,*(undefined4 *)(param_1 + 0x250),*(long *)(param_1 + 0x4d0) + __n
                           ,&local_54,(long)__dest + __n,param_4);
      if (iVar2 == 0) {
LAB_00d74e14:
        iVar2 = -7;
      }
      else if (iVar2 == 1) {
        if (uVar3 != *param_4) goto LAB_00d74e14;
        __src = *(void **)(param_1 + 0x4d0);
        *(undefined1 *)((long)__dest + uVar3 + __n) = 0;
        if (param_3 != 0) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(param_1 + 0x4d0) = __dest;
        *(long *)(param_1 + 0x4d8) = lVar1;
        iVar2 = 1;
        __dest = __src;
      }
      png_free(param_1,__dest);
      if ((iVar2 == 1) && (param_2 - param_3 != local_54)) {
        png_chunk_benign_error(param_1,"extra compressed data");
        *(undefined4 *)(param_1 + 0x170) = 0;
        return 1;
      }
      goto LAB_00d74d44;
    }
    png_zstream_error(param_1,1);
  }
  iVar2 = -7;
LAB_00d74d44:
  *(undefined4 *)(param_1 + 0x170) = 0;
  return iVar2;
}

