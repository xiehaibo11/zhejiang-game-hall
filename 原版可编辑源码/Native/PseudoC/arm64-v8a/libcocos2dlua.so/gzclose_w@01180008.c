
undefined4 gzclose_w(void *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((param_1 == (void *)0x0) || (*(int *)((long)param_1 + 0x18) != 0x79b1)) {
    return 0xfffffffe;
  }
  if (*(int *)((long)param_1 + 0x68) != 0) {
    lVar5 = *(long *)((long)param_1 + 0x60);
    *(undefined4 *)((long)param_1 + 0x68) = 0;
    if ((*(int *)((long)param_1 + 0x80) != 0) && (iVar3 = FUN_0117f76c(param_1,0), iVar3 == -1)) {
LAB_011800d8:
      uVar4 = *(undefined4 *)((long)param_1 + 0x6c);
      goto LAB_011800dc;
    }
    if (lVar5 != 0) {
      bVar2 = false;
      do {
        uVar1 = (uint)lVar5;
        if ((long)(ulong)*(uint *)((long)param_1 + 0x28) <= lVar5) {
          uVar1 = *(uint *)((long)param_1 + 0x28);
        }
        if (!bVar2) {
          memset(*(void **)((long)param_1 + 0x30),0,(ulong)uVar1);
        }
        *(undefined8 *)((long)param_1 + 0x78) = *(undefined8 *)((long)param_1 + 0x30);
        *(uint *)((long)param_1 + 0x80) = uVar1;
        *(ulong *)((long)param_1 + 0x10) = *(long *)((long)param_1 + 0x10) + (ulong)uVar1;
        iVar3 = FUN_0117f76c(param_1,0);
        if (iVar3 == -1) goto LAB_011800d8;
        lVar5 = lVar5 - (ulong)uVar1;
        bVar2 = true;
      } while (lVar5 != 0);
    }
  }
  uVar4 = 0;
LAB_011800dc:
  iVar3 = FUN_0117f76c(param_1,4);
  if (iVar3 == -1) {
    uVar4 = *(undefined4 *)((long)param_1 + 0x6c);
  }
  if (*(int *)((long)param_1 + 0x28) != 0) {
    if (*(int *)((long)param_1 + 0x40) == 0) {
      deflateEnd((long)param_1 + 0x78);
      free(*(void **)((long)param_1 + 0x38));
    }
    free(*(void **)((long)param_1 + 0x30));
  }
  FUN_0117e474(param_1,0,0);
  free(*(void **)((long)param_1 + 0x20));
  iVar3 = close(*(int *)((long)param_1 + 0x1c));
  if (iVar3 == -1) {
    uVar4 = 0xffffffff;
  }
  free(param_1);
  return uVar4;
}

