
/* dragonBones::DragonBones::bufferObject(dragonBones::BaseObject*) */

void __thiscall dragonBones::DragonBones::bufferObject(DragonBones *this,BaseObject *param_1)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  DragonBones *pDVar3;
  DragonBones *pDVar4;
  DragonBones *pDVar5;
  
  if ((param_1 != (BaseObject *)0x0) && (param_1[0xc] == (BaseObject)0x0)) {
    pDVar3 = this + 0x10;
    pDVar4 = *(DragonBones **)pDVar3;
    pDVar5 = pDVar3;
    if (pDVar4 != (DragonBones *)0x0) {
      pDVar3 = this + 0x10;
      do {
        while (pDVar5 = pDVar4, param_1 < *(BaseObject **)(pDVar5 + 0x20)) {
          pDVar3 = pDVar5;
          pDVar4 = *(DragonBones **)pDVar5;
          if (*(DragonBones **)pDVar5 == (DragonBones *)0x0) {
            p_Var2 = *(__tree_node_base **)pDVar5;
            goto joined_r0x00d2f180;
          }
        }
        if (param_1 <= *(BaseObject **)(pDVar5 + 0x20)) break;
        pDVar3 = pDVar5 + 8;
        pDVar4 = *(DragonBones **)pDVar3;
      } while (*(DragonBones **)pDVar3 != (DragonBones *)0x0);
    }
    p_Var2 = *(__tree_node_base **)pDVar3;
joined_r0x00d2f180:
    if (p_Var2 == (__tree_node_base *)0x0) {
      p_Var2 = operator_new(0x30);
      *(BaseObject **)(p_Var2 + 0x20) = param_1;
      p_Var2[0x28] = (__tree_node_base)0x0;
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(DragonBones **)(p_Var2 + 0x10) = pDVar5;
      *(__tree_node_base **)pDVar3 = p_Var2;
      p_Var1 = p_Var2;
      if (**(long **)(this + 8) != 0) {
        *(long *)(this + 8) = **(long **)(this + 8);
        p_Var1 = *(__tree_node_base **)pDVar3;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x10),p_Var1);
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
    }
    p_Var2[0x28] = (__tree_node_base)0x1;
  }
  return;
}

