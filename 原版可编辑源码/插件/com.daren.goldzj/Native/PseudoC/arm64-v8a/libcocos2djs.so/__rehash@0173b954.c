
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,
   std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, v8::internal::compiler::FeedbackSource::Hash,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,
   std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*>, v8::internal::compiler::FeedbackSource::Equal,
   true>, 
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,
   v8::internal::compiler::ProcessedFeedback const*> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Zone *this_00;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x10);
    uVar3 = param_1 * 8;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if (uVar3 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(this_00 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + param_1;
    }
    else {
      puVar2 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar3);
    }
    uVar3 = param_1 - 1;
    *(undefined8 **)this = puVar2;
    *(ulong *)(this + 8) = param_1;
    *puVar2 = 0;
    if (uVar3 != 0) {
      uVar4 = 1;
      do {
        *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_1 != uVar4);
    }
    plVar5 = *(long **)(this + 0x18);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar11 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
      if ((uVar12 & 0xffffffff) < 2) {
        uVar4 = uVar4 & uVar3;
      }
      else if (param_1 <= uVar4) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar7 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x18;
      plVar6 = (long *)*plVar5;
joined_r0x0173ba08:
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if ((uVar12 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3;
LAB_0173ba48:
            if (uVar7 == uVar4) goto LAB_0173ba10;
LAB_0173ba50:
            plVar9 = plVar6;
            if (*(long *)(*(long *)this + uVar7 * 8) == 0) goto LAB_0173babc;
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if ((plVar9 == (long *)0x0) || (plVar6[2] != plVar9[2])) break;
            } while ((int)plVar6[3] == (int)plVar9[3]);
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(*(long *)this + uVar7 * 8);
            **(undefined8 **)(*(long *)this + uVar7 * 8) = plVar6;
            plVar9 = (long *)*plVar5;
          }
          else {
            if (uVar7 < param_1) goto LAB_0173ba48;
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar7 / param_1;
            }
            uVar7 = uVar7 - uVar1 * param_1;
            if (uVar7 != uVar4) goto LAB_0173ba50;
LAB_0173ba10:
            plVar9 = (long *)*plVar6;
            plVar5 = plVar6;
          }
          plVar6 = plVar9;
          if (plVar6 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_0173babc:
  *(long **)(*(long *)this + uVar7 * 8) = plVar5;
  plVar5 = plVar6;
  plVar6 = (long *)*plVar6;
  uVar4 = uVar7;
  goto joined_r0x0173ba08;
}

