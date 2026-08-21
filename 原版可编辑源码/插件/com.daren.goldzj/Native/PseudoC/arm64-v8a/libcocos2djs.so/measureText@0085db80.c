
/* cocos2d::CanvasRenderingContext2D::measureText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::CanvasRenderingContext2D::measureText(basic_string *param_1)

{
  basic_string *in_x1;
  Size *in_x8;
  float fVar1;
  
  fVar1 = (float)CanvasRenderingContext2DImpl::measureText
                           (*(CanvasRenderingContext2DImpl **)(param_1 + 0x100),in_x1);
  Size::Size(in_x8,fVar1,0.0);
  return;
}

