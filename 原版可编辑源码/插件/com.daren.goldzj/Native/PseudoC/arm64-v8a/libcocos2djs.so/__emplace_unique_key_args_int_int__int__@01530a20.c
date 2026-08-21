
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   int>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, int>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, int>,
   v8::base::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, int>, std::__ndk1::equal_to<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int, int> >
   >::__emplace_unique_key_args<int, int&, int&>(int const&, int&, int&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
::__emplace_unique_key_args<int,int&,int&>
          (__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
           *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this_00;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x26;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar3 = v8::base::hash_value(*param_1);
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
      unaff_x26 = uVar9 - 1 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar9 <= uVar3) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar3 / uVar9;
        }
        unaff_x26 = uVar3 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar3) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            if (uVar7 - uVar2 * uVar9 == unaff_x26) goto LAB_01530ac8;
            break;
          }
          if (uVar7 != unaff_x26) break;
        }
LAB_01530ac8:
        if (*(int *)(plVar8 + 2) == *param_1) {
          return plVar8;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar8 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar8) < 0x18) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this_00,0x18);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar8 + 3;
  }
  *(int *)(plVar8 + 2) = *param_2;
  iVar1 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar3;
  *(int *)((long)plVar8 + 0x14) = iVar1;
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
      unaff_x26 = uVar9 - 1 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar9 <= uVar3) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar3 / uVar9;
        }
        unaff_x26 = uVar3 - uVar6 * uVar9;
      }
    }
  }
  plVar4 = *(long **)(*(long *)this + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x18;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
      **)(*(long *)this + unaff_x26 * 8) = p_Var5;
    if (*plVar8 != 0) {
      uVar3 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar3 = uVar3 & uVar9 - 1;
      }
      else if (uVar9 <= uVar3) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar3 / uVar9;
        }
        uVar3 = uVar3 - uVar6 * uVar9;
      }
      *(long **)(*(long *)this + uVar3 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar8;
}

