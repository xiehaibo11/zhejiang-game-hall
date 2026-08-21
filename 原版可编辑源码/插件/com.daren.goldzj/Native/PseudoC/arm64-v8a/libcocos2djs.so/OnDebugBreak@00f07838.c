
/* v8::internal::Debug::OnDebugBreak(v8::internal::Handle<v8::internal::FixedArray>) */

void __thiscall v8::internal::Debug::OnDebugBreak(Debug *this,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  Debug DVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  int iVar8;
  long lVar9;
  int *local_78;
  int *local_70;
  int *piStack_68;
  int local_44;
  
  if ((((this[10] == (Debug)0x0) && (this[8] != (Debug)0x0)) &&
      (pIVar7 = *(Isolate **)(this + 0x88), *(int *)(pIVar7 + 0xb80c) != 0x20)) &&
     (*(long *)this != 0)) {
    uVar1 = *(undefined8 *)(pIVar7 + 0x95a0);
    lVar2 = *(long *)(pIVar7 + 0x95a8);
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
    DVar3 = this[0xc];
    this[0xc] = (Debug)0x1;
    local_70 = (int *)0x0;
    piStack_68 = (int *)0x0;
    local_78 = (int *)0x0;
    uVar6 = *param_2;
    if (1 < *(int *)(uVar6 + 3)) {
      iVar8 = 0;
      lVar9 = 1;
      while( true ) {
        local_44 = *(int *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)iVar8 + 7))
                           + 3) >> 1;
        if (local_70 < piStack_68) {
          *local_70 = local_44;
          local_70 = local_70 + 1;
        }
        else {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_78,&local_44);
        }
        uVar6 = *param_2;
        if (*(int *)(uVar6 + 3) >> 1 <= lVar9) break;
        iVar8 = iVar8 + 4;
        lVar9 = lVar9 + 1;
      }
    }
    pIVar4 = *(Isolate **)(this + 0x88);
    uVar6 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
    }
    (**(code **)(**(long **)this + 0x18))(*(long **)this,puVar5,&local_78);
    if (local_78 != (int *)0x0) {
      local_70 = local_78;
      operator_delete(local_78);
    }
    this[0xc] = DVar3;
    if (pIVar7 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar7 + 0x95a0) = uVar1;
      *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
      if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
        *(long *)(pIVar7 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar7);
      }
    }
  }
  return;
}

