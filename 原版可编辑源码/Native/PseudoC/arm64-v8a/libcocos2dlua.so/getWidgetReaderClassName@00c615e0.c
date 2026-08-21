
/* cocostudio::WidgetPropertiesReader::getWidgetReaderClassName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocostudio::WidgetPropertiesReader::getWidgetReaderClassName(basic_string *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  int iVar3;
  basic_string *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,in_x1);
  bVar2 = *in_x8;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(in_x8 + 8);
  }
  switch(uVar1) {
  case 5:
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = in_x8 + 1;
    }
    iVar3 = memcmp(pbVar4,"Panel",5);
    if (iVar3 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"Layout",6);
    }
    else {
      iVar3 = memcmp(pbVar4,"Label",5);
      if (iVar3 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(in_x8,"Text",4);
      }
    }
    break;
  case 8:
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = in_x8 + 1;
    }
    if (*(long *)pbVar4 == 0x6165724174786554) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"Text",4);
    }
    break;
  case 10:
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = in_x8 + 1;
    }
    iVar3 = memcmp(pbVar4,"TextButton",10);
    if (iVar3 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"Button",6);
    }
    else {
      iVar3 = memcmp(pbVar4,"LabelAtlas",10);
      if (iVar3 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(in_x8,"TextAtlas",9);
      }
    }
    break;
  case 0xb:
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = in_x8 + 1;
    }
    iVar3 = memcmp(pbVar4,"LabelBMFont",0xb);
    if (iVar3 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"TextBMFont",10);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,"Reader",6);
  return;
}

