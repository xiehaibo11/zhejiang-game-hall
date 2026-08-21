
/* dragonBones::BaseObject::_returnObject(dragonBones::BaseObject*) */

void dragonBones::BaseObject::_returnObject(BaseObject *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  BaseObject *local_70;
  undefined4 local_64;
  BaseObject *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = param_1;
  uVar3 = (**(code **)(*(long *)param_1 + 0x18))();
  if (DAT_01d3dfc0 == (undefined8 *)0x0) {
LAB_00d2dfa8:
    puVar6 = &_defaultMaxCount;
  }
  else {
    puVar5 = &DAT_01d3dfc0;
    puVar7 = DAT_01d3dfc0;
    do {
      if ((ulong)puVar7[4] >= uVar3) {
        puVar5 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[(ulong)puVar7[4] < uVar3];
    } while (puVar7 != (undefined8 *)0x0);
    if (((undefined8 **)puVar5 == &DAT_01d3dfc0) || (uVar3 < (ulong)puVar5[4])) goto LAB_00d2dfa8;
    puVar6 = (uint *)(puVar5 + 5);
  }
  uVar1 = *puVar6;
  p_Var9 = (__tree_node_base *)&DAT_01d3dfd8;
  p_Var4 = p_Var9;
  if (DAT_01d3dfd8 != (__tree_node_base *)0x0) {
    p_Var8 = DAT_01d3dfd8;
    p_Var9 = (__tree_node_base *)&DAT_01d3dfd8;
    do {
      while (p_Var4 = p_Var8, uVar3 < *(ulong *)(p_Var4 + 0x20)) {
        p_Var8 = *(__tree_node_base **)p_Var4;
        p_Var9 = p_Var4;
        if (*(__tree_node_base **)p_Var4 == (__tree_node_base *)0x0) {
          p_Var8 = *(__tree_node_base **)p_Var4;
          if (p_Var8 == (__tree_node_base *)0x0) goto LAB_00d2e034;
          goto LAB_00d2e08c;
        }
      }
      if (uVar3 <= *(ulong *)(p_Var4 + 0x20)) break;
      p_Var9 = p_Var4 + 8;
      p_Var8 = *(__tree_node_base **)p_Var9;
    } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
    p_Var8 = *(__tree_node_base **)p_Var9;
    if (p_Var8 != (__tree_node_base *)0x0) goto LAB_00d2e08c;
  }
LAB_00d2e034:
  p_Var8 = operator_new(0x40);
  *(undefined8 *)(p_Var8 + 0x30) = 0;
  *(undefined8 *)(p_Var8 + 0x38) = 0;
  *(ulong *)(p_Var8 + 0x20) = uVar3;
  *(undefined8 *)(p_Var8 + 0x28) = 0;
  *(undefined8 *)p_Var8 = 0;
  *(undefined8 *)(p_Var8 + 8) = 0;
  *(__tree_node_base **)(p_Var8 + 0x10) = p_Var4;
  *(__tree_node_base **)p_Var9 = p_Var8;
  p_Var4 = p_Var8;
  if ((long *)*_poolsMap != (long *)0x0) {
    p_Var4 = *(__tree_node_base **)p_Var9;
    _poolsMap = (long *)*_poolsMap;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (DAT_01d3dfd8,p_Var4);
  DAT_01d3dfe0 = DAT_01d3dfe0 + 1;
LAB_00d2e08c:
  if ((DragonBones::checkInPool == '\0') ||
     ((ulong)(*(long *)(p_Var8 + 0x30) - *(long *)(p_Var8 + 0x28) >> 3) < (ulong)uVar1)) {
    if (local_70[0xc] == (BaseObject)0x0) {
      local_70[0xc] = (BaseObject)0x1;
      if (*(undefined8 **)(p_Var8 + 0x30) == *(undefined8 **)(p_Var8 + 0x38)) {
        std::__ndk1::
        vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>::
        __push_back_slow_path<dragonBones::BaseObject*const&>
                  ((vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>
                    *)(p_Var8 + 0x28),&local_70);
      }
      else {
        **(undefined8 **)(p_Var8 + 0x30) = local_70;
        *(long *)(p_Var8 + 0x30) = *(long *)(p_Var8 + 0x30) + 8;
      }
      if (_recycleOrDestroyCallback._32_8_ != 0) {
        local_64 = 0;
        local_60 = local_70;
        (**(code **)(*(long *)_recycleOrDestroyCallback._32_8_ + 0x30))
                  (_recycleOrDestroyCallback._32_8_,&local_60,&local_64);
      }
    }
  }
  else if (local_70 != (BaseObject *)0x0) {
    (**(code **)(*(long *)local_70 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

