
int FUN_00c29398(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_1d8 [8];
  undefined4 local_1d0;
  undefined1 auStack_100 [256];
  
  memcpy(auStack_1d8,*(void **)(param_1 + 0x50),0x1d8);
  iVar1 = FUN_00c17684(*(undefined8 *)(param_1 + 0x48),0,param_1,FUN_00c292cc);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x50);
    *(undefined4 *)(lVar2 + 8) = local_1d0;
    memcpy((void *)(lVar2 + 0xd8),auStack_100,0x100);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  uVar4 = (ulong)(uint)((int)*(undefined8 *)(param_1 + 0x30) - (int)uVar3);
  *(ulong *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - uVar4;
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),uVar3,uVar4,0);
  return iVar1;
}

