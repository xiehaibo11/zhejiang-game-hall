
/* cocos2d::TextureCache::addImageAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Texture2D*)> const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::TextureCache::addImageAsync
          (TextureCache *this,basic_string *param_1,function *param_2,basic_string *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  AsyncStruct *this_00;
  int iVar6;
  long lVar7;
  ulong uVar8;
  TextureCache *local_78;
  code *local_70;
  undefined8 uStack_68;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00fef44c to 010ef44f has its CatchHandler @ 00fef46c */
                    /* try { // try from 00fef450 to 010ef4c3 has its CatchHandler @ 00fef390 */
  plVar2 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 00fef44c with catch @ 00fef46c */
  (**(code **)(*plVar2 + 0x50))(local_60,plVar2,param_1);
                    /* catch() { ... } // from try @ 00fef3e8 with catch @ 00fef470 */
                    /* catch() { ... } // from try @ 00fef3dc with catch @ 00fef478 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                      *)(this + 0x148),local_60);
                    /* catch() { ... } // from try @ 00fef3d0 with catch @ 00fef480 */
  if ((lVar3 == 0) || (*(code **)(lVar3 + 0x28) == (code *)0x0)) {
    uVar4 = (ulong)((byte)local_60[0] >> 1);
    if (((byte)local_60[0] & 1) != 0) {
      uVar4 = local_58;
    }
    if (uVar4 != 0) {
      plVar2 = (long *)FileUtils::getInstance();
      uVar4 = (**(code **)(*plVar2 + 0x128))(plVar2,local_60);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(this + 0x28) == 0) {
          this[0x140] = (TextureCache)0x0;
          pvVar5 = operator_new(8,(nothrow_t *)&std::nothrow);
          if (pvVar5 != (void *)0x0) {
            uStack_68 = 0;
            local_70 = loadImage;
            local_78 = this;
            FUN_00fef9b0(pvVar5,&local_70,&local_78);
          }
          *(void **)(this + 0x28) = pvVar5;
          iVar6 = *(int *)(this + 0x144);
        }
        else {
          iVar6 = *(int *)(this + 0x144);
        }
        if (iVar6 == 0) {
                    /* try { // try from 00fef590 to 010ef5ff has its CatchHandler @ 00fef590
                       catch() { ... } // from try @ 00fef590 with catch @ 00fef590
                       catch() { ... } // from try @ 00fef60c with catch @ 00fef590 */
          lVar3 = Director::getInstance();
          Scheduler::schedule(*(Scheduler **)(lVar3 + 0xa0),addImageAsyncCallBack,(Ref *)0x0,0.0,
                              SUB81(this,0));
          iVar6 = *(int *)(this + 0x144);
        }
        *(int *)(this + 0x144) = iVar6 + 1;
        this_00 = operator_new(0x350,(nothrow_t *)&std::nothrow);
        if (this_00 != (AsyncStruct *)0x0) {
          AsyncStruct::AsyncStruct(this_00,local_60,param_2,param_3);
        }
        lVar3 = *(long *)(this + 0x38);
        lVar7 = *(long *)(this + 0x58);
                    /* try { // try from 00fef600 to 010ef60b has its CatchHandler @ 00fef660 */
        uVar4 = 0;
        if (*(long *)(this + 0x40) - lVar3 != 0) {
          uVar4 = (*(long *)(this + 0x40) - lVar3) * 0x40 - 1;
        }
        uVar8 = lVar7 + *(long *)(this + 0x50);
                    /* try { // try from 00fef60c to 010ef673 has its CatchHandler @ 00fef590 */
        if (uVar4 == uVar8) {
          std::__ndk1::
          deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
          ::__add_back_capacity
                    ((deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                      *)(this + 0x30));
          lVar7 = *(long *)(this + 0x58);
          lVar3 = *(long *)(this + 0x38);
          uVar8 = *(long *)(this + 0x50) + lVar7;
        }
        *(AsyncStruct **)(*(long *)(lVar3 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8)
             = this_00;
        *(long *)(this + 0x58) = lVar7 + 1;
        std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
        lVar3 = *(long *)(this + 0x68);
        lVar7 = *(long *)(this + 0x88);
                    /* catch() { ... } // from try @ 00fef600 with catch @ 00fef660 */
        uVar4 = 0;
        if (*(long *)(this + 0x70) - lVar3 != 0) {
          uVar4 = (*(long *)(this + 0x70) - lVar3) * 0x40 - 1;
        }
        uVar8 = lVar7 + *(long *)(this + 0x80);
        if (uVar4 == uVar8) {
                    /* try { // try from 00fef674 to 010ef763 has its CatchHandler @ 00fef674
                       catch() { ... } // from try @ 00fef674 with catch @ 00fef674
                       catch() { ... } // from try @ 00fef794 with catch @ 00fef674 */
          std::__ndk1::
          deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
          ::__add_back_capacity
                    ((deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                      *)(this + 0x60));
          lVar7 = *(long *)(this + 0x88);
          lVar3 = *(long *)(this + 0x68);
          uVar8 = *(long *)(this + 0x80) + lVar7;
        }
        *(AsyncStruct **)(*(long *)(lVar3 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8)
             = this_00;
        *(long *)(this + 0x88) = lVar7 + 1;
        std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x110));
        std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
        goto joined_r0x00fef6b4;
      }
    }
                    /* try { // try from 00fef4ec to 010ef4ff has its CatchHandler @ 00fef530 */
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_70 = (code *)0x0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_70);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00fef3c4 with catch @ 00fef488 */
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00fef3f4 with catch @ 00fef490 */
      local_70 = *(code **)(lVar3 + 0x28);
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_70);
    }
  }
joined_r0x00fef6b4:
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fef4ec with catch @ 00fef530
                        */
  return;
}

