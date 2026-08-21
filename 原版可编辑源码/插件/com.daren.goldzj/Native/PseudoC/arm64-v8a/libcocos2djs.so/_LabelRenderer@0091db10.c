
/* cocos2d::LabelRenderer::~LabelRenderer() */

void __thiscall cocos2d::LabelRenderer::~LabelRenderer(LabelRenderer *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__LabelRenderer_01c693c0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  plVar1 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

