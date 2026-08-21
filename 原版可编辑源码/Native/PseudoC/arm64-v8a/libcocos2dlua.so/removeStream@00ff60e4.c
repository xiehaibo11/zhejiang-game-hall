
/* cocos2d::VertexData::removeStream(int) */

void __thiscall cocos2d::VertexData::removeStream(VertexData *this,int param_1)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  __tree_node_base *p_Var6;
  
  p_Var2 = (__tree_node_base *)(this + 0x30);
  p_Var4 = *(__tree_node_base **)p_Var2;
  p_Var6 = p_Var2;
  if (p_Var4 != (__tree_node_base *)0x0) {
    do {
      if (param_1 <= *(int *)(p_Var4 + 0x20)) {
        p_Var6 = p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(int *)(p_Var4 + 0x20) < param_1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((p_Var6 != p_Var2) && (*(int *)(p_Var6 + 0x20) <= param_1)) {
      Ref::release(*(Ref **)(p_Var6 + 0x28));
      plVar1 = *(long **)(p_Var6 + 8);
      if (*(long **)(p_Var6 + 8) == (long *)0x0) {
        p_Var2 = p_Var6 + 0x10;
        plVar3 = *(long **)p_Var2;
        if ((__tree_node_base *)*plVar3 != p_Var6) {
          do {
            lVar5 = *(long *)p_Var2;
            p_Var2 = (__tree_node_base *)(lVar5 + 0x10);
            plVar3 = *(long **)p_Var2;
          } while (*plVar3 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 0x28) == p_Var6) {
        *(long **)(this + 0x28) = plVar3;
      }
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x30),p_Var6);
      operator_delete(p_Var6);
      return;
    }
  }
  return;
}

