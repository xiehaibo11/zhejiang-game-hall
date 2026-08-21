
/* v8::internal::CpuFeatures::FlushICache(void*, unsigned long) */

void v8::internal::CpuFeatures::FlushICache(void *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = ctr_el0;
  uVar4 = (ulong)(uint)(4 << (ulong)((uint)uVar1 >> 0x10 & 0xf));
  uVar2 = (ulong)(uint)(4 << (ulong)((uint)uVar1 & 0xf));
  uVar3 = -uVar4 & (ulong)param_1;
  uVar5 = -uVar2 & (ulong)param_1;
  do {
    DC_CIVAC(uVar3);
    uVar3 = uVar3 + uVar4;
  } while ((long)uVar3 < (long)((long)param_1 + param_2));
  DataSynchronizationBarrier(2,3,0);
  do {
    IC_IVAU(uVar5);
    uVar5 = uVar5 + uVar2;
  } while ((long)uVar5 < (long)((long)param_1 + param_2));
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

