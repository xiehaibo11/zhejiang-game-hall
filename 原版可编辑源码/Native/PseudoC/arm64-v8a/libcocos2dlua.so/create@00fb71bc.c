
/* cocos2d::SchedulerScriptHandlerEntry::create(int, float, bool) */

Ref * cocos2d::SchedulerScriptHandlerEntry::create(int param_1,float param_2,bool param_3)

{
  int iVar1;
  Ref *this;
  Timer *this_00;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined2 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__SchedulerScriptHandlerEntry_01723898;
    iVar1 = ScriptHandlerEntry::ScriptHandlerEntry(int)::newEntryId + 1;
    ScriptHandlerEntry::ScriptHandlerEntry(int)::newEntryId = iVar1;
    *(int *)(this + 0x24) = param_1;
    *(int *)(this + 0x28) = iVar1;
  }
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
            ((TimerScriptHandler *)this_00,*(int *)(this + 0x24),param_2);
  this[0x38] = (Ref)param_3;
  Ref::autorelease(this);
  return this;
}

