
/* cocos2d::extension::Manifest::clear() */

void __thiscall cocos2d::extension::Manifest::clear(Manifest *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  if ((this[0x21] != (Manifest)0x0) || (this[0x22] != (Manifest)0x0)) {
    pbVar1 = *(byte **)(this + 0xa8);
    pbVar2 = *(byte **)(this + 0xb0);
    if (pbVar2 != pbVar1) {
      bVar3 = pbVar2[-0x18];
      pbVar4 = pbVar2 + -0x18;
      while( true ) {
                    /* catch() { ... } // from try @ 00df9e8c with catch @ 00dfa364 */
        if ((bVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dfa200 with catch @ 00dfa380 */
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if (pbVar1 == pbVar4) break;
        bVar3 = pbVar4[-0x18];
        pbVar2 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
    }
                    /* catch() { ... } // from try @ 00dfa218 with catch @ 00dfa38c */
    *(byte **)(this + 0xb0) = pbVar1;
    if (*(long *)(this + 0xd8) != 0) {
      puVar5 = *(void **)(this + 0xd0);
      while (puVar5 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00dfa060 with catch @ 00dfa3b0 */
        pvVar8 = (void *)*puVar5;
        if ((*(byte *)(puVar5 + 5) & 1) != 0) {
                    /* catch() { ... } // from try @ 00dfa028 with catch @ 00dfa3bc */
                    /* catch() { ... } // from try @ 00dfa078 with catch @ 00dfa3c0 */
          operator_delete((void *)puVar5[7]);
        }
                    /* catch() { ... } // from try @ 00dfa1b8 with catch @ 00dfa3c4 */
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          operator_delete((void *)puVar5[4]);
                    /* catch() { ... } // from try @ 00dfa114 with catch @ 00dfa3d4 */
        }
                    /* catch() { ... } // from try @ 00dfa010 with catch @ 00dfa3a4 */
        operator_delete(puVar5);
        puVar5 = pvVar8;
      }
      lVar6 = *(long *)(this + 200);
                    /* catch() { ... } // from try @ 00dfa1dc with catch @ 00dfa3dc */
      *(undefined8 *)(this + 0xd0) = 0;
                    /* catch() { ... } // from try @ 00dfa188 with catch @ 00dfa3e0 */
      if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 00dfa0a4 with catch @ 00dfa3e4 */
        lVar7 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xc0) + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(this + 0xd8) = 0;
    }
                    /* catch() { ... } // from try @ 00dfa1e8 with catch @ 00dfa404 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x60),"",0);
                    /* catch() { ... } // from try @ 00dfa0c0 with catch @ 00dfa41c */
                    /* catch() { ... } // from try @ 00dfa0cc with catch @ 00dfa420 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),"",0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x90),"",0);
                    /* catch() { ... } // from try @ 00df9ff8 with catch @ 00dfa438 */
                    /* catch() { ... } // from try @ 00dfa048 with catch @ 00dfa43c */
                    /* catch() { ... } // from try @ 00dfa17c with catch @ 00dfa440
                       catch() { ... } // from try @ 00dfa1d4 with catch @ 00dfa440 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xe8),"",0);
    this[0x21] = (Manifest)0x0;
    if (this[0x22] != (Manifest)0x0) {
      if (*(long *)(this + 0x118) != 0) {
        puVar5 = *(void **)(this + 0x110);
        while (puVar5 != (void *)0x0) {
          pvVar8 = (void *)*puVar5;
          if ((*(byte *)(puVar5 + 8) & 1) == 0) {
            if ((*(byte *)(puVar5 + 5) & 1) != 0) goto LAB_00dfa4a8;
LAB_00dfa48c:
            bVar3 = *(byte *)(puVar5 + 2);
          }
          else {
            operator_delete((void *)puVar5[10]);
            if ((*(byte *)(puVar5 + 5) & 1) == 0) goto LAB_00dfa48c;
LAB_00dfa4a8:
                    /* catch() { ... } // from try @ 00dfa0ac with catch @ 00dfa4a8
                       catch() { ... } // from try @ 00dfa294 with catch @ 00dfa4a8 */
            operator_delete((void *)puVar5[7]);
            bVar3 = *(byte *)(puVar5 + 2);
          }
          if ((bVar3 & 1) != 0) {
            operator_delete((void *)puVar5[4]);
          }
          operator_delete(puVar5);
          puVar5 = pvVar8;
        }
        lVar6 = *(long *)(this + 0x108);
        *(undefined8 *)(this + 0x110) = 0;
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)(*(long *)(this + 0x100) + lVar7 * 8) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar6 != lVar7);
        }
        *(undefined8 *)(this + 0x118) = 0;
      }
      pbVar1 = *(byte **)(this + 0x128);
      pbVar2 = *(byte **)(this + 0x130);
      if (pbVar2 != pbVar1) {
        bVar3 = pbVar2[-0x18];
        pbVar4 = pbVar2 + -0x18;
        while( true ) {
                    /* catch() { ... } // from try @ 00dfa628 with catch @ 00dfa500
                       catch() { ... } // from try @ 00dfa82c with catch @ 00dfa500 */
          if ((bVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar2 + -8));
          }
          if (pbVar1 == pbVar4) break;
          bVar3 = pbVar4[-0x18];
          pbVar2 = pbVar4;
          pbVar4 = pbVar4 + -0x18;
        }
      }
      *(byte **)(this + 0x130) = pbVar1;
      this[0x22] = (Manifest)0x0;
    }
  }
  return;
}

