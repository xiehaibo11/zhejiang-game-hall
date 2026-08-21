
/* v8::internal::Factory::NewBuiltinContext(v8::internal::Handle<v8::internal::NativeContext>, int)
    */

ulong * __thiscall
v8::internal::Factory::NewBuiltinContext(Factory *this,ulong *param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x1a7);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(this + 0x95a0);
    if (puVar1 == *(ulong **)(this + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  puVar1 = (ulong *)NewContext(this,puVar1,param_3 * 4 + 8,param_3,0);
  uVar4 = *puVar1;
  uVar2 = *(ulong *)(this + 0x160);
  *(int *)(uVar4 + 7) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar2);
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar2);
    }
  }
  uVar4 = *puVar1;
  uVar2 = *param_2;
  *(int *)(uVar4 + 0xb) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xb,uVar2);
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xb,uVar2);
    }
  }
  return puVar1;
}

