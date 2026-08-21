
/* cocos2d::PUBeamRender::setUseVertexColours(bool) */

void __thiscall cocos2d::PUBeamRender::setUseVertexColours(PUBeamRender *this,bool param_1)

{
  this[0xe0] = (PUBeamRender)param_1;
  if (*(long **)(this + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa0) + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e5951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xa0) + 0x30))
              (*(long **)(this + 0xa0),this[0xe0] == (PUBeamRender)0x0);
    return;
  }
  return;
}

