
/* cocos2d::AudioPlayerProvider::preloadEffect(cocos2d::AudioPlayerProvider::AudioFileInfo const&,
   std::__ndk1::function<void (bool, cocos2d::PcmData)> const&, bool) */

void __thiscall
cocos2d::AudioPlayerProvider::preloadEffect
          (AudioPlayerProvider *this,AudioFileInfo *param_1,function *param_2,bool param_3)

{
  mutex *this_00;
  mutex *this_01;
  long lVar1;
  ulong *puVar2;
  AudioPlayerProvider *pAVar3;
  ulong uVar4;
  PcmData *this_02;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  void *pvVar8;
  code *pcVar9;
  ThreadPool *pTVar10;
  ulong *puVar11;
  void *pvVar12;
  ulong uVar13;
  PcmData aPStack_230 [48];
  AudioPlayerProvider *local_200;
  undefined8 local_1f8;
  ulong uStack_1f0;
  void *local_1e8;
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
  
                    /* catch() { ... } // from try @ 00a74430 with catch @ 00a74570 */
                    /* catch() { ... } // from try @ 00a74424 with catch @ 00a74574 */
                    /* catch() { ... } // from try @ 00a74460 with catch @ 00a74578 */
  this_02 = aPStack_230;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a74404 with catch @ 00a74590 */
                    /* catch() { ... } // from try @ 00a7443c with catch @ 00a745a0
                       catch() { ... } // from try @ 00a744a4 with catch @ 00a745a0 */
  pAVar3 = (AudioPlayerProvider *)PcmData::PcmData(aPStack_110);
  uVar4 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 == 0) || (*(long *)(param_1 + 0x30) < 1)) {
    PcmData::PcmData(aPStack_140,aPStack_110);
    local_e0[0] = (PreloadCallbackParam)0x0;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_00a74c88;
    (**(code **)(*plVar6 + 0x30))(plVar6,local_e0,aPStack_140);
    this_02 = aPStack_140;
  }
  else {
    uVar4 = isSmallFile(pAVar3,param_1);
    if ((uVar4 & 1) != 0) {
      uStack_158 = 0;
      local_150 = (void *)0x0;
      local_160 = 0;
      if (((byte)*param_1 & 1) == 0) {
        local_150 = *(void **)(param_1 + 0x10);
        uStack_158 = *(ulong *)(param_1 + 8);
        local_160 = *(ulong *)param_1;
                    /* try { // try from 00a745f8 to 00b74653 has its CatchHandler @ 00a745f8
                       catch() { ... } // from try @ 00a745f8 with catch @ 00a745f8
                       catch() { ... } // from try @ 00a747a4 with catch @ 00a745f8
                       catch() { ... } // from try @ 00a7482c with catch @ 00a745f8
                       catch() { ... } // from try @ 00a748b4 with catch @ 00a745f8
                       catch() { ... } // from try @ 00a74954 with catch @ 00a745f8
                       catch() { ... } // from try @ 00a74a40 with catch @ 00a745f8 */
      }
      else {
        uVar4 = *(ulong *)(param_1 + 8);
        if (0xffffffffffffffef < uVar4) goto LAB_00a74c8c;
        pvVar12 = *(void **)(param_1 + 0x10);
        if (uVar4 < 0x17) {
          pvVar8 = (void *)((ulong)&local_160 | 1);
                    /* try { // try from 00a746c4 to 00b746eb has its CatchHandler @ 00a74ae0 */
          local_160 = (ulong)(byte)((int)uVar4 << 1);
          if (uVar4 != 0) goto LAB_00a746f0;
        }
        else {
          uVar13 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar8 = operator_new(uVar13);
          local_160 = uVar13 | 1;
          uStack_158 = uVar4;
          local_150 = pvVar8;
LAB_00a746f0:
          memcpy(pvVar8,pvVar12,uVar4);
        }
        *(undefined1 *)((long)pvVar8 + uVar4) = 0;
      }
      this_00 = (mutex *)(this + 0x80);
      std::__ndk1::mutex::lock(this_00);
                    /* try { // try from 00a74718 to 00b7475f has its CatchHandler @ 00a74b3c */
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
                          *)(this + 0x58),(basic_string *)&local_160);
      std::__ndk1::mutex::unlock(this_00);
      if (lVar5 == 0) {
        this_01 = (mutex *)(this + 0xd0);
        std::__ndk1::mutex::lock(this_01);
        lVar5 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
                            *)(this + 0xa8),(basic_string *)&local_160);
        if (lVar5 == 0) {
          std::__ndk1::mutex::lock(this_00);
          lVar5 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
                              *)(this + 0x58),(basic_string *)&local_160);
          std::__ndk1::mutex::unlock(this_00);
          if (lVar5 == 0) {
            local_c0 = (PreloadCallbackParam *)0x0;
            plVar6 = *(long **)(param_2 + 0x20);
            if (plVar6 == (long *)0x0) {
              puStack_80 = (ulong *)0x0;
            }
            else if ((long *)param_2 == plVar6) {
              puStack_80 = &local_a0;
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_a0);
            }
            else {
                    /* try { // try from 00a748d8 to 00b748eb has its CatchHandler @ 00a74a70 */
              puStack_80 = (ulong *)(**(code **)(*plVar6 + 0x10))();
            }
            FUN_00a76418(&local_a0,local_e0);
            if (&local_a0 == puStack_80) {
              pcVar9 = *(code **)(*puStack_80 + 0x20);
LAB_00a749b8:
              (*pcVar9)();
            }
            else if (puStack_80 != (ulong *)0x0) {
              pcVar9 = *(code **)(*puStack_80 + 0x28);
              goto LAB_00a749b8;
            }
            local_1e0 = (ulong *)0x0;
            puStack_1d8 = (ulong *)0x0;
            local_1d0 = 0;
            local_b0 = param_3;
            std::__ndk1::
            vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>
            ::__push_back_slow_path<cocos2d::AudioPlayerProvider::PreloadCallbackParam>
                      ((vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>
                        *)&local_1e0,local_e0);
            pvVar12 = local_150;
            uVar4 = uStack_158;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = (void *)0x0;
            if ((local_160 & 1) == 0) {
              local_90 = local_150;
              uStack_98 = uStack_158;
              local_a0 = local_160;
            }
            else {
              if (0xffffffffffffffef < uStack_158) goto LAB_00a74c8c;
              if (uStack_158 < 0x17) {
                pvVar8 = (void *)((ulong)&local_a0 | 1);
                local_a0 = (ulong)(byte)((int)uStack_158 << 1);
                if (uStack_158 != 0) goto LAB_00a74a48;
              }
              else {
                    /* try { // try from 00a74a28 to 00b74a2f has its CatchHandler @ 00a74a60 */
                uVar13 = uStack_158 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a74a30 to 00b74a37 has its CatchHandler @ 00a74a50 */
                pvVar8 = operator_new(uVar13);
                    /* try { // try from 00a74a38 to 00b74a3f has its CatchHandler @ 00a74a40 */
                local_a0 = uVar13 | 1;
                    /* catch() { ... } // from try @ 00a748ac with catch @ 00a74a40
                       catch() { ... } // from try @ 00a74a38 with catch @ 00a74a40
                       try { // try from 00a74a40 to 00b74b93 has its CatchHandler @ 00a745f8 */
                uStack_98 = uVar4;
                local_90 = pvVar8;
LAB_00a74a48:
                    /* catch() { ... } // from try @ 00a74824 with catch @ 00a74a50
                       catch() { ... } // from try @ 00a74a30 with catch @ 00a74a50 */
                memcpy(pvVar8,pvVar12,uVar4);
              }
              *(undefined1 *)((long)pvVar8 + uVar4) = 0;
            }
            puStack_80 = puStack_1d8;
            local_88 = local_1e0;
                    /* catch() { ... } // from try @ 00a7479c with catch @ 00a74a60
                       catch() { ... } // from try @ 00a74a28 with catch @ 00a74a60 */
                    /* catch() { ... } // from try @ 00a748d8 with catch @ 00a74a70 */
            local_1e0 = (ulong *)0x0;
            puStack_1d8 = (ulong *)0x0;
            local_78 = local_1d0;
            local_1d0 = 0;
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
                        *)(this + 0xa8),(basic_string *)&local_a0,(pair *)&local_a0);
            puVar2 = local_88;
            puVar11 = puStack_80;
            if (local_88 != (ulong *)0x0) {
joined_r0x00a74a98:
              if (puVar11 != puVar2) {
                puVar7 = (ulong *)puVar11[-4];
                puVar11 = puVar11 + -8;
                if (puVar11 != puVar7) goto code_r0x00a74aac;
                pcVar9 = *(code **)(*puVar7 + 0x20);
                goto LAB_00a74ac4;
              }
              puStack_80 = puVar2;
                    /* catch() { ... } // from try @ 00a74680 with catch @ 00a74ad8 */
              operator_delete(local_88);
            }
                    /* catch() { ... } // from try @ 00a74674 with catch @ 00a74adc */
                    /* catch() { ... } // from try @ 00a746c4 with catch @ 00a74ae0 */
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            puVar2 = local_1e0;
            puVar11 = puStack_1d8;
            if (local_1e0 != (ulong *)0x0) {
joined_r0x00a74b00:
              if (puVar11 != puVar2) {
                puVar7 = (ulong *)puVar11[-4];
                puVar11 = puVar11 + -8;
                if (puVar11 != puVar7) goto code_r0x00a74b14;
                pcVar9 = *(code **)(*puVar7 + 0x20);
                goto LAB_00a74b2c;
              }
                    /* catch() { ... } // from try @ 00a7468c with catch @ 00a74b3c
                       catch() { ... } // from try @ 00a74718 with catch @ 00a74b3c
                       catch() { ... } // from try @ 00a74944 with catch @ 00a74b3c */
              puStack_1d8 = puVar2;
              operator_delete(local_1e0);
            }
            if (local_e0 == local_c0) {
              pcVar9 = *(code **)(*(long *)local_c0 + 0x20);
LAB_00a74b6c:
              (*pcVar9)();
            }
            else if (local_c0 != (PreloadCallbackParam *)0x0) {
              pcVar9 = *(code **)(*(long *)local_c0 + 0x28);
              goto LAB_00a74b6c;
            }
            std::__ndk1::mutex::unlock(this_01);
            pvVar12 = local_150;
            uVar4 = uStack_158;
            pTVar10 = *(ThreadPool **)(this + 0x160);
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_1e8 = (void *)0x0;
            local_200 = this;
            if ((local_160 & 1) == 0) {
                    /* try { // try from 00a74b94 to 00b74bef has its CatchHandler @ 00a74b94
                       catch() { ... } // from try @ 00a74b94 with catch @ 00a74b94
                       catch() { ... } // from try @ 00a74e24 with catch @ 00a74b94
                       catch() { ... } // from try @ 00a74eb4 with catch @ 00a74b94
                       catch() { ... } // from try @ 00a74fc4 with catch @ 00a74b94 */
              local_1e8 = local_150;
              uStack_1f0 = uStack_158;
              local_1f8 = local_160;
            }
            else {
              if (0xffffffffffffffef < uStack_158) {
LAB_00a74c8c:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uStack_158 < 0x17) {
                pvVar8 = (void *)((long)&local_1f8 + 1);
                local_1f8 = (ulong)(byte)((int)uStack_158 << 1);
                if (uStack_158 != 0) goto LAB_00a74bf4;
              }
              else {
                uVar13 = uStack_158 + 0x10 & 0xfffffffffffffff0;
                pvVar8 = operator_new(uVar13);
                local_1f8 = uVar13 | 1;
                uStack_1f0 = uVar4;
                    /* try { // try from 00a74bf0 to 00b74c07 has its CatchHandler @ 00a75128 */
                local_1e8 = pvVar8;
LAB_00a74bf4:
                memcpy(pvVar8,pvVar12,uVar4);
              }
              *(undefined1 *)((long)pvVar8 + uVar4) = 0;
            }
            pAVar3 = local_200;
                    /* try { // try from 00a74c10 to 00b74c1b has its CatchHandler @ 00a75124 */
            local_c0 = operator_new(0x28);
                    /* try { // try from 00a74c1c to 00b74c27 has its CatchHandler @ 00a75120 */
            *(undefined ***)local_c0 = &PTR_FUN_01c6f050;
            *(AudioPlayerProvider **)(local_c0 + 8) = pAVar3;
                    /* try { // try from 00a74c28 to 00b74c2f has its CatchHandler @ 00a75138 */
            *(void **)(local_c0 + 0x20) = local_1e8;
            *(ulong *)(local_c0 + 0x18) = uStack_1f0;
            *(ulong *)(local_c0 + 0x10) = local_1f8;
            uStack_1f0 = 0;
            local_1e8 = (void *)0x0;
            local_1f8 = 0;
            ThreadPool::pushTask(pTVar10,local_e0,0);
                    /* try { // try from 00a74c58 to 00b74c5f has its CatchHandler @ 00a750e8 */
            if (local_e0 == local_c0) {
              pcVar9 = *(code **)(*(long *)local_c0 + 0x20);
            }
            else {
              if (local_c0 == (PreloadCallbackParam *)0x0) goto joined_r0x00a74c7c;
                    /* try { // try from 00a74c64 to 00b74c7b has its CatchHandler @ 00a75054 */
              pcVar9 = *(code **)(*(long *)local_c0 + 0x28);
            }
            (*pcVar9)();
            goto joined_r0x00a74c7c;
          }
          PcmData::PcmData(aPStack_1c0,(PcmData *)(lVar5 + 0x28));
          local_e0[0] = (PreloadCallbackParam)0x1;
          plVar6 = *(long **)(param_2 + 0x20);
          if (plVar6 == (long *)0x0) goto LAB_00a74c88;
          (**(code **)(*plVar6 + 0x30))(plVar6,local_e0,aPStack_1c0);
          PcmData::~PcmData(aPStack_1c0);
        }
        else {
          local_c0 = (PreloadCallbackParam *)0x0;
                    /* try { // try from 00a7479c to 00b747a3 has its CatchHandler @ 00a74a60 */
          plVar6 = *(long **)(param_2 + 0x20);
                    /* try { // try from 00a747a4 to 00b74823 has its CatchHandler @ 00a745f8 */
          if (plVar6 == (long *)0x0) {
                    /* try { // try from 00a74824 to 00b7482b has its CatchHandler @ 00a74a50 */
            puStack_80 = (ulong *)0x0;
          }
          else if ((long *)param_2 == plVar6) {
                    /* try { // try from 00a7482c to 00b748ab has its CatchHandler @ 00a745f8 */
            puStack_80 = &local_a0;
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_a0);
          }
          else {
            puStack_80 = (ulong *)(**(code **)(*plVar6 + 0x10))();
          }
          FUN_00a76418(&local_a0,local_e0);
          if (&local_a0 == puStack_80) {
            pcVar9 = *(code **)(*puStack_80 + 0x20);
LAB_00a74878:
            (*pcVar9)();
          }
          else if (puStack_80 != (ulong *)0x0) {
            pcVar9 = *(code **)(*puStack_80 + 0x28);
            goto LAB_00a74878;
          }
          uVar4 = *(ulong *)(lVar5 + 0x30);
          if (uVar4 < *(ulong *)(lVar5 + 0x38)) {
            uVar13 = uVar4;
            if (local_c0 == (PreloadCallbackParam *)0x0) {
              *(undefined8 *)(uVar4 + 0x20) = 0;
              local_b0 = param_3;
            }
            else if (local_e0 == local_c0) {
              *(ulong *)(uVar4 + 0x20) = uVar4;
              local_b0 = param_3;
              (**(code **)(*(long *)local_c0 + 0x18))(local_c0,uVar4);
                    /* try { // try from 00a7490c to 00b7491b has its CatchHandler @ 00a74ab8 */
              uVar13 = *(ulong *)(lVar5 + 0x30);
            }
            else {
              *(PreloadCallbackParam **)(uVar4 + 0x20) = local_c0;
              local_c0 = (PreloadCallbackParam *)0x0;
              local_b0 = param_3;
            }
            *(undefined1 *)(uVar4 + 0x30) = local_b0;
            *(ulong *)(lVar5 + 0x30) = uVar13 + 0x40;
          }
          else {
                    /* try { // try from 00a748ac to 00b748b3 has its CatchHandler @ 00a74a40 */
            local_b0 = param_3;
                    /* try { // try from 00a748b4 to 00b748d7 has its CatchHandler @ 00a745f8 */
            std::__ndk1::
            vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>
            ::__push_back_slow_path<cocos2d::AudioPlayerProvider::PreloadCallbackParam>
                      ((vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>
                        *)(lVar5 + 0x28),local_e0);
          }
          if (local_e0 == local_c0) {
            pcVar9 = *(code **)(*(long *)local_c0 + 0x20);
          }
          else {
            if (local_c0 == (PreloadCallbackParam *)0x0) goto LAB_00a74948;
            pcVar9 = *(code **)(*(long *)local_c0 + 0x28);
          }
                    /* try { // try from 00a74944 to 00b74953 has its CatchHandler @ 00a74b3c */
          (*pcVar9)();
        }
