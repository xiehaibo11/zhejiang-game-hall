
/* void std::__ndk1::vector<tinyobj::material_t, std::__ndk1::allocator<tinyobj::material_t>
   >::__push_back_slow_path<tinyobj::material_t const&>(tinyobj::material_t const&) */

void __thiscall
std::__ndk1::vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>>::
__push_back_slow_path<tinyobj::material_t_const&>
          (vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>> *this,
          material_t *param_1)

{
  ulong uVar1;
  material_t *pmVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  material_t *pmVar10;
  long lVar11;
  material_t *this_00;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar14 = 0x124924924924924;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x124924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 5;
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 0x92492492492492) {
    uVar7 = lVar6 * -0x2492492492492492;
    uVar14 = uVar1;
    if (uVar1 <= uVar7) {
      uVar14 = uVar7;
    }
    if (uVar14 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00d3a5e4;
    }
  }
  pvVar4 = operator_new(uVar14 * 0xe0);
LAB_00d3a5e4:
  this_00 = (material_t *)((long)pvVar4 + lVar5 * 0x20);
  tinyobj::material_t::material_t(this_00,param_1);
  pvVar12 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pmVar2 = this_00 + 0xe0;
  pvVar13 = pvVar12;
  if (pvVar3 != pvVar12) {
    lVar5 = 0;
    do {
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xd8);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xe0);
      *(undefined8 *)(this_00 + lVar5 + -0xd0) = *(undefined8 *)((long)pvVar3 + lVar5 + -0xd0);
                    /* catch() { ... } // from try @ 00d3a6ac with catch @ 00d3a64c */
      *(undefined8 *)(this_00 + lVar5 + -0xd8) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0xe0) = uVar9;
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x98);
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x84);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x8c);
      uVar18 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xb0);
      uVar17 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xb8);
      uVar20 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xa0);
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar5 + -0xa8);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0xd8) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0xd0) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0xe0) = 0;
      *(undefined8 *)(this_00 + lVar5 + -0x90) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x90);
      *(undefined8 *)(this_00 + lVar5 + -0x98) = uVar9;
      *(undefined8 *)(this_00 + lVar5 + -0x84) = uVar16;
      *(undefined8 *)(this_00 + lVar5 + -0x8c) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0xb0) = uVar18;
      *(undefined8 *)(this_00 + lVar5 + -0xb8) = uVar17;
                    /* try { // try from 00d3a674 to 00e3a67b has its CatchHandler @ 00d3a754 */
      *(undefined8 *)(this_00 + lVar5 + -0xa0) = uVar20;
      *(undefined8 *)(this_00 + lVar5 + -0xa8) = uVar19;
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -200);
      *(undefined8 *)(this_00 + lVar5 + -0xc0) = *(undefined8 *)((long)pvVar3 + lVar5 + -0xc0);
      *(undefined8 *)(this_00 + lVar5 + -200) = uVar9;
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x78);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x68);
      *(undefined8 *)(this_00 + lVar5 + -0x70) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x70);
      *(undefined8 *)(this_00 + lVar5 + -0x78) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0x68) = uVar9;
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x58);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x60);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x70) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x68) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x78) = 0;
                    /* try { // try from 00d3a6a0 to 00e3a6ab has its CatchHandler @ 00d3a744 */
      *(undefined8 *)(this_00 + lVar5 + -0x50) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x50);
      *(undefined8 *)(this_00 + lVar5 + -0x58) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0x60) = uVar9;
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x48);
                    /* try { // try from 00d3a6ac to 00e3a76f has its CatchHandler @ 00d3a64c */
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x60) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x58) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x50) = 0;
      *(undefined8 *)(this_00 + lVar5 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x40);
      *(undefined8 *)(this_00 + lVar5 + -0x48) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0x38) = uVar9;
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x48) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x40) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x38) = 0;
      *(undefined8 *)(this_00 + lVar5 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      *(undefined8 *)(this_00 + lVar5 + -0x30) = uVar15;
      *(undefined8 *)(this_00 + lVar5 + -0x20) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
      *(undefined8 *)(this_00 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      lVar6 = *(long *)((long)pvVar3 + lVar5 + -0x10);
      pmVar10 = this_00 + lVar5 + -0x10;
      *(long *)pmVar10 = lVar6;
      lVar11 = *(long *)((long)pvVar3 + lVar5 + -8);
      *(long *)(this_00 + lVar5 + -8) = lVar11;
      if (lVar11 == 0) {
        *(material_t **)(this_00 + lVar5 + -0x18) = pmVar10;
      }
      else {
        *(material_t **)(lVar6 + 0x10) = pmVar10;
        puVar8 = (undefined8 *)((long)pvVar3 + lVar5 + -0x10);
        *puVar8 = 0;
        *(undefined8 **)((long)pvVar3 + lVar5 + -0x18) = puVar8;
        *(undefined8 *)((long)pvVar3 + lVar5 + -8) = 0;
      }
      lVar5 = lVar5 + -0xe0;
    } while ((long)pvVar12 - (long)pvVar3 != lVar5);
    pvVar12 = *(void **)(this + 8);
    this_00 = this_00 + lVar5;
    pvVar13 = *(void **)this;
  }
  *(material_t **)this = this_00;
  *(material_t **)(this + 8) = pmVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar14 * 0xe0);
  if (pvVar12 != pvVar13) {
    do {
      pvVar12 = (void *)((long)pvVar12 + -0xe0);
      FUN_00d2a6b8(this + 0x10,pvVar12);
    } while (pvVar13 != pvVar12);
  }
                    /* catch() { ... } // from try @ 00d3a6a0 with catch @ 00d3a744 */
  if (pvVar13 == (void *)0x0) {
                    /* try { // try from 00d3a770 to 00e3a7a7 has its CatchHandler @ 00d3a770
                       catch() { ... } // from try @ 00d3a770 with catch @ 00d3a770
                       catch() { ... } // from try @ 00d3a7b4 with catch @ 00d3a770 */
    return;
  }
                    /* catch() { ... } // from try @ 00d3a674 with catch @ 00d3a754 */
  operator_delete(pvVar13);
  return;
}

