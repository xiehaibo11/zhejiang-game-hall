
void FUN_008e800c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  GRichTextField *this;
  char *pcVar3;
  HtmlObject *pHVar4;
  char *pcVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GRichTextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    pcVar3 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
    pcVar5 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar5);
    pHVar4 = (HtmlObject *)fairygui::GRichTextField::getControl(this,(basic_string *)local_50);
    if (pHVar4 == (HtmlObject *)0x0) {
      lua_pushnil(param_1);
                    /* try { // try from 008e8114 to 009e818f has its CatchHandler @ 008e8114
                       catch() { ... } // from try @ 008e8114 with catch @ 008e8114
                       catch() { ... } // from try @ 008e819c with catch @ 008e8114 */
    }
    else {
      pcVar5 = getLuaTypeName<fairygui::HtmlObject>(pHVar4,"fairygui.HtmlObject");
      tolua_pushusertype(param_1,pHVar4,pcVar5);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar6 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRichTextField:getControl",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

