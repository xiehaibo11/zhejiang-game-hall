
/* universe::MultiScriptHandler::MultiScriptHandler(lua_State*) */

void __thiscall
universe::MultiScriptHandler::MultiScriptHandler(MultiScriptHandler *this,lua_State *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined ***)this = &PTR__MultiScriptHandler_016a0408;
  *(lua_State **)(this + 0x30) = param_1;
  return;
}

