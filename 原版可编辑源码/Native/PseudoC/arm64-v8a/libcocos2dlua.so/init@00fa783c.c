
/* cocos2d::EventListenerAcceleration::init(std::__ndk1::function<void (cocos2d::Acceleration*,
   cocos2d::Event*)> const&) */

void __thiscall
cocos2d::EventListenerAcceleration::init(EventListenerAcceleration *this,function *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined **local_80;
  EventListenerAcceleration *pEStack_78;
  long *local_60;
  long local_48;
  
  local_60 = (long *)&local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR_FUN_01723110;
  pEStack_78 = this;
  uVar2 = EventListener::init((EventListener *)this,5,&LISTENER_ID,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00fa78b8:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
                    /* try { // try from 00fa78a4 to 010a78ab has its CatchHandler @ 00fa7b38 */
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa78b8;
  }
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    goto LAB_00fa7948;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
    local_60 = (long *)&local_80;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00fa7b4c(&local_80,this + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00fa7940:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa7940;
  }
  uVar4 = 1;
LAB_00fa7948:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

