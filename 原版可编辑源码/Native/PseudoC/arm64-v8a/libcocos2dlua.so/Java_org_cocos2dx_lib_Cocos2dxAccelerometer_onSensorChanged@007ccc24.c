
void Java_org_cocos2dx_lib_Cocos2dxAccelerometer_onSensorChanged
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  undefined **local_100 [7];
  Ref aRStack_c8 [72];
  undefined **local_80 [5];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Ref::Ref((Ref *)local_80);
  dStack_40 = (double)param_6 / 1000000000.0;
  local_58 = (double)param_1 / -9.806650161743164;
  dStack_50 = (double)param_2 / -9.806650161743164;
  local_80[0] = &PTR__Ref_016982b8;
  local_48 = (double)param_3 / -9.806650161743164;
  cocos2d::EventAcceleration::EventAcceleration
            ((EventAcceleration *)local_100,(Acceleration *)local_80);
  lVar2 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar2 + 0xb0),(Event *)local_100);
  local_100[0] = &PTR__EventAcceleration_016982f0;
  cocos2d::Ref::~Ref(aRStack_c8);
  cocos2d::Event::~Event((Event *)local_100);
  cocos2d::Ref::~Ref((Ref *)local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

