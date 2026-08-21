
/* v8::internal::compiler::ZoneStats::StatsScope::StatsScope(v8::internal::compiler::ZoneStats*) */

void __thiscall
v8::internal::compiler::ZoneStats::StatsScope::StatsScope(StatsScope *this,ZoneStats *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  long lVar9;
  long in_x4;
  long lVar10;
  long in_x5;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  StatsScope *pSVar17;
  StatsScope *pSVar18;
  StatsScope *pSVar19;
  StatsScope *pSVar20;
  StatsScope *pSVar21;
  StatsScope *local_58;
  
  pSVar17 = this + 0x10;
  *(undefined8 *)pSVar17 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ZoneStats **)this = param_1;
  *(StatsScope **)(this + 8) = pSVar17;
  puVar3 = *(undefined8 **)param_1;
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == puVar5) {
    lVar12 = 0;
  }
  else {
    uVar1 = ((ulong)((long)puVar5 + (-8 - (long)puVar3)) >> 3) + 1;
    if (uVar1 < 2) {
      lVar12 = 0;
      puVar11 = puVar3;
    }
    else {
      uVar13 = uVar1 & 0x3ffffffffffffffe;
      lVar15 = 0;
      lVar12 = 0;
      puVar11 = puVar3 + uVar13;
      plVar14 = puVar3 + 1;
      uVar16 = uVar13;
      do {
        plVar4 = (long *)plVar14[-1];
        plVar6 = (long *)*plVar14;
        lVar9 = plVar4[5];
        lVar8 = plVar6[5];
        if (lVar9 != 0) {
          in_x4 = plVar4[2];
        }
        if (lVar8 != 0) {
          in_x5 = plVar6[2];
        }
        lVar10 = in_x4 - lVar9;
        in_x5 = in_x5 - lVar8;
        in_x4 = in_x5 + -0x18;
        lVar2 = 0;
        if (lVar9 != 0) {
          lVar2 = lVar10 + -0x18;
        }
        lVar9 = 0;
        if (lVar8 != 0) {
          lVar9 = in_x4;
        }
        uVar16 = uVar16 - 2;
        lVar15 = lVar2 + lVar15 + *plVar4;
        lVar12 = lVar9 + lVar12 + *plVar6;
        plVar14 = plVar14 + 2;
      } while (uVar16 != 0);
      lVar12 = lVar12 + lVar15;
      if (uVar1 == uVar13) goto LAB_0133af70;
    }
    do {
      plVar14 = (long *)*puVar11;
      lVar15 = 0;
      if (plVar14[5] != 0) {
        lVar15 = (plVar14[2] - plVar14[5]) + -0x18;
      }
      puVar11 = puVar11 + 1;
      lVar12 = lVar15 + lVar12 + *plVar14;
    } while (puVar5 != puVar11);
  }
LAB_0133af70:
  *(long *)(this + 0x20) = lVar12 + *(long *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x28) = 0;
  local_58 = this;
  if (*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) {
    **(undefined8 **)(param_1 + 0x20) = this;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
  }
  else {
    std::__ndk1::
    vector<v8::internal::compiler::ZoneStats::StatsScope*,std::__ndk1::allocator<v8::internal::compiler::ZoneStats::StatsScope*>>
    ::__push_back_slow_path<v8::internal::compiler::ZoneStats::StatsScope*>
              ((vector<v8::internal::compiler::ZoneStats::StatsScope*,std::__ndk1::allocator<v8::internal::compiler::ZoneStats::StatsScope*>>
                *)(param_1 + 0x18),&local_58);
  }
  puVar3 = (undefined8 *)**(long **)this;
  puVar5 = (undefined8 *)(*(long **)this)[1];
  do {
    if (puVar3 == puVar5) {
      return;
    }
    plVar14 = (long *)*puVar3;
    lVar12 = 0;
    if (plVar14[5] != 0) {
      lVar12 = (plVar14[2] - plVar14[5]) + -0x18;
    }
    lVar15 = *plVar14;
    pSVar20 = *(StatsScope **)pSVar17;
    pSVar18 = pSVar17;
    pSVar21 = pSVar17;
    while (pSVar20 != (StatsScope *)0x0) {
      while (pSVar19 = pSVar20, pSVar21 = pSVar19, plVar14 < *(long **)(pSVar19 + 0x20)) {
        pSVar18 = pSVar19;
        pSVar20 = *(StatsScope **)pSVar19;
        if (*(StatsScope **)pSVar19 == (StatsScope *)0x0) {
          if (*(long *)pSVar19 != 0) goto LAB_0133afd8;
          goto LAB_0133b054;
        }
      }
      if (plVar14 <= *(long **)(pSVar19 + 0x20)) break;
      pSVar18 = pSVar19 + 8;
      pSVar20 = *(StatsScope **)pSVar18;
    }
    pSVar19 = pSVar18;
    if (*(long *)pSVar19 == 0) {
LAB_0133b054:
      p_Var7 = operator_new(0x30);
      *(long **)(p_Var7 + 0x20) = plVar14;
      *(long *)(p_Var7 + 0x28) = lVar15 + lVar12;
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var7 + 8) = 0;
      *(StatsScope **)(p_Var7 + 0x10) = pSVar21;
      *(__tree_node_base **)pSVar19 = p_Var7;
      if (**(long **)(this + 8) != 0) {
        *(long *)(this + 8) = **(long **)(this + 8);
        p_Var7 = *(__tree_node_base **)pSVar19;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x10),p_Var7);
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
    }
LAB_0133afd8:
    puVar3 = puVar3 + 1;
  } while( true );
}

