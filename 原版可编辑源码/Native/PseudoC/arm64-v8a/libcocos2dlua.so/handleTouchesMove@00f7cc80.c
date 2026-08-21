
/* cocos2d::GLView::handleTouchesMove(int, long*, float*, float*, float*, float*) */

void __thiscall
cocos2d::GLView::handleTouchesMove
          (GLView *this,int param_1,long *param_2,float *param_3,float *param_4,float *param_5,
          float *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  if (0 < param_1) {
    uVar6 = 0;
    do {
      lVar3 = param_2[uVar6];
      fVar7 = param_3[uVar6];
      fVar10 = param_4[uVar6];
      fVar8 = 0.0;
      fVar9 = 0.0;
      if (param_5 != (float *)0x0) {
        fVar9 = param_5[uVar6];
      }
      if (param_6 != (float *)0x0) {
        fVar8 = param_6[uVar6];
      }
      puVar4 = &DAT_0178f910;
      puVar5 = DAT_0178f910;
      if (DAT_0178f910 != (undefined8 *)0x0) {
        do {
          if (lVar3 <= (long)puVar5[4]) {
            puVar4 = puVar5;
          }
          puVar1 = puVar5 + ((long)puVar5[4] < lVar3);
          puVar5 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
        if (((undefined8 **)puVar4 != &DAT_0178f910) && ((long)puVar4[4] <= lVar3)) {
          local_c8 = (Touch *)(&DAT_0178f920)[*(int *)(puVar4 + 5)];
          if (local_c8 == (Touch *)0x0) goto LAB_00f7ce10;
          uVar12 = *(undefined8 *)(this + 0x34);
          uVar11 = *(undefined8 *)(this + 0x60);
          *(int *)(local_c8 + 0x24) = *(int *)(puVar4 + 5);
          *(undefined8 *)(local_c8 + 0x3c) = *(undefined8 *)(local_c8 + 0x34);
          *(ulong *)(local_c8 + 0x34) =
               CONCAT44((fVar10 - (float)((ulong)uVar12 >> 0x20)) / (float)((ulong)uVar11 >> 0x20),
                        (fVar7 - (float)uVar12) / (float)uVar11);
          *(float *)(local_c8 + 0x44) = fVar9;
          *(float *)(local_c8 + 0x48) = fVar8;
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
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uint)param_1);
  }
  if (local_78 != local_80) {
    local_88 = 1;
    lVar3 = Director::getInstance();
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar3 + 0xb0),(Event *)local_c0);
  }
LAB_00f7ce10:
  local_c0[0] = &PTR__EventTouch_01721fe8;
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  Event::~Event((Event *)local_c0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

