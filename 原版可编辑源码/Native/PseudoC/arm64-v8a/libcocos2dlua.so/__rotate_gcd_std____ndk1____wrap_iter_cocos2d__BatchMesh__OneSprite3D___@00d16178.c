
/* std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   std::__ndk1::__rotate_gcd<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>) */

undefined8 *
std::__ndk1::__rotate_gcd<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
          (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = (long)param_2 - (long)param_1 >> 4;
  lVar10 = lVar2 * 0x6db6db6db6db6db7;
  lVar3 = param_3 - (long)param_2 >> 4;
  lVar8 = lVar10;
  lVar5 = lVar3 * 0x6db6db6db6db6db7;
  if (lVar10 + lVar3 * -0x6db6db6db6db6db7 == 0) {
    puVar9 = param_1;
    if (param_1 != param_2) {
      puVar11 = param_2;
      do {
        uVar14 = param_1[1];
        uVar12 = *param_1;
        cocos2d::Mat4::Mat4((Mat4 *)&local_d0,(Mat4 *)(param_1 + 2));
        local_90 = param_1[10];
        cocos2d::Vec4::Vec4((Vec4 *)&uStack_88,(Vec4 *)(param_1 + 0xb));
        local_78 = param_1[0xd];
        uVar18 = puVar11[2];
        uVar15 = puVar11[5];
        uVar13 = puVar11[4];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        param_1[3] = puVar11[3];
        param_1[2] = uVar18;
        param_1[5] = uVar15;
        param_1[4] = uVar13;
        param_1[1] = uVar17;
        *param_1 = uVar16;
        uVar13 = puVar11[10];
        uVar16 = puVar11[0xd];
        uVar15 = puVar11[0xc];
        uVar18 = puVar11[7];
        uVar17 = puVar11[6];
        uVar20 = puVar11[9];
        uVar19 = puVar11[8];
        param_1[0xb] = puVar11[0xb];
        param_1[10] = uVar13;
        param_1[0xd] = uVar16;
        param_1[0xc] = uVar15;
        param_1[7] = uVar18;
        param_1[6] = uVar17;
        param_1[9] = uVar20;
        param_1[8] = uVar19;
        puVar11[0xb] = uStack_88;
        puVar11[10] = local_90;
        puVar11[0xd] = local_78;
        puVar11[0xc] = uStack_80;
        puVar11[7] = uStack_a8;
        puVar11[6] = local_b0;
        puVar11[9] = uStack_98;
        puVar11[8] = uStack_a0;
        puVar11[3] = uStack_c8;
        puVar11[2] = local_d0;
        puVar11[5] = uStack_b8;
        puVar11[4] = uStack_c0;
        puVar11[1] = uVar14;
        *puVar11 = uVar12;
        cocos2d::Vec4::~Vec4((Vec4 *)&uStack_88);
        cocos2d::Mat4::~Mat4((Mat4 *)&local_d0);
        param_1 = param_1 + 0xe;
        puVar9 = param_2;
        puVar11 = puVar11 + 0xe;
      } while (param_1 != param_2);
    }
  }
  else {
    do {
      lVar4 = lVar5;
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar8 / lVar4;
      }
      lVar5 = lVar8 - lVar5 * lVar4;
      lVar8 = lVar4;
    } while (lVar5 != 0);
    if (lVar4 != 0) {
      puVar9 = param_1 + lVar4 * 0xe;
      do {
        uVar13 = puVar9[-0xd];
        uVar12 = puVar9[-0xe];
        cocos2d::Mat4::Mat4((Mat4 *)&local_d0,(Mat4 *)(puVar9 + -0xc));
        local_90 = puVar9[-4];
        cocos2d::Vec4::Vec4((Vec4 *)&uStack_88,(Vec4 *)(puVar9 + -3));
        local_78 = puVar9[-1];
        puVar9 = puVar9 + -0xe;
        puVar6 = puVar9;
        puVar11 = puVar9 + lVar2 * 2;
        do {
          puVar7 = puVar11;
          uVar15 = puVar7[1];
          uVar14 = *puVar7;
          uVar16 = puVar7[2];
          uVar18 = puVar7[5];
          uVar17 = puVar7[4];
          lVar8 = param_3 - (long)puVar7 >> 4;
          puVar6[3] = puVar7[3];
          puVar6[2] = uVar16;
          puVar6[5] = uVar18;
          puVar6[4] = uVar17;
          puVar6[1] = uVar15;
          *puVar6 = uVar14;
          uVar14 = puVar7[10];
          uVar16 = puVar7[0xd];
          uVar15 = puVar7[0xc];
          uVar18 = puVar7[7];
          uVar17 = puVar7[6];
          uVar20 = puVar7[9];
          uVar19 = puVar7[8];
          puVar11 = puVar7 + lVar2 * 2;
          if (lVar8 * 0x6db6db6db6db6db7 <= lVar10) {
            puVar11 = param_1 + (lVar10 + lVar8 * -0x6db6db6db6db6db7) * 0xe;
          }
          puVar6[0xb] = puVar7[0xb];
          puVar6[10] = uVar14;
          puVar6[0xd] = uVar16;
          puVar6[0xc] = uVar15;
          puVar6[7] = uVar18;
          puVar6[6] = uVar17;
          puVar6[9] = uVar20;
          puVar6[8] = uVar19;
          puVar6 = puVar7;
        } while (puVar11 != puVar9);
        puVar7[3] = uStack_c8;
        puVar7[2] = local_d0;
        puVar7[5] = uStack_b8;
        puVar7[4] = uStack_c0;
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
        puVar7[0xb] = uStack_88;
        puVar7[10] = local_90;
        puVar7[0xd] = local_78;
        puVar7[0xc] = uStack_80;
        puVar7[7] = uStack_a8;
        puVar7[6] = local_b0;
        puVar7[9] = uStack_98;
        puVar7[8] = uStack_a0;
        cocos2d::Vec4::~Vec4((Vec4 *)&uStack_88);
        cocos2d::Mat4::~Mat4((Mat4 *)&local_d0);
      } while (puVar9 != param_1);
    }
    puVar9 = param_1 + lVar3 * 2;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}

