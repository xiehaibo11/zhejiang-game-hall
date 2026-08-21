
/* cocos2d::CanvasRenderingContext2D::_fillImageData(cocos2d::Data const&, float, float, float,
   float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::_fillImageData
          (CanvasRenderingContext2D *this,Data *param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  long *plVar1;
  
  CanvasRenderingContext2DImpl::_fillImageData
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),param_1,param_2,param_3,param_4,
             param_5);
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085fe0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
    return;
  }
  return;
}

