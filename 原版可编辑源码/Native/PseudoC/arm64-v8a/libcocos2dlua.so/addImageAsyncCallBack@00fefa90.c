
/* cocos2d::TextureCache::addImageAsyncCallBack(float) */

void cocos2d::TextureCache::addImageAsyncCallBack(float param_1)

{
  mutex *this;
  long lVar1;
  undefined4 uVar2;
  long in_x0;
  long *plVar3;
  basic_string *pbVar4;
  Texture2D *pTVar5;
  TextureCache *this_00;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  basic_string *pbVar9;
  Texture2D *local_78;
  Ref *local_70;
  long local_68;
  
                    /* try { // try from 00fefaa0 to 010efaab has its CatchHandler @ 00fefb3c */
                    /* try { // try from 00fefab0 to 010efabf has its CatchHandler @ 00fefb2c */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (mutex *)(in_x0 + 0xe8);
                    /* try { // try from 00fefac0 to 010efb53 has its CatchHandler @ 00fefa28 */
  local_78 = (Texture2D *)0x0;
  std::__ndk1::mutex::lock(this);
  lVar6 = *(long *)(in_x0 + 0xb8);
  if (lVar6 != 0) {
    do {
      uVar8 = *(ulong *)(in_x0 + 0xb0);
                    /* catch() { ... } // from try @ 00fefab0 with catch @ 00fefb2c */
                    /* catch() { ... } // from try @ 00fefaa0 with catch @ 00fefb3c */
                    /* catch() { ... } // from try @ 00fefa74 with catch @ 00fefb40 */
      pbVar9 = *(basic_string **)
                (*(long *)((long)*(undefined8 **)(in_x0 + 0x98) + (uVar8 >> 6 & 0x3fffffffffffff8))
                + (uVar8 & 0x1ff) * 8);
      *(ulong *)(in_x0 + 0xb0) = uVar8 + 1;
      *(long *)(in_x0 + 0xb8) = lVar6 + -1;
      if (0x3ff < uVar8 + 1) {
        operator_delete((void *)**(undefined8 **)(in_x0 + 0x98));
        *(long *)(in_x0 + 0x98) = *(long *)(in_x0 + 0x98) + 8;
        *(long *)(in_x0 + 0xb0) = *(long *)(in_x0 + 0xb0) + -0x200;
      }
      uVar8 = *(ulong *)(in_x0 + 0x50);
      if (pbVar9 != *(basic_string **)
                     (*(long *)(*(long *)(in_x0 + 0x38) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                     (uVar8 & 0x1ff) * 8)) {
        __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCTextureCache.cpp"
                            ,"addImageAsyncCallBack",0x14a);
        uVar8 = *(ulong *)(in_x0 + 0x50);
      }
      *(ulong *)(in_x0 + 0x50) = uVar8 + 1;
      *(long *)(in_x0 + 0x58) = *(long *)(in_x0 + 0x58) + -1;
                    /* try { // try from 00fefbd0 to 010efc43 has its CatchHandler @ 00fefbd0
                       catch() { ... } // from try @ 00fefbd0 with catch @ 00fefbd0
                       catch() { ... } // from try @ 00fefc84 with catch @ 00fefbd0 */
      if (0x3ff < uVar8 + 1) {
        operator_delete((void *)**(undefined8 **)(in_x0 + 0x38));
        *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + 8;
        *(long *)(in_x0 + 0x50) = *(long *)(in_x0 + 0x50) + -0x200;
      }
      std::__ndk1::mutex::unlock(this);
      if (pbVar9 == (basic_string *)0x0) goto LAB_00fefde0;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                          *)(in_x0 + 0x148),pbVar9);
      if (lVar6 == 0) {
        if (pbVar9[0x34c] == (basic_string)0x0) {
          local_78 = (Texture2D *)0x0;
          plVar3 = *(long **)(pbVar9 + 0x40);
        }
        else {
                    /* try { // try from 00fefc84 to 010efd1f has its CatchHandler @ 00fefbd0 */
          pTVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow);
          if (pTVar5 != (Texture2D *)0x0) {
            Texture2D::Texture2D(pTVar5);
          }
          local_78 = pTVar5;
          this_00 = (TextureCache *)
                    Texture2D::initWithImage
                              (pTVar5,(Image *)(pbVar9 + 0x68),*(undefined4 *)(pbVar9 + 0x348));
          parseNinePatchImage(this_00,(Image *)(pbVar9 + 0x68),local_78,pbVar9);
          pTVar5 = local_78;
          if (VolatileTextureMgr::_isReloading == '\0') {
            lVar6 = VolatileTextureMgr::findVolotileTexture(local_78);
            *(undefined4 *)(lVar6 + 0x10) = 1;
                    /* catch() { ... } // from try @ 00fefc74 with catch @ 00fefcfc */
            if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (lVar6 + 0x30) !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                pbVar9) {
              uVar8 = *(ulong *)(pbVar9 + 8);
              pbVar4 = *(basic_string **)(pbVar9 + 0x10);
                    /* catch() { ... } // from try @ 00fefc44 with catch @ 00fefd0c */
              if (((byte)*pbVar9 & 1) == 0) {
                pbVar4 = pbVar9 + 1;
                uVar8 = (ulong)((byte)*pbVar9 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(lVar6 + 0x30),(char *)pbVar4,uVar8);
            }
            uVar2 = Texture2D::getPixelFormat(pTVar5);
            *(undefined4 *)(lVar6 + 0x2c) = uVar2;
          }
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Texture2D*&>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                      *)(in_x0 + 0x148),pbVar9,pbVar9,&local_78);
          Ref::retain((Ref *)local_78);
          Ref::autorelease((Ref *)local_78);
          if ((*(int *)(pbVar9 + 0x21c) != 5) ||
             (pTVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow), pTVar5 == (Texture2D *)0x0))
          goto LAB_00fefc1c;
          Texture2D::Texture2D(pTVar5);
          uVar8 = Texture2D::initWithImage(pTVar5,pbVar9 + 0x1d8,*(undefined4 *)(pbVar9 + 0x348));
          if ((uVar8 & 1) != 0) {
            Texture2D::setAlphaTexture(local_78,pTVar5);
          }
          Ref::release((Ref *)pTVar5);
                    /* try { // try from 00fefd9c to 010efe0b has its CatchHandler @ 00fefd9c
                       catch() { ... } // from try @ 00fefd9c with catch @ 00fefd9c
                       catch() { ... } // from try @ 00fefe4c with catch @ 00fefd9c */
          plVar3 = *(long **)(pbVar9 + 0x40);
        }
      }
      else {
        local_78 = *(Texture2D **)(lVar6 + 0x28);
LAB_00fefc1c:
        plVar3 = *(long **)(pbVar9 + 0x40);
      }
      if (plVar3 != (long *)0x0) {
        local_70 = (Ref *)local_78;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_70);
      }
      Image::~Image((Image *)(pbVar9 + 0x1d8));
                    /* try { // try from 00fefc44 to 010efc73 has its CatchHandler @ 00fefd0c */
      Image::~Image((Image *)(pbVar9 + 0x68));
      if (((byte)pbVar9[0x50] & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + 0x60));
      }
      pbVar4 = *(basic_string **)(pbVar9 + 0x40);
      if (pbVar9 + 0x20 == pbVar4) {
        pcVar7 = *(code **)(*(long *)pbVar4 + 0x20);
LAB_00fefdb0:
        (*pcVar7)();
      }
      else if (pbVar4 != (basic_string *)0x0) {
                    /* try { // try from 00fefc74 to 010efc83 has its CatchHandler @ 00fefcfc */
        pcVar7 = *(code **)(*(long *)pbVar4 + 0x28);
        goto LAB_00fefdb0;
      }
      if (((byte)*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + 0x10));
      }
      operator_delete(pbVar9);
      *(int *)(in_x0 + 0x144) = *(int *)(in_x0 + 0x144) + -1;
      std::__ndk1::mutex::lock(this);
      lVar6 = *(long *)(in_x0 + 0xb8);
    } while (lVar6 != 0);
  }
  std::__ndk1::mutex::unlock(this);
LAB_00fefde0:
  if (*(int *)(in_x0 + 0x144) == 0) {
    lVar6 = Director::getInstance();
    Scheduler::unschedule(*(_func_void_float **)(lVar6 + 0xa0),(Ref *)addImageAsyncCallBack);
  }
                    /* try { // try from 00fefe0c to 010efe3b has its CatchHandler @ 00fefed4 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

