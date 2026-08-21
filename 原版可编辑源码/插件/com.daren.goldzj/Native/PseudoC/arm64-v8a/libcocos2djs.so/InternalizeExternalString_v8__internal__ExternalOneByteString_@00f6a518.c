
/* v8::internal::Handle<v8::internal::ExternalOneByteString>
   v8::internal::Factory::InternalizeExternalString<v8::internal::ExternalOneByteString>(v8::internal::Handle<v8::internal::String>)
    */

ulong * __thiscall
v8::internal::Factory::InternalizeExternalString<v8::internal::ExternalOneByteString>
          (Factory *this,ulong *param_2)

{
  Factory *pFVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong local_28;
  
  uVar6 = (uint)*(ushort *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1)) + 7);
  uVar2 = uVar6 - 0x20;
  uVar6 = uVar2 >> 1 | uVar6 << 0x1f;
  if ((uVar6 < 0xe) && ((0x2233U >> (ulong)(uVar2 >> 1 & 0x1f) & 1) != 0)) {
    lVar7 = *(long *)(&DAT_019be498 + (long)(int)uVar6 * 8);
    pFVar1 = this + 0x9340;
    uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath
                      ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + lVar7) + 3) << 2,1,
                       1,0);
    uVar5 = *(ulong *)(this + lVar7);
    *(int *)(uVar3 - 1) = (int)uVar5;
    if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar3,0);
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(this + 0x95a0);
      if (puVar4 == *(ulong **)(this + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
      uVar3 = *puVar4;
    }
    *(undefined4 *)(uVar3 + 7) = *(undefined4 *)(*param_2 + 7);
    *(undefined4 *)(*puVar4 + 3) = *(undefined4 *)(*param_2 + 3);
    *(undefined8 *)(*puVar4 + 0xb) = 0;
    local_28 = *puVar4;
    if ((*(byte *)((local_28 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      if (*(ulong **)(this + 0x9358) != *(ulong **)(this + 0x9360)) {
        **(ulong **)(this + 0x9358) = local_28;
        *(long *)(this + 0x9358) = *(long *)(this + 0x9358) + 8;
        return puVar4;
      }
      lVar7 = 0x9350;
    }
    else {
      if (*(ulong **)pFVar1 != *(ulong **)(this + 0x9348)) {
        **(ulong **)pFVar1 = local_28;
        *(long *)pFVar1 = *(long *)pFVar1 + 8;
        return puVar4;
      }
      lVar7 = 0x9338;
    }
    std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
    __push_back_slow_path<v8::internal::Object_const&>
              ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
               (this + lVar7),(Object *)&local_28);
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

