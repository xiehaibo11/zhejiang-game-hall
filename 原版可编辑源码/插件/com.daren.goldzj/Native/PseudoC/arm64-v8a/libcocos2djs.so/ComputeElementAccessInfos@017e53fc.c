
/* v8::internal::compiler::AccessInfoFactory::ComputeElementAccessInfos(v8::internal::compiler::ElementAccessFeedback
   const&, v8::internal::ZoneVector<v8::internal::compiler::ElementAccessInfo>*) const */

undefined8 __thiscall
v8::internal::compiler::AccessInfoFactory::ComputeElementAccessInfos
          (AccessInfoFactory *this,ElementAccessFeedback *param_1,ZoneVector *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_b0;
  ElementAccessInfo aEStack_a8 [8];
  long local_a0;
  long local_98;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  Zone *local_68;
  
  local_b0 = ElementAccessFeedback::keyed_mode(param_1);
  iVar3 = KeyedAccessMode::access_mode((KeyedAccessMode *)&local_b0);
  if ((iVar3 == 3) || (iVar3 == 0)) {
    ConsolidateElementLoad((ElementAccessFeedback *)this);
    if (local_b0._0_1_ != (KeyedAccessMode)0x0) {
      if (*(ElementAccessInfo **)(param_2 + 8) != *(ElementAccessInfo **)(param_2 + 0x10)) {
        ElementAccessInfo::ElementAccessInfo(*(ElementAccessInfo **)(param_2 + 8),aEStack_a8);
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x48;
        return 1;
      }
      std::__ndk1::
      vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
      ::__push_back_slow_path<v8::internal::compiler::ElementAccessInfo_const&>
                ((vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
                  *)param_2,aEStack_a8);
      return 1;
    }
  }
  plVar4 = (long *)ElementAccessFeedback::transition_groups(param_1);
  plVar8 = (long *)*plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar8 != plVar4) {
    do {
      ComputeElementAccessInfo((AccessInfoFactory *)&local_b0,this,*(undefined8 *)*plVar8);
      if (local_b0._0_1_ == (KeyedAccessMode)0x0) {
        return 0;
      }
      lVar11 = *plVar8;
      if (1 < (ulong)(plVar8[1] - lVar11 >> 3)) {
        uVar9 = 1;
        do {
          if (local_98 - local_a0 != 8) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","receiver_maps_.size() == 1");
          }
          uVar10 = *(undefined8 *)(lVar11 + uVar9 * 8);
          if (local_78 == local_70) {
            lVar11 = (long)local_78 - (long)local_80 >> 3;
            uVar1 = lVar11 + 1;
            if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar7 = (long)local_70 - (long)local_80 >> 2;
            if (uVar1 <= uVar7) {
              uVar1 = uVar7;
            }
            if (0x7fffffe < (ulong)((long)local_70 - (long)local_80 >> 3)) {
              uVar1 = 0xfffffff;
            }
            if (uVar1 == 0) {
              lVar5 = 0;
            }
            else {
              uVar7 = uVar1 * 8;
              lVar5 = *(long *)(local_68 + 0x10);
              if (uVar7 < (ulong)(*(long *)(local_68 + 0x18) - lVar5) ||
                  uVar7 - (*(long *)(local_68 + 0x18) - lVar5) == 0) {
                *(ulong *)(local_68 + 0x10) = lVar5 + uVar7;
              }
              else {
                lVar5 = Zone::NewExpand(local_68,uVar7);
              }
            }
            puVar2 = (undefined8 *)(lVar5 + lVar11 * 8);
            *puVar2 = uVar10;
            local_70 = (undefined8 *)(lVar5 + uVar1 * 8);
            puVar6 = puVar2;
            while (local_78 != local_80) {
              local_78 = local_78 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *local_78;
            }
          }
          else {
            *local_78 = uVar10;
            puVar6 = local_80;
            puVar2 = local_78;
          }
          local_80 = puVar6;
          local_78 = puVar2 + 1;
          lVar11 = *plVar8;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)(plVar8[1] - lVar11 >> 3));
      }
      if (*(ElementAccessInfo **)(param_2 + 8) == *(ElementAccessInfo **)(param_2 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
        ::__push_back_slow_path<v8::internal::compiler::ElementAccessInfo_const&>
                  ((vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
                    *)param_2,aEStack_a8);
      }
      else {
        ElementAccessInfo::ElementAccessInfo(*(ElementAccessInfo **)(param_2 + 8),aEStack_a8);
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x48;
      }
      if (local_b0._0_1_ != (KeyedAccessMode)0x0) {
        if (local_80 != (undefined8 *)0x0) {
          local_78 = local_80;
        }
        if (local_a0 != 0) {
          local_98 = local_a0;
        }
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar4);
  }
  return 1;
}