LAB_00a74948:
        std::__ndk1::mutex::unlock(this_01);
      }
      else {
        PcmData::PcmData(aPStack_190,(PcmData *)(lVar5 + 0x28));
        local_e0[0] = (PreloadCallbackParam)0x1;
        plVar6 = *(long **)(param_2 + 0x20);
        if (plVar6 == (long *)0x0) {
LAB_00a74c88:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a74c88 to 00b74c93 has its CatchHandler @ 00a7503c */
          FUN_008589d0();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,local_e0,aPStack_190);
        PcmData::~PcmData(aPStack_190);
      }
joined_r0x00a74c7c:
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      goto LAB_00a74668;
    }
    PcmData::PcmData(aPStack_230,aPStack_110);
    local_e0[0] = (PreloadCallbackParam)0x1;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_00a74c88;
                    /* try { // try from 00a74654 to 00b7466b has its CatchHandler @ 00a74b2c */
    (**(code **)(*plVar6 + 0x30))(plVar6,local_e0,aPStack_230);
  }
  PcmData::~PcmData(this_02);
LAB_00a74668:
  PcmData::~PcmData(aPStack_110);
                    /* try { // try from 00a74674 to 00b7467f has its CatchHandler @ 00a74adc */
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00a74680 to 00b7468b has its CatchHandler @ 00a74ad8 */
                    /* try { // try from 00a7468c to 00b74693 has its CatchHandler @ 00a74b3c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00a74aac:
  if (puVar7 != (ulong *)0x0) {
    pcVar9 = *(code **)(*puVar7 + 0x28);
                    /* catch() { ... } // from try @ 00a7490c with catch @ 00a74ab8 */
LAB_00a74ac4:
    (*pcVar9)();
  }
  goto joined_r0x00a74a98;
code_r0x00a74b14:
  if (puVar7 != (ulong *)0x0) {
    pcVar9 = *(code **)(*puVar7 + 0x28);
LAB_00a74b2c:
                    /* catch() { ... } // from try @ 00a74654 with catch @ 00a74b2c */
    (*pcVar9)();
  }
  goto joined_r0x00a74b00;
}

