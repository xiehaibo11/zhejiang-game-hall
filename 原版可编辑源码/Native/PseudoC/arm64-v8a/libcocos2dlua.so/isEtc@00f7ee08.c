
/* cocos2d::Image::isEtc(unsigned char const*, long) */

bool cocos2d::Image::isEtc(uchar *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = etc1_pkm_is_valid(param_2);
  return iVar1 != 0;
}

