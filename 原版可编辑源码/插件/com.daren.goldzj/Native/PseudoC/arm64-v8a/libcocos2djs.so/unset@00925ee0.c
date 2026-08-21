
/* cocos2d::renderer::UnitBase::unset(se::Object**, unsigned char**, unsigned long*) */

void __thiscall
cocos2d::renderer::UnitBase::unset(UnitBase *this,Object **param_1,uchar **param_2,ulong *param_3)

{
  if (*param_1 != (Object *)0x0) {
    se::Object::unroot(*param_1);
    se::RefCounter::decRef((RefCounter *)*param_1);
    *param_1 = (Object *)0x0;
  }
  *param_2 = (uchar *)0x0;
  *param_3 = 0;
  return;
}

