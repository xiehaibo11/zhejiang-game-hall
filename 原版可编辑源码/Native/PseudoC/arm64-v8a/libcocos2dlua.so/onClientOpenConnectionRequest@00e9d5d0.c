
/* cocos2d::network::WebSocket::onClientOpenConnectionRequest() */

void __thiscall cocos2d::network::WebSocket::onClientOpenConnectionRequest(WebSocket *this)

{
  WebSocket WVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  basic_string *extraout_x1;
  void *__dest;
  ulong uVar5;
  uint uVar6;
  uint local_254;
  ulong local_250;
  ulong uStack_248;
  void *local_240;
  Uri UStack_238;
  byte local_237;
  byte local_1d0;
  undefined1 auStack_1cf [15];
  undefined1 *local_1c0;
  ushort local_1b6;
  byte local_1b0;
  undefined1 auStack_1af [15];
  undefined1 *local_1a0;
  byte local_198;
  undefined7 uStack_197;
  ulong uStack_190;
  void *local_188;
  long local_120;
  undefined1 *puStack_118;
  uint local_110;
  uint local_10c;
  void *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  WebSocket *local_f0;
  undefined8 uStack_e8;
  WebSocket *local_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (DAT_0178f4f0 == 0) {
    __android_log_print(6,"WebSocket.cpp","Create websocket context failed!");
    goto LAB_00e9d87c;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 8));
  *(undefined4 *)(this + 0x30) = 0;
  std::__ndk1::mutex::unlock((mutex *)(this + 8));
  Uri::parse((Uri *)(this + 0x38),extraout_x1);
  local_254 = (uint)local_237;
  if (*(lws_protocols **)(this + 0x70) == (lws_protocols *)0x0) {
    uVar3 = createVhost(this,(lws_protocols *)&DAT_0178f500,(int *)&local_254);
  }
  else {
    uVar3 = createVhost(this,*(lws_protocols **)(this + 0x70),(int *)&local_254);
  }
  uVar6 = (uint)local_1b6;
  if ((local_1b6 == 0) && (uVar6 = 0x50, local_237 != 0)) {
    uVar6 = 0x1bb;
  }
  uStack_248 = 0;
  local_240 = (void *)0x0;
  local_250 = 0;
  if ((local_198 & 1) == 0) {
    local_250 = CONCAT71(uStack_197,local_198);
    local_240 = local_188;
    uStack_248 = uStack_190;
  }
  else {
    if (0xffffffffffffffef < uStack_190) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_190 < 0x17) {
      __dest = (void *)((ulong)&local_250 | 1);
      local_250 = (ulong)(byte)((int)uStack_190 << 1);
      if (uStack_190 != 0) goto LAB_00e9d72c;
    }
    else {
      uVar5 = uStack_190 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_250 = uVar5 | 1;
      uStack_248 = uStack_190;
      local_240 = __dest;
LAB_00e9d72c:
      memcpy(__dest,local_188,uStack_190);
    }
    *(undefined1 *)((long)__dest + uStack_190) = 0;
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
  if ((local_1d0 & 1) == 0) {
    local_1c0 = auStack_1cf;
  }
  local_108 = (void *)((ulong)&local_250 | 1);
  if (((byte)local_250._0_1_ & 1) != 0) {
    local_108 = local_240;
  }
  if ((local_1b0 & 1) == 0) {
    local_1a0 = auStack_1af;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_120 = DAT_0178f4f0;
  local_10c = local_254;
  WVar1 = this[0x78];
  if (((byte)WVar1 & 1) == 0) {
    if ((byte)WVar1 >> 1 == 0) goto LAB_00e9d81c;
LAB_00e9d808:
    if (((byte)WVar1 & 1) == 0) {
      local_f0 = this + 0x79;
    }
    else {
      local_f0 = *(WebSocket **)(this + 0x88);
    }
  }
  else {
    if (*(long *)(this + 0x80) != 0) goto LAB_00e9d808;
LAB_00e9d81c:
    local_f0 = (WebSocket *)0x0;
  }
  uStack_e8 = 0xffffffff;
  ppuStack_d8 = &PTR_s_permessage_deflate_016f47f0;
  puStack_118 = local_1c0;
  local_110 = uVar6;
  puStack_100 = local_1c0;
  local_f8 = local_1a0;
  local_e0 = this;
  local_b0 = uVar3;
  lVar4 = lws_client_connect_via_info(&local_120);
  *(long *)(this + 0x68) = lVar4;
  if (lVar4 == 0) {
    onConnectionError(this,(void *)0x0,0);
  }
  if ((local_250 & 1) != 0) {
    operator_delete(local_240);
  }
  Uri::~Uri(&UStack_238);
LAB_00e9d87c:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

