
/* v8::internal::FieldStatsCollector::GetInobjectFieldStats(v8::internal::Map) */

ulong __thiscall
v8::internal::FieldStatsCollector::GetInobjectFieldStats(FieldStatsCollector *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  undefined2 uVar18;
  ulong local_40;
  ulong uStack_38;
  
  uVar10 = *(ulong *)(this + 0x10);
  if (uVar10 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar10 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar10))))
                                               ))));
    uVar18 = NEON_uaddlv(uVar8,1);
    uVar11 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar18) & 0xffffffff;
    uVar13 = param_2 & 0xffffffff;
    if (uVar11 < 2) {
      uVar14 = (int)uVar10 - 1 & uVar13;
    }
    else {
      uVar14 = uVar13;
      if (uVar10 <= uVar13) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = uVar13 / uVar10;
        }
        uVar14 = uVar13 - uVar14 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(this + 8) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      do {
        uVar16 = plVar15[1];
        if (uVar16 == uVar13) {
          if ((int)plVar15[2] == (int)param_2) {
            return (ulong)*(uint *)(plVar15 + 3);
          }
        }
        else {
          if (uVar11 < 2) {
            uVar16 = uVar16 & uVar10 - 1;
          }
          else if (uVar10 <= uVar16) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar16 / uVar10;
            }
            uVar16 = uVar16 - uVar6 * uVar10;
          }
          if (uVar16 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  bVar4 = *(byte *)(param_2 + 3);
  uVar9 = (uint)bVar4;
  if (bVar4 != 0) {
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar7 = 0xc;
    }
    else {
      iVar7 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    uVar9 = (((int)((uint)bVar4 * 4 - iVar7) >> 2) - (uint)*(byte *)(param_2 + 3)) +
            (uint)*(byte *)(param_2 + 4);
    if ((int)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    uVar9 = uVar9 >> 1 & 0x3ff;
  }
  if ((*(uint *)(param_2 + 0xb) >> 0x15 & 1) == 0) {
    uVar10 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar10 != 0) {
      lVar12 = 0;
      puVar1 = (uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17)) + 0x13);
      uVar3 = *puVar1;
      do {
        if ((uVar3 >> 2 & 1) == 0) {
          uVar2 = *(int *)((lVar12 + 0x13U | param_2 & 0xffffffff00000000) +
                          (ulong)*(uint *)(param_2 + 0x17)) >> 1;
          uVar5 = uVar2 >> 0x13 & 0x3ff;
          iVar7 = (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(param_2 + 4);
          if ((int)uVar5 < iVar7) {
            uVar17 = 0;
          }
          else {
            uVar17 = (uVar5 - iVar7) * 4 + 8;
          }
          uVar2 = uVar2 >> 6 & 7;
          uVar11 = local_40 >> 8;
          local_40 = CONCAT71((int7)uVar11,(char)uVar2);
          if (4 < uVar2) {
            uVar8 = Representation::Mnemonic((Representation *)&local_40);
            PrintF("%s\n",uVar8);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          if (((uVar17 >> 0xd & 1) == 0) && (iVar7 <= (int)uVar5)) break;
          if ((uVar3 & 0x380) == 0x80) {
            uVar9 = uVar9 & 0xfff003ff | (uVar9 + 0x400 >> 10 & 0x3ff) << 10;
          }
        }
        lVar12 = lVar12 + 0xc;
        if (uVar10 * 0xc - lVar12 == 0) break;
        uVar3 = *(uint *)((long)puVar1 + lVar12);
      } while( true );
    }
  }
  local_40 = param_2;
  uStack_38 = (ulong)uVar9;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
  ::
  __emplace_unique_key_args<v8::internal::Map,std::__ndk1::pair<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
              *)(this + 8),(Map *)&local_40,(pair *)&local_40);
  return (ulong)uVar9;
}

