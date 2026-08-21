
/* cocos2d::Data::Data(cocos2d::Data const&) */

void __thiscall cocos2d::Data::Data(Data *this,Data *param_1)

{
  void *__src;
  size_t __size;
  void *__dest;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  __src = *(void **)param_1;
  __size = *(size_t *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (0 < (long)__size) {
    *(size_t *)(this + 8) = __size;
    __dest = malloc(__size);
    *(void **)this = __dest;
    memcpy(__dest,__src,__size);
    return;
  }
  return;
}

