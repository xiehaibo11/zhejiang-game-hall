
/* cocos2d::Mesh::getTexture(cocos2d::NTextureData::Usage) */

undefined8 __thiscall cocos2d::Mesh::getTexture(Mesh *this,int param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  Mesh *pMVar3;
  Mesh *pMVar4;
  Mesh *pMVar5;
  
  pMVar3 = this + 0x30;
  pMVar4 = *(Mesh **)pMVar3;
  pMVar5 = pMVar3;
  if (pMVar4 != (Mesh *)0x0) {
    pMVar3 = this + 0x30;
    do {
      while (pMVar5 = pMVar4, param_2 < *(int *)(pMVar5 + 0x20)) {
        pMVar3 = pMVar5;
        pMVar4 = *(Mesh **)pMVar5;
        if (*(Mesh **)pMVar5 == (Mesh *)0x0) {
          p_Var2 = *(__tree_node_base **)pMVar5;
          goto joined_r0x00d2f3b8;
        }
      }
      if (param_2 <= *(int *)(pMVar5 + 0x20)) break;
      pMVar3 = pMVar5 + 8;
      pMVar4 = *(Mesh **)pMVar3;
    } while (*(Mesh **)pMVar3 != (Mesh *)0x0);
  }
  p_Var2 = *(__tree_node_base **)pMVar3;
joined_r0x00d2f3b8:
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = operator_new(0x30);
    *(int *)(p_Var2 + 0x20) = param_2;
    *(undefined8 *)(p_Var2 + 0x28) = 0;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(Mesh **)(p_Var2 + 0x10) = pMVar5;
    *(__tree_node_base **)pMVar3 = p_Var2;
    p_Var1 = p_Var2;
    if (**(long **)(this + 0x28) != 0) {
      *(long *)(this + 0x28) = **(long **)(this + 0x28);
      p_Var1 = *(__tree_node_base **)pMVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var1);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  return *(undefined8 *)(p_Var2 + 0x28);
}

