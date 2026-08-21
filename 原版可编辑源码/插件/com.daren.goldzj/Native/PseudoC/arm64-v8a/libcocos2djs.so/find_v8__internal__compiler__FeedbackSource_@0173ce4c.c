
/* std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, void*>*>
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
   >::find<v8::internal::compiler::FeedbackSource>(v8::internal::compiler::FeedbackSource const&)
   const */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
::find<v8::internal::compiler::FeedbackSource>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
           *this,FeedbackSource *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)param_1;
  uVar2 = v8::base::hash_combine(0,(long)*(int *)(param_1 + 8));
  uVar6 = v8::base::hash_value(uVar6);
  uVar2 = v8::base::hash_combine(uVar2,uVar6);
  uVar6 = *(ulong *)(this + 8);
  if (uVar6 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar6 >> 
                                                  8)),POPCOUNT((char)uVar6))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = uVar6 - 1 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (uVar6 <= uVar2) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar2 / uVar6;
        }
        uVar4 = uVar2 - uVar4 * uVar6;
      }
    }
    plVar3 = *(long **)(*(long *)this + uVar4 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        uVar5 = plVar3[1];
        if (uVar2 == uVar5) {
          if ((plVar3[2] == *(long *)param_1) && ((int)plVar3[3] == *(int *)(param_1 + 8))) {
            return plVar3;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar5 = uVar5 & uVar6 - 1;
          }
          else if (uVar6 <= uVar5) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar5 / uVar6;
            }
            if (uVar5 - uVar1 * uVar6 != uVar4) {
              return (long *)0x0;
            }
            goto LAB_0173cef4;
          }
          if (uVar5 != uVar4) {
            return (long *)0x0;
          }
        }
LAB_0173cef4:
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

