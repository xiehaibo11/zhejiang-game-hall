
/* cocos2d::CanvasRenderingContext2D::fillRect(float, float, float, float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::fillRect
          (CanvasRenderingContext2D *this,float param_1,float param_2,float param_3,float param_4)

{
  long *plVar1;
  
  if (this[0x108] != (CanvasRenderingContext2D)0x0) {
    this[0x108] = (CanvasRenderingContext2D)0x0;
    CanvasRenderingContext2DImpl::recreateBuffer
              (*(CanvasRenderingContext2DImpl **)(this + 0x100),*(float *)this,*(float *)(this + 4))
    ;
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
    }
  }
  CanvasRenderingContext2DImpl::fillRect
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0085d43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
  return;
}

