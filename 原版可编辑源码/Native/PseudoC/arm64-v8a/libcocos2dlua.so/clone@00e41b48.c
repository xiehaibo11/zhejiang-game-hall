
/* cocos2d::PUPropertyAbstractNode::clone() const */

PUPropertyAbstractNode * __thiscall
cocos2d::PUPropertyAbstractNode::clone(PUPropertyAbstractNode *this)

{
  ulong uVar1;
  PUPropertyAbstractNode *pPVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  PUPropertyAbstractNode *pPVar6;
  
                    /* try { // try from 00e41b6c to 00f41b73 has its CatchHandler @ 00e41e40 */
  pPVar2 = operator_new(0x70,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e41b74 to 00f41ccb has its CatchHandler @ 00e41b1c */
  if (pPVar2 != (PUPropertyAbstractNode *)0x0) {
    uVar5 = *(undefined8 *)(this + 0x28);
    *(PUPropertyAbstractNode **)(pPVar2 + 0x58) = pPVar2 + 0x58;
    *(PUPropertyAbstractNode **)(pPVar2 + 0x60) = pPVar2 + 0x58;
    *(undefined8 *)(pPVar2 + 0x40) = 0;
    *(undefined8 *)(pPVar2 + 0x48) = 0;
    *(undefined8 *)(pPVar2 + 0x30) = 0;
    *(undefined8 *)(pPVar2 + 0x38) = 0;
    *(undefined ***)pPVar2 = &PTR__PUPropertyAbstractNode_016f2010;
    *(undefined4 *)(pPVar2 + 0x50) = 0;
    *(undefined8 *)(pPVar2 + 0x68) = 0;
    *(undefined8 *)(pPVar2 + 0x20) = 0;
    *(undefined8 *)(pPVar2 + 0x18) = 0;
    *(undefined8 *)(pPVar2 + 0x10) = 0;
    *(undefined8 *)(pPVar2 + 8) = 0;
    *(undefined8 *)(pPVar2 + 0x28) = uVar5;
    *(undefined4 *)(pPVar2 + 0x24) = 3;
  }
  if (pPVar2 != this) {
    uVar1 = *(ulong *)(this + 0x10);
    pPVar6 = *(PUPropertyAbstractNode **)(this + 0x18);
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
    uVar1 = *(ulong *)(this + 0x40);
    pPVar6 = *(PUPropertyAbstractNode **)(this + 0x48);
    if (((byte)this[0x38] & 1) == 0) {
      pPVar6 = this + 0x39;
      uVar1 = (ulong)((byte)this[0x38] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar2 + 0x38),(char *)pPVar6,uVar1);
  }
  *(undefined4 *)(pPVar2 + 0x50) = *(undefined4 *)(this + 0x50);
  pPVar6 = *(PUPropertyAbstractNode **)(this + 0x60);
  if (this + 0x58 != pPVar6) {
    do {
      lVar3 = (**(code **)(**(long **)(pPVar6 + 0x10) + 0x10))();
      *(PUPropertyAbstractNode **)(lVar3 + 0x28) = pPVar2;
      plVar4 = operator_new(0x18);
      plVar4[1] = (long)(pPVar2 + 0x58);
      plVar4[2] = lVar3;
      lVar3 = *(long *)(pPVar2 + 0x58);
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(pPVar2 + 0x58) = plVar4;
      *(long *)(pPVar2 + 0x68) = *(long *)(pPVar2 + 0x68) + 1;
      pPVar6 = *(PUPropertyAbstractNode **)(pPVar6 + 8);
    } while (this + 0x58 != pPVar6);
  }
  return pPVar2;
}

