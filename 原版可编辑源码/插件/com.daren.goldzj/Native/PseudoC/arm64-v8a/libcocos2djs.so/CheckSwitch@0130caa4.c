
/* v8::internal::compiler::Verifier::Visitor::CheckSwitch(v8::internal::compiler::Node*,
   v8::internal::compiler::AllNodes const&) */

void __thiscall
v8::internal::compiler::Verifier::Visitor::CheckSwitch
          (Visitor *this,Node *param_1,AllNodes *param_2)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Operator *pOVar5;
  int *piVar6;
  ulong extraout_x1;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  int iVar10;
  long *plVar11;
  int local_84;
  void *local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  local_80 = (void *)0x0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_60 = 0x3f800000;
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 != (long *)0x0) {
    iVar10 = 0;
    bVar2 = true;
LAB_0130cb0c:
    do {
      plVar8 = plVar11 + (ulong)(*(uint *)(plVar11 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar11 + 2) & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
      if (param_2[0x40] != (AllNodes)0x1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","only_inputs_");
      }
      if (plVar8 == (long *)0x0) {
LAB_0130cc24:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","all.IsLive(use)");
      }
      uVar7 = (ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffff;
      if ((*(ulong *)(param_2 + 0x28) <= uVar7) ||
         ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar7 >> 3 & 0x1ffff8)) >>
           ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x3f) & 1) == 0)) goto LAB_0130cc24;
      pOVar5 = (Operator *)*plVar8;
      if (*(short *)(pOVar5 + 0x10) == 9) {
        if (!bVar2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","expect_default");
        }
        bVar2 = false;
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) break;
        goto LAB_0130cb0c;
      }
      if (*(short *)(pOVar5 + 0x10) != 8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Switch #%d illegally used by #%d:%s",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff)
                 ,uVar7,*(undefined8 *)(pOVar5 + 8));
      }
      piVar6 = (int *)IfValueParametersOf(pOVar5);
      local_84 = *piVar6;
      std::__ndk1::
      __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
      ::__emplace_unique_key_args<int,int>
                ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                  *)&local_80,&local_84,&local_84);
      if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "if_value_parameters.emplace(IfValueParametersOf(use->op()).value()) .second");
      }
      iVar10 = iVar10 + 1;
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
    if (!bVar2) {
      if (*(int *)(*(long *)param_1 + 0x28) != iVar10 + 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","node->op()->ControlOutputCount() == case_count + 1");
      }
      CheckNotTyped(this,param_1);
      pvVar3 = local_80;
      puVar4 = local_70;
      while (puVar4 != (void *)0x0) {
        pvVar9 = (void *)*puVar4;
        local_80 = pvVar3;
        operator_delete(puVar4);
        pvVar3 = local_80;
        puVar4 = pvVar9;
      }
      local_80 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!expect_default");
}

