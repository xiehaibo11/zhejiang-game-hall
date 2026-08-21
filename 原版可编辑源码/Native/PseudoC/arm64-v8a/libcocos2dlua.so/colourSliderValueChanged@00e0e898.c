
/* cocos2d::extension::ControlColourPicker::colourSliderValueChanged(cocos2d::Ref*,
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::ControlColourPicker::colourSliderValueChanged(Node *param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_2 + 0x6b8))(param_2);
  *(double *)(param_1 + 0x360) = (double)fVar2;
  fVar2 = (float)(**(code **)(*param_2 + 0x6c0))(param_2);
  dVar4 = *(double *)(param_1 + 0x360);
  dVar5 = (double)fVar2;
  *(double *)(param_1 + 0x368) = dVar5;
  dVar3 = (double)ControlUtils::RGBfromHSV(*(undefined8 *)(param_1 + 0x358));
  Color3B::Color3B(aCStack_40,(uchar)(int)(dVar3 * 255.0),(uchar)(int)(dVar4 * 255.0),
                   (uchar)(int)(dVar5 * 255.0));
  Node::setColor(param_1,aCStack_40);
  (**(code **)(*(long *)param_1 + 0x688))(param_1,0x100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

