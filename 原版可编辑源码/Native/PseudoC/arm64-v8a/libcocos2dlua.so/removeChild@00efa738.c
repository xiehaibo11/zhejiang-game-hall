
/* cocos2d::experimental::TMXLayer::removeChild(cocos2d::Node*, bool) */

void __thiscall
cocos2d::experimental::TMXLayer::removeChild(TMXLayer *this,Node *param_1,bool param_2)

{
  long *plVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  
  iVar2 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
  p_Var3 = *(__tree_node_base **)(this + 0x370);
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var5 = p_Var3;
    p_Var7 = (__tree_node_base *)(this + 0x370);
    do {
      if (iVar2 <= *(int *)(p_Var5 + 0x20)) {
        p_Var7 = p_Var5;
      }
      p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(int *)(p_Var5 + 0x20) < iVar2) * 8);
    } while (p_Var5 != (__tree_node_base *)0x0);
    if (((p_Var7 != (__tree_node_base *)(this + 0x370)) && (*(int *)(p_Var7 + 0x20) <= iVar2)) &&
       (*(Node **)(p_Var7 + 0x28) == param_1)) {
      plVar1 = *(long **)(p_Var7 + 8);
      if (*(long **)(p_Var7 + 8) == (long *)0x0) {
        p_Var5 = p_Var7 + 0x10;
        plVar4 = *(long **)p_Var5;
        if ((__tree_node_base *)*plVar4 != p_Var7) {
          do {
            lVar6 = *(long *)p_Var5;
            p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
            plVar4 = *(long **)p_Var5;
          } while (*plVar4 != lVar6);
        }
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 0x368) == p_Var7) {
        *(long **)(this + 0x368) = plVar4;
      }
      *(long *)(this + 0x378) = *(long *)(this + 0x378) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var3,p_Var7);
      operator_delete(p_Var7);
    }
  }
  Node::removeChild((Node *)this,param_1,param_2);
  return;
}

