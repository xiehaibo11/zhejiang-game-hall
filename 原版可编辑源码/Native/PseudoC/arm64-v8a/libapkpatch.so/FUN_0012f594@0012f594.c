
void FUN_0012f594(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  thunk_FUN_00132e5c(lVar4);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(lVar4 + 0x28) <= *(uint *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(lVar4 + 0x28);
  }
  if (uVar1 != 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(lVar4 + 0x20),(ulong)uVar1);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (ulong)uVar1;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (ulong)uVar1;
    lVar2 = *(long *)(lVar4 + 0x20);
    lVar3 = *(long *)(lVar4 + 0x28);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar1;
    lVar3 = lVar3 - (ulong)uVar1;
    *(ulong *)(lVar4 + 0x20) = lVar2 + (ulong)uVar1;
    *(long *)(lVar4 + 0x28) = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
    }
  }
  return;
}

