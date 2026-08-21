
/* cocos2d::CanvasRenderingContext2D::set_strokeStyle(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set_strokeStyle
          (CanvasRenderingContext2D *this,basic_string *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = CSSColorParser::parse(param_1);
  uVar1 = (uint)uVar2;
  CanvasRenderingContext2DImpl::setStrokeStyle
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),(float)(uVar1 & 0xff) / 255.0,
             (float)(uVar1 >> 8 & 0xff) / 255.0,(float)(uVar1 >> 0x10 & 0xff) / 255.0,
             (float)((ulong)uVar2 >> 0x20));
  return;
}

