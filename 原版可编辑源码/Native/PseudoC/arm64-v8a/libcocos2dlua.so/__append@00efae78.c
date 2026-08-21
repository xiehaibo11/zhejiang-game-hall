
/* std::__ndk1::vector<cocos2d::PrimitiveCommand, std::__ndk1::allocator<cocos2d::PrimitiveCommand>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<cocos2d::PrimitiveCommand,std::__ndk1::allocator<cocos2d::PrimitiveCommand>>::
__append(vector<cocos2d::PrimitiveCommand,std::__ndk1::allocator<cocos2d::PrimitiveCommand>> *this,
        ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  PrimitiveCommand *pPVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  PrimitiveCommand *pPVar9;
  PrimitiveCommand *pPVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  pPVar6 = *(PrimitiveCommand **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pPVar6 >> 3) * -0x1111111111111111)) {
    pPVar9 = pPVar6;
    if (param_1 != 0) {
      pPVar9 = pPVar6 + param_1 * 0x78;
      lVar5 = param_1 * 0x78;
      do {
        cocos2d::PrimitiveCommand::PrimitiveCommand(pPVar6);
        lVar5 = lVar5 + -0x78;
        pPVar6 = pPVar6 + 0x78;
      } while (lVar5 != 0);
    }
    *(PrimitiveCommand **)(this + 8) = pPVar9;
    return;
  }
  uVar11 = 0x222222222222222;
  lVar5 = (long)pPVar6 - *(long *)this >> 3;
  uVar1 = lVar5 * -0x1111111111111111 + param_1;
  if (0x222222222222222 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar3 * -0x1111111111111111) < 0x111111111111111) {
    uVar4 = lVar3 * -0x2222222222222222;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      pvVar2 = (void *)0x0;
                    /* catch() { ... } // from try @ 00efacc8 with catch @ 00efb060 */
      goto LAB_00efaf28;
    }
  }
  pvVar2 = operator_new(uVar11 * 0x78);
LAB_00efaf28:
  pPVar10 = (PrimitiveCommand *)((long)pvVar2 + lVar5 * 8);
  lVar5 = param_1 * 0x78;
  pPVar9 = pPVar10 + lVar5;
  pPVar6 = pPVar10;
  do {
    cocos2d::PrimitiveCommand::PrimitiveCommand(pPVar6);
    lVar5 = lVar5 + -0x78;
    pPVar6 = pPVar6 + 0x78;
  } while (lVar5 != 0);
  puVar7 = *(undefined8 **)this;
  puVar12 = *(undefined8 **)(this + 8);
  puVar8 = puVar7;
  if (puVar12 != puVar7) {
    do {
      *(undefined ***)(pPVar10 + -0x78) = &PTR__RenderCommand_01724240;
      uVar14 = puVar12[-0xd];
      uVar13 = puVar12[-0xe];
      *(undefined ***)(pPVar10 + -0x78) = &PTR__PrimitiveCommand_017241d0;
      *(undefined8 *)(pPVar10 + -0x68) = uVar14;
      *(undefined8 *)(pPVar10 + -0x70) = uVar13;
      uVar15 = puVar12[-0xb];
      uVar14 = puVar12[-0xc];
      uVar13 = puVar12[-10];
      *(undefined8 *)(pPVar10 + -0x48) = puVar12[-9];
      *(undefined8 *)(pPVar10 + -0x50) = uVar13;
      *(undefined8 *)(pPVar10 + -0x58) = uVar15;
      *(undefined8 *)(pPVar10 + -0x60) = uVar14;
      cocos2d::Mat4::Mat4((Mat4 *)(pPVar10 + -0x40),(Mat4 *)(puVar12 + -8));
      puVar12 = puVar12 + -0xf;
      pPVar10 = pPVar10 + -0x78;
    } while (puVar7 != puVar12);
    puVar7 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
  }
  *(PrimitiveCommand **)this = pPVar10;
  *(PrimitiveCommand **)(this + 8) = pPVar9;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar11 * 0x78);
  while (puVar8 != puVar7) {
    puVar8 = puVar8 + -0xf;
    (**(code **)*puVar8)(puVar8);
  }
  if (puVar7 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00efb03c with catch @ 00efb044
                       try { // try from 00efb044 to 00ffb0a3 has its CatchHandler @ 00efa57c */
                    /* catch() { ... } // from try @ 00efad84 with catch @ 00efb048 */
    return;
  }
                    /* try { // try from 00efb03c to 00ffb043 has its CatchHandler @ 00efb044 */
  operator_delete(puVar7);
  return;
}

