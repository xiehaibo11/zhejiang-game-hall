
/* dragonBones::CCArmatureDisplay::create() */

Node * dragonBones::CCArmatureDisplay::create(void)

{
  Node *this;
  EventDispatcher *this_00;
  ulong uVar1;
  
  this = operator_new(800,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    *(undefined ***)(this + 0x310) = &PTR__IEventDispatcher_0169d858;
    cocos2d::Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)this = 0x16d6fa8;
    *(undefined8 *)(this + 0x310) = 0x16d7590;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined8 *)(this + 0x300) = 0;
    this_00 = operator_new(0x160);
    cocos2d::EventDispatcher::EventDispatcher(this_00);
    *(EventDispatcher **)(this + 0x308) = this_00;
    (**(code **)(*(long *)this + 0x380))(this,this_00);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

