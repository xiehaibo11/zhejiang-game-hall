
/* cocos2d::AudioEngine::play2d(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, float, cocos2d::AudioProfile const*) */

void cocos2d::AudioEngine::play2d
               (basic_string *param_1,bool param_2,float param_3,AudioProfile *param_4)

{
  AudioProfile *pAVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  basic_string bVar8;
  long lVar9;
  basic_string *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  int local_8c [3];
  AudioProfile *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_8c[0] = -1;
                    /* try { // try from 00a6d598 to 00b6d5bf has its CatchHandler @ 00a6d6dc */
  if ((_isEnabled == '\0') || (uVar4 = lazyInit(), (uVar4 & 1) == 0)) goto LAB_00a6d840;
  plVar5 = (long *)FileUtils::getInstance();
  uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5,param_1);
  if ((uVar4 & 1) == 0) goto LAB_00a6d840;
  this = _defaultProfileHelper;
  if ((param_4 != (AudioProfile *)0x0) &&
     (_defaultProfileHelper !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4)) {
    if (((byte)*param_4 & 1) == 0) {
      if ((byte)*param_4 >> 1 == 0) {
LAB_00a6d5f0:
                    /* try { // try from 00a6d610 to 00b6d627 has its CatchHandler @ 00a6d728 */
        __android_log_print(6,"assert","%s function:%s line:%d",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/audio/android/../AudioEngine.cpp"
                            ,"play2d",0xe8);
      }
    }
    else if (*(long *)(param_4 + 8) == 0) goto LAB_00a6d5f0;
                    /* try { // try from 00a6d628 to 00b6d62f has its CatchHandler @ 00a6d6fc */
                    /* try { // try from 00a6d630 to 00b6d65f has its CatchHandler @ 00a6d704 */
    local_80 = param_4;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)_audioPathProfileHelperMap,(piecewise_construct_t *)param_4,
                       (tuple *)&DAT_0189b62a,(tuple *)&local_80);
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar6 + 0x28);
    if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_4) {
      uVar4 = *(ulong *)(param_4 + 8);
      pAVar1 = *(AudioProfile **)(param_4 + 0x10);
                    /* try { // try from 00a6d660 to 00b6d77f has its CatchHandler @ 00a6d4ac */
      if (((byte)*param_4 & 1) == 0) {
        pAVar1 = param_4 + 1;
        uVar4 = (ulong)((byte)*param_4 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,(char *)pAVar1,uVar4);
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(lVar6 + 0x40) = uVar12;
  }
  if (DAT_01d38cd0 < _maxInstances) {
    if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
      if ((*(uint *)(this + 0x18) != 0) &&
         ((ulong)*(uint *)(this + 0x18) <= *(ulong *)(this + 0x38))) {
        bVar8 = *param_1;
        pbVar10 = *(basic_string **)(param_1 + 0x10);
        pcVar7 = "Fail to play %s cause by limited max instance of AudioProfile";
        goto LAB_00a6d834;
      }
      if (0.0001 < *(double *)(this + 0x20)) {
        dVar11 = (double)utils::gettime();
                    /* catch() { ... } // from try @ 00a6d598 with catch @ 00a6d6dc */
        if ((0.0001 < *(double *)(this + 0x40)) &&
           (dVar11 - *(double *)(this + 0x40) <= *(double *)(this + 0x20))) {
          bVar8 = *param_1;
          pbVar10 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a6d898 to 00b6d8a7 has its CatchHandler @ 00a6d9f8 */
          pcVar7 = "Fail to play %s cause by limited minimum delay";
          goto LAB_00a6d834;
        }
      }
    }
    fVar13 = 0.0;
                    /* catch() { ... } // from try @ 00a6d628 with catch @ 00a6d6fc */
    if ((0.0 <= param_3) && (fVar13 = param_3, 1.0 < param_3)) {
                    /* catch() { ... } // from try @ 00a6d53c with catch @ 00a6d700 */
      fVar13 = 1.0;
    }
                    /* catch() { ... } // from try @ 00a6d630 with catch @ 00a6d704 */
                    /* catch() { ... } // from try @ 00a6d528 with catch @ 00a6d714 */
                    /* catch() { ... } // from try @ 00a6d4fc with catch @ 00a6d718 */
    iVar3 = AudioEngineImpl::play2d(_audioEngineImpl,param_1,param_2,fVar13);
    local_8c[0] = iVar3;
                    /* catch() { ... } // from try @ 00a6d610 with catch @ 00a6d728 */
    if (iVar3 != -1) {
      local_80 = (AudioProfile *)param_1;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)&_audioPathIDMap,(piecewise_construct_t *)param_1,
                         (tuple *)&DAT_0189b62a,(tuple *)&local_80);
      plVar5 = operator_new(0x18);
      *(int *)(plVar5 + 2) = iVar3;
      plVar5[1] = lVar6 + 0x28;
      lVar9 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00a6d780 to 00b6d7c3 has its CatchHandler @ 00a6d780
                       catch() { ... } // from try @ 00a6d780 with catch @ 00a6d780
                       catch() { ... } // from try @ 00a6d7fc with catch @ 00a6d780 */
      *plVar5 = lVar9;
      *(long **)(lVar9 + 8) = plVar5;
      *(long **)(lVar6 + 0x28) = plVar5;
      *(long *)(lVar6 + 0x38) = *(long *)(lVar6 + 0x38) + 1;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                          *)&_audioPathIDMap,param_1);
      local_80 = (AudioProfile *)local_8c;
                    /* try { // try from 00a6d7c4 to 00b6d7fb has its CatchHandler @ 00a6d82c */
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)&_audioIDInfoMap,(piecewise_construct_t *)local_8c,
                         (tuple *)&DAT_0189b62a,(tuple *)&local_80);
      *(float *)(lVar9 + 0x28) = fVar13;
      *(bool *)(lVar9 + 0x2c) = param_2;
      *(long *)(lVar9 + 0x18) = lVar6 + 0x10;
      if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
        uVar12 = utils::gettime();
        *(undefined8 *)(this + 0x40) = uVar12;
        plVar5 = operator_new(0x18);
        plVar5[1] = (long)(this + 0x28);
                    /* try { // try from 00a6d7fc to 00b6d83f has its CatchHandler @ 00a6d780 */
        *(int *)(plVar5 + 2) = local_8c[0];
        lVar6 = *(long *)(this + 0x28);
        *plVar5 = lVar6;
        *(long **)(lVar6 + 8) = plVar5;
        *(long **)(this + 0x28) = plVar5;
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (lVar9 + 0x20) = this;
    }
  }
  else {
    bVar8 = *param_1;
    pbVar10 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a6d7c4 with catch @ 00a6d82c */
    pcVar7 = "Fail to play %s cause by limited max instance of AudioEngine";
LAB_00a6d834:
    if (((byte)bVar8 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    log(pcVar7,pbVar10);
  }
LAB_00a6d840:
                    /* catch() { ... } // from try @ 00a6d8a8 with catch @ 00a6d840 */
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8c[0]);
  }
  return;
}

