
/* cocos2d::ScriptHandlerEntry::~ScriptHandlerEntry() */

void __thiscall cocos2d::ScriptHandlerEntry::~ScriptHandlerEntry(ScriptHandlerEntry *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x24);
  *(undefined ***)this = &PTR__TouchScriptHandlerEntry_01723878;
  if (iVar1 != 0) {
    if ((DAT_0178fd20 == (undefined8 *)0x0) &&
       (DAT_0178fd20 = operator_new(8,(nothrow_t *)&std::nothrow), DAT_0178fd20 != (undefined8 *)0x0
       )) {
      *DAT_0178fd20 = 0;
    }
    (**(code **)(*(long *)*DAT_0178fd20 + 0x50))((long *)*DAT_0178fd20,iVar1);
    *(undefined4 *)(this + 0x24) = 0;
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

