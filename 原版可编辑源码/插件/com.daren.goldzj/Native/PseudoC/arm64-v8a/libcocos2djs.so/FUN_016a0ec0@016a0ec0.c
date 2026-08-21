
__tree_node_base * FUN_016a0ec0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  Zone *this;
  __tree_node_base *p_Var2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  uVar5 = *(ulong *)(param_2 + 0xa0);
  lVar4 = *(long *)(param_3 + 0xa0);
  plVar9 = param_1 + 1;
  plVar7 = plVar9;
  if ((long *)*plVar9 != (long *)0x0) {
    plVar7 = param_1 + 1;
    plVar1 = (long *)*plVar9;
    do {
      while( true ) {
        plVar8 = plVar1;
        iVar3 = (int)uVar5;
        plVar9 = plVar8;
        if ((int)plVar8[4] <= iVar3) break;
LAB_016a0efc:
        plVar7 = plVar8;
        plVar1 = (long *)*plVar8;
        if ((long *)*plVar8 == (long *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar8;
          if (p_Var6 != (__tree_node_base *)0x0) goto LAB_016a0fc0;
          goto LAB_016a0f54;
        }
      }
      if (iVar3 <= (int)plVar8[4]) {
        iVar3 = (int)lVar4;
        if (iVar3 < *(int *)((long)plVar8 + 0x24)) goto LAB_016a0efc;
        if (iVar3 <= *(int *)((long)plVar8 + 0x24)) break;
      }
      plVar7 = plVar8 + 1;
      plVar1 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
  plVar8 = plVar7;
  p_Var6 = (__tree_node_base *)*plVar8;
  if (p_Var6 == (__tree_node_base *)0x0) {
LAB_016a0f54:
    this = (Zone *)param_1[2];
    p_Var6 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var6) < 0x40) {
      p_Var6 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x40);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var6 + 0x40;
    }
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(undefined8 *)(p_Var6 + 0x38) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *(ulong *)(p_Var6 + 0x20) = lVar4 << 0x20 | uVar5 & 0xffffffff;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *plVar8 = (long)p_Var6;
    p_Var2 = p_Var6;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[3] = param_1[3] + 1;
  }
LAB_016a0fc0:
  return p_Var6 + 0x28;
}

