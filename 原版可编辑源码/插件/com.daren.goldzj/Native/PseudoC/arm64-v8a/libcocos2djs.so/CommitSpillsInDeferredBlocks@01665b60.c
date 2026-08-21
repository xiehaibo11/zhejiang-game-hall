
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::LiveRangeConnector::CommitSpillsInDeferredBlocks(v8::internal::compiler::TopLevelLiveRange*,
   v8::internal::compiler::LiveRangeBoundArray*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LiveRangeConnector::CommitSpillsInDeferredBlocks
          (LiveRangeConnector *this,TopLevelLiveRange *param_1,LiveRangeBoundArray *param_2,
          Zone *param_3)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ParallelMove *this_00;
  __tree_node *p_Var7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  __tree_node *p_Var14;
  __tree_node *p_Var15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  int *piVar24;
  InstructionSequence *this_01;
  TopLevelLiveRange *pTVar25;
  void *__s;
  long lVar26;
  Zone *this_02;
  undefined8 local_f0;
  ulong local_e8;
  __tree_node *local_e0;
  __tree_node *local_d8;
  Zone *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  long local_a8;
  Zone *local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  Zone *local_80;
  long *local_78;
  ulong local_70 [2];
  
  this_01 = *(InstructionSequence **)(*(long *)this + 0x10);
  local_70[0] = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0x1fe0 |
                (ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x2c) << 0x23 | 0xc;
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Live Range %d will be spilled only in deferred blocks.\n",
           (ulong)*(uint *)(param_1 + 0x5c));
  }
  lVar26 = *(long *)(param_1 + 0x18);
  pTVar25 = param_1;
  while( true ) {
    for (; lVar26 != 0; lVar26 = *(long *)(lVar26 + 0x10)) {
      if (((~*(uint *)(lVar26 + 0x1c) & 3) == 0) || (((byte)pTVar25[4] & 1) != 0)) {
        iVar16 = *(int *)(lVar26 + 0x18);
        iVar8 = iVar16 + 3;
        if (-1 < iVar16) {
          iVar8 = iVar16;
        }
        lVar6 = InstructionSequence::GetInstructionBlock(this_01,iVar8 >> 2);
        lVar9 = *(long *)(param_1 + 0x78);
        uVar23 = *(uint *)(lVar6 + 100);
        if (*(int *)(lVar9 + 4) == 1) {
          puVar10 = (ulong *)(lVar9 + 8);
        }
        else {
          uVar5 = uVar23 + 0x3f;
          if (-1 < (int)uVar23) {
            uVar5 = uVar23;
          }
          puVar10 = (ulong *)(*(long *)(lVar9 + 8) + (long)((int)uVar5 >> 6) * 8);
        }
        *puVar10 = *puVar10 | 1L << ((ulong)uVar23 & 0x3f);
      }
    }
    pTVar25 = *(TopLevelLiveRange **)(pTVar25 + 0x28);
    if (pTVar25 == (TopLevelLiveRange *)0x0) break;
    lVar26 = *(long *)(pTVar25 + 0x18);
  }
  local_a0 = param_3;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = (long *)0x0;
  local_a8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_80 = param_3;
  local_78 = (long *)0x0;
  piVar24 = *(int **)(param_1 + 0x78);
  iVar8 = piVar24[1];
  puVar10 = (ulong *)(piVar24 + 2);
  if (iVar8 != 1) {
    puVar10 = (ulong *)*puVar10;
  }
  uVar11 = *puVar10;
  if (uVar11 == 0) {
    if (1 < iVar8) {
      uVar11 = *(ulong *)(*(long *)(piVar24 + 2) + 8);
      if (uVar11 == 0) {
        lVar26 = 2;
        do {
          if (iVar8 == lVar26) goto LAB_01665e24;
          uVar11 = *(ulong *)(*(long *)(piVar24 + 2) + lVar26 * 8);
          lVar26 = lVar26 + 1;
        } while (uVar11 == 0);
        iVar17 = (int)lVar26 + -1;
      }
      else {
        iVar17 = 1;
      }
      iVar16 = iVar17 << 6;
      goto LAB_01665cb4;
    }
    uVar11 = 0;
    iVar16 = 0;
    iVar17 = 1;
    if (iVar8 < 2) goto LAB_01665e24;
  }
  else {
    iVar17 = 0;
    iVar16 = 0;
LAB_01665cb4:
    uVar20 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
    iVar16 = iVar16 + (int)uVar20;
    uVar11 = (uVar11 >> (uVar20 & 0x3f)) >> 1;
    if (iVar8 <= iVar17) goto LAB_01665e24;
  }
  do {
    while( true ) {
      uVar20 = 0;
      if ((long)local_b0 - (long)puStack_b8 != 0) {
        uVar20 = ((long)local_b0 - (long)puStack_b8) * 0x80 - 1;
      }
      uVar12 = local_88 + local_90;
      if (uVar20 == uVar12) {
        std::__ndk1::deque<int,v8::internal::RecyclingZoneAllocator<int>>::__add_back_capacity
                  ((deque<int,v8::internal::RecyclingZoneAllocator<int>> *)&local_c0);
        uVar12 = local_90 + local_88;
      }
      *(int *)(*(long *)((long)puStack_b8 + (uVar12 >> 7 & 0x1fffffffffffff8)) +
              (uVar12 & 0x3ff) * 4) = iVar16;
      iVar16 = iVar16 + 1;
      local_88 = local_88 + 1;
      if (uVar11 != 0) break;
      iVar8 = piVar24[1];
      uVar23 = iVar17 + 1;
      uVar20 = (ulong)uVar23;
      if ((int)uVar23 < iVar8) {
        uVar20 = (ulong)(int)uVar23;
        iVar16 = iVar17 << 6;
        do {
          uVar11 = *(ulong *)(*(long *)(piVar24 + 2) + uVar20 * 8);
          if (uVar11 != 0) {
            iVar16 = iVar16 + 0x40;
            iVar17 = (int)uVar20;
            goto LAB_01665d58;
          }
          uVar20 = uVar20 + 1;
          iVar16 = iVar16 + 0x40;
        } while ((long)uVar20 < (long)iVar8);
      }
      uVar11 = 0;
      iVar17 = (int)uVar20;
      if (iVar8 <= iVar17) goto LAB_01665dc0;
    }
    iVar8 = piVar24[1];
LAB_01665d58:
    uVar20 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
    iVar16 = iVar16 + (int)uVar20;
    uVar11 = (uVar11 >> (uVar20 & 0x3f)) >> 1;
  } while (iVar17 < iVar8);
