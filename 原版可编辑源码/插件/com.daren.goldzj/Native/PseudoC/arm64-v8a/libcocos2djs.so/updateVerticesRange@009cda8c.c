
/* cocos2d::renderer::Assembler::updateVerticesRange(unsigned long, int, int) */

void __thiscall
cocos2d::renderer::Assembler::updateVerticesRange
          (Assembler *this,ulong param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
                    /* catch() { ... } // from try @ 009cd868 with catch @ 009cda9c */
                    /* catch() { ... } // from try @ 009cd85c with catch @ 009cdaa0 */
                    /* catch() { ... } // from try @ 009cd83c with catch @ 009cdaa4 */
  lVar3 = *(long *)(this + 0x40);
                    /* catch() { ... } // from try @ 009cd874 with catch @ 009cdab4 */
  lVar5 = *(long *)(this + 0x48);
  uVar6 = lVar5 - lVar3 >> 5;
  if (uVar6 <= param_1) {
    uVar1 = param_1 + 1;
    if (uVar1 < uVar6 || uVar1 - uVar6 == 0) {
      if (uVar1 < uVar6) {
        lVar2 = lVar3 + uVar1 * 0x20;
        if (lVar2 != lVar5) {
          puVar7 = (undefined8 *)(lVar5 + -0x20);
          do {
            if ((Ref *)*puVar7 != (Ref *)0x0) {
              Ref::release((Ref *)*puVar7);
            }
            puVar7 = puVar7 + -4;
                    /* try { // try from 009cdb0c to 00acdb63 has its CatchHandler @ 009cdb0c
                       catch() { ... } // from try @ 009cdb0c with catch @ 009cdb0c
                       catch() { ... } // from try @ 009cdec8 with catch @ 009cdb0c */
          } while ((undefined8 *)(lVar3 + param_1 * 0x20) != puVar7);
        }
        *(long *)(this + 0x48) = lVar2;
      }
    }
    else {
      std::__ndk1::
      vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
      ::__append((vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
                  *)(this + 0x40),uVar1 - uVar6);
    }
  }
  lVar3 = *(long *)(this + 0x40) + param_1 * 0x20;
  *(int *)(lVar3 + 0xc) = param_2;
  *(int *)(lVar3 + 0x10) = param_3;
  puVar4 = *(uint **)(this + 0x18);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *puVar4 | 1;
  }
  return;
}

