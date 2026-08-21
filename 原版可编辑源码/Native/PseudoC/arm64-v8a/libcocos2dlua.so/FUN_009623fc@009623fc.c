
long FUN_009623fc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 0096240c to 00a6241f has its CatchHandler @ 009624a4 */
  if (*(char **)(param_2 + 8) !=
      "ZL46lua_cocos2dx_RadioButtonGroup_addEventListenerP9lua_StateE3$_4") {
    param_1 = 0;
  }
  return param_1;
}

