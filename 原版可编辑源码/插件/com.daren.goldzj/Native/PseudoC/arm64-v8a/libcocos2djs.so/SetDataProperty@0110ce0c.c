
/* v8::internal::Object::SetDataProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::Object::SetDataProperty(LookupIterator *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong local_18;
  
  puVar3 = *(ulong **)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x48) != -1) {
    uVar1 = *puVar3;
    if ((0xa9 < *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1))) &&
       (uVar2 = uVar1 & 0xffffffff00000000 | 10,
       (byte)((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) >> 3) - 0x11) < 0xb)) {
      if ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 0xf0) == 0xd0) {
        param_2 = (ulong *)BigInt::FromObject(*(undefined8 *)(param_1 + 0x18),param_2);
        if (param_2 == (ulong *)0x0) {
          return 0;
        }
      }
      else {
        uVar1 = *param_2;
        if ((((uVar1 & 1) == 0) ||
            (uVar2 = uVar1 & 0xffffffff00000000 | 7,
            *(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0x42)) ||
           ((int)uVar1 == *(int *)(*(long *)(param_1 + 0x18) + 0xa0))) goto LAB_0110cee8;
        if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) != 0x42) {
          param_2 = (ulong *)ConvertToNumberOrNumeric(*(long *)(param_1 + 0x18),param_2,0);
        }
        if (param_2 == (ulong *)0x0) {
          return 0;
        }
      }
      if ((*(uint *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb)) + 0x1b) >> 2 &
          1) != 0) {
        return 0x101;
      }
    }
  }
LAB_0110cee8:
  LookupIterator::PrepareForDataProperty(param_1,param_2);
  LookupIterator::WriteDataValue(param_1,param_2,0);
  if (FLAG_verify_heap != '\0') {
    local_18 = *puVar3;
    HeapObject::HeapObjectVerify((HeapObject *)&local_18,*(Isolate **)(param_1 + 0x18));
  }
  return 0x101;
}

