
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesEnd
               (float param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5)

{
  long lVar1;
  float fVar2;
  float *local_58;
  float *local_50;
  float *local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d35b48 & 1) == 0) {
    local_40 = 2;
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(cocos2d::Application::_instance + 0x28));
    local_58 = operator_new(0xc);
    local_50 = local_58 + 3;
    *local_58 = param_1 / fVar2;
    local_58[1] = param_2 / fVar2;
    local_58[2] = param_5;
    local_48 = local_50;
    cocos2d::EventDispatcher::dispatchTouchEvent((TouchEvent *)&local_58);
    if (local_58 != (float *)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

