
/* dragonBones::BaseObject::setMaxCount(unsigned long, unsigned int) */

void dragonBones::BaseObject::setMaxCount(ulong param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *pvVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  undefined8 *puVar12;
  __tree_node_base *p_Var13;
  
  uVar10 = (ulong)param_2;
  if (param_1 == 0) {
    if ((undefined8 **)_poolsMap == &DAT_01d3dfd8) {
      _defaultMaxCount = param_2;
      return;
    }
    uVar10 = (ulong)param_2;
    plVar2 = _poolsMap;
    _defaultMaxCount = param_2;
LAB_00d2e340:
    do {
      pvVar9 = (vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *)
               (plVar2 + 5);
      uVar5 = plVar2[6] - *(long *)pvVar9 >> 3;
      if (uVar10 < uVar5) {
        plVar3 = *(long **)(*(long *)pvVar9 + uVar10 * 8);
        uVar1 = uVar10;
        while( true ) {
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if (uVar5 - 1 == uVar1) break;
          uVar1 = uVar1 + 1;
          plVar3 = *(long **)(*(long *)pvVar9 + uVar1 * 8);
        }
        uVar5 = plVar2[6] - plVar2[5] >> 3;
        if (uVar5 < uVar10) {
          std::__ndk1::
          vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>::
          __append(pvVar9,uVar10 - uVar5);
        }
        else if (uVar5 != uVar10) {
          plVar2[6] = plVar2[5] + uVar10 * 8;
        }
      }
      if (DAT_01d3dfc0 != (__tree_node_base *)0x0) {
        uVar5 = plVar2[4];
        p_Var13 = (__tree_node_base *)&DAT_01d3dfc0;
        p_Var8 = DAT_01d3dfc0;
        do {
          if (*(ulong *)(p_Var8 + 0x20) >= uVar5) {
            p_Var13 = p_Var8;
          }
          p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < uVar5) * 8);
        } while (p_Var8 != (__tree_node_base *)0x0);
        if ((p_Var13 != (__tree_node_base *)&DAT_01d3dfc0) && (*(ulong *)(p_Var13 + 0x20) <= uVar5))
        {
          p_Var13 = DAT_01d3dfc0;
          p_Var8 = (__tree_node_base *)&DAT_01d3dfc0;
          do {
            while (p_Var11 = p_Var13, uVar5 < *(ulong *)(p_Var11 + 0x20)) {
              p_Var13 = *(__tree_node_base **)p_Var11;
              p_Var8 = p_Var11;
              if (*(__tree_node_base **)p_Var11 == (__tree_node_base *)0x0) goto LAB_00d2e44c;
            }
            if (uVar5 <= *(ulong *)(p_Var11 + 0x20)) break;
            p_Var8 = p_Var11 + 8;
            p_Var13 = *(__tree_node_base **)p_Var8;
          } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
LAB_00d2e44c:
          p_Var13 = *(__tree_node_base **)p_Var8;
          if (p_Var13 == (__tree_node_base *)0x0) {
            p_Var13 = operator_new(0x30);
            lVar7 = plVar2[4];
            *(undefined4 *)(p_Var13 + 0x28) = 0;
            *(undefined8 *)p_Var13 = 0;
            *(undefined8 *)(p_Var13 + 8) = 0;
            *(__tree_node_base **)(p_Var13 + 0x10) = p_Var11;
            *(long *)(p_Var13 + 0x20) = lVar7;
            *(__tree_node_base **)p_Var8 = p_Var13;
            p_Var11 = p_Var13;
            if ((long *)*_maxCountMap != (long *)0x0) {
              p_Var11 = *(__tree_node_base **)p_Var8;
              _maxCountMap = (long *)*_maxCountMap;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (DAT_01d3dfc0,p_Var11);
            DAT_01d3dfc8 = DAT_01d3dfc8 + 1;
          }
          *(uint *)(p_Var13 + 0x28) = param_2;
        }
      }
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] != (long *)0x0) {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
LAB_00d2e4f0:
        if ((undefined8 **)plVar2 == &DAT_01d3dfd8) {
          return;
        }
        goto LAB_00d2e340;
      }
      plVar3 = plVar2 + 2;
      plVar6 = (long *)*plVar3;
      if ((long *)*plVar6 != plVar2) {
        do {
          lVar7 = *plVar3;
          plVar3 = (long *)(lVar7 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar7);
        goto LAB_00d2e4f0;
      }
      plVar2 = plVar6;
      if ((undefined8 **)plVar6 == &DAT_01d3dfd8) {
        return;
      }
    } while( true );
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar12 = &DAT_01d3dfd8;
    puVar4 = DAT_01d3dfd8;
    do {
      if ((ulong)puVar4[4] >= param_1) {
        puVar12 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_1];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar12 != &DAT_01d3dfd8) && ((ulong)puVar12[4] <= param_1)) {
      pvVar9 = (vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *)
               (puVar12 + 5);
      uVar5 = puVar12[6] - *(long *)pvVar9 >> 3;
      if (uVar10 < uVar5) {
        plVar2 = *(long **)(*(long *)pvVar9 + uVar10 * 8);
        uVar1 = uVar10;
        while( true ) {
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if (uVar5 - 1 == uVar1) break;
          uVar1 = uVar1 + 1;
          plVar2 = *(long **)(*(long *)pvVar9 + uVar1 * 8);
        }
        uVar5 = (long)(puVar12[6] - puVar12[5]) >> 3;
        if (uVar5 < uVar10) {
          std::__ndk1::
          vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>::
          __append(pvVar9,uVar10 - uVar5);
        }
        else if (uVar5 != uVar10) {
          puVar12[6] = puVar12[5] + uVar10 * 8;
        }
      }
    }
  }
  p_Var13 = (__tree_node_base *)&DAT_01d3dfc0;
  p_Var8 = p_Var13;
  if (DAT_01d3dfc0 != (__tree_node_base *)0x0) {
    p_Var11 = DAT_01d3dfc0;
    p_Var13 = (__tree_node_base *)&DAT_01d3dfc0;
    do {
      while (p_Var8 = p_Var11, param_1 < *(ulong *)(p_Var8 + 0x20)) {
        p_Var11 = *(__tree_node_base **)p_Var8;
        p_Var13 = p_Var8;
        if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
          p_Var11 = *(__tree_node_base **)p_Var8;
          goto joined_r0x00d2e590;
        }
      }
      if (param_1 <= *(ulong *)(p_Var8 + 0x20)) break;
      p_Var13 = p_Var8 + 8;
      p_Var11 = *(__tree_node_base **)p_Var13;
    } while (*(__tree_node_base **)p_Var13 != (__tree_node_base *)0x0);
    p_Var11 = *(__tree_node_base **)p_Var13;
joined_r0x00d2e590:
    if (p_Var11 != (__tree_node_base *)0x0) goto LAB_00d2e5e4;
  }
  p_Var11 = operator_new(0x30);
  *(ulong *)(p_Var11 + 0x20) = param_1;
  *(undefined4 *)(p_Var11 + 0x28) = 0;
  *(undefined8 *)p_Var11 = 0;
  *(undefined8 *)(p_Var11 + 8) = 0;
  *(__tree_node_base **)(p_Var11 + 0x10) = p_Var8;
  *(__tree_node_base **)p_Var13 = p_Var11;
  p_Var8 = p_Var11;
  if ((long *)*_maxCountMap != (long *)0x0) {
    p_Var8 = *(__tree_node_base **)p_Var13;
    _maxCountMap = (long *)*_maxCountMap;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (DAT_01d3dfc0,p_Var8);
  DAT_01d3dfc8 = DAT_01d3dfc8 + 1;
LAB_00d2e5e4:
  *(uint *)(p_Var11 + 0x28) = param_2;
  return;
}

