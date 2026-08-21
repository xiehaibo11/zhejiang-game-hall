
ulong gzputc(long param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte local_34 [4];
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x18) != 0x79b1)) || (*(int *)(param_1 + 0x6c) != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar6 = *(long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if ((*(int *)(param_1 + 0x80) != 0) && (uVar3 = FUN_0117f76c(param_1,0), (int)uVar3 == -1)) {
        return uVar3;
      }
      if (lVar6 != 0) {
        bVar1 = false;
        do {
          uVar4 = (uint)lVar6;
          if ((long)(ulong)*(uint *)(param_1 + 0x28) <= lVar6) {
            uVar4 = *(uint *)(param_1 + 0x28);
          }
          if (!bVar1) {
            memset(*(void **)(param_1 + 0x30),0,(ulong)uVar4);
          }
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x80) = uVar4;
          *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar4;
          uVar3 = FUN_0117f76c(param_1,0);
          if ((int)uVar3 == -1) {
            return uVar3;
          }
          lVar6 = lVar6 - (ulong)uVar4;
          bVar1 = true;
        } while (lVar6 != 0);
      }
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      if (*(uint *)(param_1 + 0x80) == 0) {
        lVar5 = *(long *)(param_1 + 0x30);
        *(long *)(param_1 + 0x78) = lVar5;
        lVar6 = lVar5;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x30);
        lVar6 = *(long *)(param_1 + 0x78);
      }
      uVar3 = (lVar6 + (ulong)*(uint *)(param_1 + 0x80)) - lVar5;
      if ((uint)uVar3 < *(uint *)(param_1 + 0x28)) {
        *(byte *)(lVar5 + (uVar3 & 0xffffffff)) = param_2;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        return (ulong)param_2;
      }
    }
    local_34[0] = param_2;
    iVar2 = gzwrite(param_1,local_34,1);
    uVar4 = (uint)param_2;
    if (iVar2 != 1) {
      uVar4 = 0xffffffff;
    }
    uVar3 = (ulong)uVar4;
  }
  return uVar3;
}

