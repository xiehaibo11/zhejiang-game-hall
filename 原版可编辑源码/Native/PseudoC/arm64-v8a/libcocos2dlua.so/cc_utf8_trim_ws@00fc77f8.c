
/* cocos2d::cc_utf8_trim_ws(std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned
   short> >*) */

void cocos2d::cc_utf8_trim_ws(vector *param_1)

{
  if (param_1 != (vector *)0x0) {
    StringUtils::trimUTF16Vector(param_1);
    return;
  }
  return;
}

