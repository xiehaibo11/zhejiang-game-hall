
undefined8 FUN_008f7340(undefined8 param_1)

{
  double dVar1;
  
  dVar1 = (double)lua_tonumber(param_1,2);
  fairygui::UIConfig::buttonSoundVolumeScale = (float)dVar1;
                    /* try { // try from 008f7368 to 009f737b has its CatchHandler @ 008f7400 */
  return 0;
}

