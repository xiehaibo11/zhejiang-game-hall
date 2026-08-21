
/* fairygui::GearText::init() */

void __thiscall fairygui::GearText::init(GearText *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (**(code **)(**(long **)(this + 8) + 0x10))();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) != pbVar4) {
    uVar1 = *(ulong *)(pbVar4 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar4 + 0x10);
    if (((byte)*pbVar4 & 1) == 0) {
      pbVar2 = pbVar4 + 1;
      uVar1 = (ulong)((byte)*pbVar4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pbVar2,uVar1);
  }
  if (*(long *)(this + 0x38) != 0) {
    puVar3 = *(void **)(this + 0x30);
    while (puVar3 != (void *)0x0) {
      pvVar7 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 5) & 1) != 0) {
        operator_delete((void *)puVar3[7]);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab59d8 with catch @ 00ab5968
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a08 with catch @ 00ab5968
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a38 with catch @ 00ab5968
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a60 with catch @ 00ab5968
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab5a8c with catch @ 00ab5968
                        */
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar7;
    }
    lVar5 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

