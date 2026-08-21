
long FUN_008b74d8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 008b74e8 to 009b74ff has its CatchHandler @ 008b7584 */
  if (*(char **)(param_2 + 8) != "ZL39lua_cocos2dx_TextureCache_addImageAsyncP9lua_StateE4$_44") {
    param_1 = 0;
  }
  return param_1;
}

