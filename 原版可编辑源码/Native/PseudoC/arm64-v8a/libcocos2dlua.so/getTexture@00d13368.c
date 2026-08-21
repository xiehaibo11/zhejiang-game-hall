
/* cocos2d::BatchMesh::getTexture(cocos2d::NTextureData::Usage) */

undefined8 __thiscall cocos2d::BatchMesh::getTexture(BatchMesh *this,int param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  BatchMesh *pBVar3;
  BatchMesh *pBVar4;
  BatchMesh *pBVar5;
  
  pBVar3 = this + 0x48;
  pBVar4 = *(BatchMesh **)pBVar3;
  pBVar5 = pBVar3;
  if (pBVar4 != (BatchMesh *)0x0) {
    pBVar3 = this + 0x48;
    do {
      while (pBVar5 = pBVar4, param_2 < *(int *)(pBVar5 + 0x20)) {
        pBVar3 = pBVar5;
        pBVar4 = *(BatchMesh **)pBVar5;
        if (*(BatchMesh **)pBVar5 == (BatchMesh *)0x0) {
          p_Var2 = *(__tree_node_base **)pBVar5;
          goto joined_r0x00d13418;
        }
      }
      if (param_2 <= *(int *)(pBVar5 + 0x20)) break;
      pBVar3 = pBVar5 + 8;
      pBVar4 = *(BatchMesh **)pBVar3;
    } while (*(BatchMesh **)pBVar3 != (BatchMesh *)0x0);
  }
  p_Var2 = *(__tree_node_base **)pBVar3;
joined_r0x00d13418:
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = operator_new(0x30);
    *(int *)(p_Var2 + 0x20) = param_2;
    *(undefined8 *)(p_Var2 + 0x28) = 0;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(BatchMesh **)(p_Var2 + 0x10) = pBVar5;
    *(__tree_node_base **)pBVar3 = p_Var2;
    p_Var1 = p_Var2;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      p_Var1 = *(__tree_node_base **)pBVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),p_Var1);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  return *(undefined8 *)(p_Var2 + 0x28);
}

