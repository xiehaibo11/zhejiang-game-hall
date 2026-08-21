
void FUN_017e0f84(Label *param_1,undefined8 param_2,uint param_3,long *param_4)

{
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = param_4 + 1;
  plVar5 = (long *)*plVar4;
  plVar6 = plVar4;
  if (plVar5 != (long *)0x0) {
    plVar4 = param_4 + 1;
    do {
      while (plVar6 = plVar5, param_3 < *(uint *)(plVar6 + 4)) {
        plVar4 = plVar6;
        plVar5 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) {
          p_Var3 = (__tree_node_base *)*plVar6;
          goto joined_r0x017e104c;
        }
      }
      if (param_3 <= *(uint *)(plVar6 + 4)) break;
      plVar4 = plVar6 + 1;
      plVar5 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  p_Var3 = (__tree_node_base *)*plVar4;
joined_r0x017e104c:
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = operator_new(0x30);
    *(uint *)(p_Var3 + 0x20) = param_3;
    puVar1 = operator_new(8);
    *puVar1 = 0;
    *(undefined8 **)(p_Var3 + 0x28) = puVar1;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(long **)(p_Var3 + 0x10) = plVar6;
    *plVar4 = (long)p_Var3;
    p_Var2 = p_Var3;
    if (*(long *)*param_4 != 0) {
      *param_4 = *(long *)*param_4;
      p_Var2 = (__tree_node_base *)*plVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_4[1],p_Var2);
    param_4[2] = param_4[2] + 1;
  }
  if (-1 < *(int *)*(Label **)(p_Var3 + 0x28)) {
    v8::internal::Assembler::bind(param_1);
    FUN_017e0b78(param_1,param_2,param_3);
    return;
  }
  v8::internal::Assembler::b((Assembler *)param_1,*(Label **)(p_Var3 + 0x28));
  v8::internal::Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  return;
}

