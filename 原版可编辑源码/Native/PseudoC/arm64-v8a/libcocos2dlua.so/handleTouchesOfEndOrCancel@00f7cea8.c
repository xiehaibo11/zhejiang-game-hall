
/* cocos2d::GLView::handleTouchesOfEndOrCancel(cocos2d::EventTouch::EventCode, int, long*, float*,
   float*) */

void __thiscall
cocos2d::GLView::handleTouchesOfEndOrCancel
          (GLView *this,undefined4 param_2,uint param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Touch *local_c8;
  undefined **local_c0 [7];
  undefined4 local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  EventTouch::EventTouch((EventTouch *)local_c0);
  if (0 < (int)param_3) {
    uVar9 = 0;
    do {
      if (DAT_0178f910 != (__tree_node_base *)0x0) {
        lVar8 = *(long *)(param_4 + uVar9 * 8);
        fVar10 = *(float *)(param_5 + uVar9 * 4);
        fVar11 = *(float *)(param_6 + uVar9 * 4);
        p_Var5 = DAT_0178f910;
        p_Var7 = (__tree_node_base *)&DAT_0178f910;
        do {
          if (lVar8 <= *(long *)(p_Var5 + 0x20)) {
            p_Var7 = p_Var5;
          }
          p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(long *)(p_Var5 + 0x20) < lVar8) * 8);
        } while (p_Var5 != (__tree_node_base *)0x0);
        if ((p_Var7 != (__tree_node_base *)&DAT_0178f910) && (*(long *)(p_Var7 + 0x20) <= lVar8)) {
          local_c8 = (Touch *)(&DAT_0178f920)[*(int *)(p_Var7 + 0x28)];
          if (local_c8 == (Touch *)0x0) goto LAB_00f7d138;
          uVar13 = *(undefined8 *)(this + 0x34);
          uVar12 = *(undefined8 *)(this + 0x60);
          *(int *)(local_c8 + 0x24) = *(int *)(p_Var7 + 0x28);
          *(undefined8 *)(local_c8 + 0x3c) = *(undefined8 *)(local_c8 + 0x34);
          *(ulong *)(local_c8 + 0x34) =
               CONCAT44((fVar11 - (float)((ulong)uVar13 >> 0x20)) / (float)((ulong)uVar12 >> 0x20),
                        (fVar10 - (float)uVar13) / (float)uVar12);
          *(undefined4 *)(local_c8 + 0x44) = 0;
          *(undefined4 *)(local_c8 + 0x48) = 0;
          if (local_c8[0x28] == (Touch)0x0) {
            local_c8[0x28] = (Touch)0x1;
            *(undefined8 *)(local_c8 + 0x2c) = *(undefined8 *)(local_c8 + 0x34);
            *(undefined8 *)(local_c8 + 0x3c) = *(undefined8 *)(local_c8 + 0x34);
          }
          if (local_78 == plStack_70) {
            std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
            __push_back_slow_path<cocos2d::Touch*const&>
                      ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)&local_80,
                       &local_c8);
          }
          else {
            *local_78 = (long)local_c8;
            local_78 = local_78 + 1;
          }
          uVar1 = *(uint *)(p_Var7 + 0x28);
          (&DAT_0178f920)[(int)uVar1] = 0;
          if (uVar1 < 0xf) {
            DAT_0178f998 = DAT_0178f998 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
          }
          p_Var5 = DAT_0178f910;
          p_Var7 = (__tree_node_base *)&DAT_0178f910;
          if (DAT_0178f910 != (__tree_node_base *)0x0) {
            do {
              if (lVar8 <= *(long *)(p_Var5 + 0x20)) {
                p_Var7 = p_Var5;
              }
              p_Var6 = p_Var5 + (ulong)(*(long *)(p_Var5 + 0x20) < lVar8) * 8;
              p_Var5 = *(__tree_node_base **)p_Var6;
            } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
            if ((p_Var7 != (__tree_node_base *)&DAT_0178f910) && (*(long *)(p_Var7 + 0x20) <= lVar8)
               ) {
              p_Var5 = *(__tree_node_base **)(p_Var7 + 8);
              if (*(__tree_node_base **)(p_Var7 + 8) == (__tree_node_base *)0x0) {
                p_Var5 = p_Var7 + 0x10;
                p_Var6 = *(__tree_node_base **)p_Var5;
                if (*(__tree_node_base **)p_Var6 != p_Var7) {
                  do {
                    lVar8 = *(long *)p_Var5;
                    p_Var5 = (__tree_node_base *)(lVar8 + 0x10);
                    p_Var6 = *(__tree_node_base **)p_Var5;
                  } while (*(long *)p_Var6 != lVar8);
                }
              }
              else {
                do {
                  p_Var6 = p_Var5;
                  p_Var5 = *(__tree_node_base **)p_Var6;
                } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
              }
              if (DAT_0178f908 == p_Var7) {
                DAT_0178f908 = p_Var6;
              }
              DAT_0178f918 = DAT_0178f918 + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(DAT_0178f910,p_Var7)
              ;
              operator_delete(p_Var7);
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_3);
  }
  if (local_78 != local_80) {
    local_88 = param_2;
    lVar8 = Director::getInstance();
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar8 + 0xb0),(Event *)local_c0);
    plVar4 = local_78;
    for (plVar3 = local_80; plVar3 != plVar4; plVar3 = plVar3 + 1) {
      Ref::release((Ref *)*plVar3);
    }
  }
LAB_00f7d138:
  local_c0[0] = &PTR__EventTouch_01721fe8;
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  Event::~Event((Event *)local_c0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

