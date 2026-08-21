
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_22(void)

{
  DAT_01d37fb8 = 0;
  sDownloaderMap = 0;
  uRam0000000001d37fc8 = 0;
  _DAT_01d37fc0 = 0;
  _DAT_01d37fd0 = 0x3f800000;
  __cxa_atexit(std::__ndk1::
               unordered_map<int,cocos2d::network::DownloaderAndroid*,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::network::DownloaderAndroid*>>>
               ::~unordered_map,&sDownloaderMap,&PTR_LOOP_01d1b000);
  __cxa_atexit(std::__ndk1::mutex::~mutex,sDownloaderMutex,&PTR_LOOP_01d1b000);
  return;
}

