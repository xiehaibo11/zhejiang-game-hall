
/* void 
   std::__ndk1::__insertion_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

void std::__ndk1::
     __insertion_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if ((param_1 != param_2) && (param_1 + 0xe != param_2)) {
    lVar7 = 0;
    puVar4 = param_1 + 0xe;
    puVar6 = param_1;
    do {
      puVar5 = puVar4;
      uStack_e8 = puVar5[1];
      local_f0 = *puVar5;
      cocos2d::Mat4::Mat4((Mat4 *)&local_e0,(Mat4 *)(puVar6 + 0x10));
      local_a0 = puVar6[0x18];
      cocos2d::Vec4::Vec4((Vec4 *)&uStack_98,(Vec4 *)(puVar6 + 0x19));
      local_88 = puVar6[0x1b];
      puVar4 = param_1;
      lVar8 = lVar7;
      if (puVar5 != param_1) {
        do {
          uStack_158 = uStack_e8;
          local_160 = local_f0;
          cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)&local_e0);
          local_110 = local_a0;
          cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)&uStack_98);
          puVar6 = (undefined8 *)((long)param_1 + lVar8);
          local_f8 = local_88;
          cocos2d::Mat4::Mat4(aMStack_1c0,(Mat4 *)(puVar6 + 2));
          local_180 = puVar6[10];
          cocos2d::Vec4::Vec4(aVStack_178,(Vec4 *)(puVar6 + 0xb));
          local_168 = *(undefined8 *)((long)param_1 + lVar8 + 0x68);
          fVar3 = (float)local_f8;
          fVar2 = (float)local_168;
          cocos2d::Vec4::~Vec4(aVStack_178);
          cocos2d::Mat4::~Mat4(aMStack_1c0);
          cocos2d::Vec4::~Vec4(aVStack_108);
          cocos2d::Mat4::~Mat4(aMStack_150);
          if (fVar3 <= fVar2) {
            puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x70);
            break;
          }
          uVar13 = puVar6[2];
          uVar11 = puVar6[5];
          uVar10 = puVar6[4];
          uVar12 = puVar6[1];
          lVar9 = lVar8 + -0x70;
          *(undefined8 *)((long)param_1 + lVar8 + 0x88) = puVar6[3];
          *(undefined8 *)((long)param_1 + lVar8 + 0x80) = uVar13;
          *(undefined8 *)((long)param_1 + lVar8 + 0x98) = uVar11;
          *(undefined8 *)((long)param_1 + lVar8 + 0x90) = uVar10;
          *(undefined8 *)((long)param_1 + lVar8 + 0x78) = uVar12;
          *(undefined8 *)((long)param_1 + lVar8 + 0x70) = *puVar6;
          uVar10 = puVar6[10];
          uVar12 = puVar6[0xd];
          uVar11 = puVar6[0xc];
          uVar14 = puVar6[7];
          uVar13 = puVar6[6];
          uVar16 = puVar6[9];
          uVar15 = puVar6[8];
          *(undefined8 *)((long)param_1 + lVar8 + 200) = puVar6[0xb];
          *(undefined8 *)((long)param_1 + lVar8 + 0xc0) = uVar10;
          *(undefined8 *)((long)param_1 + lVar8 + 0xd8) = uVar12;
          *(undefined8 *)((long)param_1 + lVar8 + 0xd0) = uVar11;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa8) = uVar14;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa0) = uVar13;
          *(undefined8 *)((long)param_1 + lVar8 + 0xb8) = uVar16;
          *(undefined8 *)((long)param_1 + lVar8 + 0xb0) = uVar15;
          lVar8 = lVar9;
        } while (lVar9 != -0x70);
      }
      puVar4[3] = uStack_d8;
      puVar4[2] = local_e0;
      puVar4[5] = uStack_c8;
      puVar4[4] = uStack_d0;
      puVar4[1] = uStack_e8;
      *puVar4 = local_f0;
      puVar4[0xb] = uStack_98;
      puVar4[10] = local_a0;
      puVar4[0xd] = local_88;
      puVar4[0xc] = uStack_90;
      puVar4[7] = uStack_b8;
      puVar4[6] = local_c0;
      puVar4[9] = uStack_a8;
      puVar4[8] = uStack_b0;
      cocos2d::Vec4::~Vec4((Vec4 *)&uStack_98);
      cocos2d::Mat4::~Mat4((Mat4 *)&local_e0);
      lVar7 = lVar7 + 0x70;
      puVar4 = puVar5 + 0xe;
      puVar6 = puVar5;
    } while (puVar5 + 0xe != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

