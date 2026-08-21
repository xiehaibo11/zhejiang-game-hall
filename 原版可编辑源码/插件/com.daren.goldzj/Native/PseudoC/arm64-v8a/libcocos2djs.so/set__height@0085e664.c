
/* cocos2d::CanvasRenderingContext2D::set__height(float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set__height(CanvasRenderingContext2D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 4) = param_1;
  this[0x108] = (CanvasRenderingContext2D)0x0;
  CanvasRenderingContext2DImpl::recreateBuffer
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),*(float *)this,param_1);
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085e6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
    return;
  }
  return;
}

