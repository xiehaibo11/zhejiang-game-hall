
/* cocos2d::ZipUtils::inflateMemory(unsigned char*, long, unsigned char**) */

undefined8 cocos2d::ZipUtils::inflateMemory(uchar *param_1,long param_2,uchar **param_3)

{
  int iVar1;
  uchar *__ptr;
  long local_18;
  
  local_18 = 0;
  iVar1 = inflateMemoryWithHint(param_1,param_2,param_3,&local_18,0x40000);
  __ptr = *param_3;
  if (iVar1 == 0) {
    if (__ptr != (uchar *)0x0) {
      return local_18;
    }
  }
  else if (__ptr != (uchar *)0x0) {
    free(__ptr);
    *param_3 = (uchar *)0x0;
  }
  return 0;
}

