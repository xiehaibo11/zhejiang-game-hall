
/* void 
   std::__ndk1::__insertion_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::value_type*,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

void std::__ndk1::
     __insertion_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  Mat4 *pMVar1;
  Vec4 *pVVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long local_260;
  Mat4 aMStack_230 [64];
  undefined8 local_1f0;
  Vec4 aVStack_1e8 [16];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  Mat4 aMStack_1c0 [64];
  undefined8 local_180;
  Vec4 aVStack_178 [16];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  if (param_1 != param_2) {
    uVar12 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar12;
    cocos2d::Mat4::Mat4((Mat4 *)(param_3 + 2),(Mat4 *)(param_1 + 2));
    param_3[10] = param_1[10];
    cocos2d::Vec4::Vec4((Vec4 *)(param_3 + 0xb),(Vec4 *)(param_1 + 0xb));
    param_3[0xd] = param_1[0xd];
    if (param_1 + 0xe != param_2) {
      local_260 = 0;
      puVar10 = param_1 + 0xe;
      puVar11 = param_3;
      do {
        puVar8 = puVar10;
        uStack_e8 = puVar8[1];
        local_f0 = *puVar8;
        pMVar1 = (Mat4 *)(param_1 + 0x10);
        cocos2d::Mat4::Mat4(aMStack_e0,pMVar1);
        local_a0 = param_1[0x18];
        pVVar2 = (Vec4 *)(param_1 + 0x19);
        cocos2d::Vec4::Vec4(aVStack_98,pVVar2);
        local_88 = param_1[0x1b];
        uStack_158 = puVar11[1];
        local_160 = *puVar11;
        cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(puVar11 + 2));
        local_110 = puVar11[10];
        cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(puVar11 + 0xb));
        local_f8 = puVar11[0xd];
        fVar7 = (float)local_88;
        puVar3 = puVar11 + 0xe;
        fVar6 = (float)local_f8;
        cocos2d::Vec4::~Vec4(aVStack_108);
        cocos2d::Mat4::~Mat4(aMStack_150);
        cocos2d::Vec4::~Vec4(aVStack_98);
        cocos2d::Mat4::~Mat4(aMStack_e0);
        if (fVar7 <= fVar6) {
          uVar12 = *puVar8;
          puVar11[0xf] = puVar8[1];
          *puVar3 = uVar12;
          cocos2d::Mat4::Mat4((Mat4 *)(puVar11 + 0x10),pMVar1);
          puVar11[0x18] = param_1[0x18];
          cocos2d::Vec4::Vec4((Vec4 *)(puVar11 + 0x19),pVVar2);
          puVar11[0x1b] = param_1[0x1b];
        }
        else {
          puVar11[0xf] = puVar11[1];
          *puVar3 = *puVar11;
          cocos2d::Mat4::Mat4((Mat4 *)(puVar11 + 0x10),(Mat4 *)(puVar11 + 2));
          puVar11[0x18] = puVar11[10];
          cocos2d::Vec4::Vec4((Vec4 *)(puVar11 + 0x19),(Vec4 *)(puVar11 + 0xb));
          puVar11[0x1b] = puVar11[0xd];
          lVar9 = local_260;
          puVar10 = param_3;
          if (puVar11 != param_3) {
            do {
              uStack_1c8 = puVar8[1];
              local_1d0 = *puVar8;
              cocos2d::Mat4::Mat4(aMStack_1c0,pMVar1);
              local_180 = param_1[0x18];
              cocos2d::Vec4::Vec4(aVStack_178,pVVar2);
              local_168 = param_1[0x1b];
              cocos2d::Mat4::Mat4(aMStack_230,(Mat4 *)((long)param_3 + lVar9 + -0x60));
              local_1f0 = *(undefined8 *)((long)param_3 + lVar9 + -0x20);
              cocos2d::Vec4::Vec4(aVStack_1e8,(Vec4 *)((long)param_3 + lVar9 + -0x18));
              puVar10 = (undefined8 *)((long)param_3 + lVar9);
              local_1d8 = puVar10[-1];
              fVar7 = (float)local_168;
              fVar6 = (float)local_1d8;
              cocos2d::Vec4::~Vec4(aVStack_1e8);
              cocos2d::Mat4::~Mat4(aMStack_230);
              cocos2d::Vec4::~Vec4(aVStack_178);
              cocos2d::Mat4::~Mat4(aMStack_1c0);
              if (fVar7 <= fVar6) break;
              uVar16 = *(undefined8 *)((long)param_3 + lVar9 + -0x60);
              uVar13 = *(undefined8 *)((long)param_3 + lVar9 + -0x48);
              uVar12 = *(undefined8 *)((long)param_3 + lVar9 + -0x50);
              uVar15 = *(undefined8 *)((long)param_3 + lVar9 + -0x68);
              uVar14 = *(undefined8 *)((long)param_3 + lVar9 + -0x70);
              lVar4 = lVar9 + -0x70;
              puVar10[3] = *(undefined8 *)((long)param_3 + lVar9 + -0x58);
              puVar10[2] = uVar16;
              puVar10[5] = uVar13;
              puVar10[4] = uVar12;
              puVar10[1] = uVar15;
              *puVar10 = uVar14;
              uVar12 = *(undefined8 *)((long)param_3 + lVar9 + -0x20);
              uVar14 = *(undefined8 *)((long)param_3 + lVar9 + -8);
              uVar13 = *(undefined8 *)((long)param_3 + lVar9 + -0x10);
              uVar16 = *(undefined8 *)((long)param_3 + lVar9 + -0x38);
              uVar15 = *(undefined8 *)((long)param_3 + lVar9 + -0x40);
              uVar18 = *(undefined8 *)((long)param_3 + lVar9 + -0x28);
              uVar17 = *(undefined8 *)((long)param_3 + lVar9 + -0x30);
              puVar10[0xb] = *(undefined8 *)((long)param_3 + lVar9 + -0x18);
              puVar10[10] = uVar12;
              puVar10[0xd] = uVar14;
              puVar10[0xc] = uVar13;
              puVar10[7] = uVar16;
              puVar10[6] = uVar15;
              puVar10[9] = uVar18;
              puVar10[8] = uVar17;
              lVar9 = lVar4;
              puVar10 = param_3;
            } while (lVar4 != 0);
          }
          uVar16 = puVar8[2];
          uVar13 = puVar8[5];
          uVar12 = puVar8[4];
          uVar15 = puVar8[1];
          uVar14 = *puVar8;
          puVar10[3] = puVar8[3];
          puVar10[2] = uVar16;
          puVar10[5] = uVar13;
          puVar10[4] = uVar12;
          puVar10[1] = uVar15;
          *puVar10 = uVar14;
          uVar12 = puVar8[10];
          uVar14 = puVar8[0xd];
          uVar13 = puVar8[0xc];
          uVar16 = puVar8[7];
          uVar15 = puVar8[6];
          uVar18 = puVar8[9];
          uVar17 = puVar8[8];
          puVar10[0xb] = puVar8[0xb];
          puVar10[10] = uVar12;
          puVar10[0xd] = uVar14;
          puVar10[0xc] = uVar13;
          puVar10[7] = uVar16;
          puVar10[6] = uVar15;
          puVar10[9] = uVar18;
          puVar10[8] = uVar17;
        }
        local_260 = local_260 + 0x70;
        puVar10 = puVar8 + 0xe;
        param_1 = puVar8;
        puVar11 = puVar3;
      } while (puVar8 + 0xe != param_2);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

