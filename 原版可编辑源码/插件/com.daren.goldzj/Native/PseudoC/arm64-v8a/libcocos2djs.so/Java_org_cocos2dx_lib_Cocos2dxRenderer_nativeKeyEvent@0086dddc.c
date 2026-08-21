
undefined8
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeKeyEvent
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  long lVar1;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d35b48 & 1) == 0) {
    local_38 = 6;
    switch(param_3) {
    case 4:
      break;
    default:
      local_38 = 0;
      break;
    case 0x13:
      local_38 = 0x3eb;
      break;
    case 0x14:
      local_38 = 0x3ec;
      break;
    case 0x15:
      local_38 = 1000;
      break;
    case 0x16:
      local_38 = 0x3e9;
      break;
    case 0x17:
      local_38 = 0x3ed;
      break;
    case 0x42:
      local_38 = 0xd;
      break;
    case 0x52:
      local_38 = 0x12;
    }
    local_34 = param_4 == '\0';
    local_33 = 0;
    cocos2d::EventDispatcher::dispatchKeyboardEvent((KeyboardEvent *)&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

