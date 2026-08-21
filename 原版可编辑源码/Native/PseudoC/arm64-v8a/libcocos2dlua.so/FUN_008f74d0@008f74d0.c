
undefined8 FUN_008f74d0(undefined8 param_1)

{
  fairygui::UIConfig::touchDragSensitivity = lua_tointeger(param_1,2);
  return 0;
}

