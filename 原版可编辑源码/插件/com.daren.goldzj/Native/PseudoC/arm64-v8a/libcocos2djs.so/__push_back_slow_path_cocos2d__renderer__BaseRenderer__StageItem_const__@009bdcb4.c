
/* void std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>
   >::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageItem
   const&>(cocos2d::renderer::BaseRenderer::StageItem const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>
::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageItem_const&>
          (vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>
           *this,StageItem *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *__dest;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
                    /* try { // try from 009bdcd4 to 00abdceb has its CatchHandler @ 009bdf48 */
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  lVar5 = (long)pvVar3 - (long)pvVar2 >> 3;
                    /* try { // try from 009bdcf4 to 00abdcff has its CatchHandler @ 009bdf2c */
                    /* try { // try from 009bdd00 to 00abdd0b has its CatchHandler @ 009bdf28 */
  uVar10 = 0x492492492492492;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
                    /* try { // try from 009bdd0c to 00abdd13 has its CatchHandler @ 009bdf58 */
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009bdef8 to 00abdf0f has its CatchHandler @ 009bdf24 */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - (long)pvVar2 >> 3;
  if ((ulong)(lVar9 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar8 = lVar9 * -0x2492492492492492;
                    /* try { // try from 009bdd44 to 00abdd4b has its CatchHandler @ 009bdf30 */
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_009bdd5c;
    }
  }
  pvVar4 = operator_new(uVar10 * 0x38);
LAB_009bdd5c:
  uVar6 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009bdd60 to 00abdda3 has its CatchHandler @ 009bdf58 */
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)param_1;
  puVar11 = (undefined8 *)((long)pvVar4 + lVar5 * 8);
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[2] = uVar6;
  puVar11[1] = uVar14;
  *puVar11 = uVar13;
  puVar11[3] = 0;
  pvVar7 = *(void **)(param_1 + 0x18);
  uVar1 = *(long *)(param_1 + 0x20) - (long)pvVar7;
  if (uVar1 != 0) {
    if ((ulong)((long)uVar1 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    __dest = operator_new(uVar1);
                    /* try { // try from 009bddb8 to 00abde17 has its CatchHandler @ 009bdf30 */
    plVar12 = (long *)((long)pvVar4 + lVar5 * 8 + 0x20);
    *plVar12 = (long)__dest;
    puVar11[3] = __dest;
    *(void **)((long)pvVar4 + lVar5 * 8 + 0x28) = (void *)((long)__dest + ((long)uVar1 >> 3) * 8);
    if (0 < (long)uVar1) {
      memcpy(__dest,pvVar7,uVar1);
      *plVar12 = (long)__dest + uVar1;
    }
  }
  pvVar7 = (void *)((long)pvVar4 + uVar10 * 0x38);
  *(undefined4 *)((long)pvVar4 + lVar5 * 8 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar11 + 7;
    *(void **)(this + 0x10) = pvVar7;
  }
  else {
    lVar5 = 0;
    do {
      uVar14 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      uVar6 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      *(undefined8 *)((long)puVar11 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x30) = uVar14;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x38) = uVar13;
                    /* try { // try from 009bde30 to 00abde6b has its CatchHandler @ 009bdf58 */
      *(undefined8 *)((long)puVar11 + lVar5 + -0x28) = uVar6;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x20) = 0;
      uVar6 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      lVar9 = lVar5 + -0x38;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18)
      ;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x20) = uVar6;
      *(undefined8 *)((long)puVar11 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10)
      ;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
      *(undefined4 *)((long)puVar11 + lVar5 + -8) = *(undefined4 *)((long)pvVar3 + lVar5 + -8);
      lVar5 = lVar9;
    } while ((long)pvVar2 - (long)pvVar3 != lVar9);
    pvVar2 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    *(long *)this = (long)puVar11 + lVar9;
    *(undefined8 **)(this + 8) = puVar11 + 7;
    *(void **)(this + 0x10) = pvVar7;
    while (pvVar4 = pvVar3, pvVar4 != pvVar2) {
      pvVar7 = *(void **)((long)pvVar4 + -0x20);
      pvVar3 = (void *)((long)pvVar4 + -0x38);
      if (pvVar7 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x18) = pvVar7;
        operator_delete(pvVar7);
      }
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

