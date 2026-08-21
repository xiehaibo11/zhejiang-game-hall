
/* cocos2d::TouchScriptHandlerEntry::create(int, bool, int, bool) */

Ref * cocos2d::TouchScriptHandlerEntry::create(int param_1,bool param_2,int param_3,bool param_4)

{
  int iVar1;
  Ref *this;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    this[0x2c] = (Ref)0x0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR__TouchScriptHandlerEntry_017238e8;
    iVar1 = ScriptHandlerEntry::ScriptHandlerEntry(int)::newEntryId + 1;
    ScriptHandlerEntry::ScriptHandlerEntry(int)::newEntryId = iVar1;
    *(int *)(this + 0x24) = param_1;
    *(int *)(this + 0x28) = iVar1;
    this[0x34] = (Ref)0x0;
  }
  *(int *)(this + 0x30) = param_3;
  this[0x2c] = (Ref)param_2;
  this[0x34] = (Ref)param_4;
  Ref::autorelease(this);
  return this;
}

