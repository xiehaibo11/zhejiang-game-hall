
undefined8 FUN_008f7394(undefined8 param_1)

{
  double dVar1;
  
  dVar1 = (double)lua_tonumber(param_1,2);
                    /* try { // try from 008f73b4 to 009f744f has its CatchHandler @ 008f7238 */
  fairygui::UIConfig::defaultScrollDecelerationRate = (float)dVar1;
  return 0;
}

