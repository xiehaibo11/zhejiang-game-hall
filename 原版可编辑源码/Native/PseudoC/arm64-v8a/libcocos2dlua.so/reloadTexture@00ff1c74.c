
/* cocos2d::VolatileTextureMgr::reloadTexture(cocos2d::Texture2D*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::Texture2D::PixelFormat) */

void cocos2d::VolatileTextureMgr::reloadTexture
               (Texture2D *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  Image *this;
  long *plVar2;
  uchar *puVar3;
  long lVar4;
  ulong uVar5;
  Data aDStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != (Texture2D *)0x0) {
    this = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this != (Image *)0x0) {
      Image::Image(this);
    }
    plVar2 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar2 + 0x28))(aDStack_58,plVar2,param_2);
    if (this != (Image *)0x0) {
      puVar3 = (uchar *)Data::getBytes(aDStack_58);
      lVar4 = Data::getSize(aDStack_58);
      uVar5 = Image::initWithImageData(this,puVar3,lVar4);
      if ((uVar5 & 1) != 0) {
        Texture2D::initWithImage(param_1,this,param_3);
      }
      Ref::release((Ref *)this);
    }
    Data::~Data(aDStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

