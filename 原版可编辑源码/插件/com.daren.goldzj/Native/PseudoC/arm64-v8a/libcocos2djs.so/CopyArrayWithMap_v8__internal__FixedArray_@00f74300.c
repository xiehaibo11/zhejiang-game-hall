
/* v8::internal::Handle<v8::internal::FixedArray>
   v8::internal::Factory::CopyArrayWithMap<v8::internal::FixedArray>(v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::Handle<v8::internal::Map>) */

ulong * __thiscall
v8::internal::Factory::CopyArrayWithMap<v8::internal::FixedArray>
          (Factory *this,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*param_2 + 3);
  uVar1 = (int)uVar2 >> 1;
  if (0x7fffffd < uVar1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar4 = AllocateRawArray(this,uVar1 * 4 + 8,0);
  *(undefined4 *)(uVar4 - 1) = *param_3;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    uVar4 = *puVar5;
  }
  *(uint *)(uVar4 + 3) = uVar2 & 0xfffffffe;
  if (uVar1 != 0) {
    uVar4 = *puVar5;
    uVar6 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    iVar3 = (uint)((uVar6 & 0x18) == 0) << 2;
    if ((uVar6 & 0x40000) != 0) {
      iVar3 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar4,uVar4 + 7,*param_2 + 7,uVar1,iVar3);
  }
  return puVar5;
}

