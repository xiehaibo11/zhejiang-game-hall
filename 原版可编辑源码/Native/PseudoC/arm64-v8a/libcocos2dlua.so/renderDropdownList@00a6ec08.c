
/* fairygui::GComboBox::renderDropdownList() */

void __thiscall fairygui::GComboBox::renderDropdownList(GComboBox *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  GList::removeChildrenToPool(*(GList **)(this + 0x2a0));
  lVar5 = *(long *)(this + 0x2b8);
  lVar7 = *(long *)(this + 0x2b0);
  if (lVar5 - lVar7 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      plVar3 = (long *)GList::addItemFromPool
                                 (*(GList **)(this + 0x2a0),
                                  (basic_string *)&cocos2d::STD_STRING_EMPTY);
      (**(code **)(*plVar3 + 0x18))(plVar3,*(long *)(this + 0x2b0) + lVar8);
      lVar6 = *(long *)(this + 0x2c8);
      pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &cocos2d::STD_STRING_EMPTY;
      if ((lVar6 != *(long *)(this + 0x2d0)) &&
         (pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(lVar6 + lVar8),
         (ulong)((*(long *)(this + 0x2d0) - lVar6 >> 3) * -0x5555555555555555) <= uVar9)) {
        pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &cocos2d::STD_STRING_EMPTY;
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,pbVar4);
      pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (*(long *)(this + 0x2e0) + lVar8);
      if ((ulong)((*(long *)(this + 0x2e8) - *(long *)(this + 0x2e0) >> 3) * -0x5555555555555555) <=
          uVar9) {
        pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &cocos2d::STD_STRING_EMPTY;
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (plVar3 + 0xc) != pbVar4) {
        uVar1 = *(ulong *)(pbVar4 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar4 + 0x10);
        if (((byte)*pbVar4 & 1) == 0) {
          pbVar2 = pbVar4 + 1;
          uVar1 = (ulong)((byte)*pbVar4 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (plVar3 + 0xc),(char *)pbVar2,uVar1);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar9 < (ulong)((lVar5 - lVar7 >> 3) * -0x5555555555555555));
  }
  return;
}

