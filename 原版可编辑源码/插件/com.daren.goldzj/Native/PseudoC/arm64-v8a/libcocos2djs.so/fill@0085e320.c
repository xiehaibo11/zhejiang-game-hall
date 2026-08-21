
/* cocos2d::CanvasRenderingContext2D::fill() */

void __thiscall cocos2d::CanvasRenderingContext2D::fill(CanvasRenderingContext2D *this)

{
  long *plVar1;
  
  CanvasRenderingContext2DImpl::fill(*(CanvasRenderingContext2DImpl **)(this + 0x100));
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
    return;
  }
  return;
}

