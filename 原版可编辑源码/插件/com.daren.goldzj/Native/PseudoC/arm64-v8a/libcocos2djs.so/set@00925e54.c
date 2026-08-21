
/* cocos2d::renderer::UnitBase::set(se::Object**, unsigned char**, unsigned long*, se::Object*) */

void __thiscall
cocos2d::renderer::UnitBase::set
          (UnitBase *this,Object **param_1,uchar **param_2,ulong *param_3,Object *param_4)

{
  Object *this_00;
  
  this_00 = *param_1;
  if (this_00 != param_4) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef((RefCounter *)*param_1);
      *param_1 = (Object *)0x0;
    }
    if (param_4 != (Object *)0x0) {
      *param_1 = param_4;
      se::Object::root(param_4);
      se::RefCounter::incRef((RefCounter *)*param_1);
      *param_2 = (uchar *)0x0;
      *param_3 = 0;
      se::Object::getTypedArrayData(*param_1,param_2,param_3);
      return;
    }
  }
  return;
}

