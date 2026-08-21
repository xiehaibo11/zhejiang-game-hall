
/* cocos2d::experimental::AudioPlayerProvider::preloadEffect(cocos2d::experimental::AudioPlayerProvider::AudioFileInfo
   const&, std::__ndk1::function<void (bool, cocos2d::experimental::PcmData)> const&, bool) */

void __thiscall
cocos2d::experimental::AudioPlayerProvider::preloadEffect
          (AudioPlayerProvider *this,AudioFileInfo *param_1,function *param_2,bool param_3)

{
  mutex *this_00;
  mutex *this_01;
  long lVar1;
  ulong *puVar2;
  AudioPlayerProvider *this_02;
  ulong uVar3;
  PcmData *this_03;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  void *pvVar7;
  code *pcVar8;
  ThreadPool *pTVar9;
  ulong *puVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 local_228;
  ulong uStack_220;
  void *local_218;
  PcmData aPStack_210 [48];
  ulong *local_1e0;
  ulong *puStack_1d8;
  undefined8 local_1d0;
  PcmData aPStack_1c0 [48];
  PcmData aPStack_190 [48];
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  PcmData aPStack_140 [48];
  PcmData aPStack_110 [48];
  PreloadCallbackParam local_e0 [32];
  PreloadCallbackParam *local_c0;
  undefined1 local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong *local_88;
  ulong *puStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  this_02 = (AudioPlayerProvider *)PcmData::PcmData(aPStack_110);
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if ((uVar3 == 0) || (*(long *)(param_1 + 0x30) < 1)) {
    PcmData::PcmData(aPStack_140,aPStack_110);
    local_e0[0] = (PreloadCallbackParam)0x0;
    plVar5 = *(long **)(param_2 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_00e6d14c;
    (**(code **)(*plVar5 + 0x30))(plVar5,local_e0,aPStack_140);
    this_03 = aPStack_140;
  }
  else {
    uVar3 = isSmallFile(this_02,param_1);
    if ((uVar3 & 1) != 0) {
      uStack_158 = 0;
      local_150 = (void *)0x0;
      local_160 = 0;
      if (((byte)*param_1 & 1) == 0) {
        local_150 = *(void **)(param_1 + 0x10);
        uStack_158 = *(ulong *)(param_1 + 8);
        local_160 = *(ulong *)param_1;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if (0xffffffffffffffef < uVar3) goto LAB_00e6d150;
        pvVar11 = *(void **)(param_1 + 0x10);
        if (uVar3 < 0x17) {
          pvVar7 = (void *)((ulong)&local_160 | 1);
          local_160 = (ulong)(byte)((int)uVar3 << 1);
          if (uVar3 != 0) goto LAB_00e6cba4;
        }
        else {
          uVar12 = uVar3 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = operator_new(uVar12);
          local_160 = uVar12 | 1;
          uStack_158 = uVar3;
          local_150 = pvVar7;
LAB_00e6cba4:
          memcpy(pvVar7,pvVar11,uVar3);
        }
        *(undefined1 *)((long)pvVar7 + uVar3) = 0;
      }
      this_00 = (mutex *)(this + 0x80);
      std::__ndk1::mutex::lock(this_00);
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
                          *)(this + 0x58),(basic_string *)&local_160);
      std::__ndk1::mutex::unlock(this_00);
      if (lVar4 == 0) {
        this_01 = (mutex *)(this + 0xd0);
        std::__ndk1::mutex::lock(this_01);
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
                            *)(this + 0xa8),(basic_string *)&local_160);
        if (lVar4 == 0) {
          std::__ndk1::mutex::lock(this_00);
          lVar4 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
                              *)(this + 0x58),(basic_string *)&local_160);
          std::__ndk1::mutex::unlock(this_00);
          if (lVar4 == 0) {
            local_c0 = (PreloadCallbackParam *)0x0;
            plVar5 = *(long **)(param_2 + 0x20);
            if (plVar5 == (long *)0x0) {
              puStack_80 = (ulong *)0x0;
            }
            else if ((long *)param_2 == plVar5) {
              puStack_80 = &local_a0;
              (**(code **)(*plVar5 + 0x18))(plVar5,&local_a0);
            }
            else {
              puStack_80 = (ulong *)(**(code **)(*plVar5 + 0x10))();
            }
            FUN_00e6e87c(&local_a0,local_e0);
            if (&local_a0 == puStack_80) {
              pcVar8 = *(code **)(*puStack_80 + 0x20);
LAB_00e6ce64:
              (*pcVar8)();
            }
            else if (puStack_80 != (ulong *)0x0) {
              pcVar8 = *(code **)(*puStack_80 + 0x28);
              goto LAB_00e6ce64;
            }
            puStack_1d8 = (ulong *)0x0;
            local_1d0 = 0;
            local_1e0 = (ulong *)0x0;
            local_b0 = param_3;
            std::__ndk1::
            vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
            ::
            __push_back_slow_path<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>
                      ((vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
                        *)&local_1e0,local_e0);
            pvVar11 = local_150;
            uVar3 = uStack_158;
            uStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = 0;
            if ((local_160 & 1) == 0) {
              uStack_98 = uStack_158;
              local_a0 = local_160;
              local_90 = local_150;
            }
            else {
              if (0xffffffffffffffef < uStack_158) goto LAB_00e6d150;
              if (uStack_158 < 0x17) {
                pvVar7 = (void *)((ulong)&local_a0 | 1);
                local_a0 = (ulong)(byte)((int)uStack_158 << 1);
                if (uStack_158 != 0) goto LAB_00e6cef4;
              }
              else {
                uVar12 = uStack_158 + 0x10 & 0xfffffffffffffff0;
                pvVar7 = operator_new(uVar12);
                local_a0 = uVar12 | 1;
                uStack_98 = uVar3;
                local_90 = pvVar7;
LAB_00e6cef4:
                memcpy(pvVar7,pvVar11,uVar3);
              }
              *(undefined1 *)((long)pvVar7 + uVar3) = 0;
            }
            local_78 = local_1d0;
            puStack_80 = puStack_1d8;
            puStack_1d8 = (ulong *)0x0;
            local_1d0 = 0;
            local_88 = local_1e0;
            local_1e0 = (ulong *)0x0;
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
                        *)(this + 0xa8),(basic_string *)&local_a0,(pair *)&local_a0);
            puVar2 = local_88;
            puVar10 = puStack_80;
            if (local_88 != (ulong *)0x0) {
joined_r0x00e6cf44:
              if (puVar10 != puVar2) {
                puVar6 = (ulong *)puVar10[-4];
                puVar10 = puVar10 + -8;
                if (puVar10 != puVar6) goto code_r0x00e6cf70;
                pcVar8 = *(code **)(*puVar6 + 0x20);
                goto LAB_00e6cf54;
              }
              puStack_80 = puVar2;
              operator_delete(local_88);
            }
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            puVar2 = local_1e0;
            puVar10 = puStack_1d8;
            if (local_1e0 != (ulong *)0x0) {
joined_r0x00e6cfb0:
              if (puVar10 != puVar2) {
                puVar6 = (ulong *)puVar10[-4];
                puVar10 = puVar10 + -8;
                if (puVar10 != puVar6) goto code_r0x00e6cfdc;
                pcVar8 = *(code **)(*puVar6 + 0x20);
                goto LAB_00e6cfc0;
              }
              puStack_1d8 = puVar2;
              operator_delete(local_1e0);
            }
            if (local_e0 == local_c0) {
              pcVar8 = *(code **)(*(long *)local_c0 + 0x20);
LAB_00e6d020:
              (*pcVar8)();
            }
            else if (local_c0 != (PreloadCallbackParam *)0x0) {
              pcVar8 = *(code **)(*(long *)local_c0 + 0x28);
              goto LAB_00e6d020;
            }
            std::__ndk1::mutex::unlock(this_01);
            pvVar11 = local_150;
            uVar3 = uStack_158;
            pTVar9 = *(ThreadPool **)(this + 0x160);
            local_228 = 0;
            uStack_220 = 0;
            local_218 = (void *)0x0;
            if ((local_160 & 1) == 0) {
              local_218 = local_150;
              uStack_220 = uStack_158;
              local_228 = local_160;
            }
            else {
              if (0xffffffffffffffef < uStack_158) {
LAB_00e6d150:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uStack_158 < 0x17) {
                pvVar7 = (void *)((long)&local_228 + 1);
                local_228 = (ulong)(byte)((int)uStack_158 << 1);
                if (uStack_158 != 0) goto LAB_00e6d0a8;
              }
              else {
                uVar12 = uStack_158 + 0x10 & 0xfffffffffffffff0;
                pvVar7 = operator_new(uVar12);
                local_228 = uVar12 | 1;
                uStack_220 = uVar3;
                local_218 = pvVar7;
LAB_00e6d0a8:
                memcpy(pvVar7,pvVar11,uVar3);
              }
              *(undefined1 *)((long)pvVar7 + uVar3) = 0;
            }
            local_c0 = operator_new(0x28);
            *(undefined ***)local_c0 = &PTR_FUN_016f3cd8;
            *(AudioPlayerProvider **)(local_c0 + 8) = this;
            *(ulong *)(local_c0 + 0x18) = uStack_220;
            *(ulong *)(local_c0 + 0x10) = local_228;
            *(void **)(local_c0 + 0x20) = local_218;
            uStack_220 = 0;
            local_218 = (void *)0x0;
            local_228 = 0;
            ThreadPool::pushTask(pTVar9,local_e0,0);
            if (local_e0 == local_c0) {
              pcVar8 = *(code **)(*(long *)local_c0 + 0x20);
LAB_00e6d128:
              (*pcVar8)();
            }
            else if (local_c0 != (PreloadCallbackParam *)0x0) {
              pcVar8 = *(code **)(*(long *)local_c0 + 0x28);
              goto LAB_00e6d128;
            }
            if ((local_228 & 1) != 0) {
              operator_delete(local_218);
            }
            goto joined_r0x00e6d140;
          }
          PcmData::PcmData(aPStack_1c0,(PcmData *)(lVar4 + 0x28));
          local_e0[0] = (PreloadCallbackParam)0x1;
          plVar5 = *(long **)(param_2 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_00e6d14c;
          (**(code **)(*plVar5 + 0x30))(plVar5,local_e0,aPStack_1c0);
          PcmData::~PcmData(aPStack_1c0);
        }
        else {
          local_c0 = (PreloadCallbackParam *)0x0;
          plVar5 = *(long **)(param_2 + 0x20);
          if (plVar5 == (long *)0x0) {
            puStack_80 = (ulong *)0x0;
          }
          else if ((long *)param_2 == plVar5) {
            puStack_80 = &local_a0;
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_a0);
          }
          else {
            puStack_80 = (ulong *)(**(code **)(*plVar5 + 0x10))();
          }
          FUN_00e6e87c(&local_a0,local_e0);
          if (&local_a0 == puStack_80) {
            pcVar8 = *(code **)(*puStack_80 + 0x20);
LAB_00e6cd2c:
            (*pcVar8)();
          }
          else if (puStack_80 != (ulong *)0x0) {
            pcVar8 = *(code **)(*puStack_80 + 0x28);
            goto LAB_00e6cd2c;
          }
          uVar3 = *(ulong *)(lVar4 + 0x30);
          if (uVar3 < *(ulong *)(lVar4 + 0x38)) {
            if (local_c0 == (PreloadCallbackParam *)0x0) {
              *(undefined8 *)(uVar3 + 0x20) = 0;
              local_b0 = param_3;
            }
            else if (local_e0 == local_c0) {
              *(ulong *)(uVar3 + 0x20) = uVar3;
              local_b0 = param_3;
              (**(code **)(*(long *)local_c0 + 0x18))(local_c0,uVar3);
            }
            else {
              *(PreloadCallbackParam **)(uVar3 + 0x20) = local_c0;
              local_c0 = (PreloadCallbackParam *)0x0;
              local_b0 = param_3;
            }
            *(undefined1 *)(uVar3 + 0x30) = local_b0;
            *(ulong *)(lVar4 + 0x30) = uVar3 + 0x40;
          }
          else {
            local_b0 = param_3;
            std::__ndk1::
            vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
            ::
            __push_back_slow_path<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>
                      ((vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
                        *)(lVar4 + 0x28),local_e0);
          }
          if (local_e0 == local_c0) {
            pcVar8 = *(code **)(*(long *)local_c0 + 0x20);
          }
          else {
            if (local_c0 == (PreloadCallbackParam *)0x0) goto LAB_00e6cdf4;
            pcVar8 = *(code **)(*(long *)local_c0 + 0x28);
          }
          (*pcVar8)();
        }
