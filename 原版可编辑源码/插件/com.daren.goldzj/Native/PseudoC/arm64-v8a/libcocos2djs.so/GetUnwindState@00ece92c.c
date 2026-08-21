
/* v8::Isolate::GetUnwindState() */

void v8::Isolate::GetUnwindState(void)

{
  Heap *this;
  int iVar1;
  Isolate *in_x0;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *in_x8;
  long local_28;
  
  in_x8[7] = 0;
  in_x8[6] = 0;
  in_x8[9] = 0;
  in_x8[8] = 0;
  in_x8[5] = 0;
  in_x8[4] = 0;
  uVar2 = *(undefined8 *)(*(long *)(in_x0 + 0x9070) + 0x30);
  in_x8[1] = *(undefined8 *)(*(long *)(in_x0 + 0x9070) + 0x38);
  *in_x8 = uVar2;
  uVar2 = internal::Isolate::embedded_blob(in_x0);
  in_x8[2] = uVar2;
  uVar3 = internal::Isolate::embedded_blob_size(in_x0);
  this = (Heap *)(in_x0 + 0x8850);
  in_x8[3] = uVar3 & 0xffffffff;
  local_28 = internal::Heap::builtin(this,0x28);
  if (*(int *)(local_28 + 0x17) < 0) {
    lVar4 = internal::Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    lVar4 = local_28 + 0x3f;
  }
  in_x8[4] = lVar4;
  if (*(int *)(local_28 + 0x17) < 0) {
    iVar1 = internal::Code::OffHeapInstructionSize((Code *)&local_28);
  }
  else {
    iVar1 = *(int *)(local_28 + 0x13);
  }
  in_x8[5] = (long)iVar1;
  local_28 = internal::Heap::builtin(this,0x29);
  if (*(int *)(local_28 + 0x17) < 0) {
    lVar4 = internal::Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    lVar4 = local_28 + 0x3f;
  }
  in_x8[6] = lVar4;
  if (*(int *)(local_28 + 0x17) < 0) {
    iVar1 = internal::Code::OffHeapInstructionSize((Code *)&local_28);
  }
  else {
    iVar1 = *(int *)(local_28 + 0x13);
  }
  in_x8[7] = (long)iVar1;
  local_28 = internal::Heap::builtin(this,0x2a);
  if (*(int *)(local_28 + 0x17) < 0) {
    lVar4 = internal::Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    lVar4 = local_28 + 0x3f;
  }
  in_x8[8] = lVar4;
  if (*(int *)(local_28 + 0x17) < 0) {
    iVar1 = internal::Code::OffHeapInstructionSize((Code *)&local_28);
  }
  else {
    iVar1 = *(int *)(local_28 + 0x13);
  }
  in_x8[9] = (long)iVar1;
  return;
}

