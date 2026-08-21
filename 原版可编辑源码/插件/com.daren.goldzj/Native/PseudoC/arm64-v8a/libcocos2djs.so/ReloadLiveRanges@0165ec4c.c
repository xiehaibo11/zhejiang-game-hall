
/* v8::internal::compiler::LinearScanAllocator::ReloadLiveRanges(v8::internal::ZoneUnorderedSet<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals> const&,
   v8::internal::compiler::LifetimePosition) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::ReloadLiveRanges
          (LinearScanAllocator *this,long param_1,uint param_3)

{
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *this_00;
  uint uVar1;
  LiveRange *pLVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  LiveRange *pLVar5;
  uint *puVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  uint uVar9;
  LiveRange *pLVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  LiveRange *local_68;
  
  plVar12 = *(long **)(param_1 + 0x18);
  if (plVar12 != (long *)0x0) {
    this_00 = (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               *)(this + 0x28);
    do {
      lVar11 = plVar12[2];
      local_68 = *(LiveRange **)(lVar11 + 0x90);
      if (local_68 != (LiveRange *)0x0) {
        uVar1 = *(uint *)(plVar12 + 3);
        do {
          if ((int)param_3 < *(int *)(*(long *)(local_68 + 8) + 4)) {
            *(LiveRange **)(lVar11 + 0x90) = local_68;
            pLVar5 = local_68 + 0x10;
            if (((*(int **)pLVar5 == (int *)0x0) || ((int)param_3 < **(int **)pLVar5)) ||
               (*(int *)(*(long *)(local_68 + 8) + 4) <= (int)param_3)) goto LAB_0165ecf0;
            pLVar2 = local_68 + 0x30;
            pLVar10 = pLVar5;
            if ((*(int **)pLVar2 != (int *)0x0) &&
               (pLVar10 = pLVar2, (int)param_3 < **(int **)pLVar2)) {
              *(undefined8 *)pLVar2 = 0;
              pLVar10 = pLVar5;
            }
            puVar6 = *(uint **)pLVar10;
            goto joined_r0x0165ed70;
          }
          local_68 = *(LiveRange **)(local_68 + 0x28);
        } while (local_68 != (LiveRange *)0x0);
      }
      *(undefined8 *)(lVar11 + 0x90) = 0;
LAB_0165ecf0:
      local_68 = (LiveRange *)0x0;
LAB_0165ecf4:
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) == 0) {
LAB_0165ecbc:
        plVar12 = (long *)*plVar12;
      }
      else {
        PrintF("No candidate for %d at %d\n",(ulong)*(uint *)(lVar11 + 0x5c),(ulong)param_3);
        plVar12 = (long *)*plVar12;
      }
joined_r0x0165ef60:
    } while (plVar12 != (long *)0x0);
  }
  return;
joined_r0x0165ed70:
  if (puVar6 != (uint *)0x0) {
    uVar9 = *puVar6;
    if ((int)uVar9 <= (int)param_3) {
      if (*(int **)pLVar2 == (int *)0x0) {
        if (uVar9 < 0x80000000) goto LAB_0165ed94;
      }
      else if (**(int **)pLVar2 < (int)uVar9) {
LAB_0165ed94:
        *(uint **)pLVar2 = puVar6;
        uVar9 = *puVar6;
      }
    }
    if ((int)uVar9 <= (int)param_3) {
      if ((int)puVar6[1] <= (int)param_3) goto code_r0x0165edb0;
      if (local_68 == (LiveRange *)0x0) goto LAB_0165ecf4;
      MaybeUndoPreviousSplit(this,local_68);
      if (**(uint **)(local_68 + 0x10) == param_3) {
        if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
          PrintF("Reload %d:%d starting at %d itself\n",(ulong)*(uint *)(lVar11 + 0x5c),
                 (ulong)*(uint *)local_68,(ulong)param_3);
        }
        if ((*(uint *)(local_68 + 4) & 1) != 0) {
          *(uint *)(local_68 + 4) = *(uint *)(local_68 + 4) & 0xffffe07e | 0x1000;
          *(uint *)(local_68 + 4) = *(uint *)(local_68 + 4) & 0xf03fffff | (uVar1 & 0xff) << 0x16;
          AddToUnhandled(this,local_68);
          plVar12 = (long *)*plVar12;
          goto joined_r0x0165ef60;
        }
        if (uVar1 == 0x20) goto LAB_0165ecbc;
        auVar13 = std::__ndk1::
                  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  ::__equal_range_multi<v8::internal::compiler::LiveRange*>(this_00,&local_68);
        p_Var3 = auVar13._0_8_;
        if (p_Var3 != auVar13._8_8_) {
          p_Var8 = *(__tree_node_base **)(p_Var3 + 8);
          if (*(__tree_node_base **)(p_Var3 + 8) != (__tree_node_base *)0x0) goto LAB_0165ee80;
          do {
            p_Var8 = p_Var3 + 0x10;
            p_Var4 = p_Var3;
            p_Var7 = *(__tree_node_base **)p_Var8;
            if (*(__tree_node_base **)*(__tree_node_base **)p_Var8 != p_Var3) {
              do {
                lVar11 = *(long *)p_Var8;
                p_Var8 = (__tree_node_base *)(lVar11 + 0x10);
                p_Var7 = *(__tree_node_base **)p_Var8;
              } while (*(long *)*(__tree_node_base **)p_Var8 != lVar11);
            }
            while( true ) {
              p_Var3 = p_Var7;
              if (*(__tree_node_base **)this_00 == p_Var4) {
                *(__tree_node_base **)this_00 = p_Var3;
              }
              *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x30),p_Var4);
              if (p_Var3 == auVar13._8_8_) goto LAB_0165ef68;
              p_Var8 = *(__tree_node_base **)(p_Var3 + 8);
              if (*(__tree_node_base **)(p_Var3 + 8) == (__tree_node_base *)0x0) break;
LAB_0165ee80:
              do {
                p_Var7 = p_Var8;
                p_Var8 = *(__tree_node_base **)p_Var7;
                p_Var4 = p_Var3;
              } while (p_Var8 != (__tree_node_base *)0x0);
            }
          } while( true );
        }
LAB_0165ef68:
        pLVar5 = (LiveRange *)AssignRegisterOnReload(this,local_68,uVar1);
        local_68 = pLVar5;
LAB_0165ef80:
        AddToActive(this,pLVar5);
        goto LAB_0165ecbc;
      }
      pLVar5 = (LiveRange *)
               RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,local_68,param_3);
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Reload %d:%d starting at %d as %d\n",(ulong)*(uint *)(lVar11 + 0x5c),
               (ulong)*(uint *)local_68,(ulong)**(uint **)(pLVar5 + 0x10),(ulong)*(uint *)pLVar5);
      }
      if (uVar1 != 0x20) {
        pLVar5 = (LiveRange *)AssignRegisterOnReload(this,pLVar5,uVar1);
        goto LAB_0165ef80;
      }
      *(uint *)(pLVar5 + 4) = *(uint *)(pLVar5 + 4) & 0xf03fffff | 0x8000000;
      AddToUnhandled(this,pLVar5);
      goto LAB_0165ecbc;
    }
  }
  goto LAB_0165ecf0;
code_r0x0165edb0:
  puVar6 = *(uint **)(puVar6 + 2);
  goto joined_r0x0165ed70;
}

