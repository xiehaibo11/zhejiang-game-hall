
/* cocos2d::VertexData::setStream(cocos2d::VertexBuffer*, cocos2d::VertexStreamAttribute const&) */

undefined8 __thiscall
cocos2d::VertexData::setStream
          (VertexData *this,VertexBuffer *param_1,VertexStreamAttribute *param_2)

{
  int iVar1;
  __tree_node_base *p_Var2;
  undefined4 uVar3;
  VertexData *pVVar4;
  VertexData *pVVar5;
  VertexData *pVVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (VertexBuffer *)0x0) {
    return 0;
  }
  pVVar6 = this + 0x30;
  pVVar4 = *(VertexData **)pVVar6;
  if (pVVar4 == (VertexData *)0x0) {
LAB_00ff5fb0:
    Ref::retain((Ref *)param_1);
  }
  else {
    iVar1 = *(int *)(param_2 + 8);
    pVVar5 = pVVar6;
    do {
      if (iVar1 <= *(int *)(pVVar4 + 0x20)) {
        pVVar5 = pVVar4;
      }
      pVVar4 = *(VertexData **)(pVVar4 + (ulong)(*(int *)(pVVar4 + 0x20) < iVar1) * 8);
    } while (pVVar4 != (VertexData *)0x0);
    if ((pVVar5 == pVVar6) || (iVar1 < *(int *)(pVVar5 + 0x20))) goto LAB_00ff5fb0;
    Ref::retain((Ref *)param_1);
    if (pVVar5 != pVVar6) {
      Ref::release(*(Ref **)(pVVar5 + 0x28));
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)param_2;
      *(VertexBuffer **)(pVVar5 + 0x28) = param_1;
      goto LAB_00ff60c4;
    }
  }
  if (*(VertexData **)pVVar6 == (VertexData *)0x0) {
    pVVar5 = *(VertexData **)pVVar6;
    pVVar4 = pVVar6;
  }
  else {
    pVVar5 = *(VertexData **)pVVar6;
    pVVar4 = this + 0x30;
LAB_00ff5fdc:
    do {
      pVVar6 = pVVar5;
      if (*(int *)(pVVar6 + 0x20) <= *(int *)(param_2 + 8)) {
        if (*(int *)(pVVar6 + 0x20) < *(int *)(param_2 + 8)) {
          pVVar4 = pVVar6 + 8;
          pVVar5 = *(VertexData **)pVVar4;
          if (*(VertexData **)pVVar4 != (VertexData *)0x0) goto LAB_00ff5fdc;
        }
        pVVar5 = *(VertexData **)pVVar4;
        goto joined_r0x00ff6004;
      }
      pVVar5 = *(VertexData **)pVVar6;
      pVVar4 = pVVar6;
    } while (*(VertexData **)pVVar6 != (VertexData *)0x0);
    pVVar5 = *(VertexData **)pVVar6;
  }
joined_r0x00ff6004:
  if (pVVar5 == (VertexData *)0x0) {
    pVVar5 = operator_new(0x48);
    uVar3 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)pVVar5 = 0;
    *(undefined8 *)(pVVar5 + 8) = 0;
    *(VertexData **)(pVVar5 + 0x10) = pVVar6;
    *(undefined8 *)(pVVar5 + 0x40) = 0;
    *(undefined8 *)(pVVar5 + 0x38) = 0;
    *(undefined8 *)(pVVar5 + 0x30) = 0;
    *(undefined8 *)(pVVar5 + 0x28) = 0;
    *(undefined4 *)(pVVar5 + 0x20) = uVar3;
    *(VertexData **)pVVar4 = pVVar5;
    p_Var2 = (__tree_node_base *)pVVar5;
    if (**(long **)(this + 0x28) != 0) {
      *(long *)(this + 0x28) = **(long **)(this + 0x28);
      p_Var2 = *(__tree_node_base **)pVVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var2);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  *(VertexBuffer **)(pVVar5 + 0x28) = param_1;
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)param_2;
LAB_00ff60c4:
  *(undefined4 *)(pVVar5 + 0x40) = uVar3;
  *(undefined8 *)(pVVar5 + 0x38) = uVar8;
  *(undefined8 *)(pVVar5 + 0x30) = uVar7;
  return 1;
}

