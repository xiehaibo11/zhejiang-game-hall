
/* fairygui::GearText::apply() */

void __thiscall fairygui::GearText::apply(GearText *this)

{
  basic_string *pbVar1;
  long lVar2;
  GearText *pGVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 00ab5a8c to 00bb5acf has its CatchHandler @ 00ab5968 */
  *(undefined1 *)(*(long *)(this + 8) + 0x99) = 1;
  pbVar1 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(this + 0x20),pbVar1);
  plVar4 = *(long **)(this + 8);
  if (lVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab59d0 with catch @ 00ab5acc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab59fc with catch @ 00ab5acc
                        */
    lVar5 = *plVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab5b40 with catch @ 00ab5ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5b70 with catch @ 00ab5ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5ba0 with catch @ 00ab5ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5bc8 with catch @ 00ab5ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5bf4 with catch @ 00ab5ad0
                        */
    pGVar3 = this + 0x48;
  }
  else {
    lVar5 = *plVar4;
    pGVar3 = (GearText *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab5a30 with catch @ 00ab5ac8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a58 with catch @ 00ab5ac8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a80 with catch @ 00ab5ac8
                        */
  }
  (**(code **)(lVar5 + 0x18))(plVar4,pGVar3);
  *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
  return;
}

