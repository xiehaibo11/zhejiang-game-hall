
/* cocos2d::ZipUtils::isGZipBuffer(unsigned char const*, long) */

bool cocos2d::ZipUtils::isGZipBuffer(uchar *param_1,long param_2)

{
  if ((1 < param_2) && (*param_1 == '\x1f')) {
    return param_1[1] == 0x8b;
  }
  return false;
}

