
/* unsigned int std::__ndk1::__sort3<bool (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&),
   cocos2d::renderer::BaseRenderer::StageItem*>(cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, cocos2d::renderer::BaseRenderer::StageItem*, bool
   (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&)) */

uint std::__ndk1::
     __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
               (StageItem *param_1,StageItem *param_2,StageItem *param_3,
               _func_bool_StageItem_ptr_StageItem_ptr *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  StageItem *pSVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 009cc964 with catch @ 009cca3c */
                    /* catch() { ... } // from try @ 009cc81c with catch @ 009cca40 */
                    /* catch() { ... } // from try @ 009cc810 with catch @ 009cca44 */
  uVar5 = (**(code **)param_4)(param_2,param_1);
                    /* catch() { ... } // from try @ 009cc860 with catch @ 009cca48
                       catch() { ... } // from try @ 009cc8d4 with catch @ 009cca48 */
  uVar6 = (**(code **)param_4)(param_3,param_2);
  if ((uVar5 & 1) == 0) {
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
      goto LAB_009ccc94;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar16 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)param_3;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar16;
    *(undefined8 *)param_2 = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar8;
                    /* try { // try from 009ccb1c to 00accb33 has its CatchHandler @ 009ccda8 */
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined8 *)(param_2 + 0x28) = uVar8;
    *(undefined8 *)(param_3 + 0x20) = uVar12;
    *(undefined8 *)(param_3 + 0x18) = uVar14;
    *(undefined8 *)(param_3 + 0x28) = uVar10;
    *(undefined8 *)(param_3 + 0x10) = uVar9;
                    /* try { // try from 009ccb3c to 00accb47 has its CatchHandler @ 009ccda4 */
    *(undefined8 *)(param_3 + 8) = uVar15;
    *(undefined8 *)param_3 = uVar11;
    *(undefined4 *)(param_3 + 0x30) = uVar1;
                    /* try { // try from 009ccb48 to 00accb53 has its CatchHandler @ 009ccda0 */
    uVar5 = (**(code **)param_4)(param_2,param_1);
    if ((uVar5 & 1) == 0) goto LAB_009ccc90;
    uVar9 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009ccb54 to 00accd97 has its CatchHandler @ 009ccdb8 */
    uVar15 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)param_1;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar16 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar16;
    *(undefined8 *)param_1 = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_2 + 0x20) = uVar12;
    *(undefined8 *)(param_2 + 0x18) = uVar14;
    *(undefined8 *)(param_2 + 0x28) = uVar10;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = uVar9;
    *(undefined8 *)(param_2 + 8) = uVar15;
    *(undefined8 *)param_2 = uVar11;
  }
  else {
                    /* catch() { ... } // from try @ 009cc7f0 with catch @ 009cca60 */
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar15 = *(undefined8 *)(param_1 + 8);
    uVar14 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 009cc828 with catch @ 009cca70
                       catch() { ... } // from try @ 009cc87c with catch @ 009cca70
                       catch() { ... } // from try @ 009cc98c with catch @ 009cca70 */
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if ((uVar6 & 1) != 0) {
      uVar16 = *(undefined8 *)(param_3 + 8);
      uVar12 = *(undefined8 *)param_3;
      uVar4 = 1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar16;
      *(undefined8 *)param_1 = uVar12;
      uVar12 = *(undefined8 *)(param_3 + 0x18);
      uVar2 = *(undefined4 *)(param_3 + 0x30);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar12;
      uVar12 = *(undefined8 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined8 *)(param_1 + 0x28) = uVar12;
      *(undefined8 *)(param_3 + 0x20) = uVar10;
      *(undefined8 *)(param_3 + 0x28) = uVar11;
      *(undefined4 *)(param_3 + 0x30) = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar15;
      *(undefined8 *)param_3 = uVar14;
                    /* try { // try from 009ccac8 to 00accb1b has its CatchHandler @ 009ccac8
                       catch() { ... } // from try @ 009ccac8 with catch @ 009ccac8
                       catch() { ... } // from try @ 009ccd98 with catch @ 009ccac8 */
      *(undefined8 *)(param_3 + 0x10) = uVar8;
      *(undefined8 *)(param_3 + 0x18) = uVar9;
      goto LAB_009ccc94;
    }
    uVar16 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar16;
    *(undefined8 *)param_1 = uVar12;
    pSVar13 = param_2 + 0x18;
    uVar12 = *(undefined8 *)pSVar13;
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    *(undefined8 *)(param_2 + 0x10) = uVar8;
    *(undefined8 *)(param_2 + 8) = uVar15;
    *(undefined8 *)param_2 = uVar14;
    *(undefined8 *)pSVar13 = uVar9;
    *(undefined8 *)(param_2 + 0x20) = uVar10;
    *(undefined8 *)(param_2 + 0x28) = uVar11;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    uVar5 = (**(code **)param_4)(param_3,param_2);
    if ((uVar5 & 1) == 0) {
LAB_009ccc90:
      uVar4 = 1;
      goto LAB_009ccc94;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)pSVar13 = 0;
    uVar16 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)param_3;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar16;
    *(undefined8 *)param_2 = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined8 *)(param_2 + 0x28) = uVar8;
    *(undefined8 *)(param_3 + 0x20) = uVar12;
    *(undefined8 *)(param_3 + 0x18) = uVar14;
    *(undefined8 *)(param_3 + 0x28) = uVar10;
    *(undefined4 *)(param_3 + 0x30) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = uVar9;
    *(undefined8 *)(param_3 + 8) = uVar15;
    *(undefined8 *)param_3 = uVar11;
  }
  uVar4 = 2;
LAB_009ccc94:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

