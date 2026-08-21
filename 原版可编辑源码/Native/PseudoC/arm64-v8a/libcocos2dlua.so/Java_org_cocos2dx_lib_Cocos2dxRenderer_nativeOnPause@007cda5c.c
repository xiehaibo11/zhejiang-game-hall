
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnPause(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong local_a0 [2];
  char *local_90;
  undefined **local_80 [8];
  byte local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = cocos2d::Director::getInstance();
  if (*(long *)(lVar2 + 0x108) != 0) {
    plVar3 = (long *)cocos2d::Application::getInstance();
    (**(code **)(*plVar3 + 0x18))();
    local_90 = operator_new(0x20);
    builtin_strncpy(local_90,"event_come_to_background",0x19);
    local_a0[1] = 0x18;
    local_a0[0] = 0x21;
    cocos2d::EventCustom::EventCustom((EventCustom *)local_80,(basic_string *)local_a0);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    lVar2 = cocos2d::Director::getInstance();
    cocos2d::EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar2 + 0xb0),(Event *)local_80);
    local_80[0] = &PTR__EventCustom_01698250;
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
    cocos2d::Event::~Event((Event *)local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

