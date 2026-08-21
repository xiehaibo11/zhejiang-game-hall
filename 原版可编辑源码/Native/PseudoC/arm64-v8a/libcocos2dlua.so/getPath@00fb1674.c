
/* cocos2d::Properties::getPath(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) const */

void __thiscall cocos2d::Properties::getPath(Properties *this,char *param_1,basic_string *param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  char *__s;
  long *plVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  basic_string *pbVar8;
  uint uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00fb1334 with catch @ 00fb1674 */
                    /* catch() { ... } // from try @ 00fb136c with catch @ 00fb1678 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00fb114c with catch @ 00fb16a4 */
  __s = (char *)getString(this,param_1,(char *)0x0);
  uVar7 = 0;
  if (__s != (char *)0x0) {
    plVar4 = (long *)FileUtils::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,__s);
    uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((uVar5 & 1) == 0) {
      if (this == (Properties *)0x0) {
LAB_00fb17dc:
        uVar7 = 0;
        goto LAB_00fb17e0;
      }
      pbVar8 = *(basic_string **)(this + 0xa0);
      if (pbVar8 != (basic_string *)0x0) goto LAB_00fb1740;
LAB_00fb1730:
      do {
        do {
          this = *(Properties **)(this + 0xa8);
          if (this == (Properties *)0x0) goto LAB_00fb17dc;
          pbVar8 = *(basic_string **)(this + 0xa0);
        } while (pbVar8 == (basic_string *)0x0);
LAB_00fb1740:
        if (((byte)*pbVar8 & 1) == 0) {
          if ((byte)*pbVar8 >> 1 == 0) goto LAB_00fb1730;
        }
        else if (*(long *)(pbVar8 + 8) == 0) goto LAB_00fb1730;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_70,pbVar8);
        sVar6 = strlen(__s);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(local_70,__s,sVar6);
        plVar4 = (long *)FileUtils::getInstance();
        uVar3 = (**(code **)(*plVar4 + 0x128))(plVar4,local_70);
        uVar9 = uVar3 & 1;
                    /* try { // try from 00fb179c to 010b17a7 has its CatchHandler @ 00fb1d04 */
        if ((local_70 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2) && (((uVar3 ^ 1) & 1) == 0)) {
          uVar5 = (ulong)((byte)local_70[0] >> 1);
          pcVar2 = (char *)((ulong)local_70 | 1);
          if (((byte)local_70[0] & 1) != 0) {
            uVar5 = local_68;
            pcVar2 = local_60;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_2,pcVar2,uVar5);
          uVar9 = 1;
        }
        if (((byte)local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
      } while (uVar9 == 0);
    }
    else {
      sVar6 = strlen(__s);
                    /* catch() { ... } // from try @ 00fb1cf4 with catch @ 00fb1700 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2,__s,sVar6);
    }
    uVar7 = 1;
  }
LAB_00fb17e0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00fb180c to 010b185b has its CatchHandler @ 00fb1d00 */
  __stack_chk_fail(uVar7);
}

