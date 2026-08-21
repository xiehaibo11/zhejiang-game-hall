
/* cocos2d::Physics3DShape::createCylinder(float, float) */

Ref * cocos2d::Physics3DShape::createCylinder(float param_1,float param_2)

{
  Ref *this;
  
                    /* catch() { ... } // from try @ 0101778c with catch @ 010177d8 */
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
  initCylinder((Physics3DShape *)this,param_1,param_2);
  Ref::autorelease(this);
  return this;
}

