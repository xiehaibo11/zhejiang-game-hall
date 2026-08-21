
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<long,
   std::__ndk1::vector<v8::sampler::Sampler*, std::__ndk1::allocator<v8::sampler::Sampler*> > >,
   void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<long,
   std::__ndk1::vector<v8::sampler::Sampler*, std::__ndk1::allocator<v8::sampler::Sampler*> > >,
   std::__ndk1::__unordered_map_hasher<long, std::__ndk1::__hash_value_type<long,
   std::__ndk1::vector<v8::sampler::Sampler*, std::__ndk1::allocator<v8::sampler::Sampler*> > >,
   std::__ndk1::hash<long>, true>, std::__ndk1::__unordered_map_equal<long,
   std::__ndk1::__hash_value_type<long, std::__ndk1::vector<v8::sampler::Sampler*,
   std::__ndk1::allocator<v8::sampler::Sampler*> > >, std::__ndk1::equal_to<long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,
   std::__ndk1::vector<v8::sampler::Sampler*, std::__ndk1::allocator<v8::sampler::Sampler*> > > >
   >::__emplace_unique_key_args<long, long&, std::__ndk1::vector<v8::sampler::Sampler*,
   std::__ndk1::allocator<v8::sampler::Sampler*> > >(long const&, long&,
   std::__ndk1::vector<v8::sampler::Sampler*, std::__ndk1::allocator<v8::sampler::Sampler*> >&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
::
__emplace_unique_key_args<long,long&,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>
          (__hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
           *this,long *param_1,long *param_2,vector *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
  *p_Var4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(ulong *)(this + 8);
  uVar9 = *param_1;
  if (uVar8 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar9) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            if (uVar6 - uVar1 * uVar8 == unaff_x25) goto LAB_0147c368;
            break;
          }
          if (uVar6 != unaff_x25) break;
        }
LAB_0147c368:
        if (plVar7[2] == uVar9) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x30);
  lVar2 = *param_2;
  plVar7[1] = uVar9;
  plVar7[2] = lVar2;
  lVar2 = *(long *)param_3;
  plVar7[4] = *(long *)(param_3 + 8);
  plVar7[3] = lVar2;
  plVar7[5] = *(long *)(param_3 + 0x10);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *plVar7 = 0;
  if ((uVar8 == 0) || (*(float *)(this + 0x20) * (float)uVar8 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    rehash(this,uVar5);
    uVar8 = *(ulong *)(this + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar5 * uVar8;
      }
    }
  }
  lVar2 = *(long *)this;
  plVar3 = *(long **)(lVar2 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar7 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
      **)(lVar2 + unaff_x25 * 8) = p_Var4;
    if (*plVar7 == 0) goto LAB_0147c4d0;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar5 * uVar8;
    }
    plVar3 = (long *)(*(long *)this + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar3;
  }
  *plVar3 = (long)plVar7;
LAB_0147c4d0:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar7;
}

