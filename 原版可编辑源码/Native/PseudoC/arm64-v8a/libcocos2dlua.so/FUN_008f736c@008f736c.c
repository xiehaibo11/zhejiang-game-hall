
undefined8 FUN_008f736c(undefined8 param_1)

{
  fairygui::UIConfig::defaultScrollStep = lua_tointeger(param_1,2);
                    /* try { // try from 008f7380 to 009f73b3 has its CatchHandler @ 008f7404 */
  return 0;
}

