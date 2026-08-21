
/* cocos2d::SchedulerScriptHandlerEntry::init(float, bool) */

undefined8 __thiscall
cocos2d::SchedulerScriptHandlerEntry::init
          (SchedulerScriptHandlerEntry *this,float param_1,bool param_2)

{
  Timer *this_00;
  
  this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this_00 != (Timer *)0x0) {
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    Timer::Timer(this_00);
    *(undefined ***)this_00 = &PTR__Ref_01723818;
  }
  *(Timer **)(this + 0x30) = this_00;
  TimerScriptHandler::initWithScriptHandler
            ((TimerScriptHandler *)this_00,*(int *)(this + 0x24),param_1);
  this[0x38] = (SchedulerScriptHandlerEntry)param_2;
  return 1;
}

