
/* cocos2d::Data::copy(unsigned char const*, long) */

void __thiscall cocos2d::Data::copy(Data *this,uchar *param_1,long param_2)

{
  void *__dest;
  
  free(*(void **)this);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (0 < param_2) {
    *(long *)(this + 8) = param_2;
    __dest = malloc(param_2);
    *(void **)this = __dest;
    memcpy(__dest,param_1,param_2);
    return;
  }
  return;
}

