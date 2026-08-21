
undefined8 FUN_008f7520(undefined8 param_1)

{
  fairygui::UIConfig::touchScrollSensitivity = lua_tointeger(param_1,2);
  return 0;
}

