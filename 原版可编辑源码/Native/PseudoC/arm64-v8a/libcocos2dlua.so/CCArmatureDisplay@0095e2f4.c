
/* dragonBones::CCArmatureDisplay::CCArmatureDisplay() */

void __thiscall dragonBones::CCArmatureDisplay::CCArmatureDisplay(CCArmatureDisplay *this)

{
  EventDispatcher *this_00;
  
                    /* try { // try from 0095e2f4 to 00a5e3ab has its CatchHandler @ 0095e2f4
                       catch() { ... } // from try @ 0095e2f4 with catch @ 0095e2f4
                       catch() { ... } // from try @ 0095e42c with catch @ 0095e2f4 */
  *(undefined ***)(this + 0x310) = &PTR__IEventDispatcher_0169d858;
  cocos2d::Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)this = 0x16d6fa8;
  *(undefined8 *)(this + 0x310) = 0x16d7590;
  this_00 = operator_new(0x160);
  cocos2d::EventDispatcher::EventDispatcher(this_00);
  *(EventDispatcher **)(this + 0x308) = this_00;
  (**(code **)(*(long *)this + 0x380))(this,this_00);
  return;
}

