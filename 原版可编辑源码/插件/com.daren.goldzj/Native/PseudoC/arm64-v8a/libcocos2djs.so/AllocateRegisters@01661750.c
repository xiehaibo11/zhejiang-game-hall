
/* v8::internal::compiler::LinearScanAllocator::AllocateRegisters() */

void __thiscall
v8::internal::compiler::LinearScanAllocator::AllocateRegisters(LinearScanAllocator *this)

{
  ulong uVar1;
  vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *this_00;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  InstructionBlock IVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  InstructionBlock *pIVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  __tree_node_base *p_Var17;
  int *piVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  LiveRange *pLVar22;
  InstructionBlock IVar23;
  uint uVar24;
  uint uVar25;
  TopLevelLiveRange *pTVar26;
  uint uVar27;
  LinearScanAllocator *local_b0;
  InstructionBlock *pIStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  RegisterAllocator::SplitAndSpillRangesDefinedByMemoryOperand((RegisterAllocator *)this);
  lVar14 = *(long *)this;
  puVar21 = *(undefined8 **)(lVar14 + 0x1b0);
  puVar2 = *(undefined8 **)(lVar14 + 0x1b8);
  if (puVar21 == puVar2) goto LAB_016617f8;
  uVar1 = ((ulong)((long)puVar2 + (-0x20 - (long)puVar21)) >> 5) + 1;
  puVar15 = puVar21;
  if (uVar1 < 3) {
LAB_016617e0:
    do {
      puVar15[1] = *puVar15;
      puVar15 = puVar15 + 4;
    } while (puVar15 != puVar2);
  }
  else {
    uVar20 = uVar1 & 0xffffffffffffffe;
    puVar15 = puVar21 + uVar20 * 4;
    puVar21 = puVar21 + 5;
    uVar10 = uVar20;
    do {
      uVar10 = uVar10 - 2;
      puVar21[-4] = puVar21[-5];
      *puVar21 = puVar21[-1];
      puVar21 = puVar21 + 8;
    } while (uVar10 != 0);
    if (uVar1 != uVar20) goto LAB_016617e0;
  }
  lVar14 = *(long *)this;
LAB_016617f8:
  if ((*(byte *)(lVar14 + 0x1d0) >> 2 & 1) != 0) {
    PrintRangeOverview(this,(basic_ostream *)std::__ndk1::cout);
    lVar14 = *(long *)this;
  }
  puVar21 = *(undefined8 **)(lVar14 + 0x88);
  puVar2 = *(undefined8 **)(lVar14 + 0x90);
  lVar16 = (long)puVar2 - (long)puVar21;
  if (puVar2 != puVar21) {
    while( true ) {
      pLVar22 = (LiveRange *)*puVar21;
      if (((pLVar22 != (LiveRange *)0x0) && (*(long *)(pLVar22 + 0x10) != 0)) &&
         (uVar25 = *(uint *)(pLVar22 + 4),
         *(uint *)(this + 8) == (uint)(10 < (uVar25 >> 0xd & 0xff)))) {
        while( true ) {
          if ((uVar25 & 1) == 0) {
            AddToUnhandled(this,pLVar22);
          }
          pLVar22 = *(LiveRange **)(pLVar22 + 0x28);
          if (pLVar22 == (LiveRange *)0x0) break;
          uVar25 = *(uint *)(pLVar22 + 4);
        }
      }
      lVar14 = *(long *)this;
      puVar21 = puVar21 + 1;
      if (puVar21 == puVar2) break;
      if (lVar16 != *(long *)(lVar14 + 0x90) - *(long *)(lVar14 + 0x88)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
      }
    }
  }
  if (*(int *)(this + 8) == 0) {
    puVar2 = *(undefined8 **)(lVar14 + 0xb0);
    for (puVar21 = *(undefined8 **)(lVar14 + 0xa8); puVar21 != puVar2; puVar21 = puVar21 + 1) {
      pLVar22 = (LiveRange *)*puVar21;
      if ((pLVar22 != (LiveRange *)0x0) && (((byte)pLVar22[7] >> 4 & 1) == 0)) {
        AddToInactive(this,pLVar22);
      }
    }
  }
  else {
    puVar2 = *(undefined8 **)(lVar14 + 0xf0);
    for (puVar21 = *(undefined8 **)(lVar14 + 0xe8); puVar21 != puVar2; puVar21 = puVar21 + 1) {
      pLVar22 = (LiveRange *)*puVar21;
      if ((pLVar22 != (LiveRange *)0x0) && (((byte)pLVar22[7] >> 4 & 1) == 0)) {
        AddToInactive(this,pLVar22);
      }
    }
  }
  lVar14 = *(long *)this;
  plVar19 = *(long **)(*(long *)(lVar14 + 0x10) + 0x10);
  plVar13 = (long *)*plVar19;
  uVar1 = plVar19[1] - (long)plVar13;
  if (uVar1 != 0) {
    uVar25 = 0;
    IVar23 = (InstructionBlock)0x0;
    uVar24 = *(int *)(*plVar13 + 0x74) << 2;
    lVar16 = *(long *)(this + 0x40);
    do {
      if ((lVar16 == 0) &&
         (((*(uint *)(lVar14 + 0x1d0) & 1) == 0 || ((int)(uVar1 >> 3) + -1 <= (int)uVar25)))) {
        if ((*(uint *)(lVar14 + 0x1d0) >> 2 & 1) != 0) {
          PrintRangeOverview(this,(basic_ostream *)std::__ndk1::cout);
        }
        if (*(long *)(lVar6 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      TickCounter::DoTick(*(TickCounter **)(lVar14 + 0x1d8));
      uVar27 = uVar24;
      if (*(long *)(this + 0x40) == 0) {
        pTVar26 = (TopLevelLiveRange *)0x0;
      }
      else {
        pTVar26 = *(TopLevelLiveRange **)(*(long *)(this + 0x28) + 0x20);
        if (pTVar26 != (TopLevelLiveRange *)0x0) {
          uVar27 = **(uint **)(pTVar26 + 0x10);
        }
      }
      uVar3 = *(uint *)(*(long *)this + 0x1d0);
      if ((uVar3 & 1) == 0) {
LAB_016619c4:
        if ((uVar3 >> 2 & 1) != 0) {
          PrintF("Processing interval %d:%d start=%d\n",
                 (ulong)*(uint *)(*(long *)(pTVar26 + 0x20) + 0x5c),(ulong)*(uint *)pTVar26,
                 (ulong)uVar27);
        }
        p_Var12 = *(__tree_node_base **)(this + 0x28);
        plVar13 = *(long **)(p_Var12 + 8);
        if (*(long **)(p_Var12 + 8) == (long *)0x0) {
          p_Var17 = p_Var12 + 0x10;
          plVar19 = *(long **)p_Var17;
          if ((__tree_node_base *)*plVar19 != p_Var12) {
            do {
              lVar14 = *(long *)p_Var17;
              p_Var17 = (__tree_node_base *)(lVar14 + 0x10);
              plVar19 = *(long **)p_Var17;
            } while (*plVar19 != lVar14);
          }
        }
        else {
          do {
            plVar19 = plVar13;
            plVar13 = (long *)*plVar19;
          } while ((long *)*plVar19 != (long *)0x0);
        }
        *(long **)(this + 0x28) = plVar19;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x30),p_Var12);
        if ((*(TopLevelLiveRange **)(pTVar26 + 0x20) != pTVar26) ||
           (uVar10 = TryReuseSpillForPhi(this,*(TopLevelLiveRange **)(pTVar26 + 0x20)),
           (uVar10 & 1) == 0)) {
          ForwardStateTo(this,uVar27);
          ProcessCurrentRange(this,pTVar26,IVar23);
        }
      }
      else {
        if ((uVar3 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!data()->is_turbo_preprocess_ranges()");
        }
        if ((int)uVar27 < (int)uVar24) goto LAB_016619c4;
        if ((uVar3 >> 2 & 1) != 0) {
          PrintF("Processing boundary at %d leaving %d\n",(ulong)uVar24,(ulong)uVar25);
        }
        ForwardStateTo(this,uVar24 - 2 | 1);
        uVar27 = uVar24 + 3;
        if (-1 < (int)uVar24) {
          uVar27 = uVar24;
        }
        pIVar11 = (InstructionBlock *)
                  InstructionSequence::GetInstructionBlock
                            (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar27 >> 2);
        this_00 = (vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   *)(*(long *)(*(long *)this + 0x1b0) + (long)(int)uVar25 * 0x20);
        if (this_00 !=
            (vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             *)(this + 0x48)) {
          std::__ndk1::
          vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
          ::assign<v8::internal::compiler::LiveRange**>
                    (this_00,*(LiveRange ***)(this + 0x48),*(LiveRange ***)(this + 0x50));
        }
        if (*(long *)(pIVar11 + 0x28) - (long)*(int **)(pIVar11 + 0x20) == 4) {
          bVar7 = **(int **)(pIVar11 + 0x20) + 1 == *(int *)(pIVar11 + 100);
        }
        else {
          bVar7 = false;
        }
        IVar5 = pIVar11[0x78];
        if ((IVar23 == (InstructionBlock)0x1) != (IVar5 != (InstructionBlock)0x0)) {
          ForwardStateTo(this,uVar24);
          UpdateDeferredFixedRanges(this,IVar5,pIVar11);
          IVar23 = IVar5;
        }
        if (!bVar7) {
          ForwardStateTo(this,uVar24);
          local_90 = **(undefined8 **)this;
          local_a0 = 0;
          uStack_98 = 0;
          local_88 = 0;
          uStack_78 = 0;
          local_70 = 0x3f800000;
          local_80 = local_90;
          std::__ndk1::
          __hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
          ::rehash((__hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
                    *)&local_a0,100);
          piVar18 = *(int **)(pIVar11 + 0x20);
          lVar14 = *(long *)(pIVar11 + 0x28) - (long)piVar18 >> 2;
          local_b0 = this;
          pIStack_a8 = pIVar11;
          if (lVar14 == 2) {
            if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
              PrintF("Two predecessors for B%d\n",(ulong)*(uint *)(pIVar11 + 100));
              piVar18 = *(int **)(pIVar11 + 0x20);
            }
            iVar4 = *piVar18;
            if (iVar4 < *(int *)(pIVar11 + 100)) {
              if (pIVar11[0x78] == (InstructionBlock)0x0) {
                plVar13 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
                lVar14 = *plVar13;
                if ((ulong)(plVar13[1] - lVar14 >> 3) <= (ulong)(long)iVar4) break;
                iVar8 = piVar18[1];
                iVar9 = iVar8;
                if (*(char *)(*(long *)(lVar14 + (long)iVar4 * 8) + 0x78) != '\0')
                goto LAB_01661cb8;
              }
              else {
                iVar8 = piVar18[1];
              }
              iVar9 = iVar4;
              if (iVar8 < *(int *)(pIVar11 + 100)) {
                if (pIVar11[0x78] == (InstructionBlock)0x0) {
                  plVar13 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
                  lVar14 = *plVar13;
                  if ((ulong)(plVar13[1] - lVar14 >> 3) <= (ulong)(long)iVar8) break;
                  if (*(char *)(*(long *)(lVar14 + (long)iVar8 * 8) + 0x78) != '\0')
                  goto LAB_01661cb8;
                }
                iVar9 = ChooseOneOfTwoPredecessorStates(this,pIVar11,uVar24);
              }
            }
            else {
              iVar9 = piVar18[1];
            }
LAB_01661cb8:
            uVar10 = FUN_016624b0(&local_b0,iVar9,&local_a0);
            if ((uVar10 & 1) == 0) goto LAB_01661cc8;
          }
          else {
            if (lVar14 == 1) {
              if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
                PrintF("Single predecessor for B%d\n",(ulong)*(uint *)(pIVar11 + 100));
                piVar18 = *(int **)(pIVar11 + 0x20);
              }
              iVar9 = *piVar18;
              goto LAB_01661cb8;
            }
            ComputeStateFromManyPredecessors(this,pIVar11,(ZoneUnorderedSet *)&local_a0);
LAB_01661cc8:
            SpillNotLiveRanges(this,&local_a0,uVar24,IVar23);
            ReloadLiveRanges(this,&local_a0,uVar24);
          }
          ForwardStateTo(this,uVar24);
          for (plVar13 = (long *)local_88; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          }
        }
        uVar25 = *(uint *)(pIVar11 + 100);
        uVar24 = *(int *)(pIVar11 + 0x74) << 2;
      }
      lVar14 = *(long *)this;
      lVar16 = *(long *)(this + 0x40);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

