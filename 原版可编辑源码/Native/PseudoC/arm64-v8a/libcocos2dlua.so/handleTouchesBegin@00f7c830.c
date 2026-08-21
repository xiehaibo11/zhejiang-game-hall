
/* cocos2d::GLView::handleTouchesBegin(int, long*, float*, float*) */

void __thiscall
cocos2d::GLView::handleTouchesBegin
          (GLView *this,int param_1,long *param_2,float *param_3,float *param_4)

{
  long lVar1;
  Ref *this_00;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long lVar4;
  __tree_node_base *p_Var5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Ref *local_d0;
  undefined **local_c8 [7];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  EventTouch::EventTouch((EventTouch *)local_c8);
  if (0 < param_1) {
    uVar8 = 0;
    do {
      fVar9 = param_3[uVar8];
      lVar7 = param_2[uVar8];
      fVar10 = param_4[uVar8];
      p_Var3 = DAT_0178f910;
      p_Var5 = (__tree_node_base *)&DAT_0178f910;
      if (DAT_0178f910 == (__tree_node_base *)0x0) {
LAB_00f7c920:
        if ((DAT_0178f998 & 1) == 0) {
          uVar6 = 0;
        }
        else if ((DAT_0178f998 >> 1 & 1) == 0) {
          uVar6 = 1;
        }
        else if ((DAT_0178f998 >> 2 & 1) == 0) {
          uVar6 = 2;
        }
        else if ((DAT_0178f998 >> 3 & 1) == 0) {
          uVar6 = 3;
        }
        else if ((DAT_0178f998 >> 4 & 1) == 0) {
          uVar6 = 4;
        }
        else if ((DAT_0178f998 >> 5 & 1) == 0) {
          uVar6 = 5;
        }
        else if ((DAT_0178f998 >> 6 & 1) == 0) {
          uVar6 = 6;
        }
        else if ((DAT_0178f998 >> 7 & 1) == 0) {
          uVar6 = 7;
        }
        else if ((DAT_0178f998 >> 8 & 1) == 0) {
          uVar6 = 8;
        }
        else if ((DAT_0178f998 >> 9 & 1) == 0) {
          uVar6 = 9;
        }
        else if ((DAT_0178f998 >> 10 & 1) == 0) {
          uVar6 = 10;
        }
        else if ((DAT_0178f998 >> 0xb & 1) == 0) {
          uVar6 = 0xb;
        }
        else if ((DAT_0178f998 >> 0xc & 1) == 0) {
          uVar6 = 0xc;
        }
        else if ((DAT_0178f998 >> 0xd & 1) == 0) {
          uVar6 = 0xd;
        }
        else {
          if ((DAT_0178f998 >> 0xe & 1) != 0) goto LAB_00f7c8c0;
          uVar6 = 0xe;
        }
        DAT_0178f998 = 1 << (ulong)uVar6 | DAT_0178f998;
        this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
        if (this_00 != (Ref *)0x0) {
          Ref::Ref(this_00);
          *(undefined4 *)(this_00 + 0x24) = 0;
          this_00[0x28] = (Ref)0x0;
          *(undefined ***)this_00 = &PTR__Ref_01698ab8;
          *(undefined8 *)(this_00 + 0x34) = 0;
          *(undefined8 *)(this_00 + 0x2c) = 0;
          *(undefined8 *)(this_00 + 0x44) = 0;
          *(undefined8 *)(this_00 + 0x3c) = 0;
        }
        (&DAT_0178f920)[uVar6] = this_00;
        uVar11 = *(undefined8 *)(this + 0x34);
        uVar12 = *(undefined8 *)(this + 0x60);
        *(uint *)(this_00 + 0x24) = uVar6;
        *(undefined8 *)(this_00 + 0x3c) = *(undefined8 *)(this_00 + 0x34);
        *(ulong *)(this_00 + 0x34) =
             CONCAT44((fVar10 - (float)((ulong)uVar11 >> 0x20)) / (float)((ulong)uVar12 >> 0x20),
                      (fVar9 - (float)uVar11) / (float)uVar12);
        *(undefined4 *)(this_00 + 0x44) = 0;
        *(undefined4 *)(this_00 + 0x48) = 0;
        p_Var5 = (__tree_node_base *)&DAT_0178f910;
        p_Var3 = (__tree_node_base *)&DAT_0178f910;
        p_Var2 = DAT_0178f910;
        if (this_00[0x28] == (Ref)0x0) {
          this_00[0x28] = (Ref)0x1;
          *(undefined8 *)(this_00 + 0x2c) = *(undefined8 *)(this_00 + 0x34);
          *(undefined8 *)(this_00 + 0x3c) = *(undefined8 *)(this_00 + 0x34);
          p_Var2 = DAT_0178f910;
        }
        while (p_Var2 != (__tree_node_base *)0x0) {
          while (p_Var3 = p_Var2, lVar7 < *(long *)(p_Var3 + 0x20)) {
            p_Var5 = p_Var3;
            p_Var2 = *(__tree_node_base **)p_Var3;
            if (*(__tree_node_base **)p_Var3 == (__tree_node_base *)0x0) {
              lVar4 = *(long *)p_Var3;
              goto joined_r0x00f7cae0;
            }
          }
          if (lVar7 <= *(long *)(p_Var3 + 0x20)) break;
          p_Var5 = p_Var3 + 8;
          p_Var2 = *(__tree_node_base **)(p_Var3 + 8);
        }
        lVar4 = *(long *)p_Var5;
joined_r0x00f7cae0:
        local_d0 = this_00;
        if (lVar4 == 0) {
          p_Var2 = operator_new(0x30);
          *(long *)(p_Var2 + 0x20) = lVar7;
          *(uint *)(p_Var2 + 0x28) = uVar6;
          *(undefined8 *)p_Var2 = 0;
          *(undefined8 *)(p_Var2 + 8) = 0;
          *(__tree_node_base **)(p_Var2 + 0x10) = p_Var3;
          *(__tree_node_base **)p_Var5 = p_Var2;
          if ((long *)*DAT_0178f908 != (long *)0x0) {
            p_Var2 = *(__tree_node_base **)p_Var5;
            DAT_0178f908 = (long *)*DAT_0178f908;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (DAT_0178f910,p_Var2);
          DAT_0178f918 = DAT_0178f918 + 1;
        }
        if (local_80 == puStack_78) {
          std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
          __push_back_slow_path<cocos2d::Touch*const&>
                    ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)&local_88,
                     (Touch **)&local_d0);
        }
        else {
          *local_80 = local_d0;
          local_80 = local_80 + 1;
        }
      }
      else {
        do {
          if (lVar7 <= *(long *)(p_Var3 + 0x20)) {
            p_Var5 = p_Var3;
          }
          p_Var2 = p_Var3 + (ulong)(*(long *)(p_Var3 + 0x20) < lVar7) * 8;
          p_Var3 = *(__tree_node_base **)p_Var2;
        } while (*(__tree_node_base **)p_Var2 != (__tree_node_base *)0x0);
        if ((p_Var5 == (__tree_node_base *)&DAT_0178f910) || (lVar7 < *(long *)(p_Var5 + 0x20)))
        goto LAB_00f7c920;
      }
LAB_00f7c8c0:
      uVar8 = uVar8 + 1;
    } while (uVar8 != (uint)param_1);
  }
  if (local_80 != local_88) {
    local_90 = 0;
    lVar7 = Director::getInstance();
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar7 + 0xb0),(Event *)local_c8);
  }
  local_c8[0] = &PTR__EventTouch_01721fe8;
  if (local_88 != (undefined8 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  Event::~Event((Event *)local_c8);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

