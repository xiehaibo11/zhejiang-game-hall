
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForPropertyAccess(v8::internal::compiler::FeedbackSource
   const&, v8::internal::compiler::AccessMode, v8::base::Optional<v8::internal::compiler::NameRef>)
    */

undefined4 * __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForPropertyAccess
          (JSHeapBroker *this,long *param_1,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  Zone *pZVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  long *local_48;
  
  local_60 = (undefined8 *)*param_1;
  local_50 = (undefined4)param_1[1];
  uStack_58 = 0;
  if (local_60 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    local_78 = (long *)*local_60;
    uVar2 = FeedbackVector::GetKind((FeedbackVector *)&local_78);
  }
  local_4c = uVar2;
  iVar3 = FeedbackNexus::ic_state((FeedbackNexus *)&local_60);
  if (iVar3 == 1) {
    pZVar4 = *(Zone **)(this + 0x10);
    puVar5 = *(undefined4 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 8) {
      puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,8);
    }
    else {
      *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 2;
    }
    *puVar5 = 0;
    puVar5[1] = uVar2;
    return puVar5;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  FeedbackNexus::ExtractMaps((FeedbackNexus *)&local_60,(vector *)&local_78);
  plVar7 = local_70;
  if (local_78 != local_70) {
    uVar10 = *(undefined8 *)this;
    plStack_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_90 = (long *)0x0;
    plVar11 = local_78;
    do {
      local_48 = (long *)*plVar11;
      local_48 = (long *)Map::TryUpdate(uVar10);
      if (local_48 == (long *)0x0) {
        local_48 = (long *)0x0;
      }
      else if (((*(uint *)(*local_48 + 0xb) >> 0x14 & 1) == 0) ||
              ((*(uint *)(*local_48 + 0xb) >> 0x16 & 1) != 0)) {
        if (plStack_88 == local_80) {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
          ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                    ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                      *)&local_90,(Handle *)&local_48);
        }
        else {
          *plStack_88 = (long)local_48;
          plStack_88 = plStack_88 + 1;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar7 != plVar11);
    if (local_78 != (long *)0x0) {
      local_70 = local_78;
      operator_delete(local_78);
    }
    local_78 = local_90;
    local_70 = plStack_88;
    local_68 = local_80;
    if (local_90 == plStack_88) {
      pZVar4 = *(Zone **)(this + 0x10);
      puVar5 = *(undefined4 **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 8) {
        puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,8);
      }
      else {
        *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 2;
      }
      *puVar5 = 0;
      puVar5[1] = uVar2;
      goto joined_r0x01737370;
    }
  }
  if (*param_4 == '\0') {
    GetNameFeedback((FeedbackNexus *)this);
  }
  else {
    local_80 = *(long **)(param_4 + 0x10);
    plStack_88 = *(long **)(param_4 + 8);
    local_90 = *(long **)param_4;
  }
  if (local_90._0_1_ ==
      (vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
       )0x0) {
    iVar3 = FeedbackNexus::GetKeyType((FeedbackNexus *)&local_60);
    if ((iVar3 == 0) && (local_78 != local_70)) {
      local_48 = (long *)KeyedAccessMode::FromNexus((FeedbackNexus *)&local_60);
      puVar5 = (undefined4 *)ProcessFeedbackMapsForElementAccess(this,&local_78,&local_48,uVar2);
    }
    else {
      pZVar4 = *(Zone **)(this + 0x10);
      puVar5 = *(undefined4 **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x30) {
        puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,0x30);
      }
      else {
        *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 0xc;
      }
      uVar8 = *(undefined8 *)(this + 0x10);
      uVar10 = KeyedAccessMode::FromNexus((FeedbackNexus *)&local_60);
      *(undefined8 *)(puVar5 + 2) = uVar10;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *puVar5 = 4;
      puVar5[1] = uVar2;
      *(undefined8 *)(puVar5 + 10) = uVar8;
    }
  }
  else {
    pZVar4 = *(Zone **)(this + 0x10);
    puVar5 = *(undefined4 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x38) {
      puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,0x38);
    }
    else {
      *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 0xe;
    }
    plVar11 = local_70;
    plVar7 = local_78;
    pZVar4 = *(Zone **)(this + 0x10);
    uVar1 = (long)local_70 - (long)local_78;
    if (uVar1 == 0) {
      plVar6 = (long *)0x0;
      plVar9 = (long *)0x0;
    }
    else {
      if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) goto LAB_017374f0;
      plVar6 = *(long **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)plVar6) < uVar1) {
        plVar6 = (long *)Zone::NewExpand(pZVar4,uVar1);
        plVar9 = plVar6;
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = (long)plVar6 + uVar1;
        plVar9 = plVar6;
      }
      for (; plVar7 != plVar11; plVar7 = plVar7 + 1) {
        *plVar6 = *plVar7;
        plVar6 = plVar6 + 1;
      }
    }
    *puVar5 = 9;
    puVar5[1] = uVar2;
    uVar8 = ((undefined8 *)((ulong)&local_90 | 8))[1];
    uVar10 = *(undefined8 *)((ulong)&local_90 | 8);
    uVar1 = (long)plVar6 - (long)plVar9;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(Zone **)(puVar5 + 0xc) = pZVar4;
    *(undefined8 *)(puVar5 + 4) = uVar8;
    *(undefined8 *)(puVar5 + 2) = uVar10;
    if (uVar1 != 0) {
      if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) {
LAB_017374f0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar7 = *(long **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)plVar7) < uVar1) {
        plVar7 = (long *)Zone::NewExpand(pZVar4,uVar1);
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = (long)plVar7 + uVar1;
      }
      *(long **)(puVar5 + 6) = plVar7;
      *(long **)(puVar5 + 8) = plVar7;
      *(long **)(puVar5 + 10) = plVar7 + ((long)uVar1 >> 3);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        *plVar7 = *plVar9;
        plVar7 = (long *)(*(long *)(puVar5 + 8) + 8);
        *(long **)(puVar5 + 8) = plVar7;
      }
    }
  }
joined_r0x01737370:
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return puVar5;
}

