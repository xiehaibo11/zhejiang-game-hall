
/* v8::internal::Handle<v8::internal::PropertyArray>
   v8::internal::Factory::CopyArrayWithMap<v8::internal::PropertyArray>(v8::internal::Handle<v8::internal::PropertyArray>,
   v8::internal::Handle<v8::internal::Map>) */

ulong * __thiscall
v8::internal::Factory::CopyArrayWithMap<v8::internal::PropertyArray>
          (Factory *this,long *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(*param_2 + 3) >> 1 & 0x3ff;
  uVar3 = AllocateRawArray(this,uVar2 * 4 + 8,0);
  *(undefined4 *)(uVar3 - 1) = *param_3;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  *(uint *)(uVar3 + 3) = uVar2 << 1;
  if (uVar2 != 0) {
    uVar3 = *puVar4;
    uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    iVar1 = (uint)((uVar5 & 0x18) == 0) << 2;
    if ((uVar5 & 0x40000) != 0) {
      iVar1 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar3,uVar3 + 7,*param_2 + 7,uVar2,iVar1);
  }
  return puVar4;
}

