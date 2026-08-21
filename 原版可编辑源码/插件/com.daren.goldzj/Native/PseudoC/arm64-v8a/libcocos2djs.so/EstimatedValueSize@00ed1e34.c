
/* v8::debug::EstimatedValueSize(v8::Isolate*, v8::Local<v8::Value>) */

undefined8 v8::debug::EstimatedValueSize(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong local_28;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  local_28 = *param_2;
  if ((local_28 & 1) == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = internal::HeapObject::SizeFromMap
                      ((HeapObject *)&local_28,
                       local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1));
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return uVar2;
}

