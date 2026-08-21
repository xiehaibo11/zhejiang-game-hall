
/* cocos2d::extension::ScrollView::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ScrollView::onTouchBegan(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float in_s1;
  float fVar12;
  float fVar13;
  undefined4 local_68 [2];
  Rect aRStack_60 [16];
  Event *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e16954 to 00f1696f has its CatchHandler @ 00e169a0 */
  local_50 = param_2;
  uVar2 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar2 & 1) != 0) {
    for (plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x268))(param_1); plVar3 != (long *)0x0;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x268))(plVar3)) {
      uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3);
      if ((uVar2 & 1) == 0) goto LAB_00e16a30;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e16954 with catch @ 00e169a0
                        */
    }
    getViewRect();
    if (((ulong)(*(long *)(param_1 + 0x380) - *(long *)(param_1 + 0x378) >> 3) < 3) &&
       (param_1[0x348] == (Touch)0x0)) {
      local_68[0] = Touch::getLocation((Touch *)param_2);
      uVar2 = Rect::containsPoint(aRStack_60,(Vec2 *)local_68);
      if ((uVar2 & 1) != 0) {
        puVar8 = *(undefined8 **)(param_1 + 0x378);
        puVar5 = *(undefined8 **)(param_1 + 0x380);
        if ((puVar8 != puVar5) && ((Event *)*puVar8 != param_2)) {
          do {
            if (puVar5 + -1 == puVar8) goto LAB_00e16a68;
            puVar6 = puVar8 + 1;
            puVar8 = puVar8 + 1;
          } while ((Event *)*puVar6 != param_2);
        }
        puVar6 = puVar5;
        if (puVar8 == puVar5) {
LAB_00e16a68:
          if (*(undefined8 **)(param_1 + 0x388) == puVar5) {
            std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
            __push_back_slow_path<cocos2d::Touch*const&>
                      ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)
                       (param_1 + 0x378),(Touch **)&local_50);
            puVar6 = *(undefined8 **)(param_1 + 0x380);
          }
          else {
            puVar6 = puVar5 + 1;
            *puVar5 = param_2;
            *(undefined8 **)(param_1 + 0x380) = puVar6;
          }
        }
        lVar7 = (long)puVar6 - *(long *)(param_1 + 0x378) >> 3;
        if (lVar7 == 2) {
          fVar10 = (float)Node::convertTouchToNodeSpace(param_1);
          fVar12 = in_s1;
          fVar11 = (float)Node::convertTouchToNodeSpace(param_1);
          fVar13 = (in_s1 + fVar12) * 0.5;
          *(float *)(param_1 + 0x368) = (fVar10 + fVar11) * 0.5;
          *(float *)(param_1 + 0x36c) = fVar13;
          fVar10 = (float)Node::convertTouchToNodeSpace(*(Touch **)(param_1 + 0x340));
          fVar12 = fVar13;
          fVar11 = (float)Node::convertTouchToNodeSpace(*(Touch **)(param_1 + 0x340));
          param_1[0x334] = (Touch)0x0;
          *(float *)(param_1 + 0x370) =
               SQRT((fVar10 - fVar11) * (fVar10 - fVar11) + (fVar13 - fVar12) * (fVar13 - fVar12));
        }
        else {
                    /* try { // try from 00e16aa8 to 00f16ab3 has its CatchHandler @ 00e16e48 */
          if (lVar7 == 1) {
            uVar9 = Node::convertTouchToNodeSpace(param_1);
            *(undefined4 *)(param_1 + 0x368) = uVar9;
            uVar4 = 1;
            *(float *)(param_1 + 0x36c) = in_s1;
            param_1[0x348] = (Touch)0x0;
            param_1[0x334] = (Touch)0x1;
            *(undefined8 *)(param_1 + 0x360) = 0;
            *(undefined4 *)(param_1 + 0x370) = 0;
            goto LAB_00e16a34;
          }
        }
        uVar4 = 1;
        goto LAB_00e16a34;
      }
    }
  }
LAB_00e16a30:
  uVar4 = 0;
LAB_00e16a34:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00e16a50 to 00f16aa7 has its CatchHandler @ 00e16a50
                       catch() { ... } // from try @ 00e16a50 with catch @ 00e16a50
                       catch() { ... } // from try @ 00e16d5c with catch @ 00e16a50 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

