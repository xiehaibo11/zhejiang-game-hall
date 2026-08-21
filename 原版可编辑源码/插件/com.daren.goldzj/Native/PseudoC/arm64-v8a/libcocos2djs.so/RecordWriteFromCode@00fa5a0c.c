
/* v8::internal::IncrementalMarking::RecordWriteFromCode(unsigned long, unsigned long,
   v8::internal::Isolate*) */

undefined8
v8::internal::IncrementalMarking::RecordWriteFromCode(ulong param_1,ulong param_2,Isolate *param_3)

{
  uint uVar1;
  
  if (1 < *(int *)(*(IncrementalMarking **)(param_3 + 0x9078) + 0x58)) {
    uVar1 = *(uint *)param_2;
    if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
      RecordWriteSlow(*(IncrementalMarking **)(param_3 + 0x9078),param_1,param_2,
                      (ulong)uVar1 & 0xfffffffffffffffd | param_2 & 0xffffffff00000000);
    }
  }
  return 0;
}

