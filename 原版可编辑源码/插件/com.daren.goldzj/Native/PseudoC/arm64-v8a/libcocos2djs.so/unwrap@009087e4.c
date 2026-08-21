
/* se::ObjectWrap::unwrap(v8::Local<v8::Object>) */

undefined8 se::ObjectWrap::unwrap(Object *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)param_1;
  uVar1 = *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar3 - 1)) - 0x410;
  if (uVar1 < 0x12 && (1 << (ulong)(uVar1 & 0x1f) & 0x30001U) != 0) {
    return *(undefined8 *)(uVar3 + 0xb);
  }
  uVar2 = v8::Object::SlowGetAlignedPointerFromInternalField(param_1,0);
  return uVar2;
}

