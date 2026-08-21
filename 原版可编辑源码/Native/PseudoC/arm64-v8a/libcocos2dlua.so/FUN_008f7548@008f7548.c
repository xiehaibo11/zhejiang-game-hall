
undefined8 FUN_008f7548(undefined8 param_1)

{
  fairygui::UIConfig::defaultComboBoxVisibleItemCount = lua_tointeger(param_1,2);
  return 0;
}

