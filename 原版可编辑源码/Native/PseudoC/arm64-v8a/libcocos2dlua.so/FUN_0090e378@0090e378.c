
void FUN_0090e378(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  Downloader *this;
  ulong local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
                    /* try { // try from 0090e380 to 00a0e3bb has its CatchHandler @ 0090e380
                       catch() { ... } // from try @ 0090e380 with catch @ 0090e380
                       catch() { ... } // from try @ 0090e44c with catch @ 0090e380
                       catch() { ... } // from try @ 0090e494 with catch @ 0090e380 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 < 2) {
    this = (Downloader *)lua_newuserdata(param_1,0xd0);
    cocos2d::network::Downloader::Downloader(this);
  }
  else {
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 != 5) {
      uVar3 = 0;
      goto LAB_0090e478;
    }
                    /* try { // try from 0090e3bc to 00a0e433 has its CatchHandler @ 0090e4d8 */
    uStack_60 = 0;
    local_58 = (undefined1 *)0x0;
    local_68 = 0;
    lua_pushstring(param_1,"countOfMaxProcessingTasks");
    lua_gettable(param_1,0xfffffffe);
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
      local_70 = 6;
    }
    else {
      local_70 = lua_tointeger(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
    }
    lua_pushstring(param_1,"timeoutInSeconds");
    lua_gettable(param_1,0xfffffffe);
                    /* catch() { ... } // from try @ 0090e438 with catch @ 0090e4d4 */
    iVar2 = lua_type(param_1,0xffffffff);
                    /* catch() { ... } // from try @ 0090e3bc with catch @ 0090e4d8
                       catch() { ... } // from try @ 0090e480 with catch @ 0090e4d8 */
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
      local_6c = 0x2d;
    }
    else {
      local_6c = lua_tointeger(param_1,0xffffffff);
                    /* try { // try from 0090e4f4 to 00a0e52f has its CatchHandler @ 0090e4f4
                       catch() { ... } // from try @ 0090e4f4 with catch @ 0090e4f4
                       catch() { ... } // from try @ 0090e5c0 with catch @ 0090e4f4
                       catch() { ... } // from try @ 0090e608 with catch @ 0090e4f4 */
      lua_settop(param_1,0xfffffffe);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,".tmp");
    lua_pushstring(param_1,"tempFileNameSuffix");
                    /* try { // try from 0090e530 to 00a0e5a7 has its CatchHandler @ 0090e64c */
    lua_gettable(param_1,0xfffffffe);
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
    }
    else {
      pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,pcVar4);
      if (((byte)local_90._0_1_ & 1) != 0) {
        *local_80 = 0;
        uStack_88 = 0;
        if (((byte)local_90._0_1_ & 1) != 0) {
          operator_delete(local_80);
        }
      }
                    /* try { // try from 0090e5ac to 00a0e5bf has its CatchHandler @ 0090e648 */
      uStack_88 = uStack_48;
      local_90 = local_50;
      local_80 = local_40;
                    /* try { // try from 0090e5c0 to 00a0e5f3 has its CatchHandler @ 0090e4f4 */
      lua_settop(param_1,0xfffffffe);
    }
    if ((local_68 & 1) != 0) {
      *local_58 = 0;
      uStack_60 = 0;
      if ((local_68 & 1) != 0) {
                    /* try { // try from 0090e5f4 to 00a0e607 has its CatchHandler @ 0090e64c */
        operator_delete(local_58);
      }
    }
    local_58 = local_80;
                    /* try { // try from 0090e608 to 00a0e667 has its CatchHandler @ 0090e4f4 */
    uStack_60 = uStack_88;
    local_68 = local_90;
    this = (Downloader *)lua_newuserdata(param_1,0xd0);
    cocos2d::network::Downloader::Downloader(this,(DownloaderHints *)&local_70);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  lua_getfield(param_1,0xffffd8f0,"cc.Downloader");
                    /* try { // try from 0090e438 to 00a0e44b has its CatchHandler @ 0090e4d4 */
  lua_setmetatable(param_1,0xfffffffe);
                    /* try { // try from 0090e44c to 00a0e47f has its CatchHandler @ 0090e380 */
  lua_pushlightuserdata(param_1,this);
  lua_createtable(param_1,0,0);
  lua_settable(param_1,0xffffd8f0);
  uVar3 = 1;
LAB_0090e478:
                    /* try { // try from 0090e480 to 00a0e493 has its CatchHandler @ 0090e4d8 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
                    /* try { // try from 0090e494 to 00a0e4f3 has its CatchHandler @ 0090e380 */
  return;
}

