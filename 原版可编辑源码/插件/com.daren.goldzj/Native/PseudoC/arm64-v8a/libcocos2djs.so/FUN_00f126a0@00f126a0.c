
void FUN_00f126a0(long param_1,int param_2,FunctionLiteral *param_3,byte param_4)

{
  int iVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  iVar1 = v8::internal::FunctionLiteral::start_position(param_3);
  plVar4 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar4;
  if (*(int *)(param_3 + 0x1c) == 0) {
    iVar1 = -1;
  }
  plVar6 = plVar4;
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x10);
    do {
      while (plVar6 = plVar5, param_2 < (int)plVar6[4]) {
LAB_00f126f8:
        plVar4 = plVar6;
        plVar5 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) {
          lVar3 = *plVar6;
          goto joined_r0x00f12750;
        }
      }
      if (param_2 <= (int)plVar6[4]) {
        if (iVar1 < *(int *)((long)plVar6 + 0x24)) goto LAB_00f126f8;
        if (iVar1 <= *(int *)((long)plVar6 + 0x24)) break;
      }
      plVar4 = plVar6 + 1;
      plVar5 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  lVar3 = *plVar4;
joined_r0x00f12750:
  if (lVar3 == 0) {
    p_Var2 = operator_new(0x70);
    p_Var2[0x6c] = (__tree_node_base)(param_4 & 1);
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(long **)(p_Var2 + 0x10) = plVar6;
    *(undefined8 *)(p_Var2 + 0x38) = 0;
    *(undefined8 *)(p_Var2 + 0x30) = 0;
    *(undefined8 *)(p_Var2 + 0x48) = 0;
    *(undefined8 *)(p_Var2 + 0x40) = 0;
    *(undefined8 *)(p_Var2 + 0x58) = 0;
    *(undefined8 *)(p_Var2 + 0x50) = 0;
    *(undefined8 *)(p_Var2 + 100) = 0;
    *(undefined8 *)(p_Var2 + 0x5c) = 0;
    *(ulong *)(p_Var2 + 0x20) = CONCAT44(iVar1,param_2);
    *(FunctionLiteral **)(p_Var2 + 0x28) = param_3;
    *plVar4 = (long)p_Var2;
    if (**(long **)(param_1 + 8) != 0) {
      *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
      p_Var2 = (__tree_node_base *)*plVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x10),p_Var2);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  return;
}

