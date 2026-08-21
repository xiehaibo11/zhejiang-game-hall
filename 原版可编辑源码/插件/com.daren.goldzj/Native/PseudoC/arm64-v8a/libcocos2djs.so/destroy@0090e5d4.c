
/* cocos2d::EventDispatcher::destroy() */

void cocos2d::EventDispatcher::destroy(void)

{
  undefined8 *puVar1;
  Object *this;
  undefined8 *puVar2;
  
  puVar1 = DAT_01d37260;
  for (puVar2 = DAT_01d37258; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    this = (Object *)*puVar2;
    se::Object::unroot(this);
    se::RefCounter::decRef((RefCounter *)this);
  }
  DAT_01d37260 = DAT_01d37258;
  if (DAT_01d37298 != (Object *)0x0) {
    se::Object::unroot(DAT_01d37298);
    se::RefCounter::decRef((RefCounter *)DAT_01d37298);
    DAT_01d37298 = (Object *)0x0;
  }
  if (DAT_01d372a0 != (Object *)0x0) {
    se::Object::unroot(DAT_01d372a0);
    se::RefCounter::decRef((RefCounter *)DAT_01d372a0);
    DAT_01d372a0 = (Object *)0x0;
  }
  if (DAT_01d372a8 != (Object *)0x0) {
    se::Object::unroot(DAT_01d372a8);
    se::RefCounter::decRef((RefCounter *)DAT_01d372a8);
    DAT_01d372a8 = (Object *)0x0;
  }
  if (DAT_01d372b0 != (Object *)0x0) {
    se::Object::unroot(DAT_01d372b0);
    se::RefCounter::decRef((RefCounter *)DAT_01d372b0);
    DAT_01d372b0 = (Object *)0x0;
  }
  if (DAT_01d372b8 != (Object *)0x0) {
    se::Object::unroot(DAT_01d372b8);
    se::RefCounter::decRef((RefCounter *)DAT_01d372b8);
    DAT_01d372b8 = (Object *)0x0;
  }
  se::Value::setUndefined((Value *)&DAT_01d37248);
  return;
}

