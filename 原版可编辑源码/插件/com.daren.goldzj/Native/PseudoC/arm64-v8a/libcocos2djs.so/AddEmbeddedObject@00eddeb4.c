
/* v8::internal::AssemblerBase::AddEmbeddedObject(v8::internal::Handle<v8::internal::HeapObject>) */

long __thiscall v8::internal::AssemblerBase::AddEmbeddedObject(AssemblerBase *this,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong local_50 [2];
  undefined1 *local_28;
  
  puVar4 = *(ulong **)(this + 0x68);
  lVar10 = (long)puVar4 - *(long *)(this + 0x60) >> 3;
  local_50[0] = param_2;
  if (param_2 != 0) {
    uVar2 = base::hash_value(param_2);
    uVar5 = *(ulong *)(this + 0x80);
    if (uVar5 != 0) {
      uVar12 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar5 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar5
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar5
                                                                                        ))))))));
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar6 < 2) {
        uVar7 = uVar5 - 1 & uVar2;
      }
      else {
        uVar7 = uVar2;
        if (uVar5 <= uVar2) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar2 / uVar5;
          }
          uVar7 = uVar2 - uVar7 * uVar5;
        }
      }
      plVar8 = *(long **)(*(long *)(this + 0x78) + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar2) {
            if (plVar8[2] == param_2) {
              return plVar8[3];
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
    local_28 = (undefined1 *)local_50;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::equal_to,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>>>
            ::
            __emplace_unique_key_args<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Handle<v8::internal::HeapObject>const&>,std::__ndk1::tuple<>>
                      (this + 0x78,(piecewise_construct_t *)local_50,(tuple *)&DAT_019a3c4a,
                       (tuple *)&local_28);
    *(long *)(lVar3 + 0x18) = lVar10;
    puVar4 = *(ulong **)(this + 0x68);
  }
  if (puVar4 == *(ulong **)(this + 0x70)) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::HeapObject>const&>
              ((vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
                *)(this + 0x60),(Handle *)local_50);
  }
  else {
    *puVar4 = local_50[0];
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
  }
  return lVar10;
}

