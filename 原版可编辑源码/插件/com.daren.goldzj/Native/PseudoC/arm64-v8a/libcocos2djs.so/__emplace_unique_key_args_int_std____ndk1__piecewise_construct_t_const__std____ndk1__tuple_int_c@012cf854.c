
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>, v8::base::hash<int>,
   true>, std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,
   std::__ndk1::equal_to<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment*> >
   >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
       ::
       __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                 (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar3 = v8::base::hash_value(*(uint *)param_2);
  uVar8 = *(ulong *)(param_1 + 2);
  if (uVar8 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar8 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar8 <= uVar3) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar3 / uVar8;
        }
        unaff_x25 = uVar3 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar3) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            if (uVar6 - uVar2 * uVar8 == unaff_x25) goto LAB_012cf8f8;
            break;
          }
          if (uVar6 != unaff_x25) break;
        }
LAB_012cf8f8:
        if (*(int *)(plVar7 + 2) == *(int *)param_2) {
          return plVar7;
        }
      }
    }
  }
  this = *(Zone **)(param_1 + 8);
  plVar7 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar7) < 0x20) {
    plVar7 = (long *)v8::internal::Zone::NewExpand(this,0x20);
  }
  else {
    *(long **)(this + 0x10) = plVar7 + 4;
  }
  uVar1 = **(undefined4 **)param_4;
  plVar7[3] = 0;
  *plVar7 = 0;
  plVar7[1] = uVar3;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  if ((uVar8 == 0) || ((float)param_1[0xc] * (float)uVar8 < (float)(*(long *)(param_1 + 10) + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(*(long *)(param_1 + 10) + 1) / (float)param_1[0xc]);
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
            *)param_1,uVar5);
    uVar8 = *(ulong *)(param_1 + 2);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar8 <= uVar3) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar3 / uVar8;
        }
        unaff_x25 = uVar3 - uVar5 * uVar8;
      }
    }
  }
  plVar4 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_1 + 6);
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(*(long *)param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar7 != 0) {
      uVar3 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar3 = uVar3 & uVar8 - 1;
      }
      else if (uVar8 <= uVar3) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar3 / uVar8;
        }
        uVar3 = uVar3 - uVar5 * uVar8;
      }
      *(long **)(*(long *)param_1 + uVar3 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
  }
  *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + 1;
  return plVar7;
}

