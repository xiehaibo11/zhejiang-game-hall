
/* cocos2d::experimental::AudioEngine::play2d(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, float,
   cocos2d::experimental::AudioProfile const*) */

void cocos2d::experimental::AudioEngine::play2d
               (basic_string *param_1,bool param_2,float param_3,AudioProfile *param_4)

{
  AudioProfile *pAVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  AudioEngineImpl *this;
  long lVar6;
  char *pcVar7;
  basic_string bVar8;
  long lVar9;
  basic_string *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  int local_8c [3];
  AudioProfile *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_8c[0] = -1;
  if (_isEnabled == '\0') goto LAB_00e68944;
  if (_audioEngineImpl == (AudioEngineImpl *)0x0) {
    this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
    if (this == (AudioEngineImpl *)0x0) {
      _audioEngineImpl = (AudioEngineImpl *)0x0;
      goto LAB_00e68944;
    }
    AudioEngineImpl::AudioEngineImpl(this);
    _audioEngineImpl = this;
    uVar5 = AudioEngineImpl::init(this);
    if ((uVar5 & 1) == 0) {
      if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
        (**(code **)(*(long *)_audioEngineImpl + 8))();
      }
      _audioEngineImpl = (AudioEngineImpl *)0x0;
      goto LAB_00e68944;
    }
  }
  plVar4 = (long *)FileUtils::getInstance();
  uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1);
  if ((uVar5 & 1) == 0) goto LAB_00e68944;
  this_00 = _defaultProfileHelper;
  if ((param_4 != (AudioProfile *)0x0) &&
     (_defaultProfileHelper !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4)) {
    if (((byte)*param_4 & 1) == 0) {
      if ((byte)*param_4 >> 1 == 0) {
LAB_00e686fc:
        __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/audio/android/../AudioEngine.cpp"
                            ,"play2d",0xd2);
      }
    }
    else if (*(long *)(param_4 + 8) == 0) goto LAB_00e686fc;
    local_80 = param_4;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::AudioEngine::ProfileHelper>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::AudioEngine::ProfileHelper>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::AudioEngine::ProfileHelper>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::AudioEngine::ProfileHelper>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)_audioPathProfileHelperMap,(piecewise_construct_t *)param_4,
                       (tuple *)&DAT_01426e0c,(tuple *)&local_80);
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar6 + 0x28);
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
      uVar5 = *(ulong *)(param_4 + 8);
      pAVar1 = *(AudioProfile **)(param_4 + 0x10);
      if (((byte)*param_4 & 1) == 0) {
        pAVar1 = param_4 + 1;
        uVar5 = (ulong)((byte)*param_4 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pAVar1,uVar5);
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(lVar6 + 0x40) = uVar12;
  }
  if (DAT_0178f2e0 < _maxInstances) {
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      if ((*(uint *)(this_00 + 0x18) != 0) &&
         ((ulong)*(uint *)(this_00 + 0x18) <= *(ulong *)(this_00 + 0x38))) {
        bVar8 = *param_1;
        pbVar10 = *(basic_string **)(param_1 + 0x10);
        pcVar7 = "Fail to play %s cause by limited max instance of AudioProfile";
        goto LAB_00e68938;
      }
      if (0.0001 < *(double *)(this_00 + 0x20)) {
        dVar11 = (double)utils::gettime();
        if ((0.0001 < *(double *)(this_00 + 0x40)) &&
           (dVar11 - *(double *)(this_00 + 0x40) <= *(double *)(this_00 + 0x20))) {
          bVar8 = *param_1;
          pbVar10 = *(basic_string **)(param_1 + 0x10);
          pcVar7 = "Fail to play %s cause by limited minimum delay";
          goto LAB_00e68938;
        }
      }
    }
    fVar13 = 0.0;
    if ((0.0 <= param_3) && (fVar13 = param_3, 1.0 < param_3)) {
      fVar13 = 1.0;
    }
    iVar3 = AudioEngineImpl::play2d(_audioEngineImpl,param_1,param_2,fVar13);
    local_8c[0] = iVar3;
    if (iVar3 != -1) {
      local_80 = (AudioProfile *)param_1;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)&_audioPathIDMap,(piecewise_construct_t *)param_1,
                         (tuple *)&DAT_01426e0c,(tuple *)&local_80);
      plVar4 = operator_new(0x18);
      *(int *)(plVar4 + 2) = iVar3;
      plVar4[1] = lVar6 + 0x28;
      lVar9 = *(long *)(lVar6 + 0x28);
      *plVar4 = lVar9;
      *(long **)(lVar9 + 8) = plVar4;
      *(long **)(lVar6 + 0x28) = plVar4;
      *(long *)(lVar6 + 0x38) = *(long *)(lVar6 + 0x38) + 1;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                          *)&_audioPathIDMap,param_1);
      local_80 = (AudioProfile *)local_8c;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)&_audioIDInfoMap,(piecewise_construct_t *)local_8c,
                         (tuple *)&DAT_01426e0c,(tuple *)&local_80);
      *(float *)(lVar9 + 0x28) = fVar13;
      *(bool *)(lVar9 + 0x2c) = param_2;
      *(long *)(lVar9 + 0x18) = lVar6 + 0x10;
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
        uVar12 = utils::gettime();
        *(undefined8 *)(this_00 + 0x40) = uVar12;
        plVar4 = operator_new(0x18);
        plVar4[1] = (long)(this_00 + 0x28);
        *(int *)(plVar4 + 2) = local_8c[0];
        lVar6 = *(long *)(this_00 + 0x28);
        *plVar4 = lVar6;
        *(long **)(lVar6 + 8) = plVar4;
        *(long **)(this_00 + 0x28) = plVar4;
        *(long *)(this_00 + 0x38) = *(long *)(this_00 + 0x38) + 1;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (lVar9 + 0x20) = this_00;
    }
  }
  else {
    bVar8 = *param_1;
    pbVar10 = *(basic_string **)(param_1 + 0x10);
    pcVar7 = "Fail to play %s cause by limited max instance of AudioEngine";
LAB_00e68938:
    if (((byte)bVar8 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    log(pcVar7,pbVar10);
  }
LAB_00e68944:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8c[0]);
  }
  return;
}

