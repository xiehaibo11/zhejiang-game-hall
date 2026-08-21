
/* v8::internal::KeyAccumulator::GetOwnEnumPropertyKeys(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::KeyAccumulator::GetOwnEnumPropertyKeys(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  uVar2 = uVar3 & 0xffffffff00000000;
  if ((*(uint *)((uVar2 | 0xb) + (ulong)*(uint *)(uVar3 - 1)) >> 0x15 & 1) == 0) {
    FUN_010e13f8();
    return;
  }
  uVar1 = uVar2 | *(uint *)(uVar3 + 3);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xaa) {
    FUN_010e2394(param_1,0,0);
    return;
  }
  if ((*(uint *)(uVar3 + 3) & 1) == 0) {
    uVar1 = *(ulong *)(uVar2 + 0x410);
  }
  FUN_010e2470(param_1,0,0,uVar1);
  return;
}

