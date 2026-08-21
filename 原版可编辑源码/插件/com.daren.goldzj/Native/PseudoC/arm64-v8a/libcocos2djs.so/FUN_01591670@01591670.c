
undefined8 FUN_01591670(Isolate *param_1,undefined8 param_2,ulong *param_3)

{
  Isolate *pIVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  CanonicalHandleScope *this;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_78;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  ulong local_48;
  
  local_48 = *(ulong *)(param_1 + 0x2bc8);
  pIVar1 = param_1 + 0x95a0;
  uVar3 = v8::internal::Context::declaration_context((Context *)&local_48);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar3;
    uVar3 = *param_3;
    if ((uVar3 & 1) == 0) goto LAB_015916dc;
LAB_01591710:
    bVar2 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    uVar3 = *param_3;
    if ((uVar3 & 1) != 0) goto LAB_01591710;
LAB_015916dc:
    bVar2 = false;
  }
  puVar5 = (ulong *)v8::internal::Context::Lookup
                              (puVar4,param_2,0,&local_64,&local_68,auStack_6c,auStack_70,0);
  if (((local_68 != 0x40) && (uVar3 = *puVar5, (uVar3 & 1) != 0)) &&
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xaa))
  goto LAB_01591974;
  local_78 = *puVar4;
  local_48 = v8::internal::Context::scope_info((Context *)&local_78);
  uVar3 = v8::internal::ScopeInfo::HasContextExtensionSlot((ScopeInfo *)&local_48);
  if (((uVar3 & 1) == 0) ||
     (*(int *)(local_78 + 0xf) == *(int *)((local_78 & 0xffffffff00000000) + 0xa0))) {
LAB_01591808:
    uVar3 = *puVar4;
    if (*(short *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 7) != 0x90) {
      if (local_68 == 0x40) {
        local_78 = uVar3;
        local_48 = v8::internal::Context::scope_info((Context *)&local_78);
        uVar3 = v8::internal::ScopeInfo::HasContextExtensionSlot((ScopeInfo *)&local_48);
        if (((uVar3 & 1) == 0) ||
           (*(int *)(local_78 + 0xf) == *(int *)((local_78 & 0xffffffff00000000) + 0xa0))) {
          uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
          uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 +
                                                                                    0x2bc8) - 1)) +
                                                      0x13)) + 0x9b);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar3;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
          }
          puVar5 = (ulong *)v8::internal::Factory::NewJSObject((Factory *)param_1,puVar5,0);
          uVar9 = *puVar4;
          uVar3 = *puVar5;
          *(int *)(uVar9 + 0xf) = (int)uVar3;
          if ((uVar3 & 1) != 0) {
            uVar8 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xf,uVar3);
              uVar8 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xf,uVar3);
            }
          }
        }
        else {
          local_48 = *puVar4;
          uVar3 = v8::internal::Context::extension_object((Context *)&local_48);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar3;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
          }
        }
      }
      else {
        if (bVar2 == false) goto LAB_01591a94;
        if (local_64 != -1) {
          uVar9 = *param_3;
          lVar7 = uVar3 + (long)(local_64 << 2);
          *(int *)(lVar7 + 7) = (int)uVar9;
          if ((uVar9 & 1) != 0) {
            uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
            lVar7 = lVar7 + 7;
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar3,lVar7,uVar9);
              uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar3,lVar7,uVar9);
            }
          }
          goto LAB_01591a94;
        }
      }
      lVar7 = v8::internal::JSObject::SetOwnPropertyIgnoreAttributes(puVar5,param_2,param_3,0);
      if (lVar7 == 0) {
        return *(undefined8 *)(param_1 + 0x180);
      }
LAB_01591a94:
      return *(undefined8 *)(param_1 + 0xa0);
    }
    local_48 = uVar3;
    uVar3 = v8::internal::Context::global_object((Context *)&local_48);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  else {
    uVar9 = *puVar4;
    uVar3 = uVar9 & 0xffffffff00000000;
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar9 + 0xf)) - 1)) != 0xaa)
    goto LAB_01591808;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar3 = uVar3 | *(uint *)(uVar9 + 0xf);
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar3;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  }
LAB_01591974:
  uVar6 = FUN_01591228(param_1,puVar5,param_2,param_3,0,bVar2 ^ 1,bVar2,1,0,0xffffffff);
  return uVar6;
}

