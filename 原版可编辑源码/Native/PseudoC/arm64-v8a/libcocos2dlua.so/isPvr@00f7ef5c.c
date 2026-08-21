
/* cocos2d::Image::isPvr(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isPvr(Image *this,uchar *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  if ((ulong)param_2 < 0x34) {
    bVar1 = false;
  }
  else {
    __n = __strlen_chk(&DAT_01447dd3,5);
    iVar2 = memcmp(param_1 + 0x2c,&DAT_01447dd3,__n);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)param_1 == 0x3525650;
    }
  }
  return bVar1;
}

