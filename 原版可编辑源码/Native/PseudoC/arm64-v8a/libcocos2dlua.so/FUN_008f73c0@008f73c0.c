
undefined8 FUN_008f73c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_toboolean(param_1,2);
  fairygui::UIConfig::defaultScrollTouchEffect = iVar1 != 0;
  return 0;
}

