
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnSurfaceChanged
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::Application::getInstance();
                    /* WARNING: Could not recover jumptable at 0x007cc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_3,param_4);
  return;
}

