
/* universe::SimpleScriptWrapper::~SimpleScriptWrapper() */

void __thiscall universe::SimpleScriptWrapper::~SimpleScriptWrapper(SimpleScriptWrapper *this)

{
  *(undefined ***)this = &PTR__SimpleScriptWrapper_016a03e8;
  if (*(long *)(this + 0x10) != 0) {
    luaL_unref(*(long *)(this + 0x10),0xffffd8f0,*(undefined4 *)(this + 8));
  }
  operator_delete(this);
  return;
}

