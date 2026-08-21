
/* v8::internal::compiler::LinearScanAllocator::ComputeStateFromManyPredecessors(v8::internal::compiler::InstructionBlock*,
   v8::internal::ZoneUnorderedSet<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals>*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::ComputeStateFromManyPredecessors
          (LinearScanAllocator *this,InstructionBlock *param_1,ZoneUnorderedSet *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  code *pcVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  long lVar16;
  int *piVar17;
  __tree_node_base *p_Var18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  LinearScanAllocator *local_190;
  __tree_node_base *p_Stack_188;
  __tree_node_base *local_180;
  Zone *local_178;
  long local_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  __tree_node_base *local_110;
  __tree_node_base *local_108;
  Zone *local_100;
  long local_f8;
  undefined **local_f0 [4];
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_110 = (__tree_node_base *)&local_108;
  local_108 = (__tree_node_base *)0x0;
  local_100 = (Zone *)**(undefined8 **)this;
  local_f8 = 0;
  piVar17 = *(int **)(param_1 + 0x20);
  piVar12 = *(int **)(param_1 + 0x28);
  if (piVar17 == piVar12) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    do {
      uVar5 = (ulong)*piVar17;
      if (*piVar17 < *(int *)(param_1 + 100)) {
        if (param_1[0x78] == (InstructionBlock)0x0) {
          plVar10 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
          lVar13 = *plVar10;
          if ((ulong)(plVar10[1] - lVar13 >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(char *)(*(long *)(lVar13 + uVar5 * 8) + 0x78) != '\0') goto LAB_016609d0;
        }
        plVar10 = (long *)(*(long *)(*(long *)this + 0x1b0) + uVar5 * 0x20);
        plVar1 = (long *)plVar10[1];
        for (plVar10 = (long *)*plVar10; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          lVar13 = *plVar10;
          if ((*(uint *)(lVar13 + 4) & 0x1f80) != 0x1000) {
            lVar16 = *(long *)(lVar13 + 0x20);
            p_Var14 = (__tree_node_base *)&local_108;
            if (local_108 == (__tree_node_base *)0x0) {
              uStack_128 = 0;
              local_130 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_168 = 0;
              local_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              local_178 = (Zone *)0x0;
              local_180 = (__tree_node_base *)0x0;
              p_Var7 = (__tree_node_base *)&local_108;
LAB_01660b34:
              lVar6 = *(long *)p_Var14;
joined_r0x01660bc8:
              if (lVar6 != 0) {
                uStack_118 = 0;
                uStack_120 = 0;
                uStack_128 = 0;
                local_130 = 0;
                uStack_138 = 0;
                uStack_140 = 0;
                uStack_148 = 0;
                local_150 = 0;
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_168 = 0;
                local_170 = 0;
                local_178 = (Zone *)0x0;
                local_180 = (__tree_node_base *)0x0;
                p_Stack_188 = (__tree_node_base *)0x0;
                local_190 = (LinearScanAllocator *)0x0;
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","result.second");
              }
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              local_130 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_148 = 0;
              local_150 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_168 = 0;
              local_170 = 0;
              local_178 = (Zone *)0x0;
              local_180 = (__tree_node_base *)0x0;
              p_Stack_188 = (__tree_node_base *)0x0;
              local_190 = (LinearScanAllocator *)0x0;
              p_Var9 = *(__tree_node_base **)(local_100 + 0x10);
              if ((ulong)(*(long *)(local_100 + 0x18) - (long)p_Var9) < 0xb0) {
                p_Var9 = (__tree_node_base *)Zone::NewExpand(local_100,0xb0);
              }
              else {
                *(__tree_node_base **)(local_100 + 0x10) = p_Var9 + 0xb0;
              }
              *(long *)(p_Var9 + 0x20) = lVar16;
              *(undefined8 *)(p_Var9 + 0x28) = 1;
              *(ulong *)(p_Var9 + 0x58) = uStack_168;
              *(long *)(p_Var9 + 0x50) = local_170;
              *(undefined8 *)(p_Var9 + 0x68) = uStack_158;
              *(undefined8 *)(p_Var9 + 0x60) = uStack_160;
              *(__tree_node_base **)(p_Var9 + 0x38) = p_Stack_188;
              *(LinearScanAllocator **)(p_Var9 + 0x30) = local_190;
              *(Zone **)(p_Var9 + 0x48) = local_178;
              *(__tree_node_base **)(p_Var9 + 0x40) = local_180;
              *(undefined8 *)p_Var9 = 0;
              *(undefined8 *)(p_Var9 + 8) = 0;
              *(__tree_node_base **)(p_Var9 + 0x10) = p_Var7;
              *(undefined8 *)(p_Var9 + 0x78) = uStack_148;
              *(undefined8 *)(p_Var9 + 0x70) = local_150;
              *(undefined8 *)(p_Var9 + 0x88) = uStack_138;
              *(undefined8 *)(p_Var9 + 0x80) = uStack_140;
              *(undefined8 *)(p_Var9 + 0x98) = uStack_128;
              *(undefined8 *)(p_Var9 + 0x90) = local_130;
              *(undefined8 *)(p_Var9 + 0xa8) = uStack_118;
              *(undefined8 *)(p_Var9 + 0xa0) = uStack_120;
              *(__tree_node_base **)p_Var14 = p_Var9;
              p_Var7 = p_Var9;
              if (*(__tree_node_base **)local_110 != (__tree_node_base *)0x0) {
                local_110 = *(__tree_node_base **)local_110;
                p_Var7 = *(__tree_node_base **)p_Var14;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (local_108,p_Var7);
              local_f8 = local_f8 + 1;
              p_Var9 = p_Var9 + ((ulong)(*(uint *)(lVar13 + 4) >> 7) & 0x3f) * 4 + 0x30;
            }
            else {
              iVar2 = *(int *)(lVar16 + 0x5c);
              p_Var7 = (__tree_node_base *)&local_108;
              p_Var9 = local_108;
              do {
                if (iVar2 <= *(int *)(*(long *)(p_Var9 + 0x20) + 0x5c)) {
                  p_Var7 = p_Var9;
                }
                p_Var9 = *(__tree_node_base **)
                          (p_Var9 + (ulong)(*(int *)(*(long *)(p_Var9 + 0x20) + 0x5c) < iVar2) * 8);
              } while (p_Var9 != (__tree_node_base *)0x0);
              if ((p_Var7 == (__tree_node_base *)&local_108) ||
                 (iVar2 < *(int *)(*(long *)(p_Var7 + 0x20) + 0x5c))) {
                uStack_128 = 0;
                local_130 = 0;
                uStack_118 = 0;
                uStack_120 = 0;
                uStack_148 = 0;
                local_150 = 0;
                uStack_138 = 0;
                uStack_140 = 0;
                uStack_168 = 0;
                local_170 = 0;
                uStack_158 = 0;
                uStack_160 = 0;
                local_178 = (Zone *)0x0;
                local_180 = (__tree_node_base *)0x0;
                p_Var9 = local_108;
                do {
                  while (p_Var7 = p_Var9, *(int *)(*(long *)(p_Var7 + 0x20) + 0x5c) <= iVar2) {
                    if (iVar2 <= *(int *)(*(long *)(p_Var7 + 0x20) + 0x5c)) goto LAB_01660b34;
                    p_Var14 = p_Var7 + 8;
                    p_Var9 = *(__tree_node_base **)p_Var14;
                    if (*(__tree_node_base **)p_Var14 == (__tree_node_base *)0x0) goto LAB_01660b34;
                  }
                  p_Var14 = p_Var7;
                  p_Var9 = *(__tree_node_base **)p_Var7;
                } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
                lVar6 = *(long *)p_Var7;
                goto joined_r0x01660bc8;
              }
              *(long *)(p_Var7 + 0x28) = *(long *)(p_Var7 + 0x28) + 1;
              p_Var9 = p_Var7 + 0x20 + ((ulong)(*(uint *)(lVar13 + 4) >> 7) & 0x3f) * 4 + 0x10;
            }
            *(int *)p_Var9 = *(int *)p_Var9 + 1;
          }
        }
      }
      else {
LAB_016609d0:
        iVar11 = iVar11 + 1;
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar12);
    piVar17 = *(int **)(param_1 + 0x20);
    piVar12 = *(int **)(param_1 + 0x28);
  }
  local_178 = local_100;
  local_170 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_180 = (__tree_node_base *)0x0;
  p_Stack_188 = (__tree_node_base *)&local_180;
  local_190 = this;
  p_Var14 = local_110;
joined_r0x01660c64:
  if (p_Var14 != (__tree_node_base *)&local_108) {
    do {
      p_Var9 = (__tree_node_base *)&local_180;
      p_Var7 = (__tree_node_base *)&local_180;
      if (p_Stack_188 == (__tree_node_base *)&local_180) {
LAB_01660d10:
        p_Var15 = (__tree_node_base *)&local_180;
        if (local_180 != (__tree_node_base *)0x0) {
          p_Var7 = p_Var9;
          p_Var15 = p_Var9 + 8;
        }
LAB_01660d24:
        if (*(long *)p_Var15 == 0) goto LAB_01660d3c;
        p_Var7 = *(__tree_node_base **)(p_Var14 + 8);
        if (*(__tree_node_base **)(p_Var14 + 8) != (__tree_node_base *)0x0) goto LAB_01660dbc;
LAB_01660dcc:
        p_Var7 = p_Var14 + 0x10;
        bVar4 = *(__tree_node_base **)*(__tree_node_base **)p_Var7 == p_Var14;
        p_Var14 = *(__tree_node_base **)p_Var7;
        if (bVar4) goto joined_r0x01660c64;
        do {
          lVar13 = *(long *)p_Var7;
          p_Var7 = (__tree_node_base *)(lVar13 + 0x10);
          p_Var14 = *(__tree_node_base **)p_Var7;
        } while (*(long *)p_Var14 != lVar13);
      }
      else {
        p_Var18 = local_180;
        p_Var15 = (__tree_node_base *)&local_180;
        if (local_180 == (__tree_node_base *)0x0) {
          do {
            p_Var9 = *(__tree_node_base **)(p_Var15 + 0x10);
            bVar4 = *(__tree_node_base **)p_Var9 == p_Var15;
            p_Var15 = p_Var9;
          } while (bVar4);
        }
        else {
          do {
            p_Var9 = p_Var18;
            p_Var18 = *(__tree_node_base **)(p_Var9 + 8);
          } while (*(__tree_node_base **)(p_Var9 + 8) != (__tree_node_base *)0x0);
        }
        iVar2 = *(int *)(*(__tree_node_base **)(p_Var14 + 0x20) + 0x5c);
        p_Var18 = local_180;
        if (*(int *)(*(long *)(p_Var9 + 0x20) + 0x5c) < iVar2) goto LAB_01660d10;
        while (p_Var15 = p_Var7, p_Var18 != (__tree_node_base *)0x0) {
          while (p_Var7 = p_Var18, *(int *)(*(long *)(p_Var7 + 0x20) + 0x5c) <= iVar2) {
            if (iVar2 <= *(int *)(*(long *)(p_Var7 + 0x20) + 0x5c)) goto LAB_01660d24;
            p_Var15 = p_Var7 + 8;
            p_Var18 = *(__tree_node_base **)p_Var15;
            if (*(__tree_node_base **)p_Var15 == (__tree_node_base *)0x0) goto LAB_01660d3c;
          }
          p_Var18 = *(__tree_node_base **)p_Var7;
        }
LAB_01660d3c:
        p_Var9 = *(__tree_node_base **)(local_178 + 0x10);
        if ((ulong)(*(long *)(local_178 + 0x18) - (long)p_Var9) < 0xb0) {
          p_Var9 = (__tree_node_base *)Zone::NewExpand(local_178,0xb0);
        }
        else {
          *(__tree_node_base **)(local_178 + 0x10) = p_Var9 + 0xb0;
        }
        p_Var18 = *(__tree_node_base **)(p_Var14 + 0x20);
        *(undefined8 *)(p_Var9 + 0x28) = *(undefined8 *)(p_Var14 + 0x28);
        *(__tree_node_base **)(p_Var9 + 0x20) = p_Var18;
        uVar19 = *(undefined8 *)(p_Var14 + 0x50);
        uVar21 = *(undefined8 *)(p_Var14 + 0x68);
        uVar20 = *(undefined8 *)(p_Var14 + 0x60);
        uVar23 = *(undefined8 *)(p_Var14 + 0x38);
        uVar22 = *(undefined8 *)(p_Var14 + 0x30);
        uVar25 = *(undefined8 *)(p_Var14 + 0x48);
        uVar24 = *(undefined8 *)(p_Var14 + 0x40);
        *(undefined8 *)(p_Var9 + 0x58) = *(undefined8 *)(p_Var14 + 0x58);
        *(undefined8 *)(p_Var9 + 0x50) = uVar19;
        *(undefined8 *)(p_Var9 + 0x68) = uVar21;
        *(undefined8 *)(p_Var9 + 0x60) = uVar20;
        *(undefined8 *)(p_Var9 + 0x38) = uVar23;
        *(undefined8 *)(p_Var9 + 0x30) = uVar22;
        *(undefined8 *)(p_Var9 + 0x48) = uVar25;
        *(undefined8 *)(p_Var9 + 0x40) = uVar24;
        uVar20 = *(undefined8 *)(p_Var14 + 0x78);
        uVar19 = *(undefined8 *)(p_Var14 + 0x70);
        uVar22 = *(undefined8 *)(p_Var14 + 0x88);
        uVar21 = *(undefined8 *)(p_Var14 + 0x80);
        uVar24 = *(undefined8 *)(p_Var14 + 0x98);
        uVar23 = *(undefined8 *)(p_Var14 + 0x90);
        uVar26 = *(undefined8 *)(p_Var14 + 0xa8);
        uVar25 = *(undefined8 *)(p_Var14 + 0xa0);
        *(undefined8 *)p_Var9 = 0;
        *(undefined8 *)(p_Var9 + 8) = 0;
        *(__tree_node_base **)(p_Var9 + 0x10) = p_Var7;
        *(undefined8 *)(p_Var9 + 0x78) = uVar20;
        *(undefined8 *)(p_Var9 + 0x70) = uVar19;
        *(undefined8 *)(p_Var9 + 0x88) = uVar22;
        *(undefined8 *)(p_Var9 + 0x80) = uVar21;
        *(undefined8 *)(p_Var9 + 0x98) = uVar24;
        *(undefined8 *)(p_Var9 + 0x90) = uVar23;
        *(undefined8 *)(p_Var9 + 0xa8) = uVar26;
        *(undefined8 *)(p_Var9 + 0xa0) = uVar25;
        *(__tree_node_base **)p_Var15 = p_Var9;
        if (*(__tree_node_base **)p_Stack_188 != (__tree_node_base *)0x0) {
          p_Var9 = *(__tree_node_base **)p_Var15;
          p_Stack_188 = *(__tree_node_base **)p_Stack_188;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_180,p_Var9);
        local_170 = local_170 + 1;
        p_Var7 = *(__tree_node_base **)(p_Var14 + 8);
        if (*(__tree_node_base **)(p_Var14 + 8) == (__tree_node_base *)0x0) goto LAB_01660dcc;
LAB_01660dbc:
        do {
          p_Var14 = p_Var7;
          p_Var7 = *(__tree_node_base **)p_Var14;
        } while (*(__tree_node_base **)p_Var14 != (__tree_node_base *)0x0);
      }
      if (p_Var14 == (__tree_node_base *)&local_108) break;
    } while( true );
  }
  local_c0[0] = &PTR_FUN_01cca6c8;
  uStack_168 = (((long)piVar12 - (long)piVar17 >> 2) - (long)iVar11) + 2U >> 1;
  local_a0 = local_c0;
  FUN_01660f98(&local_190,local_c0,param_2,&local_90);
  if (local_c0 == local_a0) {
    (*(code *)(*local_a0)[4])();
  }
  else if (local_a0 != (undefined ***)0x0) {
    (*(code *)(*local_a0)[5])();
  }
  local_f0[0] = &PTR_FUN_01cca710;
  local_d0 = local_f0;
  FUN_01660f98(&local_190,local_f0,param_2,&local_90);
  if (local_f0 == local_d0) {
    pcVar8 = (code *)(*local_d0)[4];
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_01660edc;
    pcVar8 = (code *)(*local_d0)[5];
  }
  (*pcVar8)();
LAB_01660edc:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

