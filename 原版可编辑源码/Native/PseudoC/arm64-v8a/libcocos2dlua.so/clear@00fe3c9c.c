
/* cocos2d::RenderQueue::clear() */

void __thiscall cocos2d::RenderQueue::clear(RenderQueue *this)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  return;
}

