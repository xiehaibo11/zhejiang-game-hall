
/* WARNING: Removing unreachable block (ram,0x010c6698) */
/* v8::internal::FeedbackNexus::ExtractMapsAndHandlers(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > >*,
   std::__ndk1::vector<v8::internal::MaybeObjectHandle,
   std::__ndk1::allocator<v8::internal::MaybeObjectHandle> >*) const */

int __thiscall
v8::internal::FeedbackNexus::ExtractMapsAndHandlers
          (FeedbackNexus *this,vector *param_1,vector *param_2)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  FeedbackNexus *pFVar4;
  undefined8 *puVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  Isolate *pIVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong *local_70;
  ulong *puStack_68;
  
  pFVar4 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar4 = *(FeedbackNexus **)this;
  }
  iVar9 = *(int *)(this + 0x10) * 4;
  lVar17 = *(ulong *)pFVar4 + 0x1f;
  uVar11 = *(uint *)(lVar17 + iVar9);
  uVar10 = (ulong)uVar11;
  pIVar12 = (Isolate *)(*(ulong *)pFVar4 & 0xffffffff00000000);
  uVar15 = (ulong)pIVar12 | uVar10;
  if ((uVar10 & 3) != 1) {
    if (uVar11 == 3) {
      return 0;
    }
    if ((uVar10 & 3) == 3) {
      uVar11 = *(uint *)(lVar17 + (iVar9 + 4));
      if (uVar11 == 3) {
        return 0;
      }
      pIVar1 = pIVar12 + 0x95b8;
      uVar10 = (ulong)pIVar12 | uVar10 & 0xfffffffffffffffd;
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        local_70 = *(ulong **)(pIVar12 + 0x95a0);
        if (local_70 == *(ulong **)(pIVar12 + 0x95a8)) {
          local_70 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = local_70 + 1;
        *local_70 = uVar10;
      }
      else {
        local_70 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar10);
      }
      if (*(long **)(param_1 + 8) < *(long **)(param_1 + 0x10)) {
        **(long **)(param_1 + 8) = (long)local_70;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)param_1,(Handle *)&local_70);
      }
      uVar10 = (ulong)pIVar12 | (ulong)uVar11;
      if ((~uVar11 & 3) == 0) {
        uVar10 = (ulong)pIVar12 | (ulong)uVar11 & 0xfffffffffffffffd;
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puStack_68 = *(ulong **)(pIVar12 + 0x95a0);
          if (puStack_68 == *(ulong **)(pIVar12 + 0x95a8)) {
            puStack_68 = (ulong *)HandleScope::Extend(pIVar12);
          }
          local_70 = (ulong *)0x0;
          *(ulong **)(pIVar12 + 0x95a0) = puStack_68 + 1;
          *puStack_68 = uVar10;
        }
        else {
          puStack_68 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)pIVar1,uVar10);
          local_70 = (ulong *)0x0;
        }
      }
      else {
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puStack_68 = *(ulong **)(pIVar12 + 0x95a0);
          if (puStack_68 == *(ulong **)(pIVar12 + 0x95a8)) {
            puStack_68 = (ulong *)HandleScope::Extend(pIVar12);
          }
          *(ulong **)(pIVar12 + 0x95a0) = puStack_68 + 1;
          *puStack_68 = uVar10;
        }
        else {
          puStack_68 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)pIVar1,uVar10);
        }
        local_70 = (ulong *)0x1;
      }
      puVar5 = *(undefined8 **)(param_2 + 8);
      if (puVar5 < *(undefined8 **)(param_2 + 0x10)) {
        puVar5[1] = puStack_68;
        *puVar5 = local_70;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
        ::__push_back_slow_path<v8::internal::MaybeObjectHandle>
                  ((vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
                    *)param_2,(MaybeObjectHandle *)&local_70);
      }
      return 1;
    }
    return 0;
  }
  uVar10 = (ulong)pIVar12 | 7;
  if (*(ushort *)(uVar10 + *(uint *)(uVar15 - 1)) < 0x40) {
    bVar7 = true;
  }
  else {
    if ((*(short *)(uVar10 + *(uint *)(uVar15 - 1)) == 0x40) &&
       (uVar11 != *(uint *)(pIVar12 + 0xc08))) {
      bVar7 = uVar11 != *(uint *)(pIVar12 + 0xb88);
      uVar11 = *(uint *)(uVar15 - 1);
      if (bVar7) goto LAB_010c66c4;
    }
    else {
      bVar7 = false;
      uVar11 = *(uint *)(uVar15 - 1);
    }
    if (1 < (ushort)(*(short *)(uVar10 + uVar11) - 0x97U)) {
      return 0;
    }
  }
