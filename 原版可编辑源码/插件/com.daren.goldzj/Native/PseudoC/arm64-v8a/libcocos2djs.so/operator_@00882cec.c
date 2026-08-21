
/* cocos2d::Data::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Data const&) */

Data * __thiscall cocos2d::Data::operator=(Data *this,Data *param_1)

{
  void *__src;
  size_t __size;
  void *__dest;
  
  __src = *(void **)param_1;
  __size = *(size_t *)(param_1 + 8);
  free(*(void **)this);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (0 < (long)__size) {
    *(size_t *)(this + 8) = __size;
    __dest = malloc(__size);
    *(void **)this = __dest;
    memcpy(__dest,__src,__size);
  }
  return this;
}

