
long FUN_009639fc(long param_1,long param_2)

{
                    /* try { // try from 00963a00 to 00a63a33 has its CatchHandler @ 00963b00 */
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZL55tolua_cocos2dx_EventListenerFocus_registerScriptHandlerP9lua_StateE4$_12") {
    param_1 = 0;
  }
  return param_1;
}

