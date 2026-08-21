
/* cocos2d::renderer::Technique::Parameter::setShareValue(se::Object*) */

void __thiscall
cocos2d::renderer::Technique::Parameter::setShareValue(Parameter *this,Object *param_1)

{
  Object *this_00;
  
  if ((param_1 != (Object *)0x0) && (this_00 = *(Object **)(this + 8), this_00 != param_1)) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 8));
    }
    *(Object **)(this + 8) = param_1;
    se::Object::root(param_1);
    se::RefCounter::incRef(*(RefCounter **)(this + 8));
    *(undefined8 *)this = 0;
    *(undefined2 *)(this + 0x40) = 0;
    se::Object::getTypedArrayData(*(Object **)(this + 8),(uchar **)this,(ulong *)(this + 0x40));
    return;
  }
  return;
}

