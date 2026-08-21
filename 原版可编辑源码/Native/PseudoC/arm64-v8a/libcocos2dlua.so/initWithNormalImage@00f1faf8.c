
/* cocos2d::MenuItemImage::initWithNormalImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

undefined8 __thiscall
cocos2d::MenuItemImage::initWithNormalImage
          (MenuItemImage *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          function *param_4)

{
  ulong uVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pNVar2 = (Node *)Sprite::create(param_1);
  }
  uVar1 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0) {
    pNVar3 = (Node *)0x0;
  }
  else {
    pNVar3 = (Node *)Sprite::create(param_2);
  }
  uVar1 = (ulong)((byte)*param_3 >> 1);
  if (((byte)*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 == 0) {
    pNVar4 = (Node *)0x0;
  }
  else {
    pNVar4 = (Node *)Sprite::create(param_3);
  }
  MenuItemSprite::initWithNormalSprite((MenuItemSprite *)this,pNVar2,pNVar3,pNVar4,param_4);
  return 1;
}

