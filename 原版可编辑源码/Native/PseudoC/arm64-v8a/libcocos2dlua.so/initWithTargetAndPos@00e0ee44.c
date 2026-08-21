
/* cocos2d::extension::ControlHuePicker::initWithTargetAndPos(cocos2d::Node*, cocos2d::Vec2) */

void cocos2d::extension::ControlHuePicker::initWithTargetAndPos
               (undefined8 param_1_00,undefined8 param_2,Control *param_1,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_58 [12];
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = Control::init(param_1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar4 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0,0,"huePickerBackground.png",param_4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0ed28 with catch @ 00e0eea4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0ef00 with catch @ 00e0eea8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e0f0c0 with catch @ 00e0eea8
                        */
    (**(code **)(*(long *)param_1 + 0x6e8))(param_1,uVar4);
    uVar4 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0x3f000000,0x3f000000,"colourPicker.png",param_4);
    (**(code **)(*(long *)param_1 + 0x6f8))(param_1,uVar4);
    plVar5 = *(long **)(param_1 + 0x368);
                    /* try { // try from 00e0eef8 to 00f0eeff has its CatchHandler @ 00e0f1cc */
                    /* try { // try from 00e0ef00 to 00f0f057 has its CatchHandler @ 00e0eea8 */
    (**(code **)(**(long **)(param_1 + 0x360) + 0x370))(auStack_58);
    (**(code **)(*plVar5 + 200))(param_1_00,(float)param_2 + local_4c * 0.5,plVar5);
    *(int *)(param_1 + 0x370) = (int)param_1_00;
    *(float *)(param_1 + 0x374) = (float)param_2;
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

