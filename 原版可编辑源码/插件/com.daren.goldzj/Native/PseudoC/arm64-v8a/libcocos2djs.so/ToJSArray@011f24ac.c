
/* v8::internal::FixedArrayBuilder::ToJSArray(v8::internal::Handle<v8::internal::JSArray>) */

ulong * __thiscall
v8::internal::FixedArrayBuilder::ToJSArray(FixedArrayBuilder *this,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(ulong **)this;
  JSObject::EnsureCanContainElements(param_2,puVar2,*(int *)(*puVar2 + 3) >> 1,1);
  uVar4 = *param_2;
  uVar3 = *puVar2;
  *(int *)(uVar4 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar1 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar3);
      uVar1 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar1 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
    }
  }
  *(uint *)(*param_2 + 0xb) = *(uint *)(*puVar2 + 3) & 0xfffffffe;
  *(int *)(*param_2 + 0xb) = *(int *)(this + 8) << 1;
  return param_2;
}

