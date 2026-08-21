
/* void 
   std::__ndk1::__stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::value_type*, long) */

void std::__ndk1::
     __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
               long param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  Vec4 *this;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  if (1 < param_4) {
    if (param_4 == 2) {
      uStack_158 = *(undefined8 *)(param_2 + -0x68);
      local_160 = *(undefined8 *)(param_2 + -0x70);
      cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_2 + -0x60));
      local_110 = *(undefined8 *)(param_2 + -0x20);
      cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(param_2 + -0x18));
      local_f8 = *(undefined8 *)(param_2 + -8);
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
      if (fVar2 < fVar3) {
        uStack_e8 = param_1[1];
        local_f0 = *param_1;
        cocos2d::Mat4::Mat4((Mat4 *)&local_e0,(Mat4 *)(param_1 + 2));
        local_a0 = param_1[10];
        cocos2d::Vec4::Vec4((Vec4 *)&uStack_98,(Vec4 *)(param_1 + 0xb));
        local_88 = param_1[0xd];
        uVar11 = *(undefined8 *)(param_2 + -0x60);
        uVar8 = *(undefined8 *)(param_2 + -0x48);
        uVar7 = *(undefined8 *)(param_2 + -0x50);
        uVar10 = *(undefined8 *)(param_2 + -0x68);
        uVar9 = *(undefined8 *)(param_2 + -0x70);
        param_1[3] = *(undefined8 *)(param_2 + -0x58);
        param_1[2] = uVar11;
        param_1[5] = uVar8;
        param_1[4] = uVar7;
        param_1[1] = uVar10;
        *param_1 = uVar9;
        uVar7 = *(undefined8 *)(param_2 + -0x20);
        uVar9 = *(undefined8 *)(param_2 + -8);
        uVar8 = *(undefined8 *)(param_2 + -0x10);
        uVar11 = *(undefined8 *)(param_2 + -0x38);
        uVar10 = *(undefined8 *)(param_2 + -0x40);
        uVar13 = *(undefined8 *)(param_2 + -0x28);
        uVar12 = *(undefined8 *)(param_2 + -0x30);
        param_1[0xb] = *(undefined8 *)(param_2 + -0x18);
        param_1[10] = uVar7;
        param_1[0xd] = uVar9;
        param_1[0xc] = uVar8;
        param_1[7] = uVar11;
        param_1[6] = uVar10;
        param_1[9] = uVar13;
        param_1[8] = uVar12;
        *(undefined8 *)(param_2 + -0x18) = uStack_98;
        *(undefined8 *)(param_2 + -0x20) = local_a0;
        *(undefined8 *)(param_2 + -8) = local_88;
        *(undefined8 *)(param_2 + -0x10) = uStack_90;
        *(undefined8 *)(param_2 + -0x38) = uStack_b8;
        *(undefined8 *)(param_2 + -0x40) = local_c0;
        *(undefined8 *)(param_2 + -0x28) = uStack_a8;
        *(undefined8 *)(param_2 + -0x30) = uStack_b0;
        *(undefined8 *)(param_2 + -0x58) = uStack_d8;
        *(undefined8 *)(param_2 + -0x60) = local_e0;
        *(undefined8 *)(param_2 + -0x48) = uStack_c8;
        *(undefined8 *)(param_2 + -0x50) = uStack_d0;
        *(undefined8 *)(param_2 + -0x68) = uStack_e8;
        *(undefined8 *)(param_2 + -0x70) = local_f0;
        cocos2d::Vec4::~Vec4((Vec4 *)&uStack_98);
        cocos2d::Mat4::~Mat4((Mat4 *)&local_e0);
      }
    }
    else if ((long)param_4 < 0x81) {
      __insertion_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (param_1,param_2,param_3);
    }
    else {
      uVar4 = param_4 >> 1;
      puVar6 = param_1 + uVar4 * 0xe;
      if (param_6 < (long)param_4) {
        __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_1,puVar6,param_3,uVar4,param_5,param_6);
        __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (puVar6,param_2,param_3,param_4 - uVar4,param_5,param_6);
        __inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_1,puVar6,param_2,param_3,uVar4,param_4 - uVar4,param_5,param_6);
      }
      else {
        __stable_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_1,puVar6,param_3,uVar4,param_5);
        lVar5 = param_5 + uVar4 * 0x70;
        __stable_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (puVar6,param_2,param_3,param_4 - uVar4,lVar5);
        __merge_move_assign<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,cocos2d::BatchMesh::OneSprite3D*,cocos2d::BatchMesh::OneSprite3D*,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                  (param_5,lVar5,lVar5,param_5 + param_4 * 0x70,param_1,param_3);
        if (param_5 != 0) {
          this = (Vec4 *)(param_5 + 0x58);
          do {
            cocos2d::Vec4::~Vec4(this);
            cocos2d::Mat4::~Mat4((Mat4 *)(this + -0x48));
            param_4 = param_4 - 1;
            this = this + 0x70;
          } while (param_4 != 0);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

