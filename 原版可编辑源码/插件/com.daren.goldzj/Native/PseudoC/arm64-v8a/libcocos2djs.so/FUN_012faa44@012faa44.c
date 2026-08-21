
__tree_node_base * FUN_012faa44(long *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  Zone *this;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  uint uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 1;
  if ((long *)*plVar8 == (long *)0x0) {
    p_Var6 = (__tree_node_base *)*plVar8;
    plVar9 = plVar8;
  }
  else {
    uVar1 = *param_2;
    plVar7 = param_1 + 1;
    plVar2 = (long *)*plVar8;
    do {
      while( true ) {
        plVar9 = plVar2;
        uVar5 = (uint)*(undefined8 *)((long)plVar9 + 0x1c);
        if ((uVar1 < uVar5) ||
           ((uVar1 == uVar5 &&
            (param_2[1] < (uint)((ulong)*(undefined8 *)((long)plVar9 + 0x1c) >> 0x20))))) break;
        if ((uVar1 <= uVar5) &&
           ((plVar8 = plVar7, uVar5 != uVar1 || (param_2[1] <= *(uint *)(plVar9 + 4)))))
        goto LAB_012faad4;
        plVar8 = plVar9 + 1;
        plVar7 = plVar8;
        plVar2 = (long *)*plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_012faad4;
      }
      plVar8 = plVar9;
      plVar7 = plVar9;
      plVar2 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
LAB_012faad4:
    p_Var6 = (__tree_node_base *)*plVar8;
  }
  if (p_Var6 == (__tree_node_base *)0x0) {
    this = (Zone *)param_1[2];
    p_Var6 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var6) < 0x28) {
      p_Var6 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x28);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var6 + 0x28;
    }
    uVar4 = *(undefined8 *)param_2;
    p_Var6[0x24] = (__tree_node_base)0x0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *(undefined8 *)(p_Var6 + 0x1c) = uVar4;
    *plVar8 = (long)p_Var6;
    p_Var3 = p_Var6;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    param_1[3] = param_1[3] + 1;
  }
  return p_Var6 + 0x24;
}

