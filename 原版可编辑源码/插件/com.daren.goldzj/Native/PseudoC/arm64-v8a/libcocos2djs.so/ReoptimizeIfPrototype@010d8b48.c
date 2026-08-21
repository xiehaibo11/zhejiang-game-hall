
/* v8::internal::JSObject::ReoptimizeIfPrototype(v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::JSObject::ReoptimizeIfPrototype(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = uVar3 & 0xffffffff00000000;
  if (((((*(uint *)((uVar2 | *(uint *)(uVar3 - 1)) + 0xb) >> 0x14 & 1) != 0) &&
       (uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 - 1)) + 0x23), (uVar1 & 1) != 0)) &&
      (uVar3 = uVar2 | uVar1, *(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 100)) &&
     ((*(byte *)(uVar3 + 0x17) >> 1 & 1) != 0)) {
    OptimizeAsPrototype(param_1,1);
    return;
  }
  return;
}

