
long FUN_008fffe0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z36lua_cocos2dx_3d_Sprite3D_createAsyncP9lua_StateE3$_0") {
    param_1 = 0;
  }
                    /* try { // try from 008ffff8 to 00a0004f has its CatchHandler @ 008ffff8
                       catch() { ... } // from try @ 008ffff8 with catch @ 008ffff8
                       catch() { ... } // from try @ 009000a0 with catch @ 008ffff8
                       catch() { ... } // from try @ 009000e4 with catch @ 008ffff8 */
  return param_1;
}

