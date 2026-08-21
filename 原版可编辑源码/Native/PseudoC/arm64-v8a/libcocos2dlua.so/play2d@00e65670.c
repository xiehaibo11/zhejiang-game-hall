
/* cocos2d::experimental::AudioEngineImpl::play2d(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, float) */

uint __thiscall
cocos2d::experimental::AudioEngineImpl::play2d
          (AudioEngineImpl *this,basic_string *param_1,bool param_2,float param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint *__dest;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  void *__src;
  uint *puVar12;
  undefined4 in_register_00005004;
  undefined8 local_e0;
  uint *puStack_d8;
  uint *local_d0;
  basic_string local_c8 [16];
  void *local_b8;
  uint local_ac [3];
  uint *local_a0;
  uint *puStack_98;
  uint **local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar2 = 0xffffffff;
  uVar11 = uVar2;
  local_ac[0] = uVar2;
  if ((*(long *)(this + 0x30) == 0) || (*(long *)(this + 0xb8) == 0)) goto LAB_00e6598c;
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x50))(local_c8,plVar5,param_1);
  local_ac[0] = *(uint *)(this + 0xd0);
  puVar12 = (uint *)(ulong)local_ac[0];
  *(uint *)(this + 0xd0) = local_ac[0] + 1;
  puVar6 = (uint *)AudioPlayerProvider::getAudioPlayer
                             (*(AudioPlayerProvider **)(this + 0xb8),local_c8);
  if (puVar6 == (uint *)0x0) {
    __android_log_print(6,"AudioEngineImpl","Oops, player is null ...");
    bVar4 = false;
  }
  else {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar12);
    local_a0 = puVar12;
    puStack_98 = puVar6;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
    ::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::experimental::IAudioPlayer*>>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
                *)(this + 0x40),(int *)&local_a0,(pair *)&local_a0);
    local_e0 = (uint *)0x0;
    puStack_d8 = (uint *)0x0;
    local_d0 = (uint *)0x0;
    if (((byte)*param_1 & 1) == 0) {
      local_d0 = *(uint **)(param_1 + 0x10);
      puStack_d8 = *(uint **)(param_1 + 8);
      local_e0 = *(uint **)param_1;
    }
    else {
      puVar12 = *(uint **)(param_1 + 8);
      if ((uint *)0xffffffffffffffef < puVar12) goto LAB_00e659c8;
      __src = *(void **)(param_1 + 0x10);
      if (puVar12 < (uint *)0x17) {
        puVar7 = (uint *)((long)&local_e0 + 1);
        local_e0 = (uint *)(ulong)(byte)((int)puVar12 << 1);
        if (puVar12 != (uint *)0x0) goto LAB_00e657d4;
      }
      else {
        puVar7 = operator_new((ulong)(puVar12 + 4) & 0xfffffffffffffff0);
        local_e0 = (uint *)((ulong)(puVar12 + 4) & 0xfffffffffffffff0 | 1);
        puStack_d8 = puVar12;
        local_d0 = puVar7;
LAB_00e657d4:
        memcpy(puVar7,__src,(size_t)puVar12);
      }
      *(undefined1 *)((long)puVar7 + (long)puVar12) = 0;
    }
    local_80 = (uint **)0x0;
    ppuVar8 = operator_new(0x30);
    puVar7 = local_d0;
    puVar12 = puStack_d8;
    *ppuVar8 = (uint *)&PTR_FUN_016f3968;
    ppuVar8[2] = puVar6;
    ppuVar8[1] = (uint *)this;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[4] = (uint *)0x0;
    ppuVar8[5] = (uint *)0x0;
    if (((ulong)local_e0 & 1) == 0) {
      ppuVar8[5] = local_d0;
      ppuVar8[4] = puStack_d8;
      ppuVar8[3] = local_e0;
    }
    else {
      if ((uint *)0xffffffffffffffef < puStack_d8) {
LAB_00e659c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puStack_d8 < (uint *)0x17) {
        __dest = (uint *)((long)ppuVar8 + 0x19);
        *(char *)(ppuVar8 + 3) = (char)((int)puStack_d8 << 1);
        if (puStack_d8 != (uint *)0x0) goto LAB_00e65880;
      }
      else {
        puVar1 = puStack_d8 + 4;
        __dest = operator_new((ulong)puVar1 & 0xfffffffffffffff0);
        ppuVar8[4] = puVar12;
        ppuVar8[5] = __dest;
        ppuVar8[3] = (uint *)((ulong)puVar1 & 0xfffffffffffffff0 | 1);
LAB_00e65880:
        memcpy(__dest,puVar7,(size_t)puVar12);
      }
      *(undefined1 *)((long)__dest + (long)puVar12) = 0;
    }
    local_80 = ppuVar8;
    (**(code **)(*(long *)puVar6 + 0x98))(puVar6,&local_a0);
    if (&local_a0 == local_80) {
      pcVar10 = *(code **)(*local_80 + 8);
LAB_00e658d4:
      (*pcVar10)();
    }
    else if (local_80 != (uint **)0x0) {
      pcVar10 = *(code **)(*local_80 + 10);
      goto LAB_00e658d4;
    }
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    (**(code **)(*(long *)puVar6 + 0x70))(puVar6,param_2);
    (**(code **)(*(long *)puVar6 + 0x58))(CONCAT44(in_register_00005004,param_3),puVar6);
    (**(code **)(*(long *)puVar6 + 0x68))(puVar6,DAT_0178f248 == 0);
    (**(code **)(*(long *)puVar6 + 0x30))(puVar6);
    local_a0 = local_ac;
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)&AudioEngine::_audioIDInfoMap,(piecewise_construct_t *)local_ac,
                       (tuple *)&DAT_014266eb,(tuple *)&local_a0);
    bVar4 = true;
    *(undefined4 *)(lVar9 + 0x34) = 1;
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  uVar11 = local_ac[0];
  if (!bVar4) {
    uVar11 = uVar2;
  }
LAB_00e6598c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

