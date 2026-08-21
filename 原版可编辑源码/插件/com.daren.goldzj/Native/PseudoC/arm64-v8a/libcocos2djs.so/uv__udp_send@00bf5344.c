
undefined8
uv__udp_send(long param_1,long param_2,void *param_3,uint param_4,undefined2 *param_5,ulong param_6,
            undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  
  if ((*(int *)(param_2 + 0xb0) == -1) &&
     (uVar3 = FUN_00bf52b8(param_2,*param_5,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  lVar5 = *(long *)(param_2 + 0x68);
  *(long *)(param_1 + 0x10) = *(long *)(param_2 + 8) + 0x20;
  *(undefined4 *)(param_1 + 8) = 5;
  plVar4 = *(long **)(*(long *)(param_2 + 8) + 0x28);
  *(long **)(param_1 + 0x18) = plVar4;
  *plVar4 = param_1 + 0x10;
  *(long *)(*(long *)(param_2 + 8) + 0x28) = param_1 + 0x10;
  memcpy((void *)(param_1 + 0x60),param_5,param_6 & 0xffffffff);
  *(long *)(param_1 + 0x40) = param_2;
  __dest = (void *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = param_7;
  *(uint *)(param_1 + 0xe0) = param_4;
  *(void **)(param_1 + 0xe8) = __dest;
  if (4 < param_4) {
    __dest = (void *)uv__malloc((ulong)param_4 << 4);
    *(void **)(param_1 + 0xe8) = __dest;
    if (__dest == (void *)0x0) {
      **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 0x18);
      return 0xfffffff4;
    }
  }
  memcpy(__dest,param_3,(ulong)param_4 << 4);
  lVar2 = uv__count_bufs(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe0));
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lVar2;
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
  *(long *)(param_1 + 0x50) = param_2 + 0xb8;
  uVar1 = *(uint *)(param_2 + 0x58);
  plVar4 = *(long **)(param_2 + 0xc0);
  *(long **)(param_1 + 0x58) = plVar4;
  *plVar4 = param_1 + 0x50;
  *(long *)(param_2 + 0xc0) = param_1 + 0x50;
  if (((uVar1 >> 0xe & 1) == 0) &&
     (*(uint *)(param_2 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
  }
  if ((lVar5 == 0) && ((*(uint *)(param_2 + 0x58) >> 0x11 & 1) == 0)) {
    FUN_00bf4c80(param_2);
    if (param_2 + 0xb8 != *(long *)(param_2 + 0xb8)) {
      uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x80,4);
    }
  }
  else {
    uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x80,4);
  }
  return 0;
}

