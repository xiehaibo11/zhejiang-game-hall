
/* cocos2d::extension::Manifest::clear() */

void __thiscall cocos2d::extension::Manifest::clear(Manifest *this)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  void *pvVar8;
  
  if ((this[0xc] != (Manifest)0x0) || (this[0xd] != (Manifest)0x0)) {
    pbVar1 = *(byte **)(this + 0x90);
    pbVar7 = *(byte **)(this + 0x98);
    while (pbVar4 = pbVar7, pbVar4 != pbVar1) {
      pbVar7 = pbVar4 + -0x18;
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    *(byte **)(this + 0x98) = pbVar1;
    if (*(long *)(this + 0xc0) != 0) {
      puVar3 = *(void **)(this + 0xb8);
      while (puVar3 != (void *)0x0) {
        pvVar8 = (void *)*puVar3;
        if ((*(byte *)(puVar3 + 5) & 1) != 0) {
                    /* catch() { ... } // from try @ 00a551a4 with catch @ 00a55270 */
          operator_delete((void *)puVar3[7]);
        }
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
                    /* catch() { ... } // from try @ 00a551bc with catch @ 00a55288 */
        operator_delete(puVar3);
                    /* catch() { ... } // from try @ 00a5517c with catch @ 00a5528c */
                    /* catch() { ... } // from try @ 00a551c4 with catch @ 00a55290 */
        puVar3 = pvVar8;
      }
      lVar5 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb8) = 0;
      if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 00a551ac with catch @ 00a552a0 */
        lVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xa8) + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
      }
                    /* catch() { ... } // from try @ 00a55168 with catch @ 00a552b8 */
      *(undefined8 *)(this + 0xc0) = 0;
    }
                    /* catch() { ... } // from try @ 00a5513c with catch @ 00a552bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),"",0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x60),"",0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),"",0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xd0),"",0);
    this[0xc] = (Manifest)0x0;
                    /* try { // try from 00a5530c to 00b5534f has its CatchHandler @ 00a5530c
                       catch() { ... } // from try @ 00a5530c with catch @ 00a5530c
                       catch() { ... } // from try @ 00a55368 with catch @ 00a5530c */
    if (this[0xd] != (Manifest)0x0) {
      if (*(long *)(this + 0x100) != 0) {
        puVar3 = *(void **)(this + 0xf8);
        while (puVar3 != (void *)0x0) {
          pvVar8 = (void *)*puVar3;
                    /* try { // try from 00a55350 to 00b55367 has its CatchHandler @ 00a55398 */
          if ((*(byte *)(puVar3 + 8) & 1) == 0) {
            if ((*(byte *)(puVar3 + 5) & 1) == 0) goto LAB_00a5535c;
LAB_00a55334:
            operator_delete((void *)puVar3[7]);
            bVar2 = *(byte *)(puVar3 + 2);
          }
          else {
            operator_delete((void *)puVar3[10]);
            if ((*(byte *)(puVar3 + 5) & 1) != 0) goto LAB_00a55334;
LAB_00a5535c:
            bVar2 = *(byte *)(puVar3 + 2);
          }
          if ((bVar2 & 1) != 0) {
                    /* try { // try from 00a55368 to 00b553ab has its CatchHandler @ 00a5530c */
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          puVar3 = pvVar8;
        }
        lVar5 = *(long *)(this + 0xf0);
        *(undefined8 *)(this + 0xf8) = 0;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            *(undefined8 *)(*(long *)(this + 0xe8) + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 00a55350 with catch @ 00a55398 */
          } while (lVar5 != lVar6);
        }
        *(undefined8 *)(this + 0x100) = 0;
      }
      pbVar1 = *(byte **)(this + 0x110);
      pbVar7 = *(byte **)(this + 0x118);
                    /* try { // try from 00a553ac to 00b553fb has its CatchHandler @ 00a553ac
                       catch() { ... } // from try @ 00a553ac with catch @ 00a553ac
                       catch() { ... } // from try @ 00a554b4 with catch @ 00a553ac */
      while (pbVar4 = pbVar7, pbVar4 != pbVar1) {
        pbVar7 = pbVar4 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
      }
      *(byte **)(this + 0x118) = pbVar1;
      this[0xd] = (Manifest)0x0;
    }
  }
  return;
}

