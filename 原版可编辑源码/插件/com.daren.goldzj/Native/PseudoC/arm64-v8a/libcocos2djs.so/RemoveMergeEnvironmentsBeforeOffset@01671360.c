
/* v8::internal::compiler::BytecodeGraphBuilder::RemoveMergeEnvironmentsBeforeOffset(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::RemoveMergeEnvironmentsBeforeOffset
          (BytecodeGraphBuilder *this,int param_1)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  long lVar3;
  __tree_node_base *p_Var4;
  
  if (*(long *)(this + 0xd8) != 0) {
    p_Var1 = *(__tree_node_base **)(this + 0xc0);
    while (((__tree_node_base *)(this + 200) != p_Var1 && (*(int *)(p_Var1 + 0x20) <= param_1))) {
      p_Var2 = *(__tree_node_base **)(p_Var1 + 8);
      if (*(__tree_node_base **)(p_Var1 + 8) == (__tree_node_base *)0x0) {
        p_Var2 = p_Var1 + 0x10;
        p_Var4 = *(__tree_node_base **)p_Var2;
        if (*(__tree_node_base **)p_Var4 != p_Var1) {
          do {
            lVar3 = *(long *)p_Var2;
            p_Var2 = (__tree_node_base *)(lVar3 + 0x10);
            p_Var4 = *(__tree_node_base **)p_Var2;
          } while (*(long *)p_Var4 != lVar3);
        }
      }
      else {
        do {
          p_Var4 = p_Var2;
          p_Var2 = *(__tree_node_base **)p_Var4;
        } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
      }
      if (*(__tree_node_base **)(this + 0xc0) == p_Var1) {
        *(__tree_node_base **)(this + 0xc0) = p_Var4;
      }
      *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 200),p_Var1);
      p_Var1 = p_Var4;
    }
  }
  return;
}

