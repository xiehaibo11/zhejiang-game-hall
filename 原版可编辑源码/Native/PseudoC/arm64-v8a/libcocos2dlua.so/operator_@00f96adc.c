
/* cocos2d::Data::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Data&&) */

Data * __thiscall cocos2d::Data::operator=(Data *this,Data *param_1)

{
  void *__ptr;
  
  if (this != param_1) {
    __ptr = *(void **)this;
    if (__ptr != *(void **)param_1) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      __ptr = *(void **)param_1;
    }
    *(void **)this = __ptr;
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return this;
}

