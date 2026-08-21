
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  DAT_01d38710 = 0;
  DAT_01d38718 = 0;
  DAT_01d38720 = (char *)0x0;
  DAT_01d38720 = operator_new(0x30);
  DAT_01d38718 = uVar4;
  DAT_01d38710 = uVar2;
  builtin_strncpy(DAT_01d38720,"org/cocos2dx/lib/Cocos2dxVideoHelper",0x25);
  uVar3 = DAT_01d38718;
  uVar1 = DAT_01d38710;
  DAT_01d38718 = 0x24;
  uVar4 = DAT_01d38718;
  DAT_01d38710 = 0x31;
  uVar2 = DAT_01d38710;
  DAT_01d38710 = uVar1;
  DAT_01d38718 = uVar3;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&DAT_01d38710,&PTR_LOOP_01d1b000);
  DAT_01d38730 = 0;
  DAT_01d38728 = 0;
  uRam0000000001d38740 = 0;
  _DAT_01d38738 = 0;
  DAT_01d38748 = 0x3f800000;
  __cxa_atexit(std::__ndk1::
               unordered_map<int,cocos2d::VideoPlayer*,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::VideoPlayer*>>>
               ::~unordered_map,&DAT_01d38728,&PTR_LOOP_01d1b000);
  return;
}

