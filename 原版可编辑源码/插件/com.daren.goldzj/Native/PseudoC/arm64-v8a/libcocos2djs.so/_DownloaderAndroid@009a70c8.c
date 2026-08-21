
/* cocos2d::network::DownloaderAndroid::~DownloaderAndroid() */

void __thiscall cocos2d::network::DownloaderAndroid::~DownloaderAndroid(DownloaderAndroid *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  DownloaderAndroid *pDVar5;
  code *pcVar6;
  void *pvVar7;
  _jclass *local_58;
  _jmethodID *p_Stack_50;
  undefined8 local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__DownloaderAndroid_01c6a8e0;
  if (*(long *)(this + 0x78) != 0) {
                    /* try { // try from 009a7104 to 00aa7127 has its CatchHandler @ 009a72a8 */
    uVar3 = JniHelper::getStaticMethodInfo
                      ((JniMethodInfo_ *)&local_58,"org/cocos2dx/lib/Cocos2dxDownloader",
                       "cancelAllRequests","(Lorg/cocos2dx/lib/Cocos2dxDownloader;)V");
    if ((uVar3 & 1) != 0) {
      _JNIEnv::CallStaticVoidMethod(local_58,p_Stack_50,local_48,*(undefined8 *)(this + 0x78));
      (**(code **)(*(long *)local_58 + 0xb8))(local_58,p_Stack_50);
    }
                    /* try { // try from 009a7148 to 00aa7157 has its CatchHandler @ 009a72ec */
    local_3c = *(int *)(this + 0x70);
    std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
                    /* try { // try from 009a7168 to 00aa71ab has its CatchHandler @ 009a7324 */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
    ::__erase_unique<int>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
                *)&sDownloaderMap,&local_3c);
    std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
    plVar4 = (long *)JniHelper::getEnv();
    (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined8 *)(this + 0x78));
  }
  puVar2 = *(void **)(this + 0x90);
  while (puVar2 != (void *)0x0) {
    pvVar7 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar7;
  }
  pvVar7 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  pDVar5 = *(DownloaderAndroid **)(this + 0x60);
                    /* try { // try from 009a71c4 to 00aa71ef has its CatchHandler @ 009a72f8 */
  *(undefined ***)this = &PTR__IDownloaderImpl_01c6a938;
  if (this + 0x40 == pDVar5) {
    pcVar6 = *(code **)(*(long *)pDVar5 + 0x20);
LAB_009a71ec:
    (*pcVar6)();
  }
  else if (pDVar5 != (DownloaderAndroid *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar5 + 0x28);
    goto LAB_009a71ec;
  }
                    /* try { // try from 009a71f0 to 00aa71f7 has its CatchHandler @ 009a72e8 */
  pDVar5 = *(DownloaderAndroid **)(this + 0x30);
                    /* try { // try from 009a71f8 to 00aa7227 has its CatchHandler @ 009a7300 */
  if (this + 0x10 == pDVar5) {
    pcVar6 = *(code **)(*(long *)pDVar5 + 0x20);
  }
  else {
    if (pDVar5 == (DownloaderAndroid *)0x0) goto LAB_009a721c;
    pcVar6 = *(code **)(*(long *)pDVar5 + 0x28);
  }
  (*pcVar6)();
LAB_009a721c:
                    /* try { // try from 009a7228 to 00aa738b has its CatchHandler @ 009a6fb4 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

