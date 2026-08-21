
void FUN_0090f2b4(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  WebSocket *this;
  undefined8 uVar11;
  WebSocket *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *puStack_60;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* try { // try from 0090f2b8 to 00a0f30b has its CatchHandler @ 0090f2b8
                       catch() { ... } // from try @ 0090f2b8 with catch @ 0090f2b8
                       catch() { ... } // from try @ 0090f38c with catch @ 0090f2b8
                       catch() { ... } // from try @ 0090f3d0 with catch @ 0090f2b8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar7 = tolua_isusertable(param_1,1,"cc.WebSocket",0,auStack_58);
                    /* try { // try from 0090f30c to 00a0f38b has its CatchHandler @ 0090f414 */
  if ((((iVar7 == 0) || (iVar7 = tolua_isstring(param_1,2,0,auStack_58), iVar7 == 0)) ||
      (iVar7 = tolua_isstring(param_1,3,0,auStack_58), iVar7 == 0)) ||
     (iVar7 = tolua_isnoobj(param_1,4,auStack_58), iVar7 == 0)) {
    tolua_error(param_1,"#ferror in function \'createByAProtocol\'.",auStack_58);
    uVar11 = 0;
  }
  else {
    pcVar9 = (char *)tolua_tostring(param_1,2,0);
    pcVar10 = (char *)tolua_tostring(param_1,3,0);
    local_68 = (ulong *)0x0;
    puStack_60 = (ulong *)0x0;
    local_70 = (ulong *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_88,pcVar10);
    if (local_68 < puStack_60) {
                    /* try { // try from 0090f38c to 00a0f3bb has its CatchHandler @ 0090f2b8 */
      local_68[2] = (ulong)local_78;
      local_68[1] = uStack_80;
      *local_68 = local_88;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      local_68 = local_68 + 3;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)&local_70,(basic_string *)&local_88);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    this = operator_new(0x160,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 0090f30c with catch @ 0090f414
                       catch() { ... } // from try @ 0090f3bc with catch @ 0090f414 */
    if (this == (WebSocket *)0x0) {
      this_00 = (WebSocket *)0x0;
    }
    else {
      *(undefined8 *)(this + 0x148) = 0;
      *(undefined8 *)(this + 0x140) = 0;
      *(undefined8 *)(this + 0x158) = 0;
      *(undefined8 *)(this + 0x150) = 0;
      *(undefined8 *)(this + 0x128) = 0;
      *(undefined8 *)(this + 0x120) = 0;
      *(undefined8 *)(this + 0x138) = 0;
      *(undefined8 *)(this + 0x130) = 0;
      *(undefined8 *)(this + 0x108) = 0;
      *(undefined8 *)(this + 0x100) = 0;
      *(undefined8 *)(this + 0x118) = 0;
      *(undefined8 *)(this + 0x110) = 0;
      *(undefined8 *)(this + 0xe8) = 0;
      *(undefined8 *)(this + 0xe0) = 0;
      *(undefined8 *)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0xf0) = 0;
      *(undefined8 *)(this + 200) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined8 *)(this + 0xd8) = 0;
      *(undefined8 *)(this + 0xd0) = 0;
                    /* try { // try from 0090f430 to 00a0f48b has its CatchHandler @ 0090f430
                       catch() { ... } // from try @ 0090f430 with catch @ 0090f430
                       catch() { ... } // from try @ 0090f5b8 with catch @ 0090f430 */
      *(undefined8 *)(this + 0xa8) = 0;
      *(undefined8 *)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
      *(undefined8 *)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      cocos2d::network::WebSocket::WebSocket(this);
      *(undefined ***)this = &PTR__LuaWebSocket_0169c210;
      *(undefined ***)(this + 0x158) = &PTR__LuaWebSocket_0169c250;
      this_00 = this;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_88,pcVar9);
                    /* try { // try from 0090f48c to 00a0f4a7 has its CatchHandler @ 0090f6dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,"");
    cocos2d::network::WebSocket::init
              (this_00,(Delegate *)(this + 0x158),(basic_string *)&local_88,(vector *)&local_70,
               (basic_string *)local_a0);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
                    /* try { // try from 0090f4c8 to 00a0f4df has its CatchHandler @ 0090f6b8 */
    tolua_pushusertype(param_1,this,"cc.WebSocket");
    uVar8 = lua_gettop(param_1);
                    /* try { // try from 0090f4ec to 00a0f503 has its CatchHandler @ 0090f6a0 */
    tolua_register_gc(param_1,uVar8);
    puVar5 = local_70;
    if (local_70 != (ulong *)0x0) {
      if (local_68 != local_70) {
        bVar1 = (byte)local_68[-3];
        puVar6 = local_68 + -3;
        puVar4 = local_68;
        while( true ) {
          puVar3 = puVar6;
          if ((bVar1 & 1) != 0) {
            operator_delete((void *)puVar4[-1]);
          }
          if (puVar5 == puVar3) break;
          bVar1 = (byte)puVar3[-3];
                    /* try { // try from 0090f520 to 00a0f527 has its CatchHandler @ 0090f680 */
          puVar6 = puVar3 + -3;
          puVar4 = puVar3;
        }
      }
      local_68 = puVar5;
      operator_delete(local_70);
    }
    uVar11 = 1;
  }
                    /* try { // try from 0090f3bc to 00a0f3cf has its CatchHandler @ 0090f414 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0090f3d0 to 00a0f42f has its CatchHandler @ 0090f2b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

