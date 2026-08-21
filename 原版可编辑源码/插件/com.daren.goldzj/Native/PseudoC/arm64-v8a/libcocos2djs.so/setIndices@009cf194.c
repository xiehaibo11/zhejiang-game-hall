
/* cocos2d::renderer::RenderData::setIndices(se::Object*) */

void __thiscall cocos2d::renderer::RenderData::setIndices(RenderData *this,Object *param_1)

{
  Object *this_00;
  
  if ((param_1 != (Object *)0x0) && (this_00 = *(Object **)(this + 0x30), this_00 != param_1)) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 0x30));
    }
    *(Object **)(this + 0x30) = param_1;
    se::Object::root(param_1);
    se::RefCounter::incRef(*(RefCounter **)(this + 0x30));
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    se::Object::getTypedArrayData
              (*(Object **)(this + 0x30),(uchar **)(this + 0x20),(ulong *)(this + 0x10));
    return;
  }
  return;
}

