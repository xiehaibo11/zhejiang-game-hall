
undefined8 FUN_0090cfc4(undefined8 param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  basic_string *pbVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_88;
  __shared_weak_count *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0090cf1c with catch @ 0090cfd8 */
                    /* catch() { ... } // from try @ 0090cea0 with catch @ 0090cfdc */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 0090ce6c with catch @ 0090cfe0
                       catch() { ... } // from try @ 0090cf68 with catch @ 0090cfe0 */
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0090cec4 with catch @ 0090cfe4
                       catch() { ... } // from try @ 0090cf80 with catch @ 0090cfe4 */
  pbVar6 = (basic_string *)luaL_checkudata(param_1,1,"cc.Downloader");
                    /* try { // try from 0090d000 to 00a0d057 has its CatchHandler @ 0090d000
                       catch() { ... } // from try @ 0090d000 with catch @ 0090d000
                       catch() { ... } // from try @ 0090d11c with catch @ 0090d000
                       catch() { ... } // from try @ 0090d250 with catch @ 0090d000 */
  if (pbVar6 == (basic_string *)0x0) {
    luaL_argerror(param_1,1,"`Downloader\' expected");
  }
  iVar5 = lua_gettop(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"");
  if (iVar5 == 1) {
    uVar10 = 0;
  }
  else {
    if (0 < iVar5 + -1) {
                    /* try { // try from 0090d058 to 00a0d073 has its CatchHandler @ 0090d288 */
      pcVar7 = (char *)lua_tolstring(param_1,2,0);
      sVar8 = strlen(pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_60,pcVar7,sVar8);
      if (1 < iVar5 + -1) {
        pcVar7 = (char *)lua_tolstring(param_1,3,0);
        sVar8 = strlen(pcVar7);
                    /* try { // try from 0090d09c to 00a0d0a3 has its CatchHandler @ 0090d284 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_78,pcVar7,sVar8);
      }
    }
    cocos2d::network::Downloader::createDownloadDataTask(pbVar6,(basic_string *)local_60);
    FUN_0090d9f4(param_1,local_88);
                    /* try { // try from 0090d0d0 to 00a0d0eb has its CatchHandler @ 0090d280 */
    if (local_80 != (__shared_weak_count *)0x0) {
      p_Var1 = local_80 + 8;
      do {
        lVar9 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_80 + 0x10))(local_80);
        std::__ndk1::__shared_weak_count::__release_weak(local_80);
      }
    }
    uVar10 = 1;
  }
  if (((byte)local_78[0] & 1) != 0) {
                    /* try { // try from 0090d114 to 00a0d11b has its CatchHandler @ 0090d27c */
    operator_delete(local_68);
  }
                    /* try { // try from 0090d11c to 00a0d197 has its CatchHandler @ 0090d000 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

