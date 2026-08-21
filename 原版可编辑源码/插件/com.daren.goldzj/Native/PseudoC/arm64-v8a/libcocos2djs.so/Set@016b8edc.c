
/* v8::internal::compiler::SparseSidetable<v8::internal::compiler::VariableTracker::State>::Set(v8::internal::compiler::Node
   const*, v8::internal::compiler::VariableTracker::State) */

void __thiscall
v8::internal::compiler::SparseSidetable<v8::internal::compiler::VariableTracker::State>::Set
          (SparseSidetable<v8::internal::compiler::VariableTracker::State> *this,long param_1,
          PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
          *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  long lVar11;
  long lVar12;
  uint local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
  uVar3 = base::hash_value(uVar1);
  uVar4 = *(ulong *)(this + 0x20);
  if (uVar4 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar4 >> 
                                                  8)),POPCOUNT((char)uVar4))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar4 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        uVar5 = uVar3 - uVar5 * uVar4;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x18) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(uint *)(plVar6 + 2) == uVar1) {
            lVar12 = *(long *)(param_3 + 8);
            lVar11 = *(long *)param_3;
            plVar6[5] = *(long *)(param_3 + 0x10);
            plVar6[4] = lVar12;
            plVar6[3] = lVar11;
            return;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar4 - 1;
          }
          else if (uVar4 <= uVar7) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar7 / uVar4;
            }
            uVar7 = uVar7 - uVar2 * uVar4;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  uVar3 = PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
          ::operator==(param_3,(PersistentMap *)this);
  if ((uVar3 & 1) == 0) {
    local_60[0] = *(uint *)(param_1 + 0x14) & 0xffffff;
    local_48 = *(undefined8 *)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 8);
    local_58 = *(undefined8 *)param_3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
    ::
    __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,v8::internal::compiler::VariableTracker::State>>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
                *)(this + 0x18),local_60,(pair *)local_60);
  }
  return;
}

