
undefined8
uv_write2(long param_1,long param_2,void *param_3,uint param_4,long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 0xb8) < 0) {
LAB_011a90b0:
    uVar4 = 0xfffffff7;
  }
  else {
    if (-1 < *(char *)(param_2 + 0x59)) {
      return 0xffffffe0;
    }
    if (param_5 != 0) {
      if ((*(int *)(param_2 + 0x10) != 7) || (*(int *)(param_2 + 0xf8) == 0)) {
        return 0xffffffea;
      }
      iVar2 = *(int *)(param_5 + 0x10);
      if (iVar2 == 7) {
LAB_011a8fc4:
        iVar2 = *(int *)(param_5 + 0xb8);
      }
      else {
        if (iVar2 != 0xf) {
          if (iVar2 != 0xc) goto LAB_011a90b0;
          goto LAB_011a8fc4;
        }
        iVar2 = *(int *)(param_5 + 0xb0);
      }
      if (iVar2 < 0) goto LAB_011a90b0;
    }
    lVar6 = *(long *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 8) = 3;
    lVar1 = param_1 + 0x58;
    __dest = (void *)(param_1 + 0x80);
    *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x40) = param_6;
    *(long *)(param_1 + 0x48) = param_5;
    *(long *)(param_1 + 0x50) = param_2;
    *(long *)(param_1 + 0x58) = lVar1;
    *(long *)(param_1 + 0x60) = lVar1;
    *(void **)(param_1 + 0x70) = __dest;
    if (4 < param_4) {
      __dest = malloc((ulong)param_4 << 4);
      *(void **)(param_1 + 0x70) = __dest;
      if (__dest == (void *)0x0) {
        return 0xfffffff4;
      }
    }
    memcpy(__dest,param_3,(ulong)param_4 << 4);
    *(uint *)(param_1 + 0x78) = param_4;
    *(undefined4 *)(param_1 + 0x68) = 0;
    lVar3 = FUN_011a1a9c(param_3,param_4);
    uVar4 = 0;
    *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lVar3;
    *(long *)(param_1 + 0x58) = param_2 + 0xc0;
    plVar5 = *(long **)(param_2 + 200);
    *(long **)(param_1 + 0x60) = plVar5;
    *plVar5 = lVar1;
    *(long *)(param_2 + 200) = lVar1;
    if (*(long *)(param_2 + 0x78) == 0) {
      if (lVar6 == 0) {
        FUN_011a90dc(param_2);
      }
      else {
        FUN_011a3688(*(undefined8 *)(param_2 + 8),param_2 + 0x88,4);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

