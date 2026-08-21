
/* cocos2d::Animation::addSpriteFrameWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Animation::addSpriteFrameWithFile(Animation *this,basic_string *param_1)

{
  long lVar1;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar2;
  SpriteFrame *pSVar3;
  Size aSStack_50 [8];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00eec6f4 to 00fec707 has its CatchHandler @ 00eec938 */
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar2 = (Texture2D *)TextureCache::addImage(this_01,param_1);
                    /* try { // try from 00eec708 to 00fec71f has its CatchHandler @ 00eec918 */
  Rect::Rect(aRStack_48,(Rect *)Rect::ZERO);
  Texture2D::getContentSize();
  Size::operator=(aSStack_40,aSStack_50);
                    /* try { // try from 00eec738 to 00fec74b has its CatchHandler @ 00eec8e4 */
  pSVar3 = (SpriteFrame *)SpriteFrame::createWithTexture(pTVar2,aRStack_48);
  addSpriteFrame(this,pSVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

