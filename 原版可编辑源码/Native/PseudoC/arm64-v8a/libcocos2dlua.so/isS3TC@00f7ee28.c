
/* cocos2d::Image::isS3TC(unsigned char const*, long) */

bool cocos2d::Image::isS3TC(uchar *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strncmp((char *)param_2,"DDS",3);
  return iVar1 == 0;
}

