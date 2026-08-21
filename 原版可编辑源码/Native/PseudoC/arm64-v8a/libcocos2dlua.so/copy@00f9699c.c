
/* cocos2d::Data::copy(unsigned char const*, long) */

long __thiscall cocos2d::Data::copy(Data *this,uchar *param_1,long param_2)

{
  uchar *__ptr;
  void *__dest;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    __ptr = *(uchar **)this;
    if (__ptr != param_1) {
      if (__ptr != (uchar *)0x0) {
        free(__ptr);
      }
      *(undefined8 *)(this + 8) = 0;
      __dest = malloc(param_2);
      *(void **)this = __dest;
      memcpy(__dest,param_1,param_2);
    }
    *(long *)(this + 8) = param_2;
  }
  return param_2;
}

