
/* cocos2d::middleware::MiddlewareManager::getMeshBuffer(int) */

MeshBuffer * __thiscall
cocos2d::middleware::MiddlewareManager::getMeshBuffer(MiddlewareManager *this,int param_1)

{
  MiddlewareManager *pMVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  MeshBuffer *this_00;
  MiddlewareManager *pMVar4;
  __tree_node_base *p_Var5;
  MiddlewareManager *pMVar6;
  MiddlewareManager *pMVar7;
  MiddlewareManager *pMVar8;
  
  pMVar6 = this + 0x40;
  pMVar4 = pMVar6;
  pMVar8 = pMVar6;
  if (*(MiddlewareManager **)pMVar6 == (MiddlewareManager *)0x0) {
LAB_00bff128:
    lVar3 = *(long *)pMVar4;
    pMVar7 = pMVar4;
  }
  else {
    pMVar4 = this + 0x40;
    pMVar1 = *(MiddlewareManager **)pMVar6;
    do {
      while (pMVar7 = pMVar1, pMVar8 = pMVar7, *(int *)(pMVar7 + 0x20) <= param_1) {
        if (param_1 <= *(int *)(pMVar7 + 0x20)) goto LAB_00bff128;
        pMVar4 = pMVar7 + 8;
        pMVar1 = *(MiddlewareManager **)pMVar4;
        if (*(MiddlewareManager **)pMVar4 == (MiddlewareManager *)0x0) goto LAB_00bff128;
      }
      pMVar4 = pMVar7;
      pMVar1 = *(MiddlewareManager **)pMVar7;
    } while (*(MiddlewareManager **)pMVar7 != (MiddlewareManager *)0x0);
    lVar3 = *(long *)pMVar7;
  }
  if (lVar3 == 0) {
    p_Var2 = operator_new(0x30);
    *(int *)(p_Var2 + 0x20) = param_1;
    *(undefined8 *)(p_Var2 + 0x28) = 0;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(MiddlewareManager **)(p_Var2 + 0x10) = pMVar8;
    *(__tree_node_base **)pMVar7 = p_Var2;
    p_Var5 = p_Var2;
    if (**(long **)(this + 0x38) != 0) {
      *(long *)(this + 0x38) = **(long **)(this + 0x38);
      p_Var5 = *(__tree_node_base **)pMVar7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x40),p_Var5);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    this_00 = *(MeshBuffer **)(p_Var2 + 0x28);
  }
  else {
    this_00 = *(MeshBuffer **)(lVar3 + 0x28);
  }
  if (this_00 == (MeshBuffer *)0x0) {
    this_00 = operator_new(400);
    MeshBuffer::MeshBuffer(this_00,param_1);
    if (*(MiddlewareManager **)pMVar6 == (MiddlewareManager *)0x0) {
      p_Var5 = *(__tree_node_base **)pMVar6;
      pMVar8 = pMVar6;
    }
    else {
      pMVar4 = *(MiddlewareManager **)pMVar6;
      pMVar8 = this + 0x40;
LAB_00bff1c8:
      do {
        pMVar6 = pMVar4;
        if (*(int *)(pMVar6 + 0x20) <= param_1) {
          if (*(int *)(pMVar6 + 0x20) < param_1) {
            pMVar8 = pMVar6 + 8;
            pMVar4 = *(MiddlewareManager **)pMVar8;
            if (*(MiddlewareManager **)pMVar8 != (MiddlewareManager *)0x0) goto LAB_00bff1c8;
          }
          p_Var5 = *(__tree_node_base **)pMVar8;
          goto joined_r0x00bff220;
        }
        pMVar4 = *(MiddlewareManager **)pMVar6;
        pMVar8 = pMVar6;
      } while (*(MiddlewareManager **)pMVar6 != (MiddlewareManager *)0x0);
      p_Var5 = *(__tree_node_base **)pMVar6;
    }
joined_r0x00bff220:
    if (p_Var5 == (__tree_node_base *)0x0) {
      p_Var5 = operator_new(0x30);
      *(int *)(p_Var5 + 0x20) = param_1;
      *(undefined8 *)(p_Var5 + 0x28) = 0;
      *(undefined8 *)p_Var5 = 0;
      *(undefined8 *)(p_Var5 + 8) = 0;
      *(MiddlewareManager **)(p_Var5 + 0x10) = pMVar6;
      *(__tree_node_base **)pMVar8 = p_Var5;
      p_Var2 = p_Var5;
      if (**(long **)(this + 0x38) != 0) {
        *(long *)(this + 0x38) = **(long **)(this + 0x38);
        p_Var2 = *(__tree_node_base **)pMVar8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x40),p_Var2);
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    }
    *(MeshBuffer **)(p_Var5 + 0x28) = this_00;
  }
  return this_00;
}

