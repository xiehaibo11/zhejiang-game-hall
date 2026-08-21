
void FUN_0091ada0(undefined8 param_1,uint param_2,long param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_2 < 2) {
    return;
  }
  switch(param_2) {
  case 2:
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    pcVar1 = 
    "RequiresDictionary: input stream requires a dictionary to be deflated (%s) at %s line %d";
    break;
  case 0xfffffffa:
    uVar2 = zlibVersion();
    lua_pushfstring(param_1,
                    "IncompatibleLibrary: built with version %s, but dynamically linked with version %s (%s) at %s line %d"
                    ,"1.2.8",uVar2,*(undefined8 *)(param_3 + 0x30),
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../../../../external/lua/zlib/lua_zlib.c"
                    ,param_4);
    goto LAB_0091aeb8;
  case 0xfffffffb:
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    pcVar1 = "InternalError: no progress possible (%s) at %s line %d";
    break;
  case 0xfffffffc:
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    pcVar1 = "OutOfMemory: not enough memory (%s) at %s line %d";
                    /* try { // try from 0091ae40 to 00a1ae73 has its CatchHandler @ 0091af40 */
    break;
  case 0xfffffffd:
    lua_pushfstring(param_1,
                    "InvalidInput: input string does not conform to zlib format or checksum failed at %s line %d"
                    ,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../../../../external/lua/zlib/lua_zlib.c"
                    ,param_4);
    goto LAB_0091aeb8;
  case 0xfffffffe:
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    pcVar1 = "InternalError: inconsistent internal zlib stream (%s) at %s line %d";
    break;
  default:
                    /* try { // try from 0091ae74 to 00a1ae87 has its CatchHandler @ 0091af0c */
                    /* try { // try from 0091ae8c to 00a1aebf has its CatchHandler @ 0091af10 */
    lua_pushfstring(param_1,"ZLibError: unknown code %d (%s) at %s line %d",param_2,
                    *(undefined8 *)(param_3 + 0x30),
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../../../../external/lua/zlib/lua_zlib.c"
                    ,param_4);
    goto LAB_0091aeb8;
  }
  lua_pushfstring(param_1,pcVar1,uVar2,
                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../../../../external/lua/zlib/lua_zlib.c"
                  ,param_4);
LAB_0091aeb8:
                    /* try { // try from 0091aec0 to 00a1af5b has its CatchHandler @ 0091ad14 */
  lua_error(param_1);
  return;
}

