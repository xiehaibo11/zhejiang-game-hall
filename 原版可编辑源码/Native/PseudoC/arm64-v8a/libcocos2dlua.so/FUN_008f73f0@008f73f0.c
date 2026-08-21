
undefined8 FUN_008f73f0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_toboolean(param_1,2);
                    /* catch() { ... } // from try @ 008f7368 with catch @ 008f7400 */
                    /* catch() { ... } // from try @ 008f7380 with catch @ 008f7404 */
  fairygui::UIConfig::defaultScrollBounceEffect = iVar1 != 0;
  return 0;
}

