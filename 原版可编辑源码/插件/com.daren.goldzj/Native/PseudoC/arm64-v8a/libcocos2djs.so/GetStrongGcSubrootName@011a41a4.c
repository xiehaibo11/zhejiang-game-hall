
/* v8::internal::V8HeapExplorer::GetStrongGcSubrootName(v8::internal::Object) */

long __thiscall
v8::internal::V8HeapExplorer::GetStrongGcSubrootName(V8HeapExplorer *this,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  char *local_48;
  
  if (*(long *)(this + 0x78) == 0) {
    lVar2 = *(long *)(this + 8);
    lVar9 = 0;
    do {
      local_48 = *(char **)((long)&RootsTable::root_names_ + lVar9);
      local_50 = *(undefined8 *)(lVar2 + -0x87d0 + lVar9);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::Object,std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Object,std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,std::__ndk1::equal_to<v8::internal::Object>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>>>
      ::__emplace_unique_key_args<v8::internal::Object,v8::internal::Object,char_const*&>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::Object,std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Object,std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>,std::__ndk1::equal_to<v8::internal::Object>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Object,char_const*>>>
                  *)(this + 0x60),(Object *)&local_50,(Object *)&local_50,&local_48);
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0xf50);
    if (*(long *)(this + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!strong_gc_subroot_names_.empty()");
    }
  }
  uVar3 = *(ulong *)(this + 0x68);
  if (uVar3 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar5 = (ulong)param_2;
    if (uVar4 < 2) {
      uVar6 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x60) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            return plVar7[3];
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}

