
/* v8::internal::compiler::BytecodeGraphBuilder::AdvanceToOsrEntryAndPeelLoops() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::AdvanceToOsrEntryAndPeelLoops
          (BytecodeGraphBuilder *this)

{
  BytecodeArrayIterator *this_00;
  __tree_node_base *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  BytecodeLivenessState *pBVar9;
  __tree_node_base *p_Var10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  Environment *pEVar19;
  __tree_node_base *p_Var20;
  Environment *this_01;
  __tree_node_base *p_Var21;
  BytecodeGraphBuilder *local_d8;
  long *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  long local_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_b0 = *(undefined8 *)(this + 8);
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = (long *)0x0;
  local_b8 = 0;
  local_c0 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = (long *)0x0;
  local_88 = (long *)0x0;
  local_d8 = this;
  local_90 = local_b0;
  OsrIteratorState::ProcessOsrPrelude((OsrIteratorState *)&local_d8);
  iVar18 = *(int *)(*(long *)(this + 0xa0) + 0xe8);
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= osr_entry_point_");
  }
  Environment::FillWithOsrValues(*(Environment **)(this + 0xa8));
  piVar7 = (int *)BytecodeAnalysis::GetLoopInfoFor(*(BytecodeAnalysis **)(this + 0xa0),iVar18);
  iVar18 = *piVar7;
  if (iVar18 != -1) {
    this_00 = (BytecodeArrayIterator *)(this + 0x88);
    p_Var1 = (__tree_node_base *)(this + 200);
    do {
      piVar7 = (int *)BytecodeAnalysis::GetLoopInfoFor(*(BytecodeAnalysis **)(this + 0xa0),iVar18);
      while ((uVar8 = interpreter::BytecodeArrayIterator::done(this_00), (uVar8 & 1) == 0 &&
             ((cVar5 = interpreter::BytecodeArrayAccessor::current_bytecode
                                 ((BytecodeArrayAccessor *)this_00), cVar5 != -0x76 ||
              (iVar6 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                                 ((BytecodeArrayAccessor *)this_00), iVar6 != iVar18))))) {
        VisitSingleBytecode(this);
        interpreter::BytecodeArrayIterator::Advance(this_00);
      }
      ExitThenEnterExceptionHandlers(this,*(int *)(this + 0x90));
      p_Var10 = *(__tree_node_base **)(this + 200);
      iVar6 = *(int *)(this + 0x90);
      p_Var21 = p_Var1;
      if (p_Var10 != (__tree_node_base *)0x0) {
        do {
          if (iVar6 <= *(int *)(p_Var10 + 0x20)) {
            p_Var21 = p_Var10;
          }
          p_Var10 = *(__tree_node_base **)(p_Var10 + (ulong)(*(int *)(p_Var10 + 0x20) < iVar6) * 8);
        } while (p_Var10 != (__tree_node_base *)0x0);
        if ((p_Var21 != p_Var1) && (*(int *)(p_Var21 + 0x20) <= iVar6)) {
          pEVar19 = *(Environment **)(this + 0xa8);
          this[0x160] = (BytecodeGraphBuilder)0x1;
          if (pEVar19 != (Environment *)0x0) {
            this_01 = *(Environment **)(p_Var21 + 0x28);
            pBVar9 = (BytecodeLivenessState *)
                     BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),iVar6);
            Environment::Merge(this_01,pEVar19,pBVar9);
            iVar6 = *(int *)(this + 0x90);
          }
          *(undefined8 *)(this + 0xa8) = *(undefined8 *)(p_Var21 + 0x28);
        }
      }
      if (*(long *)(this + 0xd8) != 0) {
        p_Var21 = *(__tree_node_base **)(this + 0xc0);
        while ((p_Var1 != p_Var21 && (*(int *)(p_Var21 + 0x20) <= iVar6))) {
          p_Var10 = *(__tree_node_base **)(p_Var21 + 8);
          if (*(__tree_node_base **)(p_Var21 + 8) == (__tree_node_base *)0x0) {
            p_Var10 = p_Var21 + 0x10;
            p_Var20 = *(__tree_node_base **)p_Var10;
            if (*(__tree_node_base **)p_Var20 != p_Var21) {
              do {
                lVar15 = *(long *)p_Var10;
                p_Var10 = (__tree_node_base *)(lVar15 + 0x10);
                p_Var20 = *(__tree_node_base **)p_Var10;
              } while (*(long *)p_Var20 != lVar15);
            }
          }
          else {
            do {
              p_Var20 = p_Var10;
              p_Var10 = *(__tree_node_base **)p_Var20;
            } while (*(__tree_node_base **)p_Var20 != (__tree_node_base *)0x0);
          }
          if (*(__tree_node_base **)(this + 0xc0) == p_Var21) {
            *(__tree_node_base **)(this + 0xc0) = p_Var20;
          }
          *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 200),p_Var21);
          p_Var21 = p_Var20;
        }
      }
      iVar6 = *piVar7;
      interpreter::BytecodeArrayAccessor::SetOffset
                ((BytecodeArrayAccessor *)(local_d8 + 0x88),iVar18);
      *(int *)(local_d8 + 0xb4) = iVar6;
      uVar8 = (local_98 + local_a0) - 1;
      puVar11 = (undefined4 *)(puStack_c8[uVar8 / 0x55] + (uVar8 % 0x55) * 0x30);
      uVar14 = *(undefined8 *)((long)puVar11 + 0x19);
      uVar2 = *puVar11;
      uStack_78 = (undefined4)*(undefined8 *)(puVar11 + 5);
      local_80 = (undefined4)*(undefined8 *)(puVar11 + 3);
      uStack_7c = (undefined4)((ulong)*(undefined8 *)(puVar11 + 3) >> 0x20);
      uStack_74._0_1_ = (undefined1)((ulong)*(undefined8 *)(puVar11 + 5) >> 0x20);
      uStack_74._1_3_ = (undefined3)uVar14;
      uStack_70 = (undefined4)((ulong)uVar14 >> 0x18);
      uStack_6c = (undefined1)((ulong)uVar14 >> 0x38);
      lVar15 = *(long *)(local_d8 + 0x80);
      uVar3 = puVar11[10];
      *(undefined4 *)(lVar15 + 0x18) = puVar11[2];
      *(undefined4 *)(lVar15 + 0x38) = uVar3;
      *(undefined1 *)(lVar15 + 0x30) = uStack_6c;
      *(ulong *)(lVar15 + 0x28) = CONCAT44(uStack_70,uStack_74);
      *(ulong *)(lVar15 + 0x20) = CONCAT44(uStack_78,uStack_7c);
      *(undefined4 *)(local_d8 + 0x150) = uVar2;
      lVar16 = local_98 + -1;
      lVar15 = 0;
      if ((long)local_c0 - (long)puStack_c8 != 0) {
        lVar15 = ((long)local_c0 - (long)puStack_c8 >> 3) * 0x55 + -1;
      }
      if (0xa9 < (lVar15 - (local_98 + local_a0)) + 1U) {
        plVar12 = (long *)local_c0[-1];
        if ((local_88 == (long *)0x0) || ((ulong)local_88[1] < 0x56)) {
          plVar12[1] = 0x55;
          *plVar12 = (long)local_88;
          local_88 = plVar12;
        }
        local_c0 = local_c0 + -1;
      }
      iVar18 = *piVar7;
      local_98 = lVar16;
    } while (iVar18 != -1);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
  ::clear((__deque_base<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
           *)&local_d0);
  if (puStack_c8 == local_c0) {
LAB_016717cc:
    if (((local_d0 != (long *)0x0) && (0xf < (ulong)(local_b8 - (long)local_d0))) &&
       ((uVar8 = local_b8 - (long)local_d0 >> 3, local_a8 == (long *)0x0 ||
        ((ulong)local_a8[1] <= uVar8)))) {
      local_d0[1] = uVar8;
      *local_d0 = (long)local_a8;
      local_a8 = local_d0;
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar17 = (long *)*puStack_c8;
  puVar13 = puStack_c8;
  plVar12 = local_88;
  if (local_88 != (long *)0x0) goto LAB_0167179c;
  do {
    plVar12 = plVar17;
    plVar12[1] = 0x55;
    *plVar12 = (long)local_88;
    local_88 = plVar12;
    do {
      puVar13 = puVar13 + 1;
      if (local_c0 == puVar13) {
        if ((long)local_c0 - (long)puStack_c8 != 0) {
          local_c0 = local_c0 + (((long)local_c0 - (long)puStack_c8) - 8U >> 3 ^ 0xffffffffffffffff)
          ;
        }
        goto LAB_016717cc;
      }
      plVar17 = (long *)*puVar13;
      if (plVar12 == (long *)0x0) break;
LAB_0167179c:
    } while (0x55 < (ulong)plVar12[1]);
  } while( true );
}

