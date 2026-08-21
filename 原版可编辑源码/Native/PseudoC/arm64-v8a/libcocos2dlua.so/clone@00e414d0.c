
/* cocos2d::PUObjectAbstractNode::clone() const */

PUObjectAbstractNode * __thiscall cocos2d::PUObjectAbstractNode::clone(PUObjectAbstractNode *this)

{
  ulong uVar1;
  PUObjectAbstractNode *pPVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  PUObjectAbstractNode *pPVar6;
  
  pPVar2 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUObjectAbstractNode *)0x0) {
    uVar5 = *(undefined8 *)(this + 0x28);
    *(undefined4 *)(pPVar2 + 0x58) = 0x3f800000;
    *(PUObjectAbstractNode **)(pPVar2 + 0xb0) = pPVar2 + 0xb0;
    *(PUObjectAbstractNode **)(pPVar2 + 0xb8) = pPVar2 + 0xb0;
    *(PUObjectAbstractNode **)(pPVar2 + 0xe0) = pPVar2 + 0xe0;
    *(PUObjectAbstractNode **)(pPVar2 + 0xe8) = pPVar2 + 0xe0;
    *(undefined ***)pPVar2 = &PTR__PUObjectAbstractNode_016f1fe0;
    *(undefined8 *)(pPVar2 + 0xf0) = 0;
    *(undefined8 *)(pPVar2 + 0x20) = 0;
    *(undefined8 *)(pPVar2 + 0x18) = 0;
    *(undefined8 *)(pPVar2 + 0x10) = 0;
    *(undefined8 *)(pPVar2 + 8) = 0;
    *(undefined8 *)(pPVar2 + 0x40) = 0;
    *(undefined8 *)(pPVar2 + 0x38) = 0;
                    /* try { // try from 00e41548 to 00f4154f has its CatchHandler @ 00e41618 */
    *(undefined8 *)(pPVar2 + 0x50) = 0;
    *(undefined8 *)(pPVar2 + 0x48) = 0;
    *(undefined8 *)(pPVar2 + 0x68) = 0;
    *(undefined8 *)(pPVar2 + 0x60) = 0;
    *(undefined8 *)(pPVar2 + 0x78) = 0;
    *(undefined8 *)(pPVar2 + 0x70) = 0;
                    /* try { // try from 00e41550 to 00f4162b has its CatchHandler @ 00e413d8 */
    *(undefined8 *)(pPVar2 + 0x88) = 0;
    *(undefined8 *)(pPVar2 + 0x80) = 0;
    *(undefined8 *)(pPVar2 + 0x98) = 0;
    *(undefined8 *)(pPVar2 + 0x90) = 0;
    *(undefined8 *)(pPVar2 + 0xa5) = 0;
    *(undefined8 *)(pPVar2 + 0x9d) = 0;
    *(undefined8 *)(pPVar2 + 0xc0) = 0;
    *(PUObjectAbstractNode **)(pPVar2 + 200) = pPVar2 + 200;
    *(PUObjectAbstractNode **)(pPVar2 + 0xd0) = pPVar2 + 200;
    *(undefined8 *)(pPVar2 + 0xd8) = 0;
    *(undefined8 *)(pPVar2 + 0x28) = uVar5;
    *(undefined8 *)(pPVar2 + 0x30) = 0;
    *(undefined4 *)(pPVar2 + 0x24) = 2;
  }
  if (pPVar2 != this) {
    uVar1 = *(ulong *)(this + 0x10);
    pPVar6 = *(PUObjectAbstractNode **)(this + 0x18);
    if (((byte)this[8] & 1) == 0) {
      pPVar6 = this + 9;
      uVar1 = (ulong)((byte)this[8] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar2 + 8),(char *)pPVar6,uVar1);
  }
  *(undefined8 *)(pPVar2 + 0x20) = *(undefined8 *)(this + 0x20);
  if (pPVar2 != this) {
    uVar1 = *(ulong *)(this + 0x68);
    pPVar6 = *(PUObjectAbstractNode **)(this + 0x70);
    if (((byte)this[0x60] & 1) == 0) {
      pPVar6 = this + 0x61;
      uVar1 = (ulong)((byte)this[0x60] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar2 + 0x60),(char *)pPVar6,uVar1);
    uVar1 = (ulong)((byte)this[0x78] >> 1);
    pPVar6 = this + 0x79;
    if (((byte)this[0x78] & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x80);
      pPVar6 = *(PUObjectAbstractNode **)(this + 0x88);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar2 + 0x78),(char *)pPVar6,uVar1);
  }
  *(undefined4 *)(pPVar2 + 0xa8) = *(undefined4 *)(this + 0xa8);
  pPVar2[0xac] = this[0xac];
  *(undefined8 *)(pPVar2 + 0x30) = *(undefined8 *)(this + 0x30);
  pPVar6 = *(PUObjectAbstractNode **)(this + 0xb8);
  if (this + 0xb0 != pPVar6) {
    do {
                    /* catch() { ... } // from try @ 00e41548 with catch @ 00e41618 */
      lVar3 = (**(code **)(**(long **)(pPVar6 + 0x10) + 0x10))();
      *(PUObjectAbstractNode **)(lVar3 + 0x28) = pPVar2;
      plVar4 = operator_new(0x18);
      plVar4[1] = (long)(pPVar2 + 0xb0);
      plVar4[2] = lVar3;
      lVar3 = *(long *)(pPVar2 + 0xb0);
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(pPVar2 + 0xb0) = plVar4;
      *(long *)(pPVar2 + 0xc0) = *(long *)(pPVar2 + 0xc0) + 1;
      pPVar6 = *(PUObjectAbstractNode **)(pPVar6 + 8);
    } while (this + 0xb0 != pPVar6);
  }
  pPVar6 = *(PUObjectAbstractNode **)(this + 0xd0);
  if (this + 200 != pPVar6) {
    do {
      lVar3 = (**(code **)(**(long **)(pPVar6 + 0x10) + 0x10))();
      *(PUObjectAbstractNode **)(lVar3 + 0x28) = pPVar2;
      plVar4 = operator_new(0x18);
      plVar4[1] = (long)(pPVar2 + 200);
      plVar4[2] = lVar3;
      lVar3 = *(long *)(pPVar2 + 200);
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(pPVar2 + 200) = plVar4;
      *(long *)(pPVar2 + 0xd8) = *(long *)(pPVar2 + 0xd8) + 1;
      pPVar6 = *(PUObjectAbstractNode **)(pPVar6 + 8);
    } while (this + 200 != pPVar6);
  }
  if (pPVar2 != this) {
    *(undefined4 *)(pPVar2 + 0x58) = *(undefined4 *)(this + 0x58);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(pPVar2 + 0x38),*(undefined8 *)(this + 0x48),0);
  }
  return pPVar2;
}

