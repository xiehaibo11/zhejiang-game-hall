
/* MyXMLVisitor::getURL() const */

void MyXMLVisitor::getURL(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  lVar2 = *(long *)(in_x0 + 0x10);
  do {
    while( true ) {
      lVar1 = lVar2;
      if (*(long *)(in_x0 + 8) == lVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd15cc with catch @ 00dd1698
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd1510 with catch @ 00dd16a0
                        */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(in_x8,"");
        return;
      }
      lVar2 = lVar1 + -0x60;
      if ((*(byte *)(lVar1 + -0x48) & 1) == 0) break;
                    /* try { // try from 00dd1688 to 00ed168f has its CatchHandler @ 00dd1694 */
      if (*(long *)(lVar1 + -0x40) != 0) goto LAB_00dd1690;
    }
  } while (*(byte *)(lVar1 + -0x48) >> 1 == 0);
LAB_00dd1690:
                    /* try { // try from 00dd1690 to 00ed16c3 has its CatchHandler @ 00dd13c0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd1688 with catch @ 00dd1694
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,(basic_string *)(lVar1 + -0x48));
  return;
}

