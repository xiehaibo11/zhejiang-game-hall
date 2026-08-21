
/* void 
   std::__ndk1::__buffered_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
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
   >::value_type*) */

void std::__ndk1::
     __buffered_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (OneSprite3D *param_1,OneSprite3D *param_2,OneSprite3D *param_3,undefined8 param_4,
               long param_5,long param_6,OneSprite3D *param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  Vec4 *this;
  OneSprite3D *pOVar4;
  OneSprite3D *pOVar5;
  OneSprite3D *pOVar6;
  long lVar7;
  long lVar8;
  OneSprite3D *pOVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_6 < param_5) {
    local_70 = param_4;
    if (param_2 == param_3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      lVar8 = 0;
      do {
        pOVar9 = param_2 + lVar8;
        uVar10 = *(undefined8 *)pOVar9;
        pOVar6 = param_7 + lVar8;
        *(undefined8 *)(pOVar6 + 8) = *(undefined8 *)(pOVar9 + 8);
        *(undefined8 *)pOVar6 = uVar10;
        cocos2d::Mat4::Mat4((Mat4 *)(pOVar6 + 0x10),(Mat4 *)(pOVar9 + 0x10));
        *(undefined8 *)(pOVar6 + 0x50) = *(undefined8 *)(pOVar9 + 0x50);
        cocos2d::Vec4::Vec4((Vec4 *)(pOVar6 + 0x58),(Vec4 *)(pOVar9 + 0x58));
        lVar7 = lVar7 + 1;
        lVar1 = lVar8 + 0x70;
        *(undefined8 *)(param_7 + lVar8 + 0x68) = *(undefined8 *)(pOVar9 + 0x68);
        lVar8 = lVar1;
      } while (pOVar9 + 0x70 != param_3);
      if (lVar1 != 0) {
        pOVar9 = param_7 + lVar1;
        do {
          if (param_2 == param_1) goto LAB_00d15840;
          pOVar5 = param_2 + -0x70;
          pOVar6 = pOVar9 + -0x70;
          bVar3 = __invert<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::{lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)#1}&>
                  ::operator()((__invert<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&>
                                *)&local_70,pOVar5,pOVar6);
          pOVar4 = param_3 + -0x70;
          if (bVar3) {
            uVar14 = *(undefined8 *)(param_2 + -0x60);
            uVar11 = *(undefined8 *)(param_2 + -0x48);
            uVar10 = *(undefined8 *)(param_2 + -0x50);
            uVar13 = *(undefined8 *)(param_2 + -0x68);
            uVar12 = *(undefined8 *)pOVar5;
            *(undefined8 *)(param_3 + -0x58) = *(undefined8 *)(param_2 + -0x58);
            *(undefined8 *)(param_3 + -0x60) = uVar14;
            *(undefined8 *)(param_3 + -0x48) = uVar11;
            *(undefined8 *)(param_3 + -0x50) = uVar10;
            *(undefined8 *)(param_3 + -0x68) = uVar13;
            *(undefined8 *)pOVar4 = uVar12;
            uVar11 = *(undefined8 *)(param_2 + -0x18);
            uVar10 = *(undefined8 *)(param_2 + -0x20);
            uVar13 = *(undefined8 *)(param_2 + -8);
            uVar12 = *(undefined8 *)(param_2 + -0x10);
            uVar15 = *(undefined8 *)(param_2 + -0x38);
            uVar14 = *(undefined8 *)(param_2 + -0x40);
            uVar17 = *(undefined8 *)(param_2 + -0x28);
            uVar16 = *(undefined8 *)(param_2 + -0x30);
            param_2 = pOVar5;
            pOVar6 = pOVar9;
          }
          else {
            uVar14 = *(undefined8 *)(pOVar9 + -0x60);
            uVar11 = *(undefined8 *)(pOVar9 + -0x48);
            uVar10 = *(undefined8 *)(pOVar9 + -0x50);
            uVar13 = *(undefined8 *)(pOVar9 + -0x68);
            uVar12 = *(undefined8 *)pOVar6;
            *(undefined8 *)(param_3 + -0x58) = *(undefined8 *)(pOVar9 + -0x58);
            *(undefined8 *)(param_3 + -0x60) = uVar14;
            *(undefined8 *)(param_3 + -0x48) = uVar11;
            *(undefined8 *)(param_3 + -0x50) = uVar10;
            *(undefined8 *)(param_3 + -0x68) = uVar13;
            *(undefined8 *)pOVar4 = uVar12;
            uVar11 = *(undefined8 *)(pOVar9 + -0x18);
            uVar10 = *(undefined8 *)(pOVar9 + -0x20);
            uVar13 = *(undefined8 *)(pOVar9 + -8);
            uVar12 = *(undefined8 *)(pOVar9 + -0x10);
            uVar15 = *(undefined8 *)(pOVar9 + -0x38);
            uVar14 = *(undefined8 *)(pOVar9 + -0x40);
            uVar17 = *(undefined8 *)(pOVar9 + -0x28);
            uVar16 = *(undefined8 *)(pOVar9 + -0x30);
          }
          *(undefined8 *)(param_3 + -0x18) = uVar11;
          *(undefined8 *)(param_3 + -0x20) = uVar10;
          *(undefined8 *)(param_3 + -8) = uVar13;
          *(undefined8 *)(param_3 + -0x10) = uVar12;
          *(undefined8 *)(param_3 + -0x38) = uVar15;
          *(undefined8 *)(param_3 + -0x40) = uVar14;
          *(undefined8 *)(param_3 + -0x28) = uVar17;
          *(undefined8 *)(param_3 + -0x30) = uVar16;
          pOVar9 = pOVar6;
          param_3 = pOVar4;
        } while (pOVar6 != param_7);
      }
    }
  }
  else {
    pOVar9 = param_7;
    if (param_1 == param_2) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      pOVar6 = param_1;
      do {
        uVar10 = *(undefined8 *)pOVar6;
        *(undefined8 *)(pOVar9 + 8) = *(undefined8 *)(pOVar6 + 8);
        *(undefined8 *)pOVar9 = uVar10;
        cocos2d::Mat4::Mat4((Mat4 *)(pOVar9 + 0x10),(Mat4 *)(pOVar6 + 0x10));
        *(undefined8 *)(pOVar9 + 0x50) = *(undefined8 *)(pOVar6 + 0x50);
        cocos2d::Vec4::Vec4((Vec4 *)(pOVar9 + 0x58),(Vec4 *)(pOVar6 + 0x58));
        pOVar4 = pOVar6 + 0x68;
        pOVar6 = pOVar6 + 0x70;
        lVar7 = lVar7 + 1;
        *(undefined8 *)(pOVar9 + 0x68) = *(undefined8 *)pOVar4;
        pOVar9 = pOVar9 + 0x70;
      } while (pOVar6 != param_2);
    }
    __half_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_,cocos2d::BatchMesh::OneSprite3D*,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
              (param_7,pOVar9,param_2,param_3,param_1);
  }
