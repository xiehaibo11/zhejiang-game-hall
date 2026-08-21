
/* v8::internal::Map::SetShouldBeFastPrototypeMap(v8::internal::Handle<v8::internal::Map>, bool,
   v8::internal::Isolate*) */

void v8::internal::Map::SetShouldBeFastPrototypeMap(ulong *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(*param_1 + 0x23);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = *param_1 & 0xffffffff00000000;
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) != 100) {
      return;
    }
  }
  plVar3 = (long *)GetOrCreatePrototypeInfo(param_1,param_3);
  uVar2 = *(int *)(*plVar3 + 0x17) >> 1;
  uVar1 = uVar2 | 1;
  if ((param_2 & 1) == 0) {
    uVar1 = uVar2 & 0x7ffffffe;
  }
  *(int *)(*plVar3 + 0x17) = uVar1 << 1;
  return;
}

