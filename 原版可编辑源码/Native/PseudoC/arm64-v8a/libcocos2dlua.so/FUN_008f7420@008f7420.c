
undefined8 FUN_008f7420(undefined8 param_1)

{
  fairygui::UIConfig::defaultScrollBarDisplay = lua_tointeger(param_1,2);
                    /* catch() { ... } // from try @ 008f7334 with catch @ 008f7434 */
  return 0;
}

