
/* cocos2d::Data::move(cocos2d::Data&) */

void __thiscall cocos2d::Data::move(Data *this,Data *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = *(void **)this;
  pvVar1 = *(void **)param_1;
  if (__ptr != pvVar1) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    pvVar1 = *(void **)param_1;
  }
  *(void **)this = pvVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

