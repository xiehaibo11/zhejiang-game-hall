
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,
   cocos2d::Animation3D::Curve*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,
   cocos2d::Animation3D::Curve*>, std::__ndk1::__unordered_map_hasher<cocos2d::Bone3D*,
   std::__ndk1::__hash_value_type<cocos2d::Bone3D*, cocos2d::Animation3D::Curve*>,
   std::__ndk1::hash<cocos2d::Bone3D*>, true>, std::__ndk1::__unordered_map_equal<cocos2d::Bone3D*,
   std::__ndk1::__hash_value_type<cocos2d::Bone3D*, cocos2d::Animation3D::Curve*>,
   std::__ndk1::equal_to<cocos2d::Bone3D*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,
   cocos2d::Animation3D::Curve*> > >::__emplace_unique_key_args<cocos2d::Bone3D*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<cocos2d::Bone3D* const&>,
   std::__ndk1::tuple<> >(cocos2d::Bone3D* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<cocos2d::Bone3D* const&>&&, std::__ndk1::tuple<>&&) */

Bone3D * std::__ndk1::
         __hash_table<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<cocos2d::Bone3D*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<cocos2d::Bone3D*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>>>
         ::
         __emplace_unique_key_args<cocos2d::Bone3D*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Bone3D*const&>,std::__ndk1::tuple<>>
                   (Bone3D **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Bone3D **ppBVar4;
  Bone3D *pBVar5;
  ulong uVar6;
  Bone3D *pBVar7;
  Bone3D *pBVar8;
  Bone3D *pBVar9;
  Bone3D *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pBVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pBVar9 = (Bone3D *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pBVar8 != (Bone3D *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pBVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pBVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pBVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pBVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pBVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pBVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pBVar8 >> 8)),POPCOUNT((char)pBVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (Bone3D *)((ulong)pBVar9 & (ulong)(pBVar8 + -1));
    }
    else {
      unaff_x24 = pBVar9;
      if (pBVar8 <= pBVar9) {
        uVar1 = 0;
        if (pBVar8 != (Bone3D *)0x0) {
          uVar1 = (ulong)pBVar9 / (ulong)pBVar8;
        }
        unaff_x24 = pBVar9 + -(uVar1 * (long)pBVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pBVar7 = (Bone3D *)**(long **)(*param_1 + (long)unaff_x24 * 8); pBVar7 != (Bone3D *)0x0;
          pBVar7 = *(Bone3D **)pBVar7) {
        pBVar5 = *(Bone3D **)(pBVar7 + 8);
        if (pBVar5 != pBVar9) {
          if (uVar6 < 2) {
            pBVar5 = (Bone3D *)((ulong)pBVar5 & (ulong)(pBVar8 + -1));
          }
          else if (pBVar8 <= pBVar5) {
            uVar1 = 0;
            if (pBVar8 != (Bone3D *)0x0) {
              uVar1 = (ulong)pBVar5 / (ulong)pBVar8;
            }
            if (pBVar5 + -(uVar1 * (long)pBVar8) == unaff_x24) goto LAB_00d0a420;
            break;
          }
          if (pBVar5 != unaff_x24) break;
        }
LAB_00d0a420:
        if (*(ulong *)(pBVar7 + 0x10) == uVar2) {
          return pBVar7;
        }
      }
    }
  }
  pBVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pBVar7 = 0;
  *(Bone3D **)(pBVar7 + 8) = pBVar9;
  *(undefined8 *)(pBVar7 + 0x10) = uVar3;
  *(undefined8 *)(pBVar7 + 0x18) = 0;
  if ((pBVar8 == (Bone3D *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pBVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pBVar8 < (Bone3D *)0x3 || ((ulong)pBVar8 & (ulong)(pBVar8 + -1)) != 0) |
            (long)pBVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<cocos2d::Bone3D*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<cocos2d::Bone3D*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>>>
            *)param_1,uVar6);
    pBVar8 = param_1[1];
    if (((ulong)pBVar8 & (ulong)(pBVar8 + -1)) == 0) {
      unaff_x24 = (Bone3D *)((ulong)(pBVar8 + -1) & (ulong)pBVar9);
    }
    else {
      unaff_x24 = pBVar9;
      if (pBVar8 <= pBVar9) {
        uVar2 = 0;
        if (pBVar8 != (Bone3D *)0x0) {
          uVar2 = (ulong)pBVar9 / (ulong)pBVar8;
        }
        unaff_x24 = pBVar9 + -(uVar2 * (long)pBVar8);
      }
    }
  }
  pBVar5 = *param_1;
  pBVar9 = *(Bone3D **)(pBVar5 + (long)unaff_x24 * 8);
  if (pBVar9 == (Bone3D *)0x0) {
    ppBVar4 = param_1 + 2;
    *(Bone3D **)pBVar7 = *ppBVar4;
    *ppBVar4 = pBVar7;
    *(Bone3D ***)(pBVar5 + (long)unaff_x24 * 8) = ppBVar4;
    if (*(long *)pBVar7 == 0) goto LAB_00d0a574;
    pBVar9 = *(Bone3D **)(*(long *)pBVar7 + 8);
    if (((ulong)pBVar8 & (ulong)(pBVar8 + -1)) == 0) {
      pBVar9 = (Bone3D *)((ulong)pBVar9 & (ulong)(pBVar8 + -1));
    }
    else if (pBVar8 <= pBVar9) {
      uVar2 = 0;
      if (pBVar8 != (Bone3D *)0x0) {
        uVar2 = (ulong)pBVar9 / (ulong)pBVar8;
      }
      pBVar9 = pBVar9 + -(uVar2 * (long)pBVar8);
    }
    pBVar9 = *param_1 + (long)pBVar9 * 8;
  }
  else {
    *(undefined8 *)pBVar7 = *(undefined8 *)pBVar9;
  }
  *(Bone3D **)pBVar9 = pBVar7;
LAB_00d0a574:
  param_1[3] = param_1[3] + 1;
  return pBVar7;
}

