
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
  
                    /* try { // try from 00d81a64 to 00e81acb has its CatchHandler @ 00d81a64
                       catch() { ... } // from try @ 00d81a64 with catch @ 00d81a64
                       catch() { ... } // from try @ 00d822bc with catch @ 00d81a64
                       catch() { ... } // from try @ 00d82850 with catch @ 00d81a64 */
  uVar10 = (ulong)param_2;
  if (param_1 == 0) {
    if ((undefined8 **)_poolsMap == &DAT_01787788) {
      _defaultMaxCount = param_2;
      return;
    }
    uVar10 = (ulong)param_2;
    plVar2 = _poolsMap;
    _defaultMaxCount = param_2;
    do {
      pvVar9 = (vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *)
               (plVar2 + 5);
                    /* try { // try from 00d81b6c to 00e81b7b has its CatchHandler @ 00d8296c */
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
      if (DAT_01787770 != (__tree_node_base *)0x0) {
        uVar5 = plVar2[4];
        p_Var13 = (__tree_node_base *)&DAT_01787770;
        p_Var8 = DAT_01787770;
        do {
          if (*(ulong *)(p_Var8 + 0x20) >= uVar5) {
            p_Var13 = p_Var8;
          }
          p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < uVar5) * 8);
        } while (p_Var8 != (__tree_node_base *)0x0);
        if ((p_Var13 != (__tree_node_base *)&DAT_01787770) && (*(ulong *)(p_Var13 + 0x20) <= uVar5))
        {
          p_Var13 = (__tree_node_base *)&DAT_01787770;
          p_Var8 = DAT_01787770;
          do {
            p_Var11 = p_Var8;
            if (uVar5 < *(ulong *)(p_Var11 + 0x20)) {
              p_Var8 = *(__tree_node_base **)p_Var11;
              p_Var13 = p_Var11;
            }
            else {
              if (uVar5 <= *(ulong *)(p_Var11 + 0x20)) break;
              p_Var13 = p_Var11 + 8;
              p_Var8 = *(__tree_node_base **)p_Var13;
            }
          } while (p_Var8 != (__tree_node_base *)0x0);
          p_Var8 = *(__tree_node_base **)p_Var13;
          if (p_Var8 == (__tree_node_base *)0x0) {
            p_Var8 = operator_new(0x30);
            lVar7 = plVar2[4];
            *(undefined4 *)(p_Var8 + 0x28) = 0;
            *(undefined8 *)p_Var8 = 0;
            *(undefined8 *)(p_Var8 + 8) = 0;
            *(__tree_node_base **)(p_Var8 + 0x10) = p_Var11;
            *(long *)(p_Var8 + 0x20) = lVar7;
            *(__tree_node_base **)p_Var13 = p_Var8;
            p_Var11 = p_Var8;
            if ((long *)*_maxCountMap != (long *)0x0) {
              p_Var11 = *(__tree_node_base **)p_Var13;
              _maxCountMap = (long *)*_maxCountMap;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (DAT_01787770,p_Var11);
            DAT_01787778 = DAT_01787778 + 1;
          }
          *(uint *)(p_Var8 + 0x28) = param_2;
        }
      }
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 2;
        plVar6 = (long *)*plVar3;
        if ((long *)*plVar6 != plVar2) {
          do {
            lVar7 = *plVar3;
            plVar3 = (long *)(lVar7 + 0x10);
            plVar6 = (long *)*plVar3;
          } while (*plVar6 != lVar7);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
                    /* try { // try from 00d81b58 to 00e81b67 has its CatchHandler @ 00d82940 */
      plVar2 = plVar6;
      if ((undefined8 **)plVar6 == &DAT_01787788) {
        return;
      }
    } while( true );
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar12 = &DAT_01787788;
    puVar4 = DAT_01787788;
    do {
      if ((ulong)puVar4[4] >= param_1) {
        puVar12 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_1];
    } while (puVar4 != (undefined8 *)0x0);
                    /* try { // try from 00d81acc to 00e81ad7 has its CatchHandler @ 00d8288c */
    if (((undefined8 **)puVar12 != &DAT_01787788) && ((ulong)puVar12[4] <= param_1)) {
      pvVar9 = (vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *)
               (puVar12 + 5);
                    /* try { // try from 00d81ad8 to 00e81adf has its CatchHandler @ 00d82888 */
                    /* try { // try from 00d81ae0 to 00e81ae7 has its CatchHandler @ 00d82884 */
                    /* try { // try from 00d81ae8 to 00e81aef has its CatchHandler @ 00d82880 */
      uVar5 = puVar12[6] - *(long *)pvVar9 >> 3;
                    /* try { // try from 00d81af0 to 00e81af7 has its CatchHandler @ 00d8287c */
      if (uVar10 < uVar5) {
                    /* try { // try from 00d81af8 to 00e81aff has its CatchHandler @ 00d82878 */
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
  p_Var13 = (__tree_node_base *)&DAT_01787770;
  p_Var8 = p_Var13;
  if (DAT_01787770 != (__tree_node_base *)0x0) {
    p_Var11 = DAT_01787770;
    p_Var13 = (__tree_node_base *)&DAT_01787770;
LAB_00d81d58:
    do {
      p_Var8 = p_Var11;
      if (*(ulong *)(p_Var8 + 0x20) <= param_1) {
        if (*(ulong *)(p_Var8 + 0x20) < param_1) {
          p_Var13 = p_Var8 + 8;
          p_Var11 = *(__tree_node_base **)p_Var13;
          if (*(__tree_node_base **)p_Var13 != (__tree_node_base *)0x0) goto LAB_00d81d58;
        }
        p_Var11 = *(__tree_node_base **)p_Var13;
        goto joined_r0x00d81d8c;
      }
      p_Var11 = *(__tree_node_base **)p_Var8;
      p_Var13 = p_Var8;
    } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
    p_Var11 = *(__tree_node_base **)p_Var8;
joined_r0x00d81d8c:
    if (p_Var11 != (__tree_node_base *)0x0) goto LAB_00d81e04;
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
            (DAT_01787770,p_Var8);
  DAT_01787778 = DAT_01787778 + 1;
LAB_00d81e04:
  *(uint *)(p_Var11 + 0x28) = param_2;
  return;
}