LAB_010c66c4:
  if (bVar7) {
    uVar15 = (ulong)pIVar12 | (ulong)*(uint *)(lVar17 + (iVar9 + 4));
  }
  iVar9 = *(int *)(uVar15 + 3);
  if (iVar9 < 2) {
    return 0;
  }
  uVar10 = uVar15 & 0xffffffff00000000;
  pIVar1 = pIVar12 + 0x95b8;
  pIVar2 = pIVar12 + 0x95a0;
  lVar16 = 0;
  lVar17 = 0;
  iVar13 = 0;
  iVar18 = 4;
  pIVar3 = pIVar12 + 0x95a8;
  do {
    uVar11 = *(uint *)(uVar15 + (lVar16 >> 0x20 | 7U));
    if ((uVar11 != 3) && (((ulong)uVar11 & 3) == 3)) {
      uVar6 = *(uint *)(uVar15 + 7 + (long)iVar18);
      if (uVar6 != 3) {
        uVar14 = (ulong)uVar11 & 0xfffffffffffffffd | uVar10;
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar2;
          if (puVar8 == *(ulong **)pIVar3) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar12);
          }
          *(ulong **)pIVar2 = puVar8 + 1;
          *puVar8 = uVar14;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar14);
        }
        local_70 = puVar8;
        if (*(long **)(param_1 + 8) < *(long **)(param_1 + 0x10)) {
          **(long **)(param_1 + 8) = (long)puVar8;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        }
        else {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
          ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>>
                    ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                      *)param_1,(Handle *)&local_70);
        }
        uVar14 = uVar10 | uVar6;
        if ((~uVar6 & 3) == 0) {
          uVar14 = uVar10 | (ulong)uVar6 & 0xfffffffffffffffd;
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar2;
            if (puVar8 == *(ulong **)pIVar3) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar12);
            }
            local_70 = (ulong *)0x0;
            *(ulong **)pIVar2 = puVar8 + 1;
            *puVar8 = uVar14;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar14);
            local_70 = (ulong *)0x0;
          }
        }
        else {
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar2;
            if (puVar8 == *(ulong **)pIVar3) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar12);
            }
            *(ulong **)pIVar2 = puVar8 + 1;
            *puVar8 = uVar14;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar14);
          }
          local_70 = (ulong *)0x1;
        }
        puVar5 = *(undefined8 **)(param_2 + 8);
        puStack_68 = puVar8;
        if (puVar5 < *(undefined8 **)(param_2 + 0x10)) {
          puVar5[1] = puVar8;
          *puVar5 = local_70;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
          ::__push_back_slow_path<v8::internal::MaybeObjectHandle>
                    ((vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
                      *)param_2,(MaybeObjectHandle *)&local_70);
        }
        iVar9 = *(int *)(uVar15 + 3);
        iVar13 = iVar13 + 1;
      }
    }
    lVar17 = lVar17 + 2;
    iVar18 = iVar18 + 8;
    lVar16 = lVar16 + 0x800000000;
  } while (lVar17 < iVar9 >> 1);
  return iVar13;
}

