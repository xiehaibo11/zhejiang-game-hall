
/* cocos2d::middleware::TypedArrayPool::getObjPool(se::Object::TypedArrayType, unsigned long) */

undefined8 * __thiscall
cocos2d::middleware::TypedArrayPool::getObjPool(TypedArrayPool *this,int param_2,ulong param_3)

{
  TypedArrayPool *pTVar1;
  long *plVar2;
  undefined8 *puVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  TypedArrayPool *pTVar6;
  long *plVar7;
  TypedArrayPool *pTVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  TypedArrayPool *pTVar11;
  TypedArrayPool *pTVar12;
  
  pTVar11 = this + 8;
  pTVar8 = *(TypedArrayPool **)pTVar11;
  pTVar12 = pTVar11;
  pTVar6 = pTVar8;
  if (pTVar8 != (TypedArrayPool *)0x0) {
    do {
      if (param_2 <= *(int *)(pTVar6 + 0x20)) {
        pTVar12 = pTVar6;
      }
      pTVar1 = pTVar6 + (ulong)(*(int *)(pTVar6 + 0x20) < param_2) * 8;
      pTVar6 = *(TypedArrayPool **)pTVar1;
    } while (*(TypedArrayPool **)pTVar1 != (TypedArrayPool *)0x0);
    if ((pTVar12 != pTVar11) && (*(int *)(pTVar12 + 0x20) <= param_2)) {
      plVar2 = *(long **)(pTVar12 + 0x28);
      goto LAB_00d5fd9c;
    }
  }
  plVar2 = operator_new(0x18);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(plVar2 + 1);
  if (pTVar8 == (TypedArrayPool *)0x0) {
    p_Var9 = *(__tree_node_base **)pTVar11;
    pTVar12 = pTVar11;
  }
  else {
    pTVar12 = this + 8;
    do {
      while (pTVar11 = pTVar8, param_2 < *(int *)(pTVar11 + 0x20)) {
        pTVar8 = *(TypedArrayPool **)pTVar11;
        pTVar12 = pTVar11;
        if (*(TypedArrayPool **)pTVar11 == (TypedArrayPool *)0x0) {
          p_Var9 = *(__tree_node_base **)pTVar11;
          goto joined_r0x00d5fd44;
        }
      }
      if (param_2 <= *(int *)(pTVar11 + 0x20)) break;
      pTVar12 = pTVar11 + 8;
      pTVar8 = *(TypedArrayPool **)pTVar12;
    } while (*(TypedArrayPool **)pTVar12 != (TypedArrayPool *)0x0);
    p_Var9 = *(__tree_node_base **)pTVar12;
  }
joined_r0x00d5fd44:
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(int *)(p_Var9 + 0x20) = param_2;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(TypedArrayPool **)(p_Var9 + 0x10) = pTVar11;
    *(__tree_node_base **)pTVar12 = p_Var9;
    p_Var4 = p_Var9;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var4 = *(__tree_node_base **)pTVar12;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  *(long **)(p_Var9 + 0x28) = plVar2;
LAB_00d5fd9c:
  plVar10 = plVar2 + 1;
  plVar7 = (long *)*plVar10;
  plVar5 = plVar10;
  if (plVar7 != (long *)0x0) {
    do {
      if ((ulong)plVar7[4] >= param_3) {
        plVar5 = plVar7;
      }
      plVar7 = (long *)plVar7[(ulong)plVar7[4] < param_3];
    } while (plVar7 != (long *)0x0);
    if ((plVar5 != plVar10) && ((ulong)plVar5[4] <= param_3)) {
      return (undefined8 *)plVar5[5];
    }
  }
  puVar3 = operator_new(0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((long *)*plVar10 == (long *)0x0) {
    p_Var9 = (__tree_node_base *)*plVar10;
    plVar5 = plVar10;
  }
  else {
    plVar7 = (long *)*plVar10;
    plVar5 = plVar2 + 1;
    do {
      while (plVar10 = plVar7, param_3 < (ulong)plVar10[4]) {
        plVar7 = (long *)*plVar10;
        plVar5 = plVar10;
        if ((long *)*plVar10 == (long *)0x0) {
          p_Var9 = (__tree_node_base *)*plVar10;
          goto joined_r0x00d5fe60;
        }
      }
      if (param_3 <= (ulong)plVar10[4]) break;
      plVar5 = plVar10 + 1;
      plVar7 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    p_Var9 = (__tree_node_base *)*plVar5;
  }
joined_r0x00d5fe60:
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(ulong *)(p_Var9 + 0x20) = param_3;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(long **)(p_Var9 + 0x10) = plVar10;
    *plVar5 = (long)p_Var9;
    p_Var4 = p_Var9;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      p_Var4 = (__tree_node_base *)*plVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar2[1],p_Var4);
    plVar2[2] = plVar2[2] + 1;
  }
  *(undefined8 **)(p_Var9 + 0x28) = puVar3;
  return puVar3;
}