LAB_01665dc0:
  piVar24 = *(int **)(param_1 + 0x78);
LAB_01665e24:
  uStack_c8 = 0;
  local_d8 = (__tree_node *)0x0;
  iVar8 = *piVar24;
  local_e0 = (__tree_node *)&local_d8;
  local_d0 = param_3;
  if (iVar8 < 0x41) {
    __s = (void *)0x0;
    uVar23 = 1;
    uVar11 = local_90;
  }
  else {
    __s = *(void **)(param_3 + 0x10);
    iVar16 = iVar8 + 0x3e;
    if (-1 < iVar8 + -1) {
      iVar16 = iVar8 + -1;
    }
    uVar23 = (iVar16 >> 6) + 1;
    uVar11 = (ulong)uVar23;
    uVar20 = uVar11 * 8;
    if (uVar20 < (ulong)(*(long *)(param_3 + 0x18) - (long)__s) ||
        uVar20 - (*(long *)(param_3 + 0x18) - (long)__s) == 0) {
      *(void **)(param_3 + 0x10) = (void *)((long)__s + uVar20);
    }
    else {
      __s = (void *)Zone::NewExpand(param_3,uVar20);
    }
    if (uVar23 < 2) {
      uVar11 = 1;
    }
    memset(__s,0,uVar11 << 3);
    uVar11 = local_90;
  }
