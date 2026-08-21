
/* v8::internal::compiler::JSInliningHeuristic::Finalize() */

void __thiscall v8::internal::compiler::JSInliningHeuristic::Finalize(JSInliningHeuristic *this)

{
  long lVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x60);
  if (lVar3 != 0) {
    if (FLAG_trace_turbo_inlining != '\0') {
      PrintCandidates(this);
      lVar3 = *(long *)(this + 0x60);
      if (lVar3 == 0) goto LAB_0173fcd0;
    }
    do {
      p_Var2 = *(__tree_node_base **)(this + 0x48);
      uStack_118 = *(undefined8 *)(p_Var2 + 0x48);
      local_120 = *(undefined8 *)(p_Var2 + 0x40);
      uStack_108 = *(undefined8 *)(p_Var2 + 0x58);
      uStack_110 = *(undefined8 *)(p_Var2 + 0x50);
      uStack_138 = *(undefined8 *)(p_Var2 + 0x28);
      local_140 = *(undefined8 *)(p_Var2 + 0x20);
      uStack_128 = *(undefined8 *)(p_Var2 + 0x38);
      uStack_130 = *(undefined8 *)(p_Var2 + 0x30);
      uStack_d8 = *(undefined8 *)(p_Var2 + 0x88);
      local_e0 = *(undefined8 *)(p_Var2 + 0x80);
      uStack_c8 = *(undefined8 *)(p_Var2 + 0x98);
      uStack_d0 = *(undefined8 *)(p_Var2 + 0x90);
      uStack_f8 = *(undefined8 *)(p_Var2 + 0x68);
      local_100 = *(undefined8 *)(p_Var2 + 0x60);
      uStack_e8 = *(undefined8 *)(p_Var2 + 0x78);
      uStack_f0 = *(undefined8 *)(p_Var2 + 0x70);
      uStack_98 = *(undefined8 *)(p_Var2 + 200);
      local_a0 = *(undefined8 *)(p_Var2 + 0xc0);
      uStack_88 = *(undefined8 *)(p_Var2 + 0xd8);
      uStack_90 = *(undefined8 *)(p_Var2 + 0xd0);
      uStack_b8 = *(undefined8 *)(p_Var2 + 0xa8);
      local_c0 = *(undefined8 *)(p_Var2 + 0xa0);
      uStack_a8 = *(undefined8 *)(p_Var2 + 0xb8);
      uStack_b0 = *(undefined8 *)(p_Var2 + 0xb0);
      local_50 = *(undefined8 *)(p_Var2 + 0x110);
      uStack_68 = *(undefined8 *)(p_Var2 + 0xf8);
      local_70 = *(undefined8 *)(p_Var2 + 0xf0);
      local_58 = *(long *)(p_Var2 + 0x108);
      uStack_60 = *(undefined8 *)(p_Var2 + 0x100);
      uStack_78 = *(undefined8 *)(p_Var2 + 0xe8);
      local_80 = *(undefined8 *)(p_Var2 + 0xe0);
      plVar4 = *(long **)(p_Var2 + 8);
      if (*(long **)(p_Var2 + 8) == (long *)0x0) {
        p_Var7 = p_Var2 + 0x10;
        plVar6 = *(long **)p_Var7;
        if ((__tree_node_base *)*plVar6 != p_Var2) {
          do {
            lVar8 = *(long *)p_Var7;
            p_Var7 = (__tree_node_base *)(lVar8 + 0x10);
            plVar6 = *(long **)p_Var7;
          } while (*plVar6 != lVar8);
        }
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      *(long **)(this + 0x48) = plVar6;
      *(long *)(this + 0x60) = lVar3 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x50),p_Var2);
      plVar4 = (long *)(local_58 + 0x20);
      uVar5 = *(byte *)(local_58 + 0x17) & 0xf;
      if (uVar5 == 0xf) {
        uVar5 = *(uint *)(*plVar4 + 8);
        plVar4 = (long *)(*plVar4 + 0x10);
      }
    } while (((((0 < (int)uVar5) && (*plVar4 == 0)) ||
              (FLAG_max_inlined_bytecode_size_cumulative <
               *(int *)(this + 0xa0) +
               (int)(FLAG_reserve_inline_budget_scale_factor * (double)(long)local_50._4_4_))) ||
             (lVar3 = InlineCandidate(this,(Candidate *)&local_140,false), lVar3 == 0)) &&
            (lVar3 = *(long *)(this + 0x60), lVar3 != 0));
  }
LAB_0173fcd0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

