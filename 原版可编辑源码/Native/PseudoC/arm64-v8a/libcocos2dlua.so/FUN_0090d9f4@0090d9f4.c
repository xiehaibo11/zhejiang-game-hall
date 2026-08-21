
void FUN_0090d9f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
                    /* try { // try from 0090d9fc to 00a0da2f has its CatchHandler @ 0090d914 */
  lua_createtable(param_1,0,0);
  lVar1 = param_2 + 9;
                    /* try { // try from 0090da30 to 00a0da43 has its CatchHandler @ 0090da8c */
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  lua_pushstring(param_1,"identifier");
                    /* try { // try from 0090da44 to 00a0daa7 has its CatchHandler @ 0090d914 */
  lua_pushstring(param_1,lVar1);
  lua_settable(param_1,0xfffffffd);
  lVar1 = param_2 + 0x21;
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x30);
  }
  lua_pushstring(param_1,"requestURL");
  lua_pushstring(param_1,lVar1);
                    /* catch() { ... } // from try @ 0090d9e4 with catch @ 0090da88 */
                    /* catch() { ... } // from try @ 0090d968 with catch @ 0090da8c
                       catch() { ... } // from try @ 0090da30 with catch @ 0090da8c */
  lua_settable(param_1,0xfffffffd);
  lVar1 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x48);
  }
  lua_pushstring(param_1,"storagePath");
  lua_pushstring(param_1,lVar1);
  lua_settable(param_1,0xfffffffd);
  return;
}

