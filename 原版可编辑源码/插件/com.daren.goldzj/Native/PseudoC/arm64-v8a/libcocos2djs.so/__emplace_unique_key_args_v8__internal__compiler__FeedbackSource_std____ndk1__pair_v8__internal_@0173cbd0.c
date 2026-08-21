
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,
   std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, v8::internal::compiler::FeedbackSource::Hash,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,
   std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, v8::internal::compiler::FeedbackSource::Equal,
   true>, 
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*> >
   >::__emplace_unique_key_args<v8::internal::compiler::FeedbackSource,
   std::__ndk1::pair<v8::internal::compiler::FeedbackSource const,
   v8::internal::compiler::ProcessedFeedback const*> >(v8::internal::compiler::FeedbackSource
   const&, std::__ndk1::pair<v8::internal::compiler::FeedbackSource const,
   v8::internal::compiler::ProcessedFeedback const*>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
::
__emplace_unique_key_args<v8::internal::compiler::FeedbackSource,std::__ndk1::pair<v8::internal::compiler::FeedbackSource_const,v8::internal::compiler::ProcessedFeedback_const*>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
           *this,FeedbackSource *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  Zone *this_00;
  long lVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
  *p_Var5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = *(ulong *)param_1;
  uVar2 = v8::base::hash_combine(0,(long)*(int *)(param_1 + 8));
  uVar9 = v8::base::hash_value(uVar9);
  uVar2 = v8::base::hash_combine(uVar2,uVar9);
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
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*(long *)this + unaff_x25 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar8 = plVar6[1];
        if (uVar8 != uVar2) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar9 - 1;
          }
          else if (uVar9 <= uVar8) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar8 / uVar9;
            }
            if (uVar8 - uVar1 * uVar9 == unaff_x25) goto LAB_0173ccc4;
            break;
          }
          if (uVar8 != unaff_x25) break;
        }
LAB_0173ccc4:
        if ((plVar6[2] == *(long *)param_1) && ((int)plVar6[3] == *(int *)(param_1 + 8))) {
          return plVar6;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar6 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar6) < 0x28) {
    plVar6 = (long *)v8::internal::Zone::NewExpand(this_00,0x28);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar6 + 5;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 8);
  lVar12 = *(long *)param_2;
  *plVar6 = 0;
  plVar6[1] = uVar2;
  plVar6[4] = lVar3;
  plVar6[3] = lVar13;
  plVar6[2] = lVar12;
  if ((uVar9 == 0) || (*(float *)(this + 0x30) * (float)uVar9 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    rehash(this,uVar7);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
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
  }
  plVar4 = *(long **)(*(long *)this + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x18;
    *plVar6 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar6;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
      **)(*(long *)this + unaff_x25 * 8) = p_Var5;
    if (*plVar6 != 0) {
      uVar2 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar2 = uVar2 & uVar9 - 1;
      }
      else if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        uVar2 = uVar2 - uVar7 * uVar9;
      }
      *(long **)(*(long *)this + uVar2 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar6;
}

