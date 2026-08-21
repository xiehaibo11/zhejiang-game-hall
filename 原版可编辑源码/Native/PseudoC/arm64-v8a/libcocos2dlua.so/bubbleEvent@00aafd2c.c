
/* fairygui::UIEventDispatcher::bubbleEvent(int, void*, cocos2d::Value const&) */

bool __thiscall
fairygui::UIEventDispatcher::bubbleEvent
          (UIEventDispatcher *this,int param_1,void *param_2,Value *param_3)

{
  long lVar1;
  EventContext aEStack_80 [8];
  long local_78;
  Value aVStack_70 [16];
  void *local_60;
  char local_57;
  int local_50;
  long local_48;
  
                    /* try { // try from 00aafd30 to 00bafdbb has its CatchHandler @ 00ab03e4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  EventContext::EventContext(aEStack_80);
  if (InputProcessor::_activeProcessor != 0) {
    local_78 = InputProcessor::_activeProcessor + 0x70;
  }
  local_50 = param_1;
  cocos2d::Value::operator=(aVStack_70,param_3);
  local_60 = param_2;
  doBubble(this,param_1,aEStack_80);
  EventContext::~EventContext(aEStack_80);
                    /* try { // try from 00aafdc8 to 00bafdd7 has its CatchHandler @ 00ab0350 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00aafde0 to 00bafe03 has its CatchHandler @ 00ab0304 */
    return local_57 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

