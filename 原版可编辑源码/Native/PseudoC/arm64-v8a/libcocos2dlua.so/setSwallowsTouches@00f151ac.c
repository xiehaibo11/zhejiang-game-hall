
/* cocos2d::Layer::setSwallowsTouches(bool) */

void __thiscall cocos2d::Layer::setSwallowsTouches(Layer *this,bool param_1)

{
  if ((this[0x31c] != (Layer)param_1) && (this[0x31c] = (Layer)param_1, this[0x2f8] != (Layer)0x0))
  {
    this[0x2f8] = (Layer)0x0;
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x300));
    *(undefined8 *)(this + 0x300) = 0;
    setTouchEnabled(this,true);
    return;
  }
                    /* try { // try from 00f15208 to 010152bf has its CatchHandler @ 00f15208
                       catch() { ... } // from try @ 00f15208 with catch @ 00f15208
                       catch() { ... } // from try @ 00f152c8 with catch @ 00f15208 */
  return;
}

