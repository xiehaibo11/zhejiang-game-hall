
/* WebSocketImpl::onClientOpenConnectionRequest() */

void __thiscall WebSocketImpl::onClientOpenConnectionRequest(WebSocketImpl *this)

{
  WebSocketImpl WVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  basic_string *extraout_x1;
  void *__dest;
  ulong uVar5;
  uint uVar6;
  ulong local_250;
  ulong uStack_248;
  void *local_240;
  uint local_234;
  Uri UStack_230;
  byte local_22f;
  byte local_1c8;
  undefined1 auStack_1c7 [15];
  undefined1 *local_1b8;
  ushort local_1ae;
  byte local_1a8;
  undefined1 auStack_1a7 [15];
  undefined1 *local_198;
  byte local_190;
  undefined7 uStack_18f;
  ulong uStack_188;
  void *local_180;
  long local_118;
  undefined1 *local_110;
  uint local_108;
  uint local_104;
  void *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  WebSocketImpl *local_e8;
  undefined8 uStack_e0;
  WebSocketImpl *local_d8;
  undefined **ppuStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (DAT_01d38800 == 0) {
    __android_log_print(6,"WebSocket.cpp","Create websocket context failed!");
    goto LAB_009e9e4c;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0xc));
  *(undefined4 *)(this + 8) = 0;
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc));
  cocos2d::network::Uri::parse((Uri *)(this + 0x38),extraout_x1);
  local_234 = (uint)local_22f;
  if (*(lws_protocols **)(this + 0x70) == (lws_protocols *)0x0) {
    uVar3 = createVhost(this,(lws_protocols *)&DAT_01d38810,(int *)&local_234);
  }
  else {
    uVar3 = createVhost(this,*(lws_protocols **)(this + 0x70),(int *)&local_234);
  }
  uVar6 = (uint)local_1ae;
  if ((local_1ae == 0) && (uVar6 = 0x50, local_22f != 0)) {
    uVar6 = 0x1bb;
  }
  local_250 = 0;
  uStack_248 = 0;
  local_240 = (void *)0x0;
  if ((local_190 & 1) == 0) {
    local_250 = CONCAT71(uStack_18f,local_190);
    local_240 = local_180;
    uStack_248 = uStack_188;
  }
  else {
    if (0xffffffffffffffef < uStack_188) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_188 < 0x17) {
      __dest = (void *)((ulong)&local_250 | 1);
      local_250 = (ulong)(byte)((int)uStack_188 << 1);
      if (uStack_188 != 0) goto LAB_009e9cdc;
    }
    else {
      uVar5 = uStack_188 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_250 = uVar5 | 1;
      uStack_248 = uStack_188;
      local_240 = __dest;
LAB_009e9cdc:
      memcpy(__dest,local_180,uStack_188);
    }
    *(undefined1 *)((long)__dest + uStack_188) = 0;
  }
  uVar5 = (ulong)((byte)local_250._0_1_ >> 1);
  if ((local_250 & 1) != 0) {
    uVar5 = uStack_248;
  }
  if (uVar5 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_250,"/",1);
  }
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  if ((local_1c8 & 1) == 0) {
    local_1b8 = auStack_1c7;
  }
  local_104 = local_234;
  local_118 = DAT_01d38800;
  local_100 = (void *)((ulong)&local_250 | 1);
  if (((byte)local_250._0_1_ & 1) != 0) {
    local_100 = local_240;
  }
  if ((local_1a8 & 1) == 0) {
    local_198 = auStack_1a7;
  }
  local_78 = 0;
  WVar1 = this[0x78];
  if (((byte)WVar1 & 1) == 0) {
    if ((byte)WVar1 >> 1 == 0) goto LAB_009e9df4;
LAB_009e9de0:
    if (((byte)WVar1 & 1) == 0) {
      local_e8 = this + 0x79;
    }
    else {
      local_e8 = *(WebSocketImpl **)(this + 0x88);
    }
  }
  else {
    if (*(long *)(this + 0x80) != 0) goto LAB_009e9de0;
LAB_009e9df4:
    local_e8 = (WebSocketImpl *)0x0;
  }
  uStack_e0 = 0xffffffff;
  ppuStack_d0 = &PTR_s_permessage_deflate_01c6c0b8;
  local_110 = local_1b8;
  local_108 = uVar6;
  puStack_f8 = local_1b8;
  local_f0 = local_198;
  local_d8 = this;
  local_a8 = uVar3;
  lVar4 = lws_client_connect_via_info(&local_118);
  *(long *)(this + 0x68) = lVar4;
  if (lVar4 == 0) {
    onConnectionError(this);
  }
  if ((local_250 & 1) != 0) {
    operator_delete(local_240);
  }
  cocos2d::network::Uri::~Uri(&UStack_230);
LAB_009e9e4c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

