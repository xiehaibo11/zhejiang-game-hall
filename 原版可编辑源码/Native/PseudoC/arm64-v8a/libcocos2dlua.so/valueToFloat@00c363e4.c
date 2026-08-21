
/* cocostudio::ActionObject::valueToFloat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

float __thiscall cocostudio::ActionObject::valueToFloat(ActionObject *this,basic_string *param_1)

{
  double dVar1;
  basic_string *pbVar2;
  
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  dVar1 = (double)cocos2d::utils::atof((char *)pbVar2);
  return (float)dVar1;
}

