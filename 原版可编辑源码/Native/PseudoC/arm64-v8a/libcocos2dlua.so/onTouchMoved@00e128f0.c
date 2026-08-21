
/* cocos2d::extension::ControlStepper::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlStepper::onTouchMoved(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))();
  if ((uVar1 & 1) == 0) {
    param_1[0x380] = (Touch)0x0;
    *(undefined4 *)(param_1 + 900) = 2;
    (**(code **)(**(long **)(param_1 + 0x390) + 0x4c0))(*(long **)(param_1 + 0x390),&Color3B::WHITE)
    ;
    (**(code **)(**(long **)(param_1 + 0x398) + 0x4c0))(*(long **)(param_1 + 0x398),&Color3B::WHITE)
    ;
    if (param_1[0x361] != (Touch)0x0) {
                    /* try { // try from 00e129cc to 00f129d7 has its CatchHandler @ 00e12dc8 */
      Node::unschedule((_func_void_float *)param_1);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00e12864 with catch @ 00e12918 */
                    /* catch() { ... } // from try @ 00e12828 with catch @ 00e1291c */
                    /* catch() { ... } // from try @ 00e127ec with catch @ 00e12920 */
                    /* catch() { ... } // from try @ 00e127b0 with catch @ 00e12924 */
    (**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
                    /* catch() { ... } // from try @ 00e12768 with catch @ 00e12928 */
                    /* catch() { ... } // from try @ 00e12720 with catch @ 00e1292c */
    updateLayoutUsingTouchLocation((ControlStepper *)param_1);
                    /* catch() { ... } // from try @ 00e126cc with catch @ 00e12930 */
                    /* catch() { ... } // from try @ 00e12694 with catch @ 00e12934 */
                    /* catch() { ... } // from try @ 00e12650 with catch @ 00e12938 */
                    /* catch() { ... } // from try @ 00e12600 with catch @ 00e1293c */
                    /* catch() { ... } // from try @ 00e125bc with catch @ 00e12940 */
                    /* catch() { ... } // from try @ 00e124f0 with catch @ 00e12944 */
    if ((param_1[0x380] == (Touch)0x0) &&
       (param_1[0x380] = (Touch)0x1, param_1[0x361] != (Touch)0x0)) {
                    /* catch() { ... } // from try @ 00e12404 with catch @ 00e12948 */
      *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
                    /* catch() { ... } // from try @ 00e128b8 with catch @ 00e1295c */
                    /* try { // try from 00e12978 to 00f129cb has its CatchHandler @ 00e12978
                       catch() { ... } // from try @ 00e12978 with catch @ 00e12978
                       catch() { ... } // from try @ 00e12a14 with catch @ 00e12978
                       catch() { ... } // from try @ 00e12a60 with catch @ 00e12978
                       catch() { ... } // from try @ 00e12d64 with catch @ 00e12978 */
      Node::schedule((Node *)param_1,(_func_void_float *)0x3d8,0.15,1,0.45000002);
      return;
    }
  }
  return;
}

