
long FUN_00c1e1b4(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = FUN_00bfba1c(param_1,"_VMEVENTS",9);
  puVar2 = (ulong *)FUN_00c1bc28(*(ulong *)(*(long *)(param_1 + 0x10) + 0xd0) & 0x7fffffffffff,uVar1
                                );
  if ((int)((long)*puVar2 >> 0x2f) == -0xc) {
    uVar3 = *puVar2 & 0x7fffffffffff;
    if ((param_2 & 0xfffffff8) < *(uint *)(uVar3 + 0x30)) {
      puVar2 = (ulong *)(*(long *)(uVar3 + 0x10) + (long)(int)(param_2 & 0xfffffff8) * 8);
    }
    else {
      puVar2 = (ulong *)FUN_00c1bbc0();
    }
    if ((puVar2 != (ulong *)0x0) && ((int)((long)*puVar2 >> 0x2f) == -9)) {
      puVar5 = *(ulong **)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x30) - (long)puVar5 < 0xa1) {
        FUN_00bfe0e0(param_1,0x14);
        puVar5 = *(ulong **)(param_1 + 0x28);
      }
      *(ulong **)(param_1 + 0x28) = puVar5 + 1;
      *puVar5 = *puVar2 & 0x7fffffffffff | 0xfffb800000000000;
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
      *puVar4 = 0xffffffffffffffff;
      return *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x38);
    }
  }
  *(byte *)(lVar6 + 0xc3) = *(byte *)(lVar6 + 0xc3) & ((byte)(1 << (ulong)(param_2 & 7)) ^ 0xff);
  return 0;
}

