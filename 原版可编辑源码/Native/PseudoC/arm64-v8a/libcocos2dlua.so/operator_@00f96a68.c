
/* cocos2d::Data::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Data const&) */

Data * __thiscall cocos2d::Data::operator=(Data *this,Data *param_1)

{
  void *pvVar1;
  size_t __size;
  void *__src;
  
  if ((this != param_1) && (__size = *(size_t *)(param_1 + 8), 0 < (long)__size)) {
    __src = *(void **)param_1;
    pvVar1 = *(void **)this;
    if (pvVar1 != __src) {
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      *(undefined8 *)(this + 8) = 0;
      pvVar1 = malloc(__size);
      *(void **)this = pvVar1;
      memcpy(pvVar1,__src,__size);
    }
    *(size_t *)(this + 8) = __size;
  }
  return this;
}