joined_r0x00d157bc:
  if ((param_7 != (OneSprite3D *)0x0) && (lVar7 != 0)) {
    this = (Vec4 *)(param_7 + 0x58);
    do {
      cocos2d::Vec4::~Vec4(this);
      cocos2d::Mat4::~Mat4((Mat4 *)(this + -0x48));
      lVar7 = lVar7 + -1;
      this = this + 0x70;
    } while (lVar7 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d15840:
  do {
    uVar14 = *(undefined8 *)(pOVar9 + -0x60);
    uVar11 = *(undefined8 *)(pOVar9 + -0x48);
    uVar10 = *(undefined8 *)(pOVar9 + -0x50);
    uVar13 = *(undefined8 *)(pOVar9 + -0x68);
    uVar12 = *(undefined8 *)(pOVar9 + -0x70);
    *(undefined8 *)(param_3 + -0x58) = *(undefined8 *)(pOVar9 + -0x58);
    *(undefined8 *)(param_3 + -0x60) = uVar14;
    *(undefined8 *)(param_3 + -0x48) = uVar11;
    *(undefined8 *)(param_3 + -0x50) = uVar10;
    *(undefined8 *)(param_3 + -0x68) = uVar13;
    *(undefined8 *)(param_3 + -0x70) = uVar12;
    pOVar6 = pOVar9 + -0x38;
    uVar10 = *(undefined8 *)(pOVar9 + -0x40);
    uVar12 = *(undefined8 *)(pOVar9 + -0x28);
    uVar11 = *(undefined8 *)(pOVar9 + -0x30);
    uVar14 = *(undefined8 *)(pOVar9 + -0x18);
    uVar13 = *(undefined8 *)(pOVar9 + -0x20);
    uVar16 = *(undefined8 *)(pOVar9 + -8);
    uVar15 = *(undefined8 *)(pOVar9 + -0x10);
    pOVar9 = pOVar9 + -0x70;
    *(undefined8 *)(param_3 + -0x38) = *(undefined8 *)pOVar6;
    *(undefined8 *)(param_3 + -0x40) = uVar10;
    *(undefined8 *)(param_3 + -0x28) = uVar12;
    *(undefined8 *)(param_3 + -0x30) = uVar11;
    *(undefined8 *)(param_3 + -0x18) = uVar14;
    *(undefined8 *)(param_3 + -0x20) = uVar13;
    *(undefined8 *)(param_3 + -8) = uVar16;
    *(undefined8 *)(param_3 + -0x10) = uVar15;
    param_3 = param_3 + -0x70;
  } while (param_7 != pOVar9);
  goto joined_r0x00d157bc;
}

