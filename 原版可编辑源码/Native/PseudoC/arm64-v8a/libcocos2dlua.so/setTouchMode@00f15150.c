
/* cocos2d::Layer::setTouchMode(cocos2d::Touch::DispatchMode) */

void __thiscall cocos2d::Layer::setTouchMode(Layer *this,int param_2)

{
  if ((*(int *)(this + 0x318) != param_2) &&
     (*(int *)(this + 0x318) = param_2, this[0x2f8] != (Layer)0x0)) {
    this[0x2f8] = (Layer)0x0;
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x300));
    *(undefined8 *)(this + 0x300) = 0;
    setTouchEnabled(this,true);
    return;
  }
  return;
}

