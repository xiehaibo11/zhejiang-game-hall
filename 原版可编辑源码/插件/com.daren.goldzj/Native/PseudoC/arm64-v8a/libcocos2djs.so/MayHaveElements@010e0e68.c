
/* v8::internal::FastKeyAccumulator::MayHaveElements(v8::internal::JSReceiver) */

byte __thiscall v8::internal::FastKeyAccumulator::MayHaveElements(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_18;
  
  if ((0xa9 < *(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1))) &&
     (local_18 = param_2, uVar1 = JSObject::HasEnumerableElements((JSObject *)&local_18),
     (uVar1 & 1) == 0)) {
    return *(byte *)((local_18 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(local_18 - 1)) >> 3 & 1;
  }
  return 1;
}

