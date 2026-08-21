
/* void 
   std::__ndk1::__stable_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
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
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,
               undefined8 *param_5)

{
  Mat4 *pMVar1;
  Vec4 *pVVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  Mat4 *pMVar9;
  Vec4 *pVVar10;
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
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  if (param_4 != 0) {
    if (param_4 == 2) {
      uStack_e8 = *(undefined8 *)(param_2 + -0x68);
      local_f0 = *(undefined8 *)(param_2 + -0x70);
      pMVar9 = (Mat4 *)(param_2 + -0x60);
      cocos2d::Mat4::Mat4(aMStack_e0,pMVar9);
      local_a0 = *(undefined8 *)(param_2 + -0x20);
      pVVar10 = (Vec4 *)(param_2 + -0x18);
      cocos2d::Vec4::Vec4(aVStack_98,pVVar10);
      local_88 = *(undefined8 *)(param_2 + -8);
      pMVar1 = (Mat4 *)(param_1 + 2);
      cocos2d::Mat4::Mat4(aMStack_150,pMVar1);
      local_110 = param_1[10];
      pVVar2 = (Vec4 *)(param_1 + 0xb);
      cocos2d::Vec4::Vec4(aVStack_108,pVVar2);
      local_f8 = param_1[0xd];
      fVar6 = (float)local_88;
      fVar5 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      if (fVar6 <= fVar5) {
        uVar7 = *param_1;
        param_5[1] = param_1[1];
        *param_5 = uVar7;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + 2),pMVar1);
        param_5[10] = param_1[10];
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 0xb),pVVar2);
        param_5[0xd] = param_1[0xd];
        uVar7 = *(undefined8 *)(param_2 + -0x70);
        param_5[0xf] = *(undefined8 *)(param_2 + -0x68);
        param_5[0xe] = uVar7;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + 0x10),pMVar9);
        param_5[0x18] = *(undefined8 *)(param_2 + -0x20);
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 0x19),pVVar10);
        uVar7 = *(undefined8 *)(param_2 + -8);
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + -0x70);
        param_5[1] = *(undefined8 *)(param_2 + -0x68);
        *param_5 = uVar7;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + 2),pMVar9);
        param_5[10] = *(undefined8 *)(param_2 + -0x20);
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 0xb),pVVar10);
        param_5[0xd] = *(undefined8 *)(param_2 + -8);
        uVar7 = *param_1;
        param_5[0xf] = param_1[1];
        param_5[0xe] = uVar7;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + 0x10),pMVar1);
        param_5[0x18] = param_1[10];
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 0x19),pVVar2);
        uVar7 = param_1[0xd];
      }
      param_5[0x1b] = uVar7;
    }
    else if (param_4 == 1) {
      uVar7 = *param_1;
      param_5[1] = param_1[1];
      *param_5 = uVar7;
      cocos2d::Mat4::Mat4((Mat4 *)(param_5 + 2),(Mat4 *)(param_1 + 2));
      param_5[10] = param_1[10];
      cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 0xb),(Vec4 *)(param_1 + 0xb));
      param_5[0xd] = param_1[0xd];
    }
    else if ((long)param_4 < 9) {
      __insertion_sort_move<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (param_1,param_2,param_5,param_3);
    }
    else {
      uVar8 = param_4 >> 1;
      puVar3 = param_1 + uVar8 * 0xe;
      __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (param_1,puVar3,param_3,uVar8,param_5,uVar8);
      __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (puVar3,param_2,param_3,param_4 - uVar8,param_5 + uVar8 * 0xe,param_4 - uVar8);
      __merge_move_construct<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (param_1,puVar3,puVar3,param_2,param_5,param_3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

