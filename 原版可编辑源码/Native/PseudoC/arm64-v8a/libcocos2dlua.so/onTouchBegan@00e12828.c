
/* cocos2d::extension::ControlStepper::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

undefined4 cocos2d::extension::ControlStepper::onTouchBegan(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00e12828 to 00f12833 has its CatchHandler @ 00e1291c */
                    /* try { // try from 00e12834 to 00f12863 has its CatchHandler @ 00e1219c */
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))();
                    /* try { // try from 00e12864 to 00f1286f has its CatchHandler @ 00e12918 */
                    /* try { // try from 00e12870 to 00f128b7 has its CatchHandler @ 00e1219c */
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = (**(code **)(*(long *)param_1 + 0x658))(param_1), (uVar1 & 1) == 0)) ||
     (uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
    updateLayoutUsingTouchLocation((ControlStepper *)param_1);
    uVar2 = 1;
    param_1[0x380] = (Touch)0x1;
    if (param_1[0x361] != (Touch)0x0) {
      *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
                    /* try { // try from 00e128b8 to 00f128cf has its CatchHandler @ 00e1295c */
                    /* try { // try from 00e128d0 to 00f12977 has its CatchHandler @ 00e1219c */
      uVar2 = 1;
      Node::schedule((Node *)param_1,(_func_void_float *)0x3d8,0.15,1,0.45000002);
    }
  }
  return uVar2;
}

