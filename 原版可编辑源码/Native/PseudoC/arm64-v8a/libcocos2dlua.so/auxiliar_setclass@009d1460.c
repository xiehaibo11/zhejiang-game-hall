
void auxiliar_setclass(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* try { // try from 009d1464 to 00ad14cf has its CatchHandler @ 009d8150 */
  lua_getfield(param_1,0xffffd8f0,param_2);
  lua_setmetatable(param_1,param_3 + (param_3 >> 0x1f));
  return;
}

