
/* v8::internal::Factory::NewExternalStringFromOneByte(v8::String::ExternalOneByteStringResource
   const*) */

Factory * __thiscall
v8::internal::Factory::NewExternalStringFromOneByte
          (Factory *this,ExternalOneByteStringResource *param_1)

{
  Factory *pFVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  Factory *pFVar8;
  ulong local_38;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (uVar2 < 0xffffff1) {
    if (uVar2 == 0) {
      pFVar8 = this + 200;
    }
    else {
      pFVar1 = this + 0x9340;
      uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
      lVar6 = 0x318;
      if ((uVar4 & 1) == 0) {
        lVar6 = 0x350;
      }
      uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath
                        ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + lVar6) + 3) << 2,
                         1,1,0);
      uVar7 = *(ulong *)(this + lVar6);
      *(int *)(uVar4 - 1) = (int)uVar7;
      if (((uVar7 & 1) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar4,0);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pFVar8 = *(Factory **)(this + 0x95a0);
        if (pFVar8 == *(Factory **)(this + 0x95a8)) {
          pFVar8 = (Factory *)HandleScope::Extend((Isolate *)this);
        }
        *(Factory **)(this + 0x95a0) = pFVar8 + 8;
        *(ulong *)pFVar8 = uVar4;
      }
      else {
        pFVar8 = (Factory *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
        uVar4 = *(ulong *)pFVar8;
      }
      *(int *)(uVar4 + 7) = (int)uVar2;
      *(undefined4 *)(*(long *)pFVar8 + 3) = 7;
      uVar2 = *(ulong *)pFVar8;
      *(ExternalOneByteStringResource **)(uVar2 + 0xb) = param_1;
      if ((*(byte *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) >> 4 & 1) == 0)
      {
        uVar5 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
        *(undefined8 *)(uVar2 + 0x13) = uVar5;
      }
      lVar6 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
      if (lVar6 != 0) {
        Heap::UpdateExternalString((Heap *)(this + 0x8850),uVar2,0,lVar6);
      }
      local_38 = *(ulong *)pFVar8;
      if ((*(byte *)((local_38 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
        if (*(ulong **)(this + 0x9358) != *(ulong **)(this + 0x9360)) {
          **(ulong **)(this + 0x9358) = local_38;
          *(long *)(this + 0x9358) = *(long *)(this + 0x9358) + 8;
          return pFVar8;
        }
        lVar6 = 0x9350;
      }
      else {
        if (*(ulong **)pFVar1 != *(ulong **)(this + 0x9348)) {
          **(ulong **)pFVar1 = local_38;
          *(long *)pFVar1 = *(long *)pFVar1 + 8;
          return pFVar8;
        }
        lVar6 = 0x9338;
      }
      std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
      __push_back_slow_path<v8::internal::Object_const&>
                ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
                 (this + lVar6),(Object *)&local_38);
    }
  }
  else {
    puVar3 = (undefined8 *)NewInvalidStringLengthError(this);
    Isolate::Throw((Isolate *)this,*puVar3,0);
    pFVar8 = (Factory *)0x0;
  }
  return pFVar8;
}

