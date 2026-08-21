
/* void std::__ndk1::__insertion_sort_3<bool (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&),
   cocos2d::renderer::BaseRenderer::StageItem*>(cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, bool (*&)(cocos2d::renderer::BaseRenderer::StageItem
   const&, cocos2d::renderer::BaseRenderer::StageItem const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
               (StageItem *param_1,StageItem *param_2,
               _func_bool_StageItem_ptr_StageItem_ptr *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  StageItem *pSVar5;
  undefined8 uVar6;
  long lVar7;
  StageItem *pSVar8;
  StageItem *pSVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009cd194 to 00acd1eb has its CatchHandler @ 009cd194
                       catch() { ... } // from try @ 009cd194 with catch @ 009cd194
                       catch() { ... } // from try @ 009cd438 with catch @ 009cd194 */
  __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
            (param_1,param_1 + 0x38,param_1 + 0x70,param_3);
  if (param_1 + 0xa8 != param_2) {
    lVar10 = 0;
    pSVar5 = param_1 + 0xa8;
    pSVar9 = param_1 + 0x70;
    do {
      pSVar8 = pSVar5;
      uVar3 = (**(code **)param_3)(pSVar8,pSVar9);
      if ((uVar3 & 1) != 0) {
        local_90 = *(undefined8 *)(pSVar8 + 0x10);
        uStack_98 = *(undefined8 *)(pSVar8 + 8);
        local_a0 = *(undefined8 *)pSVar8;
        uStack_80 = *(undefined8 *)(pSVar8 + 0x20);
        local_88 = *(undefined8 *)(pSVar8 + 0x18);
                    /* try { // try from 009cd1ec to 00acd203 has its CatchHandler @ 009cd454 */
        local_78 = *(undefined8 *)(pSVar8 + 0x28);
        local_70 = *(undefined4 *)(pSVar8 + 0x30);
        *(undefined8 *)(pSVar8 + 0x20) = 0;
        *(undefined8 *)(pSVar8 + 0x28) = 0;
        *(undefined8 *)(pSVar8 + 0x18) = 0;
        pSVar5 = pSVar8;
        lVar2 = lVar10;
        do {
          lVar7 = lVar2;
                    /* try { // try from 009cd20c to 00acd217 has its CatchHandler @ 009cd450 */
                    /* try { // try from 009cd218 to 00acd223 has its CatchHandler @ 009cd44c */
          pvVar4 = *(void **)(param_1 + lVar7 + 0xc0);
          *(undefined8 *)(param_1 + lVar7 + 0xb8) = *(undefined8 *)(param_1 + lVar7 + 0x80);
                    /* try { // try from 009cd224 to 00acd437 has its CatchHandler @ 009cd464 */
          *(undefined8 *)(param_1 + lVar7 + 0xb0) = *(undefined8 *)(param_1 + lVar7 + 0x78);
          *(undefined8 *)(param_1 + lVar7 + 0xa8) = *(undefined8 *)(param_1 + lVar7 + 0x70);
          if (pvVar4 == (void *)0x0) {
            pSVar5 = param_1 + lVar7 + 200;
          }
          else {
            pSVar5 = pSVar5 + 0x20;
            *(void **)(param_1 + lVar7 + 200) = pvVar4;
            operator_delete(pvVar4);
            *(undefined8 *)(param_1 + lVar7 + 0xc0) = 0;
            *(undefined8 *)(param_1 + lVar7 + 200) = 0;
            *(undefined8 *)(param_1 + lVar7 + 0xd0) = 0;
          }
          *(undefined8 *)(param_1 + lVar7 + 0xc0) = *(undefined8 *)(param_1 + lVar7 + 0x88);
          *(undefined8 *)pSVar5 = *(undefined8 *)(param_1 + lVar7 + 0x90);
          uVar6 = *(undefined8 *)(param_1 + lVar7 + 0x98);
          *(undefined8 *)(param_1 + lVar7 + 0x88) = 0;
          *(undefined8 *)(param_1 + lVar7 + 0x90) = 0;
          *(undefined8 *)(param_1 + lVar7 + 0x98) = 0;
          *(undefined8 *)(param_1 + lVar7 + 0xd0) = uVar6;
          *(undefined4 *)(param_1 + lVar7 + 0xd8) = *(undefined4 *)(param_1 + lVar7 + 0xa0);
          pSVar5 = param_1;
          if (lVar7 == -0x70) goto LAB_009cd2a8;
          uVar3 = (**(code **)param_3)(&local_a0,param_1 + lVar7 + 0x38);
          pSVar5 = pSVar9;
          lVar2 = lVar7 + -0x38;
          pSVar9 = pSVar9 + -0x38;
        } while ((uVar3 & 1) != 0);
        pSVar5 = param_1 + lVar7 + 0x70;
LAB_009cd2a8:
        *(undefined8 *)(pSVar5 + 0x10) = local_90;
        *(undefined8 *)(pSVar5 + 8) = uStack_98;
        *(undefined8 *)pSVar5 = local_a0;
        pvVar4 = *(void **)(param_1 + lVar7 + 0x88);
        if (pvVar4 != (void *)0x0) {
          *(void **)(param_1 + lVar7 + 0x90) = pvVar4;
          operator_delete(pvVar4);
          *(undefined8 *)(param_1 + lVar7 + 0x88) = 0;
          *(undefined8 *)(param_1 + lVar7 + 0x90) = 0;
          *(undefined8 *)(param_1 + lVar7 + 0x98) = 0;
        }
        *(undefined8 *)(param_1 + lVar7 + 0x90) = uStack_80;
        *(undefined8 *)(param_1 + lVar7 + 0x88) = local_88;
        *(undefined8 *)(param_1 + lVar7 + 0x98) = local_78;
        uStack_80 = 0;
        local_78 = 0;
        local_88 = 0;
        *(undefined4 *)(pSVar5 + 0x30) = local_70;
      }
      lVar10 = lVar10 + 0x38;
      pSVar5 = pSVar8 + 0x38;
      pSVar9 = pSVar8;
    } while (pSVar8 + 0x38 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

