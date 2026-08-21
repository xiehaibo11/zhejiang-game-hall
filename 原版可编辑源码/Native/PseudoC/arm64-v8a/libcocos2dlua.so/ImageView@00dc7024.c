
/* cocos2d::ui::ImageView::ImageView() */

void __thiscall cocos2d::ui::ImageView::ImageView(ImageView *this)

{
                    /* try { // try from 00dc702c to 00ec7033 has its CatchHandler @ 00dc70ac */
  Widget::Widget((Widget *)this);
                    /* try { // try from 00dc7048 to 00ec7057 has its CatchHandler @ 00dc70a4 */
  *(undefined2 *)(this + 0x4f8) = 0x100;
                    /* try { // try from 00dc7058 to 00ec70bf has its CatchHandler @ 00dc7000 */
  *(undefined ***)this = &PTR__ImageView_016de470;
  *(undefined ***)(this + 0x318) = &PTR__ImageView_016deb18;
  *(undefined ***)(this + 0x4f0) = &PTR__ImageView_016deb40;
  Rect::Rect((Rect *)(this + 0x4fc),(Rect *)Rect::ZERO);
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x518) = 0;
  Size::Size((Size *)(this + 0x51c),(Size *)(this + 0x80));
  this[0x524] = (ImageView)0x1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x528),"");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc7048 with catch @ 00dc70a4
                        */
  return;
}

