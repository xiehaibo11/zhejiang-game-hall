
undefined4 FUN_0090d200(undefined8 param_1)

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
  undefined4 uVar10;
  undefined8 local_a0;
  __shared_weak_count *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 0090d204 to 00a0d22f has its CatchHandler @ 0090d27c */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = lua_gettop();
                    /* try { // try from 0090d238 to 00a0d24f has its CatchHandler @ 0090d274 */
  pbVar6 = (basic_string *)luaL_checkudata(param_1,1,"cc.Downloader");
  if (pbVar6 == (basic_string *)0x0) {
                    /* try { // try from 0090d250 to 00a0d2a3 has its CatchHandler @ 0090d000 */
    luaL_argerror(param_1,1,"`Downloader\' expected");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
                    /* catch() { ... } // from try @ 0090d238 with catch @ 0090d274 */
                    /* catch() { ... } // from try @ 0090d1cc with catch @ 0090d278 */
                    /* catch() { ... } // from try @ 0090d114 with catch @ 0090d27c
                       catch() { ... } // from try @ 0090d204 with catch @ 0090d27c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"");
                    /* catch() { ... } // from try @ 0090d0d0 with catch @ 0090d280 */
                    /* catch() { ... } // from try @ 0090d09c with catch @ 0090d284
                       catch() { ... } // from try @ 0090d198 with catch @ 0090d284 */
                    /* catch() { ... } // from try @ 0090d058 with catch @ 0090d288 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  if (iVar5 < 3) {
    uVar10 = 0;
  }
  else {
    pcVar7 = (char *)lua_tolstring(param_1,2,0);
    sVar8 = strlen(pcVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_60,pcVar7,sVar8);
                    /* try { // try from 0090d318 to 00a0d32f has its CatchHandler @ 0090d3ec */
    pcVar7 = (char *)lua_tolstring(param_1,3,0);
    sVar8 = strlen(pcVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_78,pcVar7,sVar8);
    if (3 < iVar5) {
                    /* try { // try from 0090d34c to 00a0d35f has its CatchHandler @ 0090d3e8 */
      pcVar7 = (char *)lua_tolstring(param_1,4,0);
      sVar8 = strlen(pcVar7);
                    /* try { // try from 0090d360 to 00a0d393 has its CatchHandler @ 0090d2a4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_90,pcVar7,sVar8);
    }
    cocos2d::network::Downloader::createDownloadFileTask
              (pbVar6,(basic_string *)local_60,(basic_string *)local_78);
    FUN_0090d9f4(param_1,local_a0);
                    /* try { // try from 0090d394 to 00a0d3a7 has its CatchHandler @ 0090d3ec */
    if (local_98 != (__shared_weak_count *)0x0) {
      p_Var1 = local_98 + 8;
      do {
        lVar9 = *(long *)p_Var1;
                    /* try { // try from 0090d3a8 to 00a0d407 has its CatchHandler @ 0090d2a4 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_98 + 0x10))(local_98);
        std::__ndk1::__shared_weak_count::__release_weak(local_98);
      }
    }
    uVar10 = 1;
  }
  if (((byte)local_90[0] & 1) != 0) {
                    /* try { // try from 0090d2a4 to 00a0d317 has its CatchHandler @ 0090d2a4
                       catch() { ... } // from try @ 0090d2a4 with catch @ 0090d2a4
                       catch() { ... } // from try @ 0090d360 with catch @ 0090d2a4
                       catch() { ... } // from try @ 0090d3a8 with catch @ 0090d2a4 */
    operator_delete(local_80);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* catch() { ... } // from try @ 0090d34c with catch @ 0090d3e8 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

