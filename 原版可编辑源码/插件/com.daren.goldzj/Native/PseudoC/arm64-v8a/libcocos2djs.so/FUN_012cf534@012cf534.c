
void FUN_012cf534(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  SerializerForBackgroundCompilation *this;
  undefined2 uVar9;
  undefined8 uVar10;
  char local_24 [4];
  ulong uVar11;
  
  uVar1 = *param_2;
  this = *(SerializerForBackgroundCompilation **)(param_1 + 8);
  uVar3 = v8::base::hash_value(uVar1);
  uVar5 = *(ulong *)(this + 0x38);
  if (uVar5 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
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
    plVar7 = *(long **)(*(long *)(this + 0x30) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar3) {
          if (*(uint *)(plVar7 + 2) == uVar1) {
            return;
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar5 - 1;
          }
          else if (uVar5 <= uVar8) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar2 * uVar5;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  v8::internal::compiler::SerializerForBackgroundCompilation::ContributeToJumpTargetEnvironment
            (this,uVar1);
  if (((*(JSHeapBroker **)this)[0x74] != (JSHeapBroker)0x0) &&
     (v8::internal::FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar4 = (basic_ostream *)v8::internal::compiler::JSHeapBroker::Trace(*(JSHeapBroker **)this);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Handler offset for current pos: ",0x20);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar1);
    local_24[0] = '\n';
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,local_24,1);
  }
  return;
}

