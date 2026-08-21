
/* cocos2d::Sprite::setTexture(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Sprite::setTexture(Sprite *this,basic_string *param_1)

{
  long lVar1;
  Director *this_00;
  TextureCache *this_01;
  long lVar2;
  Size aSStack_50 [8];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  lVar2 = TextureCache::addImage(this_01,param_1);
  (**(code **)(*(long *)this + 0x548))(this,lVar2);
  *(undefined8 *)(this + 0x448) = 0;
                    /* try { // try from 00f3efb0 to 0103efd3 has its CatchHandler @ 00f3f504 */
  Rect::Rect(aRStack_48,(Rect *)Rect::ZERO);
  if (lVar2 != 0) {
    Texture2D::getContentSize();
    Size::operator=(aSStack_40,aSStack_50);
  }
                    /* try { // try from 00f3efe4 to 0103effb has its CatchHandler @ 00f3f4f8 */
  (**(code **)(*(long *)this + 0x558))(this,aRStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

