
/* cocos2d::renderer::UnitCommon::setData(se::Object*) */

void __thiscall cocos2d::renderer::UnitCommon::setData(UnitCommon *this,Object *param_1)

{
  Object *this_00;
  
  this_00 = *(Object **)(this + 0x10);
  if (this_00 != param_1) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 0x10));
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 != (Object *)0x0) {
      *(Object **)(this + 0x10) = param_1;
      se::Object::root(param_1);
      se::RefCounter::incRef(*(RefCounter **)(this + 0x10));
      *(uchar **)(this + 0x18) = (uchar *)0x0;
      *(undefined8 *)(this + 0x20) = 0;
      se::Object::getTypedArrayData
                (*(Object **)(this + 0x10),(uchar **)(this + 0x18),(ulong *)(this + 0x20));
      return;
    }
  }
  return;
}

