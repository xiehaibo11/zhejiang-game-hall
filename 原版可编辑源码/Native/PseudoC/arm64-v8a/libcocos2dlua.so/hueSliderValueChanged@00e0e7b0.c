
/* cocos2d::extension::ControlColourPicker::hueSliderValueChanged(cocos2d::Ref*,
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::ControlColourPicker::hueSliderValueChanged(Node *param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Color3B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_2 + 0x6c0))(param_2);
  dVar4 = *(double *)(param_1 + 0x360);
  dVar5 = *(double *)(param_1 + 0x368);
  *(double *)(param_1 + 0x358) = (double)fVar2;
  dVar3 = (double)ControlUtils::RGBfromHSV();
  Color3B::Color3B(aCStack_30,(uchar)(int)(dVar3 * 255.0),(uchar)(int)(dVar4 * 255.0),
                   (uchar)(int)(dVar5 * 255.0));
  Node::setColor(param_1,aCStack_30);
  (**(code **)(*(long *)param_1 + 0x688))(param_1,0x100);
  (**(code **)(**(long **)(param_1 + 0x378) + 0x6c8))((float)*(double *)(param_1 + 0x358));
  (**(code **)(**(long **)(param_1 + 0x370) + 0x6f8))
            (*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),
             *(undefined8 *)(param_1 + 0x368));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

