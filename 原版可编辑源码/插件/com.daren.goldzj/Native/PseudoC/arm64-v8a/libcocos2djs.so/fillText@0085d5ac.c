
/* cocos2d::CanvasRenderingContext2D::fillText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::fillText
          (CanvasRenderingContext2D *this,basic_string *param_1,float param_2,float param_3,
          float param_4)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    if (this[0x108] != (CanvasRenderingContext2D)0x0) {
      this[0x108] = (CanvasRenderingContext2D)0x0;
      CanvasRenderingContext2DImpl::recreateBuffer
                (*(CanvasRenderingContext2DImpl **)(this + 0x100),*(float *)this,
                 *(float *)(this + 4));
      plVar2 = *(long **)(this + 0xf0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,*(long *)(this + 0x100) + 8);
      }
    }
    CanvasRenderingContext2DImpl::fillText
              (*(CanvasRenderingContext2DImpl **)(this + 0x100),param_1,param_2,param_3,param_4);
    plVar2 = *(long **)(this + 0xf0);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085d678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,*(long *)(this + 0x100) + 8);
      return;
    }
  }
  return;
}

