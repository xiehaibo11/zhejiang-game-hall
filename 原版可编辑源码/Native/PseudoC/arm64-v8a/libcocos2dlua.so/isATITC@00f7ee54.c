
/* cocos2d::Image::isATITC(unsigned char const*, long) */

bool cocos2d::Image::isATITC(uchar *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strncmp((char *)(param_2 + 1),"KTX",3);
  return iVar1 == 0;
}

