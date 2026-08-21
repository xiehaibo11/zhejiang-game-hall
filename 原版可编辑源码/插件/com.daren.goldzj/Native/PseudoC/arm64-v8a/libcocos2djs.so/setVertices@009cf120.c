
/* cocos2d::renderer::RenderData::setVertices(se::Object*) */

void __thiscall cocos2d::renderer::RenderData::setVertices(RenderData *this,Object *param_1)

{
  Object *this_00;
  
  if ((param_1 != (Object *)0x0) && (this_00 = *(Object **)(this + 0x28), this_00 != param_1)) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 0x28));
    }
    *(Object **)(this + 0x28) = param_1;
    se::Object::root(param_1);
    se::RefCounter::incRef(*(RefCounter **)(this + 0x28));
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 8) = 0;
    se::Object::getTypedArrayData
              (*(Object **)(this + 0x28),(uchar **)(this + 0x18),(ulong *)(this + 8));
    return;
  }
  return;
}

