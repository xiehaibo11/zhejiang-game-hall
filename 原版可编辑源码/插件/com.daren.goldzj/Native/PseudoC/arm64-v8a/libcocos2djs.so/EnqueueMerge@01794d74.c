
/* v8::internal::compiler::MemoryOptimizer::EnqueueMerge(v8::internal::compiler::Node*, int,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::EnqueueMerge
          (MemoryOptimizer *this,Node *param_1,int param_2,AllocationState *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  MemoryOptimizer *pMVar6;
  Zone *pZVar7;
  AllocationGroup *pAVar8;
  Node *pNVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  MemoryOptimizer *pMVar13;
  undefined8 *puVar14;
  ulong uVar15;
  __tree_node_base *p_Var16;
  MemoryOptimizer *pMVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  __tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
  *this_00;
  AllocationState *this_01;
  long lVar21;
  uint local_78 [2];
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((~uVar2 & 0xf000000) == 0) {
    uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    pNVar9 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    pNVar9 = param_1 + 0x20;
    uVar12 = uVar2 >> 0x18 & 0xf;
  }
  if (*(short *)(**(long **)(pNVar9 + (long)(int)(uVar12 - 1) * 8) + 0x10) == 1) {
    if (param_2 != 0) {
      return;
    }
    uVar20 = *(undefined8 *)(this + 0x150);
    lVar4 = NodeProperties::GetControlInput(param_1,0);
    lVar21 = 1;
    do {
      if ((~*(uint *)(lVar4 + 0x14) & 0xf000000) == 0) {
        uVar2 = *(uint *)(*(long *)(lVar4 + 0x20) + 8);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x14) >> 0x18 & 0xf;
      }
      if ((int)uVar2 <= lVar21) goto LAB_01794f7c;
      pNVar9 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      lVar5 = FUN_017951ec(*(undefined8 *)(pNVar9 + lVar21 * 8),param_1,uVar20);
      lVar21 = lVar21 + 1;
    } while (lVar5 == 0);
    param_3 = *(AllocationState **)(this + 0xd8);
LAB_01794f7c:
    EnqueueUses(this,param_1,param_3);
    return;
  }
  pMVar13 = this + 0xe8;
  pMVar17 = *(MemoryOptimizer **)pMVar13;
  uVar2 = uVar2 & 0xffffff;
  this_00 = (__tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
             *)(this + 0xe0);
  pMVar6 = pMVar13;
  if (pMVar17 != (MemoryOptimizer *)0x0) {
    do {
      if (*(uint *)(pMVar17 + 0x20) >= uVar2) {
        pMVar6 = pMVar17;
      }
      pMVar17 = *(MemoryOptimizer **)(pMVar17 + (ulong)(*(uint *)(pMVar17 + 0x20) < uVar2) * 8);
    } while (pMVar17 != (MemoryOptimizer *)0x0);
    if ((pMVar6 != pMVar13) && (*(uint *)(pMVar6 + 0x20) <= uVar2)) goto LAB_01794ee0;
  }
  uStack_58 = *(undefined8 *)(this + 0x150);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78[0] = uVar2;
  pMVar6 = (MemoryOptimizer *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
           ::
           __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>
                     (this_00,local_78,(pair *)local_78);
  if (local_70 != 0) {
    local_68 = local_70;
  }
LAB_01794ee0:
  puVar14 = *(undefined8 **)(pMVar6 + 0x30);
  if (puVar14 == *(undefined8 **)(pMVar6 + 0x38)) {
    lVar21 = (long)puVar14 - *(long *)(pMVar6 + 0x28) >> 3;
    uVar15 = lVar21 + 1;
    if (uVar15 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(undefined8 **)(pMVar6 + 0x38) - *(long *)(pMVar6 + 0x28);
    uVar18 = lVar4 >> 2;
    if (uVar15 <= uVar18) {
      uVar15 = uVar18;
    }
    if (0x7fffffe < (ulong)(lVar4 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      lVar4 = 0;
    }
    else {
      pZVar7 = *(Zone **)(pMVar6 + 0x40);
      uVar18 = uVar15 * 8;
      lVar4 = *(long *)(pZVar7 + 0x10);
      if (uVar18 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar4) ||
          uVar18 - (*(long *)(pZVar7 + 0x18) - lVar4) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar4 + uVar18;
      }
      else {
        lVar4 = Zone::NewExpand(pZVar7,uVar18);
      }
    }
    puVar10 = (undefined8 *)(lVar4 + lVar21 * 8);
    puVar14 = puVar10 + 1;
    *puVar10 = param_3;
    puVar1 = *(undefined8 **)(pMVar6 + 0x28);
    puVar19 = *(undefined8 **)(pMVar6 + 0x30);
    while (puVar19 != puVar1) {
      puVar19 = puVar19 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar19;
    }
    *(undefined8 **)(pMVar6 + 0x28) = puVar10;
    *(undefined8 **)(pMVar6 + 0x30) = puVar14;
    *(ulong *)(pMVar6 + 0x38) = lVar4 + uVar15 * 8;
  }
  else {
    *puVar14 = param_3;
    puVar10 = *(undefined8 **)(pMVar6 + 0x28);
    puVar14 = (undefined8 *)(*(long *)(pMVar6 + 0x30) + 8);
    *(undefined8 **)(pMVar6 + 0x30) = puVar14;
  }
  if ((long)(int)(uVar12 - 1) == (long)puVar14 - (long)puVar10 >> 3) {
    this_01 = (AllocationState *)*puVar10;
    uVar15 = (long)puVar14 - (long)puVar10 >> 3;
    pAVar8 = *(AllocationGroup **)this_01;
    if (1 < uVar15) {
      lVar21 = uVar15 - 1;
      do {
        puVar10 = puVar10 + 1;
        if ((AllocationState *)*puVar10 != this_01) {
          this_01 = (AllocationState *)0x0;
        }
        if (*(AllocationGroup **)*puVar10 != pAVar8) {
          pAVar8 = (AllocationGroup *)0x0;
        }
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (this_01 == (AllocationState *)0x0) {
      if (pAVar8 == (AllocationGroup *)0x0) {
        this_01 = *(AllocationState **)(this + 0xd8);
      }
      else {
        pZVar7 = *(Zone **)(this + 0x150);
        this_01 = *(AllocationState **)(pZVar7 + 0x10);
        if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_01) < 0x20) {
          this_01 = (AllocationState *)Zone::NewExpand(pZVar7,0x20);
        }
        else {
          *(AllocationState **)(pZVar7 + 0x10) = this_01 + 0x20;
        }
        MemoryLowering::AllocationState::AllocationState(this_01,pAVar8,(Node *)0x0);
      }
    }
    EnqueueUses(this,param_1,this_01);
    plVar3 = *(long **)(pMVar6 + 8);
    if (*(long **)(pMVar6 + 8) == (long *)0x0) {
      p_Var16 = (__tree_node_base *)(pMVar6 + 0x10);
      plVar11 = *(long **)p_Var16;
      if ((__tree_node_base *)*plVar11 != (__tree_node_base *)pMVar6) {
        do {
          lVar21 = *(long *)p_Var16;
          p_Var16 = (__tree_node_base *)(lVar21 + 0x10);
          plVar11 = *(long **)p_Var16;
        } while (*plVar11 != lVar21);
      }
    }
    else {
      do {
        plVar11 = plVar3;
        plVar3 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
    if (*(__tree_node_base **)this_00 == (__tree_node_base *)pMVar6) {
      *(long **)this_00 = plVar11;
    }
    *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xe8),(__tree_node_base *)pMVar6);
    if (*(long *)(pMVar6 + 0x28) != 0) {
      *(long *)(pMVar6 + 0x30) = *(long *)(pMVar6 + 0x28);
    }
  }
  return;
}

