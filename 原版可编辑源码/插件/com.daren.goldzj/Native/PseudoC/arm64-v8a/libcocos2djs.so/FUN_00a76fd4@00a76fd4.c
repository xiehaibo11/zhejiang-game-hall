
void FUN_00a76fd4(long param_1)

{
  basic_string *pbVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  void *__src;
  undefined1 uVar7;
  void *__dest;
  ulong uVar8;
  long lVar9;
  long lVar10;
  PcmData aPStack_130 [48];
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  PcmData aPStack_e8 [56];
  AudioDecoder *local_b0;
  PcmData aPStack_a8 [52];
  undefined1 local_74 [4];
  long local_70;
  
                    /* try { // try from 00a76fdc to 00b76fe3 has its CatchHandler @ 00a771ec */
                    /* try { // try from 00a76ff0 to 00b77013 has its CatchHandler @ 00a771e8 */
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  cocos2d::PcmData::PcmData(aPStack_a8);
  pbVar1 = (basic_string *)(param_1 + 0x10);
  local_b0 = (AudioDecoder *)
             cocos2d::AudioDecoderProvider::createAudioDecoder
                       (*(SLEngineItf_ ***)(lVar10 + 8),pbVar1,*(int *)(lVar10 + 0x1c),
                        *(int *)(lVar10 + 0x18),(function *)(lVar10 + 0x20));
                    /* try { // try from 00a77028 to 00b7708f has its CatchHandler @ 00a7721c */
  if ((local_b0 == (AudioDecoder *)0x0) ||
     (uVar4 = cocos2d::AudioDecoder::start(local_b0), (uVar4 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x20);
                    /* try { // try from 00a77094 to 00b770d7 has its CatchHandler @ 00a771ec */
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      lVar5 = param_1 + 0x11;
    }
    __android_log_print(6,"AudioPlayerProvider","decode (%s) failed!",lVar5);
    uVar7 = 0;
    goto LAB_00a77168;
  }
  cocos2d::PcmData::PcmData((PcmData *)&local_100,(PcmData *)(local_b0 + 0x20));
  cocos2d::PcmData::operator=(aPStack_a8,(PcmData *)&local_100);
  cocos2d::PcmData::~PcmData((PcmData *)&local_100);
  std::__ndk1::mutex::lock((mutex *)(lVar10 + 0x80));
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (((byte)*pbVar1 & 1) == 0) {
    local_f0 = *(void **)(param_1 + 0x20);
    uStack_f8 = *(ulong *)(param_1 + 0x18);
    local_100 = *(ulong *)pbVar1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x18);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x20);
    if (uVar4 < 0x17) {
                    /* try { // try from 00a770dc to 00b7711f has its CatchHandler @ 00a771e8 */
      __dest = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00a7710c;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      local_100 = uVar8 | 1;
      uStack_f8 = uVar4;
      local_f0 = __dest;
LAB_00a7710c:
      memcpy(__dest,__src,uVar4);
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
  }
  cocos2d::PcmData::PcmData(aPStack_e8,aPStack_a8);
                    /* try { // try from 00a77138 to 00b77173 has its CatchHandler @ 00a7721c */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>
            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
              *)(lVar10 + 0x58),(basic_string *)&local_100,(pair *)&local_100);
  cocos2d::PcmData::~PcmData(aPStack_e8);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  std::__ndk1::mutex::unlock((mutex *)(lVar10 + 0x80));
  uVar7 = 1;
LAB_00a77168:
  std::__ndk1::mutex::lock((mutex *)(lVar10 + 0xd0));
                    /* try { // try from 00a77174 to 00b77273 has its CatchHandler @ 00a76f1c */
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
                      *)(lVar10 + 0xa8),pbVar1);
  if (lVar5 != 0) {
    cocos2d::PcmData::PcmData((PcmData *)&local_100,(PcmData *)(local_b0 + 0x20));
    lVar9 = *(long *)(lVar5 + 0x28);
    lVar2 = *(long *)(lVar5 + 0x30);
    if (lVar9 != lVar2) {
      do {
        cocos2d::PcmData::PcmData(aPStack_130,(PcmData *)&local_100);
        plVar6 = *(long **)(lVar9 + 0x20);
        local_74[0] = uVar7;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,local_74,aPStack_130);
        cocos2d::PcmData::~PcmData(aPStack_130);
        if (*(char *)(lVar9 + 0x30) != '\0') {
                    /* catch() { ... } // from try @ 00a76ff0 with catch @ 00a771e8
                       catch() { ... } // from try @ 00a770dc with catch @ 00a771e8 */
                    /* catch() { ... } // from try @ 00a76fdc with catch @ 00a771ec
                       catch() { ... } // from try @ 00a77094 with catch @ 00a771ec */
          std::__ndk1::condition_variable::notify_one((condition_variable *)(lVar10 + 0x120));
        }
        lVar9 = lVar9 + 0x40;
      } while (lVar2 != lVar9);
    }
                    /* catch() { ... } // from try @ 00a76f9c with catch @ 00a77204 */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
    ::erase((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
             *)(lVar10 + 0xa8),lVar5);
                    /* catch() { ... } // from try @ 00a76f90 with catch @ 00a77208 */
                    /* catch() { ... } // from try @ 00a76f70 with catch @ 00a7720c */
    cocos2d::PcmData::~PcmData((PcmData *)&local_100);
  }
  cocos2d::AudioDecoderProvider::destroyAudioDecoder(&local_b0);
                    /* catch() { ... } // from try @ 00a76fa8 with catch @ 00a7721c
                       catch() { ... } // from try @ 00a77028 with catch @ 00a7721c
                       catch() { ... } // from try @ 00a77138 with catch @ 00a7721c */
  std::__ndk1::mutex::unlock((mutex *)(lVar10 + 0xd0));
  cocos2d::PcmData::~PcmData(aPStack_a8);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

