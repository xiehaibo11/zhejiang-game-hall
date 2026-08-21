
/* cocos2d::Physics3DShape::createBox(cocos2d::Vec3 const&) */

Ref * cocos2d::Physics3DShape::createBox(Vec3 *param_1)

{
  Ref *this;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined ***)this = &PTR__Physics3DShape_01726930;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  initBox((Physics3DShape *)this,param_1);
                    /* try { // try from 01017568 to 01117573 has its CatchHandler @ 0101761c */
  Ref::autorelease(this);
  return this;
}

