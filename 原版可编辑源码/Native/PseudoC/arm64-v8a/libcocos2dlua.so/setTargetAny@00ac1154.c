
/* fairygui::GTweener::setTargetAny(void*) */

GTweener * __thiscall fairygui::GTweener::setTargetAny(GTweener *this,void *param_1)

{
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x90));
  }
  *(void **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  return this;
}

