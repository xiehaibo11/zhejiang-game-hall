
/* fairygui::UIEventDispatcher::dispatchEvent(int, void*, cocos2d::Value const&) */

bool __thiscall
fairygui::UIEventDispatcher::dispatchEvent
          (UIEventDispatcher *this,int param_1,void *param_2,Value *param_3)

{
  long lVar1;
  bool bVar2;
  UIEventDispatcher *local_80;
  long local_78;
  Value aVStack_70 [16];
  void *local_60;
  char local_57;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x30) == *(long *)(this + 0x28)) {
    bVar2 = false;
  }
  else {
                    /* try { // try from 00aafa4c to 00bafaf7 has its CatchHandler @ 00ab03f4 */
    EventContext::EventContext((EventContext *)&local_80);
    if (InputProcessor::_activeProcessor != 0) {
      local_78 = InputProcessor::_activeProcessor + 0x70;
    }
    local_80 = this;
    local_50 = param_1;
    cocos2d::Value::operator=(aVStack_70,param_3);
    local_60 = param_2;
    doDispatch(this,param_1,(EventContext *)&local_80);
    bVar2 = local_57 != '\0';
    EventContext::~EventContext((EventContext *)&local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

