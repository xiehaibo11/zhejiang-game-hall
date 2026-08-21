
/* v8::internal::compiler::JSHeapBroker::GetBytecodeAnalysis(v8::internal::Handle<v8::internal::BytecodeArray>,
   v8::internal::BailoutId, bool, v8::internal::compiler::SerializationPolicy) */

BytecodeAnalysis * __thiscall
v8::internal::compiler::JSHeapBroker::GetBytecodeAnalysis
          (JSHeapBroker *this,undefined1 *param_2,int param_3,byte param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  Zone *this_00;
  BytecodeAnalysis *pBVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong local_60 [2];
  undefined1 *local_38;
  ulong uVar12;
  
  local_38 = param_2;
  lVar2 = RefsMap::Lookup(*(RefsMap **)(this + 0x30),(ulong *)&local_38);
  if (lVar2 == 0) {
    local_60[0] = 0;
  }
  else {
    uVar9 = *(ulong *)(lVar2 + 8);
    local_60[0] = uVar9;
    if (uVar9 != 0) {
      uVar3 = base::hash_value(uVar9);
      uVar5 = *(ulong *)(this + 0x1c0);
      if (uVar5 != 0) {
        uVar11 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar5 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar5 >> 8)),POPCOUNT((char)uVar5))))))));
        uVar10 = NEON_uaddlv(uVar11,1);
        uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
        if ((uVar12 & 0xffffffff) < 2) {
          uVar6 = uVar5 - 1 & uVar3;
        }
        else {
          uVar6 = uVar3;
          if (uVar5 <= uVar3) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar3 / uVar5;
            }
            uVar6 = uVar3 - uVar6 * uVar5;
          }
        }
        plVar7 = *(long **)(*(ObjectData **)(this + 0x1b8) + uVar6 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar3) {
              if (plVar7[2] == uVar9) {
                pBVar4 = (BytecodeAnalysis *)plVar7[3];
                if ((param_3 != -1) && (*(int *)(pBVar4 + 0x10) != param_3)) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.",
                           "osr_bailout_id != it->second->osr_bailout_id() implies osr_bailout_id.IsNone()"
                          );
                }
                if (((pBVar4[0x14] == (BytecodeAnalysis)0x0 ^ param_4) & 1) != 0) {
                  return pBVar4;
                }
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","analyze_liveness == it->second->liveness_analyzed()");
              }
            }
            else {
              if ((uVar12 & 0xffffffff) < 2) {
                uVar8 = uVar8 & uVar5 - 1;
              }
              else if (uVar5 <= uVar8) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar8 / uVar5;
                }
                uVar8 = uVar8 - uVar1 * uVar5;
              }
              if (uVar8 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      if (param_5 == 1) {
        this_00 = *(Zone **)(this + 0x10);
        pBVar4 = *(BytecodeAnalysis **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)pBVar4) < 0x108) {
          pBVar4 = (BytecodeAnalysis *)Zone::NewExpand(this_00,0x108);
        }
        else {
          *(BytecodeAnalysis **)(this_00 + 0x10) = pBVar4 + 0x108;
        }
        BytecodeAnalysis::BytecodeAnalysis
                  (pBVar4,param_2,*(undefined8 *)(this + 0x10),param_3,param_4 & 1);
        local_38 = (undefined1 *)local_60;
        lVar2 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,v8::base::hash<v8::internal::compiler::ObjectData*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>>>
                ::
                __emplace_unique_key_args<v8::internal::compiler::ObjectData*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::ObjectData*const&>,std::__ndk1::tuple<>>
                          ((ObjectData **)(this + 0x1b8),(piecewise_construct_t *)local_60,
                           (tuple *)&DAT_01a5e7ac,(tuple *)&local_38);
        *(BytecodeAnalysis **)(lVar2 + 0x18) = pBVar4;
        return pBVar4;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","policy == SerializationPolicy::kSerializeIfNeeded");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(bytecode_array_data) != nullptr");
}

