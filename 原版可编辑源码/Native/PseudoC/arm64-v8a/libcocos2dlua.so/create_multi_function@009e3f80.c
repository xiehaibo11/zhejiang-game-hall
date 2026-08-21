
/* universe::create_multi_function(lua_State*, int, char const*, int*, universe::Literally*, char
   const*) */

undefined8
universe::create_multi_function
          (lua_State *param_1,int param_2,char *param_3,int *param_4,Literally *param_5,
          char *param_6)

{
  int iVar1;
  MultiScriptHandler *this;
  undefined8 uVar2;
  
  iVar1 = lua_type();
  if (iVar1 == 6) {
    this = *(MultiScriptHandler **)(param_5 + 8);
    if (this == (MultiScriptHandler *)0x0) {
                    /* try { // try from 009e3fc0 to 00ae400f has its CatchHandler @ 009e3fc0
                       catch() { ... } // from try @ 009e3fc0 with catch @ 009e3fc0
                       catch() { ... } // from try @ 009e4038 with catch @ 009e3fc0
                       catch() { ... } // from try @ 009e40a4 with catch @ 009e3fc0 */
      this = operator_new(0x38);
      *(lua_State **)(this + 0x30) = param_1;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x28) = 0x3f800000;
      *(undefined ***)this = &PTR__MultiScriptHandler_016a0408;
      *(MultiScriptHandler **)(param_5 + 8) = this;
    }
    iVar1 = MultiScriptHandler::createRef(this,param_3,param_2);
    *param_4 = iVar1;
    uVar2 = 1;
  }
  else {
                    /* try { // try from 009e4010 to 00ae4037 has its CatchHandler @ 009e40ac */
    luaL_error(param_1,"%s: arg %d is not a function",param_6,param_2);
    uVar2 = 0;
  }
                    /* try { // try from 009e4038 to 00ae408f has its CatchHandler @ 009e3fc0 */
  return uVar2;
}

