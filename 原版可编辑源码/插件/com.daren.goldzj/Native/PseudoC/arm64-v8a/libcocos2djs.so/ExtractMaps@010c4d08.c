
/* WARNING: Removing unreachable block (ram,0x010c4de0) */
/* v8::internal::FeedbackNexus::ExtractMaps(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > >*) const */

int __thiscall v8::internal::FeedbackNexus::ExtractMaps(FeedbackNexus *this,vector *param_1)

{
  FeedbackNexus *pFVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  Isolate *pIVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong *local_68;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  lVar10 = *(ulong *)pFVar1 + 0x1f;
  uVar6 = *(uint *)(lVar10 + *(int *)(this + 0x10) * 4);
  uVar5 = (ulong)uVar6;
  pIVar7 = (Isolate *)(*(ulong *)pFVar1 & 0xffffffff00000000);
  uVar9 = (ulong)pIVar7 | uVar5;
  if ((uVar5 & 3) != 1) {
    if (uVar6 == 3) {
      return 0;
    }
    if ((uVar5 & 3) == 3) {
      uVar5 = (ulong)pIVar7 | uVar5 & 0xfffffffffffffffd;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_68 = *(ulong **)(pIVar7 + 0x95a0);
        if (local_68 == *(ulong **)(pIVar7 + 0x95a8)) {
          local_68 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = local_68 + 1;
        *local_68 = uVar5;
      }
      else {
        local_68 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
      }
      if (*(long **)(param_1 + 8) < *(long **)(param_1 + 0x10)) {
        **(long **)(param_1 + 8) = (long)local_68;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)param_1,(Handle *)&local_68);
      }
      return 1;
    }
    return 0;
  }
  uVar5 = (ulong)pIVar7 | 7;
  if (*(ushort *)(uVar5 + *(uint *)(uVar9 - 1)) < 0x40) {
    bVar2 = true;
  }
  else {
    if ((*(short *)(uVar5 + *(uint *)(uVar9 - 1)) == 0x40) && (uVar6 != *(uint *)(pIVar7 + 0xc08)))
    {
      bVar2 = uVar6 != *(uint *)(pIVar7 + 0xb88);
      uVar6 = *(uint *)(uVar9 - 1);
      if (bVar2) goto LAB_010c4e6c;
    }
    else {
      bVar2 = false;
      uVar6 = *(uint *)(uVar9 - 1);
    }
    if (1 < (ushort)(*(short *)(uVar5 + uVar6) - 0x97U)) {
      return 0;
    }
  }
LAB_010c4e6c:
  if (bVar2) {
    uVar9 = (ulong)pIVar7 | (ulong)*(uint *)(lVar10 + (*(int *)(this + 0x10) * 4 + 4));
  }
  iVar4 = *(int *)(uVar9 + 3);
  if (iVar4 < 2) {
    return 0;
  }
  lVar10 = 0;
  iVar8 = 0;
  iVar11 = 7;
  do {
    uVar6 = *(uint *)(uVar9 + (long)iVar11);
    if ((uVar6 != 3) && (((ulong)uVar6 & 3) == 3)) {
      uVar5 = (ulong)uVar6 & 0xfffffffffffffffd | uVar9 & 0xffffffff00000000;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar5;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
      }
      local_68 = puVar3;
      if (*(long **)(param_1 + 8) < *(long **)(param_1 + 0x10)) {
        **(long **)(param_1 + 8) = (long)puVar3;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)param_1,(Handle *)&local_68);
      }
      iVar4 = *(int *)(uVar9 + 3);
      iVar8 = iVar8 + 1;
    }
    lVar10 = lVar10 + 2;
    iVar11 = iVar11 + 8;
  } while (lVar10 < iVar4 >> 1);
  return iVar8;
}