joined_r0x01665ea4:
  do {
    do {
      if (local_88 == 0) {
        local_90 = uVar11;
        std::__ndk1::
        __tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
        ::destroy((__tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
                   *)&local_e0,local_d8);
        std::__ndk1::__deque_base<int,v8::internal::RecyclingZoneAllocator<int>>::clear
                  ((__deque_base<int,v8::internal::RecyclingZoneAllocator<int>> *)&local_c0);
        if (puStack_b8 == local_b0) {
LAB_01666324:
          if (((local_c0 != (long *)0x0) && (0xf < (ulong)(local_a8 - (long)local_c0))) &&
             ((uVar11 = local_a8 - (long)local_c0 >> 3, local_98 == 0 ||
              (*(ulong *)(local_98 + 8) <= uVar11)))) {
            local_c0[1] = uVar11;
            *local_c0 = local_98;
          }
          return;
        }
        plVar22 = (long *)*puStack_b8;
        plVar21 = local_78;
        if (local_78 != (long *)0x0) goto LAB_016662f4;
        do {
          plVar21 = plVar22;
          plVar21[1] = 0x400;
          *plVar21 = (long)local_78;
          local_78 = plVar21;
          do {
            puStack_b8 = puStack_b8 + 1;
            if (local_b0 == puStack_b8) goto LAB_01666324;
            plVar22 = (long *)*puStack_b8;
            if (plVar21 == (long *)0x0) break;
LAB_016662f4:
          } while (0x400 < (ulong)plVar21[1]);
        } while( true );
      }
      uVar5 = *(uint *)(*(long *)((long)puStack_b8 + (uVar11 >> 7 & 0x1fffffffffffff8)) +
                       (uVar11 & 0x3ff) * 4);
      local_90 = uVar11 + 1;
      local_88 = local_88 + -1;
      if (0x7ff < uVar11 + 1) {
        plVar21 = (long *)*puStack_b8;
        if ((local_78 == (long *)0x0) || ((ulong)local_78[1] < 0x401)) {
          plVar21[1] = 0x400;
          *plVar21 = (long)local_78;
          local_78 = plVar21;
        }
        local_90 = uVar11 - 0x3ff;
        puStack_b8 = puStack_b8 + 1;
      }
      pvVar18 = __s;
      if (uVar23 != 1) {
        uVar4 = uVar5 + 0x3f;
        if (-1 < (int)uVar5) {
          uVar4 = uVar5;
        }
        pvVar18 = *(void **)((long)__s + (long)((int)uVar4 >> 6) * 8);
      }
      uVar4 = uVar5 + 0x3f;
      if (-1 < (int)uVar5) {
        uVar4 = uVar5;
      }
      uVar20 = 1L << ((ulong)uVar5 & 0x3f);
      uVar11 = local_90;
    } while (((ulong)pvVar18 & uVar20) != 0);
    if (uVar23 == 1) {
      __s = (void *)(1L << ((ulong)uVar5 & 0x3f) | (ulong)__s);
    }
    else {
      uVar12 = -(ulong)((uint)((int)uVar4 >> 6) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)((int)uVar4 >> 6) << 3;
      *(ulong *)((long)__s + uVar12) = *(ulong *)((long)__s + uVar12) | uVar20;
    }
    lVar26 = **(long **)(this_01 + 0x10);
    uVar20 = (*(long **)(this_01 + 0x10))[1] - lVar26 >> 3;
    if (uVar20 <= (ulong)(long)(int)uVar5) goto LAB_01666394;
    lVar6 = *(long *)(lVar26 + (long)(int)uVar5 * 8);
    piVar24 = *(int **)(lVar6 + 0x20);
    piVar2 = *(int **)(lVar6 + 0x28);
  } while (piVar24 == piVar2);
  uVar11 = (ulong)*piVar24;
  if (uVar11 < uVar20) {
    do {
      lVar26 = *(long *)(lVar26 + uVar11 * 8);
      if (*(char *)(lVar26 + 0x78) == '\0') {
        lVar9 = *(long *)(param_2 + 8);
        iVar8 = *(int *)(lVar26 + 0x74) * 4 + -2;
        lVar26 = *(long *)param_2;
        lVar19 = 0;
        do {
          do {
            lVar13 = lVar26;
            lVar1 = lVar19 + ((ulong)(lVar13 - lVar19) >> 1);
            lVar26 = lVar1;
          } while (iVar8 < *(int *)(lVar9 + lVar1 * 0x18 + 8));
          lVar26 = lVar13;
          lVar19 = lVar1;
        } while (*(int *)(lVar9 + lVar1 * 0x18 + 0xc) <= iVar8);
        lVar26 = *(long *)(lVar9 + lVar1 * 0x18);
        uVar5 = *(uint *)(lVar26 + 4);
        if ((uVar5 & 0x1f80) == 0x1000) {
          lVar26 = *(long *)(lVar26 + 0x20);
          if ((*(uint *)(lVar26 + 4) & 0x60) == 0x20) {
            local_e8 = **(ulong **)(lVar26 + 0x70);
          }
          else {
            local_e8 = (ulong)(*(uint *)(lVar26 + 4) >> 8) & 0x1fe0 |
                       (ulong)*(uint *)(*(long *)(lVar26 + 0x70) + 0x2c) << 0x23 | 0xc;
          }
        }
        else {
          local_e8 = (ulong)(uVar5 >> 8 & 0x1fe0 | 4) | (ulong)(uVar5 >> 7 & 0x3f) << 0x23;
        }
        uVar5 = *(uint *)(lVar6 + 100);
        uVar4 = *(uint *)(param_1 + 0x5c);
        p_Var7 = (__tree_node *)&local_d8;
        p_Var14 = local_d8;
        if (local_d8 != (__tree_node *)0x0) {
LAB_01666128:
          do {
            if (*(int *)(p_Var14 + 0x1c) < (int)uVar5) {
              p_Var14 = *(__tree_node **)(p_Var14 + 8);
            }
            else {
              if (((int)uVar5 < *(int *)(p_Var14 + 0x1c)) ||
                 ((int)uVar4 <= *(int *)(p_Var14 + 0x20))) {
                p_Var15 = *(__tree_node **)p_Var14;
                p_Var7 = p_Var14;
                p_Var14 = p_Var15;
                if (p_Var15 == (__tree_node *)0x0) break;
                goto LAB_01666128;
              }
              p_Var14 = *(__tree_node **)(p_Var14 + 8);
            }
          } while (p_Var14 != (__tree_node *)0x0);
          if (((p_Var7 != (__tree_node *)&local_d8) && (*(int *)(p_Var7 + 0x1c) <= (int)uVar5)) &&
             ((*(int *)(p_Var7 + 0x1c) < (int)uVar5 || (*(int *)(p_Var7 + 0x20) <= (int)uVar4))))
          goto LAB_0166624c;
        }
        lVar26 = *(long *)this;
        if ((*(byte *)(lVar26 + 0x1d0) >> 2 & 1) != 0) {
          PrintF("Spilling deferred spill for range %d at B%d\n",(ulong)uVar4,(ulong)uVar5);
          lVar26 = *(long *)this;
        }
        lVar26 = *(long *)(lVar26 + 0x10);
        uVar11 = *(long *)(lVar26 + 0xb0) + (long)*(int *)(lVar6 + 0x70);
        lVar9 = *(long *)(*(long *)(*(long *)(lVar26 + 0x88) + (uVar11 >> 6 & 0x3fffffffffffff8)) +
                         (uVar11 & 0x1ff) * 8);
        this_00 = *(ParallelMove **)(lVar9 + 8);
        if (this_00 == (ParallelMove *)0x0) {
          this_02 = *(Zone **)(lVar26 + 8);
          this_00 = *(ParallelMove **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)this_00) < 0x20) {
            this_00 = (ParallelMove *)Zone::NewExpand(this_02,0x20);
          }
          else {
            *(ParallelMove **)(this_02 + 0x10) = this_00 + 0x20;
          }
          *(undefined8 *)this_00 = 0;
          *(undefined8 *)(this_00 + 8) = 0;
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(Zone **)(this_00 + 0x18) = this_02;
          *(ParallelMove **)(lVar9 + 8) = this_00;
        }
        ParallelMove::AddMove
                  (this_00,(InstructionOperand *)&local_e8,(InstructionOperand *)local_70,
                   *(Zone **)(this_00 + 0x18));
        local_f0 = CONCAT44(*(undefined4 *)(param_1 + 0x5c),uVar5);
        std::__ndk1::
        __tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
        ::
        __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>
                  ((__tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
                    *)&local_e0,(pair *)&local_f0,(pair *)&local_f0);
        *(undefined1 *)(lVar6 + 0x7c) = 1;
      }
      else {
        uVar3 = *(undefined4 *)(lVar26 + 100);
        uVar11 = 0;
        if ((long)local_b0 - (long)puStack_b8 != 0) {
          uVar11 = ((long)local_b0 - (long)puStack_b8) * 0x80 - 1;
        }
        uVar20 = local_88 + local_90;
        if (uVar11 == uVar20) {
          std::__ndk1::deque<int,v8::internal::RecyclingZoneAllocator<int>>::__add_back_capacity
                    ((deque<int,v8::internal::RecyclingZoneAllocator<int>> *)&local_c0);
          uVar20 = local_90 + local_88;
        }
        *(undefined4 *)
         (*(long *)((long)puStack_b8 + (uVar20 >> 7 & 0x1fffffffffffff8)) + (uVar20 & 0x3ff) * 4) =
             uVar3;
        local_88 = local_88 + 1;
      }
LAB_0166624c:
      piVar24 = piVar24 + 1;
      uVar11 = local_90;
      if (piVar24 == piVar2) goto joined_r0x01665ea4;
      lVar26 = **(long **)(this_01 + 0x10);
      uVar11 = (ulong)*piVar24;
      if ((ulong)((*(long **)(this_01 + 0x10))[1] - lVar26 >> 3) <= uVar11) break;
    } while( true );
  }
LAB_01666394:
                    /* WARNING: Subroutine does not return */
  abort();
}

