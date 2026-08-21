
undefined8
uv_write2(long param_1,long param_2,void *param_3,uint param_4,long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *__dest;
  long lVar5;
  
  if (*(int *)(param_2 + 0xb8) < 0) {
    return 0xfffffff7;
  }
  if (param_5 == 0) goto LAB_00bf3148;
  if ((*(int *)(param_2 + 0x10) != 7) || (*(int *)(param_2 + 0xf8) == 0)) {
    return 0xffffffea;
  }
  iVar2 = *(int *)(param_5 + 0x10);
  if (iVar2 == 0xc) {
LAB_00bf3228:
    iVar2 = *(int *)(param_5 + 0xb8);
  }
  else {
    if (iVar2 != 0xf) {
      if (iVar2 != 7) {
        return 0xfffffff7;
      }
      goto LAB_00bf3228;
    }
    iVar2 = *(int *)(param_5 + 0xb0);
  }
  if (iVar2 < 0) {
    return 0xfffffff7;
  }
LAB_00bf3148:
  lVar5 = *(long *)(param_2 + 0x60);
  *(long *)(param_1 + 0x10) = *(long *)(param_2 + 8) + 0x20;
  *(undefined4 *)(param_1 + 8) = 3;
  lVar1 = param_1 + 0x58;
  __dest = (void *)(param_1 + 0x80);
  plVar3 = *(long **)(*(long *)(param_2 + 8) + 0x28);
  *(long **)(param_1 + 0x18) = plVar3;
  *plVar3 = param_1 + 0x10;
  *(long *)(*(long *)(param_2 + 8) + 0x28) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x40) = param_6;
  *(long *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(long *)(param_1 + 0x48) = param_5;
  *(long *)(param_1 + 0x58) = lVar1;
  *(long *)(param_1 + 0x60) = lVar1;
  *(void **)(param_1 + 0x70) = __dest;
  if (4 < param_4) {
    __dest = (void *)uv__malloc((ulong)param_4 << 4);
    *(void **)(param_1 + 0x70) = __dest;
    if (__dest == (void *)0x0) {
      return 0xfffffff4;
    }
  }
  memcpy(__dest,param_3,(ulong)param_4 << 4);
  *(uint *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x68) = 0;
  lVar4 = uv__count_bufs(param_3,param_4);
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lVar4;
  *(long *)(param_1 + 0x58) = param_2 + 0xc0;
  plVar3 = *(long **)(param_2 + 200);
  *(long **)(param_1 + 0x60) = plVar3;
  *plVar3 = lVar1;
  *(long *)(param_2 + 200) = lVar1;
  if (*(long *)(param_2 + 0x78) == 0) {
    if (lVar5 != 0) {
      uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x88,4);
      return 0;
    }
    FUN_00bf1ea8(param_2);
  }
  return 0;
}

