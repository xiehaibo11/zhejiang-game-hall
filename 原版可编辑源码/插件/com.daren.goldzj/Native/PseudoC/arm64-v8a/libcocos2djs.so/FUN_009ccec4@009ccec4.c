
uint FUN_009ccec4(StageItem *param_1,StageItem *param_2,StageItem *param_3,StageItem *param_4,
                 undefined8 *param_5,_func_bool_StageItem_ptr_StageItem_ptr *param_6)

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
  uVar4 = std::__ndk1::
          __sort4<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar5 = (**(code **)param_6)(param_5,param_4);
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    uVar12 = *(undefined8 *)(param_4 + 8);
    uVar10 = *(undefined8 *)param_4;
    uVar13 = *(undefined8 *)(param_4 + 0x20);
    uVar11 = *(undefined8 *)(param_4 + 0x18);
    uVar8 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    uVar14 = param_5[1];
    uVar9 = *param_5;
    uVar1 = *(undefined4 *)(param_4 + 0x30);
    *(undefined8 *)(param_4 + 0x10) = param_5[2];
    *(undefined8 *)(param_4 + 8) = uVar14;
    *(undefined8 *)param_4 = uVar9;
    uVar9 = param_5[3];
    uVar2 = *(undefined4 *)(param_5 + 6);
    *(undefined8 *)(param_4 + 0x20) = param_5[4];
    *(undefined8 *)(param_4 + 0x18) = uVar9;
    uVar9 = param_5[5];
    *(undefined4 *)(param_4 + 0x30) = uVar2;
    *(undefined8 *)(param_4 + 0x28) = uVar9;
    param_5[4] = uVar13;
    param_5[3] = uVar11;
    param_5[5] = uVar8;
    param_5[2] = uVar7;
    param_5[1] = uVar12;
    *param_5 = uVar10;
    *(undefined4 *)(param_5 + 6) = uVar1;
    uVar5 = (**(code **)param_6)(param_4,param_3);
    if ((uVar5 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
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
      uVar5 = (**(code **)param_6)(param_3,param_2);
      if ((uVar5 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar12 = *(undefined8 *)(param_2 + 8);
        uVar10 = *(undefined8 *)param_2;
        uVar13 = *(undefined8 *)(param_2 + 0x20);
        uVar11 = *(undefined8 *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x28);
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
        uVar5 = (**(code **)param_6)(param_2,param_1);
        if ((uVar5 & 1) == 0) {
          uVar4 = uVar4 + 3;
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          uVar12 = *(undefined8 *)(param_1 + 8);
          uVar10 = *(undefined8 *)param_1;
          uVar4 = uVar4 + 4;
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
  }
                    /* try { // try from 009cd11c to 00acd193 has its CatchHandler @ 009cce10 */
                    /* catch() { ... } // from try @ 009cce90 with catch @ 009cd124 */
                    /* catch() { ... } // from try @ 009cce84 with catch @ 009cd128 */
  if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* catch() { ... } // from try @ 009cce64 with catch @ 009cd12c */
                    /* catch() { ... } // from try @ 009cce9c with catch @ 009cd13c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