LAB_00e6cdf4:
        std::__ndk1::mutex::unlock(this_01);
      }
      else {
        PcmData::PcmData(aPStack_190,(PcmData *)(lVar4 + 0x28));
        local_e0[0] = (PreloadCallbackParam)0x1;
        plVar5 = *(long **)(param_2 + 0x20);
        if (plVar5 == (long *)0x0) {
LAB_00e6d14c:
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar5 + 0x30))(plVar5,local_e0,aPStack_190);
        PcmData::~PcmData(aPStack_190);
      }
joined_r0x00e6d140:
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      goto LAB_00e6cb1c;
    }
    PcmData::PcmData(aPStack_210,aPStack_110);
    local_e0[0] = (PreloadCallbackParam)0x1;
    plVar5 = *(long **)(param_2 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_00e6d14c;
    (**(code **)(*plVar5 + 0x30))(plVar5,local_e0,aPStack_210);
    this_03 = aPStack_210;
  }
  PcmData::~PcmData(this_03);
LAB_00e6cb1c:
  PcmData::~PcmData(aPStack_110);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00e6cf70:
  if (puVar6 != (ulong *)0x0) {
    pcVar8 = *(code **)(*puVar6 + 0x28);
LAB_00e6cf54:
    (*pcVar8)();
  }
  goto joined_r0x00e6cf44;
code_r0x00e6cfdc:
  if (puVar6 != (ulong *)0x0) {
    pcVar8 = *(code **)(*puVar6 + 0x28);
LAB_00e6cfc0:
    (*pcVar8)();
  }
  goto joined_r0x00e6cfb0;
}

