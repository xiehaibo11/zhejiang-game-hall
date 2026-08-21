
/* cocos2d::experimental::AudioPlayerProvider::~AudioPlayerProvider() */

void __thiscall
cocos2d::experimental::AudioPlayerProvider::~AudioPlayerProvider(AudioPlayerProvider *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  AudioPlayerProvider *pAVar3;
  code *UNRECOVERED_JUMPTABLE;
  AudioMixerController *this_00;
  ThreadPool *this_01;
  
  *(undefined ***)this = &PTR__AudioPlayerProvider_016f3a88;
  UrlAudioPlayer::stopAll();
  if (*(long **)(this + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x150) + 8))();
    *(undefined8 *)(this + 0x150) = 0;
  }
  this_00 = *(AudioMixerController **)(this + 0x158);
  if (this_00 != (AudioMixerController *)0x0) {
    AudioMixerController::~AudioMixerController(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 0x158) = 0;
  }
  this_01 = *(ThreadPool **)(this + 0x160);
  if (this_01 != (ThreadPool *)0x0) {
    ThreadPool::~ThreadPool(this_01);
    operator_delete(this_01);
    *(undefined8 *)(this + 0x160) = 0;
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x120));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xf8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xd0));
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>>>>
                       *)(this + 0xa8),*(__hash_node_base **)(this + 0xb8));
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x80));
  puVar1 = *(void **)(this + 0x68);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    PcmData::~PcmData((PcmData *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x58);
  *(undefined8 *)(this + 0x58) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pAVar3 = *(AudioPlayerProvider **)(this + 0x40);
  if (this + 0x20 == pAVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pAVar3 + 0x20);
  }
  else {
    if (pAVar3 == (AudioPlayerProvider *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pAVar3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00e6b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

