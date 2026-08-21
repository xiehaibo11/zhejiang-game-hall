
/* cocos2d::Physics3DShape::createMesh(cocos2d::Vec3 const*, int) */

Ref * cocos2d::Physics3DShape::createMesh(Vec3 *param_1,int param_2)

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
  initMesh((Vec3 *)this,(int)param_1);
  Ref::autorelease(this);
  return this;
}

