
/* cocos2d::Image::initWithRawData(unsigned char const*, long, int, int, int, bool) */

undefined8 __thiscall
cocos2d::Image::initWithRawData
          (Image *this,uchar *param_1,long param_2,int param_3,int param_4,int param_5,bool param_6)

{
  undefined8 uVar1;
  void *__dest;
  size_t __size;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    this[0x154] = (Image)param_6;
    __size = (size_t)(param_3 * param_4 * 4);
    *(int *)(this + 0x38) = param_3;
    *(int *)(this + 0x3c) = param_4;
    *(undefined4 *)(this + 0x48) = 2;
    *(size_t *)(this + 0x30) = __size;
    __dest = malloc(__size);
    *(void **)(this + 0x28) = __dest;
    uVar1 = 0;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__size);
      uVar1 = 1;
    }
  }
  return uVar1;
}

