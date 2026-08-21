
/* std::__ndk1::vector<cocos2d::renderer::Assembler::IARenderData,
   std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
::__append(vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
           *this,ulong param_1)

{
  void *pvVar1;
  Ref *this_00;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar9 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar9 >> 5)) {
    puVar12 = puVar9;
    uVar10 = param_1;
                    /* try { // try from 009ce2e4 to 00ace2ef has its CatchHandler @ 009ce364 */
    if (1 < param_1) {
                    /* try { // try from 009ce2f0 to 00ace303 has its CatchHandler @ 009ce334 */
      uVar5 = param_1 & 0xfffffffffffffffe;
      puVar7 = puVar9 + 4;
      puVar12 = puVar9 + uVar5 * 4;
      uVar10 = param_1 - uVar5;
      uVar3 = uVar5;
      do {
        puVar7[-4] = 0;
        *puVar7 = 0;
                    /* try { // try from 009ce314 to 00ace31f has its CatchHandler @ 009ce364 */
        puVar7[-2] = 0xffffffff;
        puVar7[-3] = 0xffffffff;
        puVar7[2] = 0xffffffff;
        puVar7[1] = 0xffffffff;
        *(undefined4 *)(puVar7 + -1) = 0xffffffff;
                    /* try { // try from 009ce320 to 00ace3bb has its CatchHandler @ 009cdf64 */
        *(undefined4 *)(puVar7 + 3) = 0xffffffff;
        uVar3 = uVar3 - 2;
        puVar7 = puVar7 + 8;
      } while (uVar3 != 0);
                    /* catch() { ... } // from try @ 009ce2f0 with catch @ 009ce334 */
      if (uVar5 == param_1) goto LAB_009ce358;
    }
    do {
      *puVar12 = 0;
      puVar12[2] = 0xffffffff;
      puVar12[1] = 0xffffffff;
      *(undefined4 *)(puVar12 + 3) = 0xffffffff;
                    /* catch() { ... } // from try @ 009cdfe8 with catch @ 009ce34c */
      uVar10 = uVar10 - 1;
                    /* catch() { ... } // from try @ 009cdfdc with catch @ 009ce350 */
      puVar12 = puVar12 + 4;
                    /* catch() { ... } // from try @ 009cdfbc with catch @ 009ce354 */
    } while (uVar10 != 0);
LAB_009ce358:
    *(undefined8 **)(this + 8) = puVar9 + param_1 * 4;
    return;
  }
  puVar12 = *(undefined8 **)this;
  lVar11 = (long)puVar9 - (long)puVar12 >> 5;
                    /* try { // try from 009ce2a0 to 00ace2b3 has its CatchHandler @ 009ce33c */
  uVar10 = lVar11 + param_1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar2 = *(long *)(this + 0x10) - (long)puVar12;
  if ((ulong)(lVar2 >> 5) < 0x3ffffffffffffff) {
    uVar3 = lVar2 >> 4;
                    /* try { // try from 009ce2c0 to 00ace2c7 has its CatchHandler @ 009ce364 */
    if (uVar10 <= uVar3) {
      uVar10 = uVar3;
    }
                    /* try { // try from 009ce2c8 to 00ace2db has its CatchHandler @ 009ce338 */
    if (uVar10 != 0) {
      if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      goto LAB_009ce368;
    }
    pvVar1 = (void *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 009cdff4 with catch @ 009ce364
                       catch() { ... } // from try @ 009ce2c0 with catch @ 009ce364
                       catch() { ... } // from try @ 009ce2e4 with catch @ 009ce364
                       catch() { ... } // from try @ 009ce314 with catch @ 009ce364 */
    uVar10 = 0x7ffffffffffffff;
LAB_009ce368:
    pvVar1 = operator_new(uVar10 << 5);
  }
  puVar7 = (undefined8 *)((long)pvVar1 + lVar11 * 0x20);
  puVar4 = puVar7;
  uVar3 = param_1;
  if (1 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffffe;
    puVar8 = puVar7 + 4;
    puVar4 = puVar7 + uVar6 * 4;
    uVar3 = param_1 - uVar6;
    uVar5 = uVar6;
    do {
      puVar8[-4] = 0;
      *puVar8 = 0;
      puVar8[-2] = 0xffffffff;
      puVar8[-3] = 0xffffffff;
      puVar8[2] = 0xffffffff;
      puVar8[1] = 0xffffffff;
      *(undefined4 *)(puVar8 + -1) = 0xffffffff;
      *(undefined4 *)(puVar8 + 3) = 0xffffffff;
                    /* try { // try from 009ce3bc to 00ace417 has its CatchHandler @ 009ce3bc
                       catch() { ... } // from try @ 009ce3bc with catch @ 009ce3bc
                       catch() { ... } // from try @ 009ce5cc with catch @ 009ce3bc
                       catch() { ... } // from try @ 009ce77c with catch @ 009ce3bc */
      uVar5 = uVar5 - 2;
      puVar8 = puVar8 + 8;
    } while (uVar5 != 0);
    if (uVar6 == param_1) goto LAB_009ce3f0;
  }
  do {
    *puVar4 = 0;
    puVar4[2] = 0xffffffff;
    puVar4[1] = 0xffffffff;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
    uVar3 = uVar3 - 1;
    puVar4 = puVar4 + 4;
  } while (uVar3 != 0);
LAB_009ce3f0:
  puVar4 = puVar7 + param_1 * 4;
  if (puVar9 != puVar12) {
    do {
      puVar7[-4] = 0;
      puVar7[-2] = 0xffffffff;
      puVar7[-3] = 0xffffffff;
      *(undefined4 *)(puVar7 + -1) = 0xffffffff;
      uVar13 = puVar9[-3];
      puVar7[-2] = puVar9[-2];
      puVar7[-3] = uVar13;
                    /* try { // try from 009ce418 to 00ace42f has its CatchHandler @ 009ce7b4 */
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(puVar9 + -1);
      puVar9 = puVar9 + -4;
      this_00 = (Ref *)*puVar9;
      if (this_00 != (Ref *)0x0) {
        puVar7[-4] = this_00;
        cocos2d::Ref::retain(this_00);
      }
      puVar7 = puVar7 + -4;
                    /* try { // try from 009ce438 to 00ace443 has its CatchHandler @ 009ce7b0 */
    } while (puVar12 != puVar9);
    puVar9 = *(undefined8 **)this;
  }
  puVar12 = *(undefined8 **)(this + 8);
                    /* try { // try from 009ce444 to 00ace44f has its CatchHandler @ 009ce7ac */
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar10 * 0x20);
                    /* try { // try from 009ce450 to 00ace5cb has its CatchHandler @ 009ce7c4 */
  while (puVar12 != puVar9) {
    puVar12 = puVar12 + -4;
    if ((Ref *)*puVar12 != (Ref *)0x0) {
      cocos2d::Ref::release((Ref *)*puVar12);
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar9);
  return;
}

