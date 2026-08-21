
/* bool std::__ndk1::__insertion_sort_incomplete<bool
   (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&),
   cocos2d::renderer::BaseRenderer::StageItem*>(cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, bool (*&)(cocos2d::renderer::BaseRenderer::StageItem
   const&, cocos2d::renderer::BaseRenderer::StageItem const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
               (StageItem *param_1,StageItem *param_2,
               _func_bool_StageItem_ptr_StageItem_ptr *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  void *pvVar7;
  StageItem *pSVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  StageItem *pSVar12;
  StageItem *pSVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar5 = true;
  switch(((long)param_2 - (long)param_1 >> 3) * 0x6db6db6db6db6db7) {
  case 0:
  case 1:
    goto switchD_009cd3d8_caseD_0;
  case 2:
    pSVar12 = param_2 + -0x38;
    uVar6 = (**(code **)param_3)(pSVar12,param_1);
    if ((uVar6 & 1) != 0) {
      local_90 = *(undefined8 *)(param_1 + 0x10);
      uStack_98 = *(undefined8 *)(param_1 + 8);
      local_a0 = *(undefined8 *)param_1;
      bVar5 = true;
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar18 = *(undefined8 *)(param_2 + -0x30);
      uVar11 = *(undefined8 *)pSVar12;
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + 8) = uVar18;
      *(undefined8 *)param_1 = uVar11;
      uVar11 = *(undefined8 *)(param_2 + -0x20);
      uVar2 = *(undefined4 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
                    /* try { // try from 009cd438 to 00acd4bb has its CatchHandler @ 009cd194 */
      uVar11 = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined8 *)(param_1 + 0x28) = uVar11;
                    /* catch() { ... } // from try @ 009cd218 with catch @ 009cd44c */
      *(undefined8 *)(param_2 + -0x28) = local_90;
                    /* catch() { ... } // from try @ 009cd20c with catch @ 009cd450 */
      *(undefined8 *)(param_2 + -0x30) = uStack_98;
      *(undefined8 *)pSVar12 = local_a0;
                    /* catch() { ... } // from try @ 009cd1ec with catch @ 009cd454 */
      *(undefined8 *)(param_2 + -0x18) = uVar17;
      *(undefined8 *)(param_2 + -0x20) = uVar16;
      *(undefined8 *)(param_2 + -0x10) = uVar9;
      *(undefined4 *)(param_2 + -8) = uVar1;
      goto switchD_009cd3d8_caseD_0;
    }
    break;
  case 3:
                    /* catch() { ... } // from try @ 009cd224 with catch @ 009cd464 */
    __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (param_1,param_1 + 0x38,param_2 + -0x38,param_3);
    bVar5 = true;
    goto switchD_009cd3d8_caseD_0;
  case 4:
    __sort4<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (param_1,param_1 + 0x38,param_1 + 0x70,param_2 + -0x38,param_3);
    break;
  case 5:
    FUN_009ccec4(param_1,param_1 + 0x38,param_1 + 0x70,param_1 + 0xa8,param_2 + -0x38,param_3);
    bVar5 = true;
    goto switchD_009cd3d8_caseD_0;
  default:
    __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (param_1,param_1 + 0x38,param_1 + 0x70,param_3);
    if (param_1 + 0xa8 != param_2) {
      lVar14 = 0;
      iVar15 = 0;
      pSVar12 = param_1 + 0xa8;
      pSVar13 = param_1 + 0x70;
      do {
        pSVar8 = pSVar12;
                    /* try { // try from 009cd4bc to 00acd513 has its CatchHandler @ 009cd4bc
                       catch() { ... } // from try @ 009cd4bc with catch @ 009cd4bc
                       catch() { ... } // from try @ 009cd760 with catch @ 009cd4bc */
        uVar6 = (**(code **)param_3)(pSVar8,pSVar13);
        if ((uVar6 & 1) != 0) {
          local_90 = *(undefined8 *)(pSVar8 + 0x10);
          uStack_98 = *(undefined8 *)(pSVar8 + 8);
          local_a0 = *(undefined8 *)pSVar8;
          uStack_80 = *(undefined8 *)(pSVar8 + 0x20);
          local_88 = *(undefined8 *)(pSVar8 + 0x18);
          local_78 = *(undefined8 *)(pSVar8 + 0x28);
          local_70 = *(undefined4 *)(pSVar8 + 0x30);
          *(undefined8 *)(pSVar8 + 0x20) = 0;
          *(undefined8 *)(pSVar8 + 0x28) = 0;
          *(undefined8 *)(pSVar8 + 0x18) = 0;
          pSVar12 = pSVar8;
          lVar4 = lVar14;
          do {
            lVar10 = lVar4;
                    /* try { // try from 009cd514 to 00acd52b has its CatchHandler @ 009cd77c */
            pvVar7 = *(void **)(param_1 + lVar10 + 0xc0);
            *(undefined8 *)(param_1 + lVar10 + 0xb8) = *(undefined8 *)(param_1 + lVar10 + 0x80);
            *(undefined8 *)(param_1 + lVar10 + 0xb0) = *(undefined8 *)(param_1 + lVar10 + 0x78);
            *(undefined8 *)(param_1 + lVar10 + 0xa8) = *(undefined8 *)(param_1 + lVar10 + 0x70);
            if (pvVar7 == (void *)0x0) {
              pSVar12 = param_1 + lVar10 + 200;
            }
            else {
              pSVar12 = pSVar12 + 0x20;
              *(void **)(param_1 + lVar10 + 200) = pvVar7;
                    /* try { // try from 009cd534 to 00acd53f has its CatchHandler @ 009cd778 */
              operator_delete(pvVar7);
              *(undefined8 *)(param_1 + lVar10 + 0xc0) = 0;
              *(undefined8 *)(param_1 + lVar10 + 200) = 0;
              *(undefined8 *)(param_1 + lVar10 + 0xd0) = 0;
                    /* try { // try from 009cd540 to 00acd54b has its CatchHandler @ 009cd774 */
            }
                    /* try { // try from 009cd54c to 00acd75f has its CatchHandler @ 009cd78c */
            *(undefined8 *)(param_1 + lVar10 + 0xc0) = *(undefined8 *)(param_1 + lVar10 + 0x88);
            *(undefined8 *)pSVar12 = *(undefined8 *)(param_1 + lVar10 + 0x90);
            uVar9 = *(undefined8 *)(param_1 + lVar10 + 0x98);
            *(undefined8 *)(param_1 + lVar10 + 0x88) = 0;
            *(undefined8 *)(param_1 + lVar10 + 0x90) = 0;
            *(undefined8 *)(param_1 + lVar10 + 0x98) = 0;
            *(undefined8 *)(param_1 + lVar10 + 0xd0) = uVar9;
            *(undefined4 *)(param_1 + lVar10 + 0xd8) = *(undefined4 *)(param_1 + lVar10 + 0xa0);
            pSVar12 = param_1;
            if (lVar10 == -0x70) goto LAB_009cd5a8;
            uVar6 = (**(code **)param_3)(&local_a0,param_1 + lVar10 + 0x38);
            pSVar12 = pSVar13;
            lVar4 = lVar10 + -0x38;
            pSVar13 = pSVar13 + -0x38;
          } while ((uVar6 & 1) != 0);
          pSVar12 = param_1 + lVar10 + 0x70;
LAB_009cd5a8:
          *(undefined8 *)(pSVar12 + 0x10) = local_90;
          *(undefined8 *)(pSVar12 + 8) = uStack_98;
          *(undefined8 *)pSVar12 = local_a0;
          pvVar7 = *(void **)(param_1 + lVar10 + 0x88);
          if (pvVar7 != (void *)0x0) {
            *(void **)(param_1 + lVar10 + 0x90) = pvVar7;
            operator_delete(pvVar7);
            *(undefined8 *)(param_1 + lVar10 + 0x88) = 0;
            *(undefined8 *)(param_1 + lVar10 + 0x90) = 0;
            *(undefined8 *)(param_1 + lVar10 + 0x98) = 0;
          }
          iVar15 = iVar15 + 1;
          *(undefined8 *)(param_1 + lVar10 + 0x90) = uStack_80;
          *(undefined8 *)(param_1 + lVar10 + 0x88) = local_88;
          *(undefined8 *)(param_1 + lVar10 + 0x98) = local_78;
          uStack_80 = 0;
          local_78 = 0;
          local_88 = 0;
          *(undefined4 *)(pSVar12 + 0x30) = local_70;
          if (iVar15 == 8) {
            bVar5 = pSVar8 + 0x38 == param_2;
            goto switchD_009cd3d8_caseD_0;
          }
        }
        lVar14 = lVar14 + 0x38;
        pSVar12 = pSVar8 + 0x38;
        pSVar13 = pSVar8;
      } while (pSVar8 + 0x38 != param_2);
      bVar5 = true;
      goto switchD_009cd3d8_caseD_0;
    }
  }
  bVar5 = true;
switchD_009cd3d8_caseD_0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

