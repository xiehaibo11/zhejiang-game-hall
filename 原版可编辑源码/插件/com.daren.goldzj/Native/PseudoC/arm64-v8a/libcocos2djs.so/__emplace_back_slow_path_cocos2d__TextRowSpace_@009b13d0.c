
/* void std::__ndk1::vector<cocos2d::TextRowSpace, std::__ndk1::allocator<cocos2d::TextRowSpace>
   >::__emplace_back_slow_path<cocos2d::TextRowSpace>(cocos2d::TextRowSpace&&) */

void __thiscall
std::__ndk1::vector<cocos2d::TextRowSpace,std::__ndk1::allocator<cocos2d::TextRowSpace>>::
__emplace_back_slow_path<cocos2d::TextRowSpace>
          (vector<cocos2d::TextRowSpace,std::__ndk1::allocator<cocos2d::TextRowSpace>> *this,
          TextRowSpace *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  TextRowSpace TVar3;
  undefined1 uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  undefined8 uVar14;
  
                    /* try { // try from 009b13e8 to 00ab13ef has its CatchHandler @ 009b1420 */
                    /* try { // try from 009b13f8 to 00ab13fb has its CatchHandler @ 009b1410 */
                    /* try { // try from 009b13fc to 00ab1433 has its CatchHandler @ 009b13b4 */
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar13 = 0x492492492492492;
                    /* catch() { ... } // from try @ 009b13f8 with catch @ 009b1410 */
  uVar1 = lVar7 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009b15c4 to 00ab15cf has its CatchHandler @ 009b16a8 */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009b13e8 with catch @ 009b1420 */
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
                    /* try { // try from 009b1434 to 00ab146b has its CatchHandler @ 009b1434
                       catch() { ... } // from try @ 009b1434 with catch @ 009b1434
                       catch() { ... } // from try @ 009b1474 with catch @ 009b1434 */
  if ((ulong)(lVar9 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar10 = lVar9 * -0x2492492492492492;
    uVar13 = uVar1;
    if (uVar1 <= uVar10) {
      uVar13 = uVar10;
    }
    if (uVar13 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_009b1468;
    }
  }
  pvVar5 = operator_new(uVar13 * 0x38);
LAB_009b1468:
                    /* try { // try from 009b146c to 00ab1473 has its CatchHandler @ 009b1484 */
  puVar8 = (undefined8 *)((long)pvVar5 + lVar7 * 8);
                    /* try { // try from 009b1474 to 00ab1497 has its CatchHandler @ 009b1434 */
  *(undefined1 *)(puVar8 + 6) = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  uVar14 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 009b146c with catch @ 009b1484 */
  puVar8[1] = *(undefined8 *)(param_1 + 8);
  *puVar8 = uVar14;
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((long)puVar8 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  TVar3 = param_1[0x30];
  puVar8[4] = *(undefined8 *)(param_1 + 0x20);
  puVar8[3] = uVar14;
  puVar8[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(TextRowSpace *)(puVar8 + 6) = TVar3;
  *(undefined8 *)(param_1 + 8) = 0x80000000800000;
  *(undefined8 *)param_1 = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = (TextRowSpace)0x0;
  pvVar11 = *(void **)this;
  pvVar6 = *(void **)(this + 8);
  puVar2 = puVar8 + 7;
  pvVar12 = pvVar11;
  if (pvVar6 != pvVar11) {
    lVar7 = 0;
    do {
      *(undefined8 *)((long)puVar8 + lVar7 + -0x30) = 0x80000000800000;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x38) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar8 + lVar7 + -8) = 0;
                    /* try { // try from 009b14f4 to 00ab1543 has its CatchHandler @ 009b14f4
                       catch() { ... } // from try @ 009b14f4 with catch @ 009b14f4
                       catch() { ... } // from try @ 009b1624 with catch @ 009b14f4 */
      *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = 0;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x18) = 0;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x20) = 0;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x28) = 0;
      uVar14 = *(undefined8 *)((long)pvVar6 + lVar7 + -0x38);
      lVar9 = lVar7 + -0x38;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x30) = *(undefined8 *)((long)pvVar6 + lVar7 + -0x30);
      *(undefined8 *)((long)puVar8 + lVar7 + -0x38) = uVar14;
      *(undefined4 *)((long)puVar8 + lVar7 + -0x28) = *(undefined4 *)((long)pvVar6 + lVar7 + -0x28);
      *(undefined4 *)((long)puVar8 + lVar7 + -0x24) = *(undefined4 *)((long)pvVar6 + lVar7 + -0x24);
      uVar14 = *(undefined8 *)((long)pvVar6 + lVar7 + -0x20);
      uVar4 = *(undefined1 *)((long)pvVar6 + lVar7 + -8);
      *(undefined8 *)((long)puVar8 + lVar7 + -0x18) = *(undefined8 *)((long)pvVar6 + lVar7 + -0x18);
      *(undefined8 *)((long)puVar8 + lVar7 + -0x20) = uVar14;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = *(undefined8 *)((long)pvVar6 + lVar7 + -0x10);
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x20) = 0;
      *(undefined1 *)((long)puVar8 + lVar7 + -8) = uVar4;
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x30) = 0x80000000800000;
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x38) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x28) = 0;
                    /* try { // try from 009b1544 to 00ab156f has its CatchHandler @ 009b16cc */
      *(undefined8 *)((long)pvVar6 + lVar7 + -0x18) = 0;
      *(undefined1 *)((long)pvVar6 + lVar7 + -8) = 0;
      lVar7 = lVar9;
    } while ((long)pvVar11 - (long)pvVar6 != lVar9);
    pvVar11 = *(void **)(this + 8);
    puVar8 = (undefined8 *)((long)puVar8 + lVar9);
    pvVar12 = *(void **)this;
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar13 * 0x38);
  while (pvVar5 = pvVar11, pvVar5 != pvVar12) {
    pvVar6 = *(void **)((long)pvVar5 + -0x20);
                    /* try { // try from 009b1574 to 00ab157b has its CatchHandler @ 009b16b0 */
    pvVar11 = (void *)((long)pvVar5 + -0x38);
    if (pvVar6 != (void *)0x0) {
      *(void **)((long)pvVar5 + -0x18) = pvVar6;
      operator_delete(pvVar6);
    }
  }
  if (pvVar12 != (void *)0x0) {
                    /* try { // try from 009b15a0 to 00ab15a3 has its CatchHandler @ 009b16ac */
                    /* try { // try from 009b15a4 to 00ab15bf has its CatchHandler @ 009b16b4 */
    operator_delete(pvVar12);
    return;
  }
  return;
}

