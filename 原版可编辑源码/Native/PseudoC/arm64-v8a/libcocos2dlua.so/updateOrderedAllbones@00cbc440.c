
/* cocostudio::timeline::SkeletonNode::updateOrderedAllbones() */

void __thiscall cocostudio::timeline::SkeletonNode::updateOrderedAllbones(SkeletonNode *this)

{
  long lVar1;
  long lVar2;
  BoneNode *pBVar3;
  BoneNode *pBVar4;
  ulong uVar5;
  BoneNode **ppBVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Ref *pRVar12;
  BoneNode *pBVar13;
  undefined8 *puVar14;
  BoneNode *pBVar15;
  BoneNode *pBVar16;
  BoneNode *local_98;
  BoneNode *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(this + 0x5a0);
  puVar14 = *(undefined8 **)(this + 0x5a8);
  if (puVar10 != puVar14) {
    do {
      puVar11 = puVar10 + 1;
      cocos2d::Ref::release((Ref *)*puVar10);
      puVar10 = puVar11;
    } while (puVar14 != puVar11);
    puVar10 = *(undefined8 **)(this + 0x5a0);
  }
  *(undefined8 **)(this + 0x5a8) = puVar10;
  uStack_68 = 0;
  local_70 = (undefined8 *)0x0;
  local_58 = 0;
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = (void *)0x0;
  puVar10 = *(undefined8 **)(this + 0x378);
  puVar14 = *(undefined8 **)(this + 0x380);
  if (puVar10 != puVar14) {
    do {
      uVar5 = (**(code **)(*(long *)*puVar10 + 0x178))();
      if ((uVar5 & 1) != 0) {
        uVar5 = 0;
        if ((long)local_70 - (long)puStack_78 != 0) {
          uVar5 = ((long)local_70 - (long)puStack_78) * 0x40 - 1;
        }
        uVar8 = local_58 + local_60;
        if (uVar5 == uVar8) {
          std::__ndk1::
          deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
          ::__add_back_capacity
                    ((deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                      *)&local_80);
          uVar8 = local_60 + local_58;
        }
        local_58 = local_58 + 1;
        *(undefined8 *)
         (*(long *)((long)puStack_78 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
             *puVar10;
      }
      puVar10 = puVar10 + 1;
    } while (puVar14 != puVar10);
    if (local_58 != 0) {
      do {
        uVar5 = (local_58 + local_60) - 1;
        pRVar12 = *(Ref **)(*(long *)((long)puStack_78 + (uVar5 >> 6 & 0x3fffffffffffff8)) +
                           (uVar5 & 0x1ff) * 8);
        puVar10 = *(undefined8 **)(this + 0x5a8);
        local_98 = (BoneNode *)pRVar12;
        if (puVar10 == *(undefined8 **)(this + 0x5b0)) {
          std::__ndk1::
          vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
          ::__push_back_slow_path<cocostudio::timeline::BoneNode*const&>
                    ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                      *)(this + 0x5a0),&local_98);
        }
        else {
          *puVar10 = pRVar12;
          *(undefined8 **)(this + 0x5a8) = puVar10 + 1;
        }
        cocos2d::Ref::retain((Ref *)local_98);
        lVar9 = local_58 + -1;
        lVar7 = 0;
        if ((long)local_70 - (long)puStack_78 != 0) {
          lVar7 = ((long)local_70 - (long)puStack_78) * 0x40 + -1;
        }
        lVar1 = local_58 + local_60;
        local_58 = lVar9;
        if (0x3ff < (lVar7 - lVar1) + 1U) {
          operator_delete((void *)local_70[-1]);
          local_70 = local_70 + -1;
        }
        ppBVar6 = (BoneNode **)(**(code **)(*(long *)pRVar12 + 0x538))(pRVar12);
        local_90 = (BoneNode *)0x0;
        uStack_88 = 0;
        local_98 = (BoneNode *)0x0;
        if (&local_98 == ppBVar6) {
          pBVar13 = (BoneNode *)0x0;
          pBVar16 = pBVar13;
        }
        else {
          std::__ndk1::
          vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
          ::assign<cocostudio::timeline::BoneNode**>
                    ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                      *)&local_98,(BoneNode **)*ppBVar6,(BoneNode **)ppBVar6[1]);
          pBVar15 = local_90;
          pBVar13 = local_98;
          pBVar16 = local_98;
          if (local_98 != local_90) {
            do {
              cocos2d::Ref::retain(*(Ref **)pBVar13);
              pBVar16 = local_90;
              pBVar13 = pBVar13 + 8;
            } while (pBVar15 != pBVar13);
            pBVar13 = local_90;
            pBVar15 = local_98;
            if (local_98 != local_90) {
              do {
                uVar5 = (**(code **)(**(long **)pBVar15 + 0x178))();
                if ((uVar5 & 1) != 0) {
                  uVar5 = 0;
                  if ((long)local_70 - (long)puStack_78 != 0) {
                    uVar5 = ((long)local_70 - (long)puStack_78) * 0x40 - 1;
                  }
                  uVar8 = local_58 + local_60;
                  if (uVar5 == uVar8) {
                    std::__ndk1::
                    deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                    ::__add_back_capacity
                              ((deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                                *)&local_80);
                    uVar8 = local_60 + local_58;
                  }
                  local_58 = local_58 + 1;
                  *(undefined8 *)
                   (*(long *)((long)puStack_78 + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                   (uVar8 & 0x1ff) * 8) = *(undefined8 *)pBVar15;
                }
                pBVar4 = local_90;
                pBVar15 = pBVar15 + 8;
                pBVar3 = local_98;
                pBVar13 = local_90;
              } while (pBVar16 != pBVar15);
              for (; pBVar16 = local_98, pBVar3 != pBVar4; pBVar3 = pBVar3 + 8) {
                cocos2d::Ref::release(*(Ref **)pBVar3);
                pBVar13 = local_98;
              }
            }
          }
        }
        local_90 = pBVar16;
        if (pBVar13 != (BoneNode *)0x0) {
          local_90 = pBVar13;
          operator_delete(pBVar13);
        }
      } while (local_58 != 0);
    }
  }
  local_58 = 0;
  lVar7 = (long)local_70 - (long)puStack_78;
  puVar10 = local_70;
  while (uVar5 = lVar7 >> 3, local_70 = puVar10, 2 < uVar5) {
    operator_delete((void *)*puStack_78);
    puStack_78 = puStack_78 + 1;
    puVar10 = local_70;
    lVar7 = (long)local_70 - (long)puStack_78;
  }
  if (uVar5 == 1) {
    local_60 = 0x100;
  }
  else if (uVar5 == 2) {
    local_60 = 0x200;
  }
  puVar14 = puStack_78;
  if (puStack_78 != puVar10) {
    do {
      puVar11 = puVar14 + 1;
      operator_delete((void *)*puVar14);
      puVar14 = puVar11;
    } while (puVar10 != puVar11);
    if ((long)local_70 - (long)puStack_78 != 0) {
      local_70 = local_70 + (((long)local_70 - (long)puStack_78) - 8U >> 3 ^ 0xffffffffffffffff);
    }
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

