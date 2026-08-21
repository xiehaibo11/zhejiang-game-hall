
/* cocos2d::extension::TableView::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::TableView::onTouchEnded(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_50 [2];
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x470) != 0) {
      (**(code **)(*(long *)param_1 + 0x370))(local_48,param_1);
      local_48[0] = Node::convertToWorldSpace(*(Node **)(param_1 + 400),(Vec2 *)local_48);
      local_50[0] = Touch::getLocation((Touch *)param_2);
                    /* catch() { ... } // from try @ 00e191c8 with catch @ 00e19474 */
                    /* catch() { ... } // from try @ 00e193b8 with catch @ 00e1947c */
      uVar2 = Rect::containsPoint((Rect *)local_48,(Vec2 *)local_50);
      if (((uVar2 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0x4d8), plVar3 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00e192f0 with catch @ 00e1948c */
                    /* catch() { ... } // from try @ 00e19280 with catch @ 00e19490 */
                    /* catch() { ... } // from try @ 00e19278 with catch @ 00e19494 */
                    /* catch() { ... } // from try @ 00e19268 with catch @ 00e19498 */
                    /* catch() { ... } // from try @ 00e19260 with catch @ 00e1949c */
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1,*(undefined8 *)(param_1 + 0x470));
                    /* catch() { ... } // from try @ 00e191a4 with catch @ 00e194a4 */
                    /* catch() { ... } // from try @ 00e19198 with catch @ 00e194ac */
                    /* catch() { ... } // from try @ 00e19188 with catch @ 00e194b4 */
        (**(code **)(**(long **)(param_1 + 0x4d8) + 0x20))
                  (*(long **)(param_1 + 0x4d8),param_1,*(undefined8 *)(param_1 + 0x470));
      }
      *(undefined8 *)(param_1 + 0x470) = 0;
    }
                    /* catch() { ... } // from try @ 00e191b0 with catch @ 00e194bc
                       catch() { ... } // from try @ 00e19258 with catch @ 00e194bc */
                    /* catch() { ... } // from try @ 00e19288 with catch @ 00e194c4 */
    ScrollView::onTouchEnded(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

