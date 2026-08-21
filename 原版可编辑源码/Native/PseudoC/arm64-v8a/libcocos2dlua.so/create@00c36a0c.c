
/* cocostudio::Armature::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Node * cocostudio::Armature::create(basic_string *param_1)

{
  Node *this;
  ulong uVar1;
  
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    this[0x31c] = (Node)0x1;
    *(undefined4 *)(this + 0x340) = 0x3f800000;
    *(undefined ***)this = &PTR__Armature_016c7d00;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined8 *)(this + 0x348) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined ***)(this + 0x2f8) = &PTR__Armature_016c82f0;
    *(undefined8 *)(this + 0x370) = 0;
    uVar1 = init((Armature *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

