
/* cocos2d::CanvasRenderingContext2D::set_lineJoin(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set_lineJoin
          (CanvasRenderingContext2D *this,basic_string *param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    CanvasRenderingContext2DImpl::setLineJoin
              (*(CanvasRenderingContext2DImpl **)(this + 0x100),param_1);
    return;
  }
  return;
}

