
/* unsigned int std::__ndk1::__sort4<bool (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&),
   cocos2d::renderer::BaseRenderer::StageItem*>(cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, bool (*&)(cocos2d::renderer::BaseRenderer::StageItem
   const&, cocos2d::renderer::BaseRenderer::StageItem const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
               (StageItem *param_1,StageItem *param_2,StageItem *param_3,StageItem *param_4,
               _func_bool_StageItem_ptr_StageItem_ptr *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  uVar4 = __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                    (param_1,param_2,param_3,param_5);
  uVar5 = (**(code **)param_5)(param_4,param_3);
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar12 = *(undefined8 *)(param_3 + 8);
    uVar10 = *(undefined8 *)param_3;
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    uVar11 = *(undefined8 *)(param_3 + 0x18);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar14 = *(undefined8 *)(param_4 + 8);
    uVar9 = *(undefined8 *)param_4;
    uVar1 = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 8) = uVar14;
    *(undefined8 *)param_3 = uVar9;
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    uVar2 = *(undefined4 *)(param_4 + 0x30);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar9;
    uVar9 = *(undefined8 *)(param_4 + 0x28);
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    *(undefined8 *)(param_3 + 0x28) = uVar9;
    *(undefined8 *)(param_4 + 0x20) = uVar13;
    *(undefined8 *)(param_4 + 0x18) = uVar11;
    *(undefined8 *)(param_4 + 0x28) = uVar8;
    *(undefined8 *)(param_4 + 0x10) = uVar7;
    *(undefined8 *)(param_4 + 8) = uVar12;
    *(undefined8 *)param_4 = uVar10;
    *(undefined4 *)(param_4 + 0x30) = uVar1;
    uVar5 = (**(code **)param_5)(param_3,param_2);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 009cce84 to 00acce8f has its CatchHandler @ 009cd128 */
      uVar4 = uVar4 + 1;
    }
    else {
                    /* try { // try from 009ccd98 to 00acce0f has its CatchHandler @ 009ccac8 */
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
                    /* catch() { ... } // from try @ 009ccb48 with catch @ 009ccda0 */
                    /* catch() { ... } // from try @ 009ccb3c with catch @ 009ccda4 */
                    /* catch() { ... } // from try @ 009ccb1c with catch @ 009ccda8 */
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar8 = *(undefined8 *)(param_2 + 0x28);
                    /* catch() { ... } // from try @ 009ccb54 with catch @ 009ccdb8 */
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar14 = *(undefined8 *)(param_3 + 8);
      uVar9 = *(undefined8 *)param_3;
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar14;
      *(undefined8 *)param_2 = uVar9;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar2 = *(undefined4 *)(param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      uVar9 = *(undefined8 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x30) = uVar2;
      *(undefined8 *)(param_2 + 0x28) = uVar9;
      *(undefined8 *)(param_3 + 0x20) = uVar13;
      *(undefined8 *)(param_3 + 0x18) = uVar11;
      *(undefined8 *)(param_3 + 0x28) = uVar8;
      *(undefined8 *)(param_3 + 0x10) = uVar7;
      *(undefined8 *)(param_3 + 8) = uVar12;
      *(undefined8 *)param_3 = uVar10;
      *(undefined4 *)(param_3 + 0x30) = uVar1;
      uVar5 = (**(code **)param_5)(param_2,param_1);
                    /* try { // try from 009cce10 to 00acce63 has its CatchHandler @ 009cce10
                       catch() { ... } // from try @ 009cce10 with catch @ 009cce10
                       catch() { ... } // from try @ 009cd11c with catch @ 009cce10 */
      if ((uVar5 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar12 = *(undefined8 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        uVar4 = uVar4 + 3;
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar14 = *(undefined8 *)(param_2 + 8);
        uVar9 = *(undefined8 *)param_2;
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar14;
        *(undefined8 *)param_1 = uVar9;
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        uVar2 = *(undefined4 *)(param_2 + 0x30);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        uVar9 = *(undefined8 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 0x30) = uVar2;
        *(undefined8 *)(param_1 + 0x28) = uVar9;
                    /* try { // try from 009cce64 to 00acce7b has its CatchHandler @ 009cd12c */
        *(undefined8 *)(param_2 + 0x20) = uVar13;
        *(undefined8 *)(param_2 + 0x18) = uVar11;
        *(undefined8 *)(param_2 + 0x28) = uVar8;
        *(undefined4 *)(param_2 + 0x30) = uVar1;
        *(undefined8 *)(param_2 + 0x10) = uVar7;
        *(undefined8 *)(param_2 + 8) = uVar12;
        *(undefined8 *)param_2 = uVar10;
      }
    }
  }
                    /* try { // try from 009cce90 to 00acce9b has its CatchHandler @ 009cd124 */
                    /* try { // try from 009cce9c to 00acd11b has its CatchHandler @ 009cd13c */
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

