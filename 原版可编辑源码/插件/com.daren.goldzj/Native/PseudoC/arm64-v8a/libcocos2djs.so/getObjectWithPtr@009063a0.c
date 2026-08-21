
/* se::Object::getObjectWithPtr(void*) */

RefCounter * se::Object::getObjectWithPtr(void *param_1)

{
  long lVar1;
  long lVar2;
  RefCounter *this;
  
  lVar1 = NativePtrToObjectMap::find(param_1);
  lVar2 = NativePtrToObjectMap::end();
  if (lVar1 == lVar2) {
    this = (RefCounter *)0x0;
  }
  else {
    this = *(RefCounter **)(lVar1 + 0x18);
    RefCounter::incRef(this);
  }
  return this;
}

