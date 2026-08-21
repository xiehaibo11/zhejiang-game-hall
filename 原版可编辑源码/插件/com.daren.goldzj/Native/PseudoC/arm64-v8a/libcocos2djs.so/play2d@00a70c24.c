
/* cocos2d::AudioEngineImpl::play2d(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, float) */

uint __thiscall
cocos2d::AudioEngineImpl::play2d
          (AudioEngineImpl *this,basic_string *param_1,bool param_2,float param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint *__src;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint *__dest;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  void *__src_00;
  uint *puVar12;
  undefined4 in_register_00005004;
  undefined8 local_f0;
  uint *puStack_e8;
  uint *local_e0;
  basic_string local_d8 [16];
  void *local_c8;
  uint local_bc [3];
  uint *local_b0;
  uint *puStack_a8;
  uint **local_90;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar2 = 0xffffffff;
  uVar11 = uVar2;
  local_bc[0] = uVar2;
                    /* try { // try from 00a70c6c to 00b70caf has its CatchHandler @ 00a70e40 */
  if ((*(long *)(this + 0x18) == 0) || (*(long *)(this + 0xa0) == 0)) goto LAB_00a70f3c;
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x40))(local_d8,plVar5,param_1);
  local_bc[0] = *(uint *)(this + 0xa8);
  puVar12 = (uint *)(ulong)local_bc[0];
  *(uint *)(this + 0xa8) = local_bc[0] + 1;
                    /* try { // try from 00a70cb0 to 00b70f07 has its CatchHandler @ 00a70324 */
  puVar6 = (uint *)AudioPlayerProvider::getAudioPlayer
                             (*(AudioPlayerProvider **)(this + 0xa0),local_d8);
  if (puVar6 == (uint *)0x0) {
                    /* catch() { ... } // from try @ 00a70470 with catch @ 00a70d14 */
                    /* catch() { ... } // from try @ 00a70644 with catch @ 00a70d24 */
                    /* catch() { ... } // from try @ 00a70550 with catch @ 00a70d28 */
    __android_log_print(6,"AudioEngineImpl","Oops, player is null ...");
                    /* catch() { ... } // from try @ 00a7045c with catch @ 00a70d2c */
    bVar4 = false;
  }
  else {
                    /* catch() { ... } // from try @ 00a70694 with catch @ 00a70cc4 */
                    /* catch() { ... } // from try @ 00a705a0 with catch @ 00a70cc8 */
                    /* catch() { ... } // from try @ 00a704ac with catch @ 00a70ccc */
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar12);
    local_b0 = puVar12;
    puStack_a8 = puVar6;
                    /* catch() { ... } // from try @ 00a70684 with catch @ 00a70cdc */
                    /* catch() { ... } // from try @ 00a70590 with catch @ 00a70ce0 */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
    ::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::IAudioPlayer*>>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
                *)(this + 0x28),(int *)&local_b0,(pair *)&local_b0);
                    /* catch() { ... } // from try @ 00a7049c with catch @ 00a70ce4 */
    puStack_e8 = (uint *)0x0;
    local_e0 = (uint *)0x0;
    local_f0 = (uint *)0x0;
                    /* catch() { ... } // from try @ 00a70668 with catch @ 00a70cf4 */
                    /* catch() { ... } // from try @ 00a70574 with catch @ 00a70cf8 */
                    /* catch() { ... } // from try @ 00a70480 with catch @ 00a70cfc */
    if (((byte)*param_1 & 1) == 0) {
      local_e0 = *(uint **)(param_1 + 0x10);
      puStack_e8 = *(uint **)(param_1 + 8);
      local_f0 = *(uint **)param_1;
                    /* catch() { ... } // from try @ 00a70658 with catch @ 00a70d0c */
                    /* catch() { ... } // from try @ 00a70564 with catch @ 00a70d10 */
    }
    else {
      puVar12 = *(uint **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00a70638 with catch @ 00a70d44 */
      if ((uint *)0xffffffffffffffef < puVar12) goto LAB_00a70f78;
      __src_00 = *(void **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a70544 with catch @ 00a70d4c */
      if (puVar12 < (uint *)0x17) {
                    /* catch() { ... } // from try @ 00a70450 with catch @ 00a70d54 */
        puVar7 = (uint *)((long)&local_f0 + 1);
                    /* catch() { ... } // from try @ 00a70624 with catch @ 00a70d5c */
        local_f0 = (uint *)(ulong)(byte)((int)puVar12 << 1);
                    /* catch() { ... } // from try @ 00a70530 with catch @ 00a70d60 */
        if (puVar12 != (uint *)0x0) goto LAB_00a70d88;
      }
      else {
                    /* catch() { ... } // from try @ 00a70610 with catch @ 00a70d68 */
                    /* catch() { ... } // from try @ 00a7051c with catch @ 00a70d70 */
        puVar7 = operator_new((ulong)(puVar12 + 4) & 0xfffffffffffffff0);
                    /* catch() { ... } // from try @ 00a70428 with catch @ 00a70d78 */
        local_f0 = (uint *)((ulong)(puVar12 + 4) & 0xfffffffffffffff0 | 1);
                    /* catch() { ... } // from try @ 00a70618 with catch @ 00a70d80 */
                    /* catch() { ... } // from try @ 00a70524 with catch @ 00a70d84 */
        puStack_e8 = puVar12;
        local_e0 = puVar7;
LAB_00a70d88:
                    /* catch() { ... } // from try @ 00a70430 with catch @ 00a70d88 */
        memcpy(puVar7,__src_00,(size_t)puVar12);
      }
      *(undefined1 *)((long)puVar7 + (long)puVar12) = 0;
    }
                    /* catch() { ... } // from try @ 00a705f4 with catch @ 00a70da0 */
    local_90 = (uint **)0x0;
    ppuVar8 = operator_new(0x30);
    __src = local_e0;
    puVar7 = puStack_e8;
    puVar12 = local_f0;
                    /* catch() { ... } // from try @ 00a70500 with catch @ 00a70da8 */
                    /* catch() { ... } // from try @ 00a7040c with catch @ 00a70db0 */
                    /* catch() { ... } // from try @ 00a709f0 with catch @ 00a70db8 */
                    /* catch() { ... } // from try @ 00a7098c with catch @ 00a70dbc */
                    /* catch() { ... } // from try @ 00a70824 with catch @ 00a70dc0 */
    *ppuVar8 = (uint *)&PTR_FUN_01c6ece0;
    ppuVar8[2] = puVar6;
    ppuVar8[1] = (uint *)this;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[4] = (uint *)0x0;
    ppuVar8[5] = (uint *)0x0;
                    /* catch() { ... } // from try @ 00a70af0 with catch @ 00a70dd0 */
    if (((ulong)local_f0 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a70958 with catch @ 00a70dd4 */
                    /* catch() { ... } // from try @ 00a707f0 with catch @ 00a70dd8 */
      ppuVar8[5] = local_e0;
      ppuVar8[4] = puStack_e8;
      ppuVar8[3] = local_f0;
    }
    else {
                    /* catch() { ... } // from try @ 00a705e8 with catch @ 00a70de8 */
                    /* catch() { ... } // from try @ 00a704f4 with catch @ 00a70df0 */
      if ((uint *)0xffffffffffffffef < puStack_e8) {
LAB_00a70f78:
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* catch() { ... } // from try @ 00a70400 with catch @ 00a70df8 */
      if (puStack_e8 < (uint *)0x17) {
                    /* catch() { ... } // from try @ 00a709c0 with catch @ 00a70e00
                       catch() { ... } // from try @ 00a70a0c with catch @ 00a70e00 */
                    /* catch() { ... } // from try @ 00a70858 with catch @ 00a70e04 */
        __dest = (uint *)((long)ppuVar8 + 0x19);
        *(char *)(ppuVar8 + 3) = (char)((int)puStack_e8 << 1);
        if (puStack_e8 != (uint *)0x0) goto LAB_00a70e34;
      }
      else {
        puVar1 = puStack_e8 + 4;
        __dest = operator_new((ulong)puVar1 & 0xfffffffffffffff0);
        ppuVar8[4] = puVar7;
        ppuVar8[5] = __dest;
        ppuVar8[3] = (uint *)((ulong)puVar1 & 0xfffffffffffffff0 | 1);
LAB_00a70e34:
                    /* catch() { ... } // from try @ 00a70b24 with catch @ 00a70e40
                       catch() { ... } // from try @ 00a70c6c with catch @ 00a70e40 */
        memcpy(__dest,__src,(size_t)puVar7);
      }
      *(undefined1 *)((long)__dest + (long)puVar7) = 0;
    }
    local_90 = ppuVar8;
    (**(code **)(*(long *)puVar6 + 0x98))(puVar6,&local_b0);
    if (&local_b0 == local_90) {
      pcVar10 = *(code **)(*local_90 + 8);
LAB_00a70e88:
      (*pcVar10)();
    }
    else if (local_90 != (uint **)0x0) {
      pcVar10 = *(code **)(*local_90 + 10);
      goto LAB_00a70e88;
    }
    if (((ulong)puVar12 & 1) != 0) {
      operator_delete(local_e0);
    }
                    /* catch() { ... } // from try @ 00a703b0 with catch @ 00a70e98 */
                    /* catch() { ... } // from try @ 00a703a4 with catch @ 00a70e9c */
                    /* catch() { ... } // from try @ 00a70384 with catch @ 00a70ea0 */
    (**(code **)(*(long *)puVar6 + 0x70))(puVar6,param_2);
                    /* catch() { ... } // from try @ 00a703bc with catch @ 00a70eb0
                       catch() { ... } // from try @ 00a706d0 with catch @ 00a70eb0
                       catch() { ... } // from try @ 00a70bb4 with catch @ 00a70eb0 */
    (**(code **)(*(long *)puVar6 + 0x58))(CONCAT44(in_register_00005004,param_3),puVar6);
    (**(code **)(*(long *)puVar6 + 0x68))(puVar6,DAT_01d38d18 == 0);
    (**(code **)(*(long *)puVar6 + 0x30))(puVar6);
    local_b0 = local_bc;
                    /* try { // try from 00a70f08 to 00b70f5b has its CatchHandler @ 00a70f08
                       catch() { ... } // from try @ 00a70f08 with catch @ 00a70f08
                       catch() { ... } // from try @ 00a7100c with catch @ 00a70f08 */
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)&AudioEngine::_audioIDInfoMap,(piecewise_construct_t *)local_bc,
                       (tuple *)&DAT_0189b881,(tuple *)&local_b0);
    bVar4 = true;
    *(undefined4 *)(lVar9 + 0x34) = 1;
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  uVar11 = local_bc[0];
  if (!bVar4) {
    uVar11 = uVar2;
  }
LAB_00a70f3c:
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00a70f5c to 00b70f73 has its CatchHandler @ 00a71088 */
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

