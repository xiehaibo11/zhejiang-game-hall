
/* cocosbuilder::getAbsolutePosition(cocos2d::Vec2 const&, cocosbuilder::CCBReader::PositionType,
   cocos2d::Size const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocosbuilder::getAbsolutePosition(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    NEON_scvtf(CONCAT44((int)(((float)((ulong)*param_3 >> 0x20) * (float)((ulong)*param_1 >> 0x20))
                             / 100.0),(int)(((float)*param_3 * (float)*param_1) / 100.0)),4);
    break;
  case 5:
    CCBReader::getResolutionScale();
  }
  return;
}

