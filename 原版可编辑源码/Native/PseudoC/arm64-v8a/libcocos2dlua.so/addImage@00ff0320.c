
/* cocos2d::TextureCache::addImage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Texture2D * __thiscall cocos2d::TextureCache::addImage(TextureCache *this,basic_string *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  Image *this_00;
  ulong uVar6;
  Texture2D *pTVar7;
  TextureCache *this_01;
  basic_string *pbVar8;
  basic_string local_200 [16];
  void *local_1f0;
  basic_string local_1e8 [8];
  ulong local_1e0;
  char *local_1d8;
  Texture2D *local_1d0;
  Image aIStack_1c8 [368];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_1d0 = (Texture2D *)0x0;
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_1e8,plVar4,param_1);
  uVar6 = (ulong)((byte)local_1e8[0] >> 1);
  if (((byte)local_1e8[0] & 1) != 0) {
    uVar6 = local_1e0;
  }
  if (uVar6 == 0) {
    pTVar7 = (Texture2D *)0x0;
    goto joined_r0x00ff03b0;
  }
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                      *)(this + 0x148),local_1e8);
  pTVar7 = local_1d0;
  if (lVar5 != 0) {
    pTVar7 = *(Texture2D **)(lVar5 + 0x28);
  }
  local_1d0 = pTVar7;
  if ((pTVar7 != (Texture2D *)0x0) ||
     (this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow), this_00 == (Image *)0x0))
  goto joined_r0x00ff03b0;
  Image::Image(this_00);
  uVar6 = Image::initWithImageFile(this_00,local_1e8);
  if ((uVar6 & 1) != 0) {
    pTVar7 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (pTVar7 != (Texture2D *)0x0) {
      Texture2D::Texture2D(pTVar7);
      local_1d0 = pTVar7;
      uVar6 = Texture2D::initWithImage(pTVar7,this_00);
      pTVar7 = local_1d0;
      if ((uVar6 & 1) != 0) {
        if (VolatileTextureMgr::_isReloading == '\0') {
          lVar5 = VolatileTextureMgr::findVolotileTexture(local_1d0);
          *(undefined4 *)(lVar5 + 0x10) = 1;
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar5 + 0x30) !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              local_1e8) {
            uVar6 = (ulong)((byte)local_1e8[0] >> 1);
            pcVar2 = (char *)((ulong)local_1e8 | 1);
            if (((byte)local_1e8[0] & 1) != 0) {
              uVar6 = local_1e0;
              pcVar2 = local_1d8;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(lVar5 + 0x30),pcVar2,uVar6);
          }
          uVar3 = Texture2D::getPixelFormat(pTVar7);
          *(undefined4 *)(lVar5 + 0x2c) = uVar3;
        }
        pbVar8 = local_1e8;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Texture2D*&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                    *)(this + 0x148),local_1e8,pbVar8,&local_1d0);
        this_01 = (TextureCache *)
                  std::__ndk1::operator+
                            ((__ndk1 *)param_1,(basic_string *)&s_etc1AlphaFileSuffix,pbVar8);
        if (*(int *)(this_00 + 0x44) == 5) {
          uVar6 = (ulong)(s_etc1AlphaFileSuffix >> 1);
          if ((s_etc1AlphaFileSuffix & 1) != 0) {
            uVar6 = DAT_017928f8;
          }
          if (uVar6 != 0) {
            plVar4 = (long *)FileUtils::getInstance();
            this_01 = (TextureCache *)(**(code **)(*plVar4 + 0x128))(plVar4,local_200);
            if (((ulong)this_01 & 1) != 0) {
              Image::Image(aIStack_1c8);
              uVar6 = Image::initWithImageFile(aIStack_1c8,local_200);
              if (((uVar6 & 1) != 0) &&
                 (pTVar7 = operator_new(0x88,(nothrow_t *)&std::nothrow), pTVar7 != (Texture2D *)0x0
                 )) {
                Texture2D::Texture2D(pTVar7);
                uVar6 = Texture2D::initWithImage(pTVar7,aIStack_1c8);
                if ((uVar6 & 1) != 0) {
                  Texture2D::setAlphaTexture(local_1d0,pTVar7);
                }
                Ref::release((Ref *)pTVar7);
              }
              this_01 = (TextureCache *)Image::~Image(aIStack_1c8);
            }
          }
        }
        parseNinePatchImage(this_01,this_00,local_1d0,param_1);
        if (((byte)local_200[0] & 1) != 0) {
          operator_delete(local_1f0);
        }
        goto LAB_00ff0584;
      }
      if (local_1d0 != (Texture2D *)0x0) {
        Ref::release((Ref *)local_1d0);
      }
    }
    local_1d0 = (Texture2D *)0x0;
  }
LAB_00ff0584:
  Ref::release((Ref *)this_00);
  pTVar7 = local_1d0;
joined_r0x00ff03b0:
  if (((byte)local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00ff05c0 to 010f05c3 has its CatchHandler @ 00ff05d4 */
    return pTVar7;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff05c0 with catch @ 00ff05d4
                        */
  __stack_chk_fail();
}

