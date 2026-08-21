
/* cocos2d::CanvasRenderingContext2D::recreateBufferIfNeeded() */

void __thiscall
cocos2d::CanvasRenderingContext2D::recreateBufferIfNeeded(CanvasRenderingContext2D *this)

{
  long *plVar1;
  
  if (this[0x108] != (CanvasRenderingContext2D)0x0) {
    this[0x108] = (CanvasRenderingContext2D)0x0;
    CanvasRenderingContext2DImpl::recreateBuffer
              (*(CanvasRenderingContext2DImpl **)(this + 0x100),*(float *)this,*(float *)(this + 4))
    ;
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085cd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
      return;
    }
  }
  return;
}

