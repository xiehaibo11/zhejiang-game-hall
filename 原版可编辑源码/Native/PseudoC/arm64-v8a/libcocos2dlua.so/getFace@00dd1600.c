
/* MyXMLVisitor::getFace() const */

void MyXMLVisitor::getFace(void)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  long in_x0;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  pbVar2 = *(basic_string **)(in_x0 + 0x10);
  do {
    while( true ) {
      if (*(basic_string **)(in_x0 + 8) == pbVar2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(in_x8,"fonts/Marker Felt.ttf");
        return;
      }
                    /* try { // try from 00dd162c to 00ed162f has its CatchHandler @ 00dd16a8 */
      pbVar3 = pbVar2 + -0x60;
      if (((byte)*pbVar3 & 1) == 0) break;
      pbVar1 = pbVar2 + -0x58;
      pbVar2 = pbVar3;
      if (*(long *)pbVar1 != 0) goto LAB_00dd1640;
    }
    pbVar2 = pbVar3;
  } while ((byte)*pbVar3 >> 1 == 0);
LAB_00dd1640:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,pbVar3);
  return;
}

