
/* cocos2d::ScriptHandlerEntry::create(int) */

Ref * cocos2d::ScriptHandlerEntry::create(int param_1)

{
  int iVar1;
  Ref *this;
  
  this = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    iVar1 = ScriptHandlerEntry(int)::newEntryId + 1;
    *(undefined ***)this = &PTR__TouchScriptHandlerEntry_01723878;
    ScriptHandlerEntry(int)::newEntryId = iVar1;
    *(int *)(this + 0x24) = param_1;
    *(int *)(this + 0x28) = iVar1;
  }
  Ref::autorelease(this);
  return this;
}

