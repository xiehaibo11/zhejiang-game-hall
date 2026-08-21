
undefined8 uv_loop_fork(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = uv__io_fork();
  if ((((int)uVar3 == 0) && (uVar3 = uv__async_fork(param_1), (int)uVar3 == 0)) &&
     (uVar3 = uv__signal_loop_fork(param_1), (int)uVar3 == 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 != 0) {
      lVar6 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x68) + lVar6);
        lVar6 = lVar6 + 8;
        lVar1 = lVar5 + 0x18;
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x28) != 0)) && (lVar1 == *(long *)(lVar5 + 0x18))) {
          *(long *)(lVar5 + 0x18) = param_1 + 0x58;
          *(undefined4 *)(lVar5 + 0x2c) = 0;
          plVar4 = *(long **)(param_1 + 0x60);
          *(long **)(lVar5 + 0x20) = plVar4;
          *plVar4 = lVar1;
          *(long *)(param_1 + 0x60) = lVar1;
        }
      } while (lVar6 != ((ulong)(iVar2 - 1) + 1) * 8);
    }
    uVar3 = 0;
  }
  return uVar3;
}

