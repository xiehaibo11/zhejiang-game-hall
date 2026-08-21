
/* v8::internal::compiler::SerializerForBackgroundCompilation::IncorporateJumpTargetEnvironment(int)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::IncorporateJumpTargetEnvironment
          (SerializerForBackgroundCompilation *this,int param_1)

{
  Environment *this_00;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  Zone *pZVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  Environment *pEVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = base::hash_value(param_1);
  uVar5 = *(ulong *)(this + 0x38);
  if (uVar5 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar5 <= uVar3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar3 / uVar5;
        }
        uVar7 = uVar3 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x30) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar3) {
          if ((int)plVar8[2] == param_1) {
            pZVar4 = *(Zone **)(this + 0x20);
            this_00 = *(Environment **)(this + 0x28);
            pEVar10 = (Environment *)plVar8[3];
            if (pZVar4 == (Zone *)0x0) {
              pZVar4 = (Zone *)ZoneStats::NewEmptyZone
                                         (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
              *(Zone **)(this + 0x20) = pZVar4;
            }
            Environment::Merge(this_00,pEVar10,pZVar4);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
            ::remove(auStack_60,this + 0x30,plVar8);
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

