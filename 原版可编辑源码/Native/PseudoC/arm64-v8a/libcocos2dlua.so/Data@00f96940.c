
/* cocos2d::Data::Data(cocos2d::Data const&) */

void __thiscall cocos2d::Data::Data(Data *this,Data *param_1)

{
  void *__dest;
  size_t __size;
  void *__src;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  __size = *(size_t *)(param_1 + 8);
  if (0 < (long)__size) {
    __src = *(void **)param_1;
    if (__src != (void *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      __dest = malloc(__size);
      *(void **)this = __dest;
      memcpy(__dest,__src,__size);
    }
    *(size_t *)(this + 8) = __size;
  }
  return;
}

