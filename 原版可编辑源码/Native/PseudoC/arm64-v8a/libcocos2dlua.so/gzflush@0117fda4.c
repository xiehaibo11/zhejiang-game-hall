
ulong gzflush(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x18) == 0x79b1) {
    uVar3 = 0xfffffffe;
    if ((param_2 < 5) && (*(int *)(param_1 + 0x6c) == 0)) {
      if (*(int *)(param_1 + 0x68) != 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x68) = 0;
        if ((*(int *)(param_1 + 0x80) != 0) && (uVar3 = FUN_0117f76c(param_1,0), (int)uVar3 == -1))
        {
          return uVar3;
        }
        if (lVar4 != 0) {
          bVar2 = false;
          do {
            uVar1 = (uint)lVar4;
            if ((long)(ulong)*(uint *)(param_1 + 0x28) <= lVar4) {
              uVar1 = *(uint *)(param_1 + 0x28);
            }
            if (!bVar2) {
              memset(*(void **)(param_1 + 0x30),0,(ulong)uVar1);
            }
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x80) = uVar1;
            *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar1;
            uVar3 = FUN_0117f76c(param_1,0);
            if ((int)uVar3 == -1) {
              return uVar3;
            }
            lVar4 = lVar4 - (ulong)uVar1;
            bVar2 = true;
          } while (lVar4 != 0);
        }
      }
      FUN_0117f76c(param_1,param_2);
      uVar3 = (ulong)*(uint *)(param_1 + 0x6c);
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

