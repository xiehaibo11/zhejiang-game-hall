
/* cocos2d::ZipUtils::isGZipBuffer(unsigned char const*, long) */

bool cocos2d::ZipUtils::isGZipBuffer(uchar *param_1,long param_2)

{
  if (param_2 < 2) {
    return false;
  }
  if (*param_1 == '\x1f') {
    return param_1[1] == 0x8b;
  }
  return false;
}

