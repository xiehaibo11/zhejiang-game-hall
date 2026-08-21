
/* cocos2d::ui::ImageView::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

bool __thiscall cocos2d::ui::ImageView::init(ImageView *this,undefined8 param_1,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    loadTexture(this,param_1,param_3);
  }
  return bVar1;
}

