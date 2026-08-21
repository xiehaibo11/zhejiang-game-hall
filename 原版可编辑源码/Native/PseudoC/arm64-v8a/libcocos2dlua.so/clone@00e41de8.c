
/* cocos2d::PUAtomAbstractNode::clone() const */

PUAtomAbstractNode * __thiscall cocos2d::PUAtomAbstractNode::clone(PUAtomAbstractNode *this)

{
  ulong uVar1;
  PUAtomAbstractNode *pPVar2;
  PUAtomAbstractNode *pPVar3;
  undefined8 uVar4;
  
  pPVar3 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (pPVar3 != (PUAtomAbstractNode *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e41d2c with catch @ 00e41e14
                        */
    uVar4 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(pPVar3 + 0x40) = 0;
    *(undefined8 *)(pPVar3 + 0x48) = 0;
    *(undefined8 *)(pPVar3 + 0x30) = 0;
    *(undefined8 *)(pPVar3 + 0x38) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e41ccc with catch @ 00e41e2c
                        */
    *(undefined ***)pPVar3 = &PTR__PUAtomAbstractNode_016f2040;
    *(undefined4 *)(pPVar3 + 0x50) = 0;
    *(undefined8 *)(pPVar3 + 0x20) = 0;
    *(undefined8 *)(pPVar3 + 0x18) = 0;
    *(undefined8 *)(pPVar3 + 0x10) = 0;
    *(undefined8 *)(pPVar3 + 8) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e41b6c with catch @ 00e41e40
                        */
    *(undefined8 *)(pPVar3 + 0x28) = uVar4;
    *(undefined4 *)(pPVar3 + 0x24) = 1;
  }
  if (pPVar3 != this) {
    uVar1 = *(ulong *)(this + 0x10);
    pPVar2 = *(PUAtomAbstractNode **)(this + 0x18);
    if (((byte)this[8] & 1) == 0) {
      pPVar2 = this + 9;
      uVar1 = (ulong)((byte)this[8] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar3 + 8),(char *)pPVar2,uVar1);
  }
  *(undefined4 *)(pPVar3 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined8 *)(pPVar3 + 0x20) = *(undefined8 *)(this + 0x20);
  if (pPVar3 != this) {
    uVar1 = *(ulong *)(this + 0x40);
    pPVar2 = *(PUAtomAbstractNode **)(this + 0x48);
    if (((byte)this[0x38] & 1) == 0) {
      pPVar2 = this + 0x39;
      uVar1 = (ulong)((byte)this[0x38] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar3 + 0x38),(char *)pPVar2,uVar1);
  }
  return pPVar3;
}

