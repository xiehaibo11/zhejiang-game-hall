
/* void 
   std::__ndk1::__merge_move_assign<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   cocos2d::BatchMesh::OneSprite3D*, cocos2d::BatchMesh::OneSprite3D*,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*> >(cocos2d::BatchMesh::OneSprite3D*,
   cocos2d::BatchMesh::OneSprite3D*, cocos2d::BatchMesh::OneSprite3D*,
   cocos2d::BatchMesh::OneSprite3D*, std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

void std::__ndk1::
     __merge_move_assign<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,cocos2d::BatchMesh::OneSprite3D*,cocos2d::BatchMesh::OneSprite3D*,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Mat4 aMStack_150 [64];
  undefined8 local_110;
  Vec4 aVStack_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  Mat4 aMStack_e0 [64];
  undefined8 local_a0;
  Vec4 aVStack_98 [16];
  undefined8 local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        if (param_1 != param_2) {
          lVar6 = 0;
          do {
            puVar1 = (undefined8 *)((long)param_1 + lVar6);
            uVar11 = puVar1[2];
            uVar8 = puVar1[5];
            uVar7 = puVar1[4];
            uVar10 = puVar1[1];
            uVar9 = *puVar1;
            puVar2 = (undefined8 *)((long)param_5 + lVar6);
            lVar6 = lVar6 + 0x70;
            puVar2[3] = puVar1[3];
            puVar2[2] = uVar11;
            puVar2[5] = uVar8;
            puVar2[4] = uVar7;
            puVar2[1] = uVar10;
            *puVar2 = uVar9;
            uVar7 = puVar1[10];
            uVar9 = puVar1[0xd];
            uVar8 = puVar1[0xc];
            uVar11 = puVar1[7];
            uVar10 = puVar1[6];
            uVar13 = puVar1[9];
            uVar12 = puVar1[8];
            puVar2[0xb] = puVar1[0xb];
            puVar2[10] = uVar7;
            puVar2[0xd] = uVar9;
            puVar2[0xc] = uVar8;
            puVar2[7] = uVar11;
            puVar2[6] = uVar10;
            puVar2[9] = uVar13;
            puVar2[8] = uVar12;
          } while ((long)param_2 - (long)param_1 != lVar6);
        }
        goto LAB_00d1498c;
      }
      uStack_e8 = param_3[1];
      local_f0 = *param_3;
      cocos2d::Mat4::Mat4(aMStack_e0,(Mat4 *)(param_3 + 2));
      local_a0 = param_3[10];
      cocos2d::Vec4::Vec4(aVStack_98,(Vec4 *)(param_3 + 0xb));
      local_88 = param_3[0xd];
      cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_1 + 2));
      local_110 = param_1[10];
      cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(param_1 + 0xb));
      local_f8 = param_1[0xd];
      fVar5 = (float)local_88;
      fVar4 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      if (fVar5 <= fVar4) {
        uVar11 = param_1[2];
        uVar8 = param_1[5];
        uVar7 = param_1[4];
        uVar10 = param_1[1];
        uVar9 = *param_1;
        param_5[3] = param_1[3];
        param_5[2] = uVar11;
        param_5[5] = uVar8;
        param_5[4] = uVar7;
        param_5[1] = uVar10;
        *param_5 = uVar9;
        uVar8 = param_1[0xb];
        uVar7 = param_1[10];
        uVar10 = param_1[0xd];
        uVar9 = param_1[0xc];
        uVar12 = param_1[7];
        uVar11 = param_1[6];
        uVar14 = param_1[9];
        uVar13 = param_1[8];
        param_1 = param_1 + 0xe;
      }
      else {
        uVar11 = param_3[2];
        uVar8 = param_3[5];
        uVar7 = param_3[4];
        uVar10 = param_3[1];
        uVar9 = *param_3;
        param_5[3] = param_3[3];
        param_5[2] = uVar11;
        param_5[5] = uVar8;
        param_5[4] = uVar7;
        param_5[1] = uVar10;
        *param_5 = uVar9;
        uVar8 = param_3[0xb];
        uVar7 = param_3[10];
        uVar10 = param_3[0xd];
        uVar9 = param_3[0xc];
        uVar12 = param_3[7];
        uVar11 = param_3[6];
        uVar14 = param_3[9];
        uVar13 = param_3[8];
        param_3 = param_3 + 0xe;
      }
      param_5[0xb] = uVar8;
      param_5[10] = uVar7;
      param_5[0xd] = uVar10;
      param_5[0xc] = uVar9;
      param_5[7] = uVar12;
      param_5[6] = uVar11;
      param_5[9] = uVar14;
      param_5[8] = uVar13;
      param_5 = param_5 + 0xe;
    } while (param_1 != param_2);
  }
  for (; param_3 != param_4; param_3 = param_3 + 0xe) {
    uVar11 = param_3[2];
    uVar8 = param_3[5];
    uVar7 = param_3[4];
    uVar10 = param_3[1];
    uVar9 = *param_3;
    param_5[3] = param_3[3];
    param_5[2] = uVar11;
    param_5[5] = uVar8;
    param_5[4] = uVar7;
    param_5[1] = uVar10;
    *param_5 = uVar9;
    uVar7 = param_3[6];
    uVar9 = param_3[9];
    uVar8 = param_3[8];
    uVar11 = param_3[0xb];
    uVar10 = param_3[10];
    uVar13 = param_3[0xd];
    uVar12 = param_3[0xc];
    param_5[7] = param_3[7];
    param_5[6] = uVar7;
    param_5[9] = uVar9;
    param_5[8] = uVar8;
    param_5[0xb] = uVar11;
    param_5[10] = uVar10;
    param_5[0xd] = uVar13;
    param_5[0xc] = uVar12;
    param_5 = param_5 + 0xe;
  }
LAB_00d1498c:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

