
/* void 
   std::__ndk1::__inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::value_type*, long) */

void std::__ndk1::
     __inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               long param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *local_200;
  long local_1e0;
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
  if (param_6 != 0) {
    local_200 = param_3;
    local_1e0 = param_6;
    do {
      if ((local_1e0 <= param_8) || (param_5 <= param_8)) {
        __buffered_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_1,param_2,local_200,param_4,param_5,local_1e0,param_7);
        break;
      }
      if (param_5 == 0) break;
      lVar8 = -param_5;
      while( true ) {
        uStack_158 = param_2[1];
        local_160 = *param_2;
        cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_2 + 2));
        local_110 = param_2[10];
        cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(param_2 + 0xb));
        local_f8 = param_2[0xd];
        cocos2d::Mat4::Mat4(aMStack_1c0,(Mat4 *)(param_1 + 2));
        local_180 = param_1[10];
        cocos2d::Vec4::Vec4(aVStack_178,(Vec4 *)(param_1 + 0xb));
        local_168 = param_1[0xd];
        fVar3 = (float)local_f8;
        fVar2 = (float)local_168;
        cocos2d::Vec4::~Vec4(aVStack_178);
        cocos2d::Mat4::~Mat4(aMStack_1c0);
        cocos2d::Vec4::~Vec4(aVStack_108);
        cocos2d::Mat4::~Mat4(aMStack_150);
        if (fVar2 < fVar3) break;
        bVar4 = lVar8 == -1;
        lVar8 = lVar8 + 1;
        param_1 = param_1 + 0xe;
        if (bVar4) goto LAB_00d14d10;
      }
      param_5 = -lVar8;
      if (param_5 < local_1e0) {
        lVar9 = local_1e0;
        if (local_1e0 < 0) {
          lVar9 = local_1e0 + 1;
        }
        lVar9 = lVar9 >> 1;
        puVar6 = param_2 + lVar9 * 0xe;
        puVar5 = (undefined8 *)
                 __upper_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,cocos2d::BatchMesh::OneSprite3D>
                           (param_1,param_2,puVar6,param_4);
        param_5 = ((long)puVar5 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
      }
      else {
        if (lVar8 == -1) {
          uStack_e8 = param_1[1];
          local_f0 = *param_1;
          cocos2d::Mat4::Mat4((Mat4 *)&local_e0,(Mat4 *)(param_1 + 2));
          local_a0 = param_1[10];
          cocos2d::Vec4::Vec4((Vec4 *)&uStack_98,(Vec4 *)(param_1 + 0xb));
          local_88 = param_1[0xd];
          uVar14 = param_2[2];
          uVar11 = param_2[5];
          uVar10 = param_2[4];
          uVar13 = param_2[1];
          uVar12 = *param_2;
          param_1[3] = param_2[3];
          param_1[2] = uVar14;
          param_1[5] = uVar11;
          param_1[4] = uVar10;
          param_1[1] = uVar13;
          *param_1 = uVar12;
          uVar10 = param_2[10];
          uVar12 = param_2[0xd];
          uVar11 = param_2[0xc];
          uVar14 = param_2[7];
          uVar13 = param_2[6];
          uVar16 = param_2[9];
          uVar15 = param_2[8];
          param_1[0xb] = param_2[0xb];
          param_1[10] = uVar10;
          param_1[0xd] = uVar12;
          param_1[0xc] = uVar11;
          param_1[7] = uVar14;
          param_1[6] = uVar13;
          param_1[9] = uVar16;
          param_1[8] = uVar15;
          param_2[0xb] = uStack_98;
          param_2[10] = local_a0;
          param_2[0xd] = local_88;
          param_2[0xc] = uStack_90;
          param_2[7] = uStack_b8;
          param_2[6] = local_c0;
          param_2[9] = uStack_a8;
          param_2[8] = uStack_b0;
          param_2[3] = uStack_d8;
          param_2[2] = local_e0;
          param_2[5] = uStack_c8;
          param_2[4] = uStack_d0;
          param_2[1] = uStack_e8;
          *param_2 = local_f0;
          cocos2d::Vec4::~Vec4((Vec4 *)&uStack_98);
          cocos2d::Mat4::~Mat4((Mat4 *)&local_e0);
          break;
        }
        if (param_5 < 0) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        puVar5 = param_1 + param_5 * 0xe;
        puVar6 = (undefined8 *)
                 __lower_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,cocos2d::BatchMesh::OneSprite3D>
                           (param_2,local_200,puVar5,param_4);
        lVar9 = ((long)puVar6 - (long)param_2 >> 4) * 0x6db6db6db6db6db7;
      }
      puVar7 = puVar6;
      if ((puVar5 != param_2) && (puVar7 = puVar5, param_2 != puVar6)) {
        if (puVar5 + 0xe == param_2) {
          puVar7 = (undefined8 *)
                   __rotate_left<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                             (puVar5,puVar6);
        }
        else if (param_2 + 0xe == puVar6) {
          puVar7 = (undefined8 *)
                   __rotate_right<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                             (puVar5,puVar6);
        }
        else {
          puVar7 = (undefined8 *)
                   __rotate_gcd<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                             (puVar5,param_2,puVar6);
        }
      }
      if (param_5 + lVar9 < (local_1e0 - (param_5 + lVar9)) - lVar8) {
        __inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_1,puVar5,puVar7,param_4,param_5,lVar9,param_7,param_8);
        lVar9 = local_1e0 - lVar9;
        param_1 = puVar7;
        puVar5 = puVar6;
        param_5 = -(param_5 + lVar8);
      }
      else {
        __inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (puVar7,puVar6,local_200,param_4,-(param_5 + lVar8),local_1e0 - lVar9,param_7,
                   param_8);
        local_200 = puVar7;
      }
      param_2 = puVar5;
      local_1e0 = lVar9;
    } while (lVar9 != 0);
  }
LAB_00d14d10:
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

