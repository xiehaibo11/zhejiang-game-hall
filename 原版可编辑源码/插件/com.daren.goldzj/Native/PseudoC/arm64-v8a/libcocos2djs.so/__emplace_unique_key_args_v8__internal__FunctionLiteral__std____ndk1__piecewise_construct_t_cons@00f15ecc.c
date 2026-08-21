
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,
   v8::internal::FunctionLiteral*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,
   v8::internal::FunctionLiteral*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::FunctionLiteral*,
   std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*, v8::internal::FunctionLiteral*>,
   std::__ndk1::hash<v8::internal::FunctionLiteral*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::FunctionLiteral*,
   std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*, v8::internal::FunctionLiteral*>,
   std::__ndk1::equal_to<v8::internal::FunctionLiteral*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,
   v8::internal::FunctionLiteral*> > >::__emplace_unique_key_args<v8::internal::FunctionLiteral*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::FunctionLiteral*
   const&>, std::__ndk1::tuple<> >(v8::internal::FunctionLiteral* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::FunctionLiteral*
   const&>&&, std::__ndk1::tuple<>&&) */

FunctionLiteral *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::__unordered_map_hasher<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::hash<v8::internal::FunctionLiteral*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::equal_to<v8::internal::FunctionLiteral*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>>>
::
__emplace_unique_key_args<v8::internal::FunctionLiteral*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::FunctionLiteral*const&>,std::__ndk1::tuple<>>
          (FunctionLiteral **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  FunctionLiteral **ppFVar4;
  FunctionLiteral *pFVar5;
  ulong uVar6;
  FunctionLiteral *pFVar7;
  FunctionLiteral *pFVar8;
  FunctionLiteral *pFVar9;
  FunctionLiteral *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pFVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pFVar9 = (FunctionLiteral *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pFVar8 != (FunctionLiteral *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pFVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pFVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pFVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pFVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pFVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pFVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pFVar8 >> 8)),POPCOUNT((char)pFVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (FunctionLiteral *)((ulong)pFVar9 & (ulong)(pFVar8 + -1));
    }
    else {
      unaff_x24 = pFVar9;
      if (pFVar8 <= pFVar9) {
        uVar1 = 0;
        if (pFVar8 != (FunctionLiteral *)0x0) {
          uVar1 = (ulong)pFVar9 / (ulong)pFVar8;
        }
        unaff_x24 = pFVar9 + -(uVar1 * (long)pFVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pFVar7 = (FunctionLiteral *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pFVar7 != (FunctionLiteral *)0x0; pFVar7 = *(FunctionLiteral **)pFVar7) {
        pFVar5 = *(FunctionLiteral **)(pFVar7 + 8);
        if (pFVar5 != pFVar9) {
          if (uVar6 < 2) {
            pFVar5 = (FunctionLiteral *)((ulong)pFVar5 & (ulong)(pFVar8 + -1));
          }
          else if (pFVar8 <= pFVar5) {
            uVar1 = 0;
            if (pFVar8 != (FunctionLiteral *)0x0) {
              uVar1 = (ulong)pFVar5 / (ulong)pFVar8;
            }
            if (pFVar5 + -(uVar1 * (long)pFVar8) == unaff_x24) goto LAB_00f15f90;
            break;
          }
          if (pFVar5 != unaff_x24) break;
        }
LAB_00f15f90:
        if (*(ulong *)(pFVar7 + 0x10) == uVar2) {
          return pFVar7;
        }
      }
    }
  }
  pFVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pFVar7 = 0;
  *(FunctionLiteral **)(pFVar7 + 8) = pFVar9;
  *(undefined8 *)(pFVar7 + 0x10) = uVar3;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  if ((pFVar8 == (FunctionLiteral *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pFVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pFVar8 < (FunctionLiteral *)0x3 || ((ulong)pFVar8 & (ulong)(pFVar8 + -1)) != 0)
            | (long)pFVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::__unordered_map_hasher<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::hash<v8::internal::FunctionLiteral*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::equal_to<v8::internal::FunctionLiteral*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>>>
            *)param_1,uVar6);
    pFVar8 = param_1[1];
    if (((ulong)pFVar8 & (ulong)(pFVar8 + -1)) == 0) {
      unaff_x24 = (FunctionLiteral *)((ulong)(pFVar8 + -1) & (ulong)pFVar9);
    }
    else {
      unaff_x24 = pFVar9;
      if (pFVar8 <= pFVar9) {
        uVar2 = 0;
        if (pFVar8 != (FunctionLiteral *)0x0) {
          uVar2 = (ulong)pFVar9 / (ulong)pFVar8;
        }
        unaff_x24 = pFVar9 + -(uVar2 * (long)pFVar8);
      }
    }
  }
  pFVar5 = *param_1;
  pFVar9 = *(FunctionLiteral **)(pFVar5 + (long)unaff_x24 * 8);
  if (pFVar9 == (FunctionLiteral *)0x0) {
    ppFVar4 = param_1 + 2;
    *(FunctionLiteral **)pFVar7 = *ppFVar4;
    *ppFVar4 = pFVar7;
    *(FunctionLiteral ***)(pFVar5 + (long)unaff_x24 * 8) = ppFVar4;
    if (*(long *)pFVar7 == 0) goto LAB_00f160e4;
    pFVar9 = *(FunctionLiteral **)(*(long *)pFVar7 + 8);
    if (((ulong)pFVar8 & (ulong)(pFVar8 + -1)) == 0) {
      pFVar9 = (FunctionLiteral *)((ulong)pFVar9 & (ulong)(pFVar8 + -1));
    }
    else if (pFVar8 <= pFVar9) {
      uVar2 = 0;
      if (pFVar8 != (FunctionLiteral *)0x0) {
        uVar2 = (ulong)pFVar9 / (ulong)pFVar8;
      }
      pFVar9 = pFVar9 + -(uVar2 * (long)pFVar8);
    }
    pFVar9 = *param_1 + (long)pFVar9 * 8;
  }
  else {
    *(undefined8 *)pFVar7 = *(undefined8 *)pFVar9;
  }
  *(FunctionLiteral **)pFVar9 = pFVar7;
LAB_00f160e4:
  param_1[3] = param_1[3] + 1;
  return pFVar7;
}

