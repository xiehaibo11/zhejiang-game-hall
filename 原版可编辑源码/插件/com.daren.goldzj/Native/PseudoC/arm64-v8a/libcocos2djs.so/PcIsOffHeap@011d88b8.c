
/* v8::internal::InstructionStream::PcIsOffHeap(v8::internal::Isolate*, unsigned long) */

bool v8::internal::InstructionStream::PcIsOffHeap(Isolate *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = Isolate::embedded_blob(param_1);
  if (param_2 < uVar2) {
    bVar1 = false;
  }
  else {
    uVar3 = Isolate::embedded_blob_size(param_1);
    bVar1 = param_2 < uVar2 + (uVar3 & 0xffffffff);
  }
  return bVar1;
}

