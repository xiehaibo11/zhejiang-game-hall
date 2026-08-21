
/* v8::internal::Object::BooleanValue(v8::internal::Isolate*) */

ulong __thiscall v8::internal::Object::BooleanValue(Object *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)this;
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    return (ulong)(1 < uVar1);
  }
  uVar3 = uVar2 & 0xffffffff00000000 | 7;
  if ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43) &&
     ((*(uint *)(uVar2 + 0x17) >> 1 & 0xff) < 2)) {
    return (ulong)(uVar1 == *(uint *)(param_1 + 0xb8));
  }
  if ((uVar1 == *(uint *)(param_1 + 0xb0)) ||
     ((uVar1 == *(uint *)(param_1 + 0xa0) ||
      ((*(byte *)((uVar2 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar2 - 1)) >> 4 & 1) != 0))))
  {
    return 0;
  }
  if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) {
    return (ulong)(*(int *)(uVar2 + 7) != 0);
  }
  if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42) {
    uVar2 = DoubleToBoolean(*(double *)(uVar2 + 3));
    return uVar2;
  }
  if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x41) {
    return (ulong)((*(uint *)(uVar2 + 3) & 0x7ffffffe) != 0);
  }
  return 1;
}

