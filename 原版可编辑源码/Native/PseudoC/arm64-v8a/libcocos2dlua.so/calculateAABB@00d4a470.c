
/* cocos2d::Terrain::Chunk::calculateAABB() */

void __thiscall cocos2d::Terrain::Chunk::calculateAABB(Chunk *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  Vec3 *__src;
  size_t __n;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  Vec3 *local_80;
  
                    /* try { // try from 00d4a474 to 00e4a47f has its CatchHandler @ 00d4a53c */
  lVar3 = tpidr_el0;
                    /* try { // try from 00d4a494 to 00e4a4e7 has its CatchHandler @ 00d4a55c */
  lVar5 = *(long *)(lVar3 + 0x28);
  local_80 = (Vec3 *)0x0;
  lVar12 = *(long *)this;
  lVar2 = *(long *)(this + 8) - lVar12;
  if (lVar2 == 0) {
    puVar14 = (undefined8 *)0x0;
LAB_00d4a604:
    AABB::updateMinMax((AABB *)(this + 0x88),local_80,
                       ((long)puVar14 - (long)local_80 >> 2) * -0x5555555555555555);
    if (local_80 != (Vec3 *)0x0) {
      operator_delete(local_80);
    }
    if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* try { // try from 00d4a648 to 00e4a66b has its CatchHandler @ 00d4aef4 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar11 = 0;
  puVar9 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  uVar13 = 1;
  __src = (Vec3 *)0x0;
  do {
    __n = (long)puVar14 - (long)__src;
    uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)puVar9 - (long)__src >> 2;
                    /* catch() { ... } // from try @ 00d4a474 with catch @ 00d4a53c */
                    /* catch() { ... } // from try @ 00d4a464 with catch @ 00d4a540 */
                    /* catch() { ... } // from try @ 00d4a3d8 with catch @ 00d4a544 */
                    /* catch() { ... } // from try @ 00d4a3c8 with catch @ 00d4a548 */
    uVar10 = 0x1555555555555555;
                    /* catch() { ... } // from try @ 00d4a330 with catch @ 00d4a54c */
    if ((ulong)(lVar7 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
                    /* catch() { ... } // from try @ 00d4a320 with catch @ 00d4a550 */
      uVar8 = lVar7 * 0x5555555555555556;
                    /* catch() { ... } // from try @ 00d4a2ec with catch @ 00d4a554 */
      uVar10 = uVar1;
                    /* catch() { ... } // from try @ 00d4a2f8 with catch @ 00d4a558 */
      if (uVar1 <= uVar8) {
        uVar10 = uVar8;
      }
                    /* catch() { ... } // from try @ 00d4a494 with catch @ 00d4a55c */
      if (uVar10 != 0) goto LAB_00d4a560;
      pvVar4 = (void *)0x0;
    }
    else {
LAB_00d4a560:
                    /* catch() { ... } // from try @ 00d4a3f8 with catch @ 00d4a560 */
                    /* catch() { ... } // from try @ 00d4a35c with catch @ 00d4a564 */
      pvVar4 = operator_new(uVar10 * 0xc);
    }
    puVar14 = (undefined8 *)((long)pvVar4 + ((long)__n >> 2) * 4);
    puVar9 = (undefined8 *)((long)pvVar4 + uVar10 * 0xc);
                    /* try { // try from 00d4a578 to 00e4a647 has its CatchHandler @ 00d4a578
                       catch() { ... } // from try @ 00d4a578 with catch @ 00d4a578
                       catch() { ... } // from try @ 00d4ab94 with catch @ 00d4a578
                       catch() { ... } // from try @ 00d4ad4c with catch @ 00d4a578 */
    uVar6 = *(undefined8 *)(lVar12 + lVar11);
    local_80 = (Vec3 *)((long)puVar14 - __n);
    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((undefined8 *)(lVar12 + lVar11) + 1);
    *puVar14 = uVar6;
    if (0 < (long)__n) {
      memcpy(local_80,__src,__n);
    }
    if (__src != (Vec3 *)0x0) {
      operator_delete(__src);
    }
    while( true ) {
      puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      if ((ulong)(lVar2 >> 5) <= uVar13) goto LAB_00d4a604;
      lVar12 = *(long *)this;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x20;
      __src = local_80;
      if (puVar14 == puVar9) break;
                    /* try { // try from 00d4a4e8 to 00e4a577 has its CatchHandler @ 00d4a298 */
      uVar6 = *(undefined8 *)(lVar12 + lVar11);
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((undefined8 *)(lVar12 + lVar11) + 1);
      *puVar14 = uVar6;
    }
  } while( true );
}

