
/* cocos2d::Data::fastSet(unsigned char*, long) */

void __thiscall cocos2d::Data::fastSet(Data *this,uchar *param_1,long param_2)

{
  free(*(void **)this);
  *(uchar **)this = param_1;
  *(long *)(this + 8) = param_2;
  return;
}

