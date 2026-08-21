
/* v8::internal::Factory::CopyFixedArrayUpTo(v8::internal::Handle<v8::internal::FixedArray>, int,
   v8::internal::AllocationType) */

Factory * __thiscall
v8::internal::Factory::CopyFixedArrayUpTo
          (Factory *this,long *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  Factory *pFVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    pFVar3 = this + 0x168;
  }
  else {
    if (0x7fffffd < param_3) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
    }
    uVar2 = AllocateRawArray(this,param_3 * 4 + 8,param_4);
    *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(this + 0xe0);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pFVar3 = *(Factory **)(this + 0x95a0);
      if (pFVar3 == *(Factory **)(this + 0x95a8)) {
        pFVar3 = (Factory *)HandleScope::Extend((Isolate *)this);
      }
      *(Factory **)(this + 0x95a0) = pFVar3 + 8;
      *(ulong *)pFVar3 = uVar2;
    }
    else {
      pFVar3 = (Factory *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
      uVar2 = *(ulong *)pFVar3;
    }
    *(uint *)(uVar2 + 3) = param_3 << 1;
    uVar2 = *(ulong *)pFVar3;
    uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    iVar1 = (uint)((uVar4 & 0x18) == 0) << 2;
    if ((uVar4 & 0x40000) != 0) {
      iVar1 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar2,uVar2 + 7,*param_2 + 7,param_3,iVar1);
  }
  return pFVar3;
}

