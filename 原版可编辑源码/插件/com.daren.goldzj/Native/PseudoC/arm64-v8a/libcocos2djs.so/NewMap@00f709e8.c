
/* v8::internal::Factory::NewMap(v8::internal::InstanceType, int, v8::internal::ElementsKind, int)
    */

void __thiscall
v8::internal::Factory::NewMap
          (Factory *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
          )

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x28,3,1,0);
  *(undefined4 *)(lVar1 + -1) = *(undefined4 *)(this + 0xd0);
  uVar2 = InitializeMap(this,lVar1,param_2,param_3,param_4,param_5);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  return;
}

