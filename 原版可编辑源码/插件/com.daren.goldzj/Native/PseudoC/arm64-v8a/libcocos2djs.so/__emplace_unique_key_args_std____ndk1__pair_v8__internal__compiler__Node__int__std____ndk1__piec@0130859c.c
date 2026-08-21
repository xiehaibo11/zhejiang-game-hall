
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   int>, v8::internal::compiler::Type>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   int>, v8::internal::compiler::Type>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*, int>,
   std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*, int>,
   v8::internal::compiler::Type>, v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,
   int> >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*, int>,
   std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*, int>,
   v8::internal::compiler::Type>,
   std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*, int> >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   int>, v8::internal::compiler::Type> >
   >::__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*, int>,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*, int>&&>, std::__ndk1::tuple<>
   >(std::__ndk1::pair<v8::internal::compiler::Node*, int> const&,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*, int>&&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
       ::
       __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                 (pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this;
  long *plVar4;
  pair *ppVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x25;
  undefined2 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = v8::base::hash_value(*(uint *)(param_2 + 8));
  uVar2 = v8::base::hash_combine(0,uVar2);
  uVar3 = v8::base::hash_value(*(ulong *)param_2);
  uVar2 = v8::base::hash_combine(uVar2,uVar3);
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar8 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar8 = plVar6[1];
        if (uVar8 != uVar2) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            if (uVar8 - uVar1 * uVar3 == unaff_x25) goto LAB_01308664;
            break;
          }
          if (uVar8 != unaff_x25) break;
        }
LAB_01308664:
        if ((plVar6[2] == *(long *)param_2) && ((int)plVar6[3] == *(int *)(param_2 + 8))) {
          return plVar6;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  this = *(Zone **)(param_1 + 0x20);
  plVar6 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar6) < 0x28) {
    plVar6 = (long *)v8::internal::Zone::NewExpand(this,0x28);
  }
  else {
    *(long **)(this + 0x10) = plVar6 + 5;
  }
  lVar12 = (*(long **)param_4)[1];
  lVar11 = **(long **)param_4;
  plVar6[4] = 0;
  *plVar6 = 0;
  plVar6[1] = uVar2;
  plVar6[3] = lVar12;
  plVar6[2] = lVar11;
  if ((uVar3 == 0) ||
     (*(float *)(param_1 + 0x30) * (float)uVar3 < (float)(*(long *)(param_1 + 0x28) + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar7 = (ulong)((float)(*(long *)(param_1 + 0x28) + 1) / *(float *)(param_1 + 0x30));
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
            *)param_1,uVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar7 * uVar3;
      }
    }
  }
  plVar4 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    ppVar5 = param_1 + 0x18;
    *plVar6 = *(long *)ppVar5;
    *(long **)ppVar5 = plVar6;
    *(pair **)(*(long *)param_1 + unaff_x25 * 8) = ppVar5;
    if (*plVar6 != 0) {
      uVar2 = *(ulong *)(*plVar6 + 8);
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar2 = uVar2 & uVar3 - 1;
      }
      else if (uVar3 <= uVar2) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - uVar7 * uVar3;
      }
      *(long **)(*(long *)param_1 + uVar2 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return plVar6;
}

