
/* cocos2d::PointObject::~PointObject() */

void __thiscall cocos2d::PointObject::~PointObject(PointObject *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

