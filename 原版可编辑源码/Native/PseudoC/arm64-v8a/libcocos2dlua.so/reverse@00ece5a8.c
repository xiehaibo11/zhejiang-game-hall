
/* cocos2d::CatmullRomBy::reverse() const */

void __thiscall cocos2d::CatmullRomBy::reverse(CatmullRomBy *this)

{
  void *__dest;
  float fVar1;
  float fVar2;
  size_t __n;
  long lVar3;
  PointArray *pPVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00ece598 with catch @ 00ece5dc */
                    /* catch() { ... } // from try @ 00ece540 with catch @ 00ece5e0 */
  pPVar4 = (PointArray *)(**(code **)(**(long **)(this + 0x58) + 0x10))();
                    /* catch() { ... } // from try @ 00ece588 with catch @ 00ece5e4 */
  lVar5 = *(long *)(pPVar4 + 0x30);
  lVar6 = *(long *)(pPVar4 + 0x38) - lVar5;
  uVar7 = lVar6 >> 3;
  uVar8 = 0;
  if (lVar6 < 1) {
    uVar8 = uVar7 - 1;
  }
  if (uVar7 <= uVar8) {
LAB_00ece790:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ece6ac with catch @ 00ece790 */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
  local_60 = *(undefined8 *)(lVar5 + uVar8 * 8);
  if (8 < lVar6) {
    lVar6 = 0;
    uVar8 = 1;
    fVar11 = (float)local_60;
    fVar10 = (float)((ulong)local_60 >> 0x20);
    do {
      if (uVar7 <= uVar8) goto LAB_00ece790;
      lVar5 = lVar5 + lVar6;
      fVar1 = *(float *)(lVar5 + 8);
      fVar2 = *(float *)(lVar5 + 0xc);
      local_60 = *(undefined8 *)(lVar5 + 8);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 8;
      *(float *)(lVar5 + 8) = fVar1 - fVar11;
      *(float *)(lVar5 + 0xc) = fVar2 - fVar10;
      lVar5 = *(long *)(pPVar4 + 0x30);
      uVar7 = *(long *)(pPVar4 + 0x38) - lVar5 >> 3;
      fVar11 = fVar1;
      fVar10 = fVar2;
    } while ((long)uVar8 < (long)uVar7);
  }
  pPVar4 = (PointArray *)PointArray::reverse(pPVar4);
                    /* catch() { ... } // from try @ 00ece700 with catch @ 00ece688 */
  lVar5 = *(long *)(pPVar4 + 0x30);
  uVar9 = *(long *)(pPVar4 + 0x38) - lVar5 >> 3;
  uVar7 = uVar9 - 1;
  uVar8 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)uVar9 <= (long)uVar8) {
    uVar8 = uVar7;
  }
                    /* try { // try from 00ece6ac to 00fce6b3 has its CatchHandler @ 00ece790 */
  if (uVar8 < uVar9) {
    local_60 = *(undefined8 *)(lVar5 + uVar8 * 8);
    __dest = (void *)(lVar5 + uVar7 * 8);
    __n = *(long *)(pPVar4 + 0x38) - ((long)__dest + 8);
    fVar11 = (float)local_60;
    uVar8 = (ulong)local_60 >> 0x20;
    if (__n != 0) {
      memmove(__dest,(void *)((long)__dest + 8),__n);
    }
    *(void **)(pPVar4 + 0x38) = (void *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 00ece6f4 to 00fce6ff has its CatchHandler @ 00ece750 */
    local_60 = CONCAT44(-(float)uVar8,-fVar11);
                    /* try { // try from 00ece700 to 00fce7ab has its CatchHandler @ 00ece688 */
    std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::insert
              ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(pPVar4 + 0x30),
               *(undefined8 *)(pPVar4 + 0x30),&local_60);
    lVar5 = *(long *)(pPVar4 + 0x30);
    if (8 < *(long *)(pPVar4 + 0x38) - lVar5) {
      uVar7 = (ulong)(*(long *)(pPVar4 + 0x38) - lVar5) >> 3;
      uVar8 = 1;
      do {
        if (uVar7 <= uVar8) goto LAB_00ece794;
        lVar6 = uVar8 * 8;
        uVar12 = *(undefined8 *)(lVar5 + lVar6);
        uVar8 = uVar8 + 1;
        local_60 = CONCAT44((float)((ulong)local_60 >> 0x20) - (float)((ulong)uVar12 >> 0x20),
                            (float)local_60 - (float)uVar12);
        *(undefined8 *)(lVar5 + lVar6) = local_60;
        lVar5 = *(long *)(pPVar4 + 0x30);
        uVar7 = *(long *)(pPVar4 + 0x38) - lVar5 >> 3;
                    /* catch() { ... } // from try @ 00ece6f4 with catch @ 00ece750 */
      } while ((long)uVar8 < (long)uVar7);
    }
    create(*(float *)(this + 0x4c),pPVar4);
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00ece794:
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

