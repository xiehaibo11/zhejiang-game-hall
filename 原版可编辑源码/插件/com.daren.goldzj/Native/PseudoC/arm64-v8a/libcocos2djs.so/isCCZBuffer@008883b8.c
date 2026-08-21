
/* cocos2d::ZipUtils::isCCZBuffer(unsigned char const*, long) */

bool cocos2d::ZipUtils::isCCZBuffer(uchar *param_1,long param_2)

{
  if ((((0xf < (ulong)param_2) && (*param_1 == 'C')) && (param_1[1] == 'C')) && (param_1[2] == 'Z'))
  {
    return param_1[3] == '!' || param_1[3] == 'p';
  }
  return false;
}

