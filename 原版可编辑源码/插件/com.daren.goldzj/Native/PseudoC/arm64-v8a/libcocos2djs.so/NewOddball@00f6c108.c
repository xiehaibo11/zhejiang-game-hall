
/* v8::internal::Factory::NewOddball(v8::internal::Handle<v8::internal::Map>, char const*,
   v8::internal::Handle<v8::internal::Object>, char const*, unsigned char) */

ulong * __thiscall
v8::internal::Factory::NewOddball
          (Factory *this,ulong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*param_2 + 3) << 2,4,1,0);
  uVar3 = *param_2;
  *(int *)(uVar1 - 1) = (int)uVar3;
  if (((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar1,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0x95a0);
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
  }
  Oddball::Initialize(this,puVar2,param_3,param_4,param_5,param_6);
  return puVar2;
}

