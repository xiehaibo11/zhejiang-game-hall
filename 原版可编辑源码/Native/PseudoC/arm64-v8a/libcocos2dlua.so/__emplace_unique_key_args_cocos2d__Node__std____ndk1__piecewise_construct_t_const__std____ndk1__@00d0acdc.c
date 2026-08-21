
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::Node*,
   cocos2d::Animate3D*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*, cocos2d::Animate3D*>,
   std::__ndk1::__unordered_map_hasher<cocos2d::Node*,
   std::__ndk1::__hash_value_type<cocos2d::Node*, cocos2d::Animate3D*>,
   std::__ndk1::hash<cocos2d::Node*>, true>, std::__ndk1::__unordered_map_equal<cocos2d::Node*,
   std::__ndk1::__hash_value_type<cocos2d::Node*, cocos2d::Animate3D*>,
   std::__ndk1::equal_to<cocos2d::Node*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*, cocos2d::Animate3D*> >
   >::__emplace_unique_key_args<cocos2d::Node*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<cocos2d::Node* const&>, std::__ndk1::tuple<> >(cocos2d::Node* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<cocos2d::Node* const&>&&,
   std::__ndk1::tuple<>&&) */

Node * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
       ::
       __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                 (Node **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Node **ppNVar4;
  Node *pNVar5;
  ulong uVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pNVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pNVar9 = (Node *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pNVar8 != (Node *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pNVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pNVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pNVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pNVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pNVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pNVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pNVar8 >> 8)),POPCOUNT((char)pNVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (Node *)((ulong)pNVar9 & (ulong)(pNVar8 + -1));
    }
    else {
      unaff_x24 = pNVar9;
      if (pNVar8 <= pNVar9) {
        uVar1 = 0;
        if (pNVar8 != (Node *)0x0) {
          uVar1 = (ulong)pNVar9 / (ulong)pNVar8;
        }
        unaff_x24 = pNVar9 + -(uVar1 * (long)pNVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pNVar7 = (Node *)**(long **)(*param_1 + (long)unaff_x24 * 8); pNVar7 != (Node *)0x0;
          pNVar7 = *(Node **)pNVar7) {
        pNVar5 = *(Node **)(pNVar7 + 8);
        if (pNVar5 != pNVar9) {
          if (uVar6 < 2) {
            pNVar5 = (Node *)((ulong)pNVar5 & (ulong)(pNVar8 + -1));
          }
          else if (pNVar8 <= pNVar5) {
            uVar1 = 0;
            if (pNVar8 != (Node *)0x0) {
              uVar1 = (ulong)pNVar5 / (ulong)pNVar8;
            }
            if (pNVar5 + -(uVar1 * (long)pNVar8) == unaff_x24) goto LAB_00d0ada0;
            break;
          }
          if (pNVar5 != unaff_x24) break;
        }
LAB_00d0ada0:
        if (*(ulong *)(pNVar7 + 0x10) == uVar2) {
          return pNVar7;
        }
      }
    }
  }
  pNVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pNVar7 = 0;
  *(Node **)(pNVar7 + 8) = pNVar9;
  *(undefined8 *)(pNVar7 + 0x10) = uVar3;
  *(undefined8 *)(pNVar7 + 0x18) = 0;
  if ((pNVar8 == (Node *)0x0) || (*(float *)(param_1 + 4) * (float)pNVar8 < (float)(param_1[3] + 1))
     ) {
    uVar2 = (ulong)(pNVar8 < (Node *)0x3 || ((ulong)pNVar8 & (ulong)(pNVar8 + -1)) != 0) |
            (long)pNVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
            *)param_1,uVar6);
    pNVar8 = param_1[1];
    if (((ulong)pNVar8 & (ulong)(pNVar8 + -1)) == 0) {
      unaff_x24 = (Node *)((ulong)(pNVar8 + -1) & (ulong)pNVar9);
    }
    else {
      unaff_x24 = pNVar9;
      if (pNVar8 <= pNVar9) {
        uVar2 = 0;
        if (pNVar8 != (Node *)0x0) {
          uVar2 = (ulong)pNVar9 / (ulong)pNVar8;
        }
        unaff_x24 = pNVar9 + -(uVar2 * (long)pNVar8);
      }
    }
  }
  pNVar5 = *param_1;
  pNVar9 = *(Node **)(pNVar5 + (long)unaff_x24 * 8);
  if (pNVar9 == (Node *)0x0) {
    ppNVar4 = param_1 + 2;
    *(Node **)pNVar7 = *ppNVar4;
    *ppNVar4 = pNVar7;
    *(Node ***)(pNVar5 + (long)unaff_x24 * 8) = ppNVar4;
    if (*(long *)pNVar7 == 0) goto LAB_00d0aef4;
    pNVar9 = *(Node **)(*(long *)pNVar7 + 8);
    if (((ulong)pNVar8 & (ulong)(pNVar8 + -1)) == 0) {
      pNVar9 = (Node *)((ulong)pNVar9 & (ulong)(pNVar8 + -1));
    }
    else if (pNVar8 <= pNVar9) {
      uVar2 = 0;
      if (pNVar8 != (Node *)0x0) {
        uVar2 = (ulong)pNVar9 / (ulong)pNVar8;
      }
      pNVar9 = pNVar9 + -(uVar2 * (long)pNVar8);
    }
    pNVar9 = *param_1 + (long)pNVar9 * 8;
  }
  else {
    *(undefined8 *)pNVar7 = *(undefined8 *)pNVar9;
  }
  *(Node **)pNVar9 = pNVar7;
LAB_00d0aef4:
  param_1[3] = param_1[3] + 1;
  return pNVar7;
}

