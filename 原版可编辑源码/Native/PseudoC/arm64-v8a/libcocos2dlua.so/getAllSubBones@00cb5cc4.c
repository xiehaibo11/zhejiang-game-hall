
/* cocostudio::timeline::BoneNode::getAllSubBones() const */

void cocostudio::timeline::BoneNode::getAllSubBones(void)

{
  long lVar1;
  long lVar2;
  BoneNode *pBVar3;
  BoneNode *pBVar4;
  bool bVar5;
  long in_x0;
  BoneNode **ppBVar6;
  vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
  *in_x8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  Ref *pRVar14;
  BoneNode *pBVar15;
  BoneNode *pBVar16;
  BoneNode *pBVar17;
  BoneNode *pBVar18;
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
  undefined8 *puVar13;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uStack_68 = 0;
  local_70 = (undefined8 *)0x0;
  local_58 = 0;
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = (void *)0x0;
  puVar10 = *(undefined8 **)(in_x0 + 0x380);
  if (*(undefined8 **)(in_x0 + 0x378) != puVar10) {
    lVar8 = 0;
    puVar12 = *(undefined8 **)(in_x0 + 0x378);
    do {
      uVar7 = 0;
      if ((long)local_70 - (long)puStack_78 != 0) {
        uVar7 = ((long)local_70 - (long)puStack_78) * 0x40 - 1;
      }
      uVar9 = local_58 + lVar8;
      if (uVar7 == uVar9) {
        std::__ndk1::
        deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
        ::__add_back_capacity
                  ((deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                    *)&local_80);
        uVar9 = local_60 + local_58;
        lVar8 = local_60;
      }
      bVar5 = puVar10 + -1 != puVar12;
      local_58 = local_58 + 1;
      *(undefined8 *)
       (*(long *)((long)puStack_78 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) =
           *puVar12;
      puVar12 = puVar12 + 1;
    } while (bVar5);
    if (local_58 != 0) {
      do {
        uVar7 = (local_58 + lVar8) - 1;
        puVar10 = *(undefined8 **)(in_x8 + 8);
        pRVar14 = *(Ref **)(*(long *)((long)puStack_78 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                           (uVar7 & 0x1ff) * 8);
        local_98 = (BoneNode *)pRVar14;
        if (puVar10 == *(undefined8 **)(in_x8 + 0x10)) {
          std::__ndk1::
          vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
          ::__push_back_slow_path<cocostudio::timeline::BoneNode*const&>(in_x8,&local_98);
        }
        else {
          *puVar10 = pRVar14;
          *(undefined8 **)(in_x8 + 8) = puVar10 + 1;
        }
        cocos2d::Ref::retain((Ref *)local_98);
        lVar11 = local_58 + -1;
        lVar8 = 0;
        if ((long)local_70 - (long)puStack_78 != 0) {
          lVar8 = ((long)local_70 - (long)puStack_78) * 0x40 + -1;
        }
        lVar1 = local_58 + local_60;
        local_58 = lVar11;
        if (0x3ff < (lVar8 - lVar1) + 1U) {
          operator_delete((void *)local_70[-1]);
          local_70 = local_70 + -1;
        }
        ppBVar6 = (BoneNode **)(**(code **)(*(long *)pRVar14 + 0x538))(pRVar14);
        local_90 = (BoneNode *)0x0;
        uStack_88 = 0;
        local_98 = (BoneNode *)0x0;
        if (&local_98 == ppBVar6) {
          pBVar15 = (BoneNode *)0x0;
          pBVar18 = pBVar15;
        }
        else {
          std::__ndk1::
          vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
          ::assign<cocostudio::timeline::BoneNode**>
                    ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                      *)&local_98,(BoneNode **)*ppBVar6,(BoneNode **)ppBVar6[1]);
          pBVar17 = local_90;
          pBVar15 = local_98;
          pBVar18 = local_98;
          if (local_98 != local_90) {
            do {
              cocos2d::Ref::retain(*(Ref **)pBVar15);
              pBVar18 = local_90;
              pBVar15 = pBVar15 + 8;
            } while (pBVar17 != pBVar15);
            lVar8 = local_60;
            pBVar15 = local_90;
            pBVar17 = local_98;
            if (local_98 != local_90) {
              do {
                uVar7 = 0;
                if ((long)local_70 - (long)puStack_78 != 0) {
                  uVar7 = ((long)local_70 - (long)puStack_78) * 0x40 - 1;
                }
                uVar9 = local_58 + lVar8;
                if (uVar7 == uVar9) {
                  std::__ndk1::
                  deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                  ::__add_back_capacity
                            ((deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                              *)&local_80);
                  uVar9 = local_60 + local_58;
                  lVar8 = local_60;
                }
                pBVar4 = local_90;
                pBVar16 = pBVar17 + 8;
                local_58 = local_58 + 1;
                *(undefined8 *)
                 (*(long *)((long)puStack_78 + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                 (uVar9 & 0x1ff) * 8) = *(undefined8 *)pBVar17;
                pBVar17 = pBVar16;
                pBVar3 = local_98;
                pBVar15 = local_90;
              } while (pBVar18 != pBVar16);
              for (; pBVar18 = local_98, pBVar3 != pBVar4; pBVar3 = pBVar3 + 8) {
                cocos2d::Ref::release(*(Ref **)pBVar3);
                pBVar15 = local_98;
              }
            }
          }
        }
        local_90 = pBVar18;
        if (pBVar15 != (BoneNode *)0x0) {
          local_90 = pBVar15;
          operator_delete(pBVar15);
        }
        lVar8 = local_60;
      } while (local_58 != 0);
    }
  }
  local_58 = 0;
  lVar8 = (long)local_70 - (long)puStack_78;
  puVar10 = local_70;
  while (uVar7 = lVar8 >> 3, local_70 = puVar10, 2 < uVar7) {
    operator_delete((void *)*puStack_78);
    puStack_78 = puStack_78 + 1;
    puVar10 = local_70;
    lVar8 = (long)local_70 - (long)puStack_78;
  }
  if (uVar7 == 1) {
    local_60 = 0x100;
  }
  else if (uVar7 == 2) {
    local_60 = 0x200;
  }
  puVar12 = puStack_78;
  if (puStack_78 != puVar10) {
    do {
      puVar13 = puVar12 + 1;
      operator_delete((void *)*puVar12);
      puVar12 = puVar13;
    } while (puVar10 != puVar13);
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

