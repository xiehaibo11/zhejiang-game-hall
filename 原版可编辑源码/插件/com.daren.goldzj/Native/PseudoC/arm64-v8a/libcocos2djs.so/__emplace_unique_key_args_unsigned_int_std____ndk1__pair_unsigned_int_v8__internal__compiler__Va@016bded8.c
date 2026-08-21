
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, v8::internal::compiler::VariableTracker::State>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::compiler::VariableTracker::State>, std::__ndk1::__unordered_map_hasher<unsigned
   int, std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::compiler::VariableTracker::State>, v8::base::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::compiler::VariableTracker::State>, std::__ndk1::equal_to<unsigned int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::compiler::VariableTracker::State> > >::__emplace_unique_key_args<unsigned int,
   std::__ndk1::pair<unsigned int, v8::internal::compiler::VariableTracker::State> >(unsigned int
   const&, std::__ndk1::pair<unsigned int, v8::internal::compiler::VariableTracker::State>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
::
__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,v8::internal::compiler::VariableTracker::State>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
           *this,uint *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  Zone *this_00;
  long lVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  uVar2 = v8::base::hash_value(*param_1);
  uVar9 = *(ulong *)(this + 8);
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar2) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_016bdf7c;
            break;
          }
          if (uVar7 != unaff_x25) break;
        }
LAB_016bdf7c:
        if (*(uint *)(plVar8 + 2) == *param_1) {
          return plVar8;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar8 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar8) < 0x30) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this_00,0x30);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar8 + 6;
  }
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)param_2;
  lVar3 = *(long *)(param_2 + 0x18);
  lVar13 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 8);
  *plVar8 = 0;
  plVar8[1] = uVar2;
  plVar8[5] = lVar3;
  plVar8[4] = lVar13;
  plVar8[3] = lVar12;
  if ((uVar9 == 0) || (*(float *)(this + 0x30) * (float)uVar9 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    rehash(this,uVar6);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar6 * uVar9;
      }
    }
  }
  plVar4 = *(long **)(*(long *)this + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x18;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
      **)(*(long *)this + unaff_x25 * 8) = p_Var5;
    if (*plVar8 != 0) {
      uVar2 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar2 = uVar2 & uVar9 - 1;
      }
      else if (uVar9 <= uVar2) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar2 / uVar9;
        }
        uVar2 = uVar2 - uVar6 * uVar9;
      }
      *(long **)(*(long *)this + uVar2 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar8;
}

