
void __aarch64_sync_cache_range(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (DAT_01795bd8 == 0) {
    uVar3 = ctr_el0;
    DAT_01795bd8 = (uint)uVar3;
  }
  iVar1 = 4 << (ulong)(DAT_01795bd8 & 0xf);
  iVar2 = 4 << ((ulong)(DAT_01795bd8 >> 0x10) & 0xf);
  for (uVar4 = param_1 & ((ulong)(iVar2 - 1) ^ 0xffffffffffffffff); uVar4 < param_2;
      uVar4 = uVar4 + (long)iVar2) {
    DC_CVAU(uVar4);
  }
  DataSynchronizationBarrier(2,3,0);
  for (param_1 = param_1 & ((ulong)(iVar1 - 1) ^ 0xffffffffffffffff); param_1 < param_2;
      param_1 = param_1 + (long)iVar1) {
    IC_IVAU(param_1);
  }
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

