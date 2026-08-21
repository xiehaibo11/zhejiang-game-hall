
/* v8::internal::compiler::SerializerForBackgroundCompilation::ContributeToJumpTargetEnvironment(int)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ContributeToJumpTargetEnvironment
          (SerializerForBackgroundCompilation *this,int param_1)

{
  undefined8 *puVar1;
  Environment *pEVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *pZVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  Environment *this_00;
  undefined8 *puVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_44 [3];
  int *local_38;
  
  local_44[0] = param_1;
  uVar4 = base::hash_value(param_1);
  uVar9 = *(ulong *)(this + 0x38);
  if (uVar9 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar4;
    }
    else {
      uVar11 = uVar4;
      if (uVar9 <= uVar4) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar4 / uVar9;
        }
        uVar11 = uVar4 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0x30) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar4) {
          if ((int)plVar12[2] == param_1) {
            this_00 = (Environment *)plVar12[3];
            pZVar5 = *(Zone **)(this + 0x20);
            pEVar2 = *(Environment **)(this + 0x28);
            if (pZVar5 == (Zone *)0x0) {
              pZVar5 = (Zone *)ZoneStats::NewEmptyZone
                                         (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
              *(Zone **)(this + 0x20) = pZVar5;
            }
            Environment::Merge(this_00,pEVar2,pZVar5);
            return;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar3 * uVar9;
          }
          if (uVar13 != uVar11) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  pZVar5 = *(Zone **)(this + 0x20);
  if (pZVar5 == (Zone *)0x0) {
    pZVar5 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = pZVar5;
  }
  puVar7 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar7) < 0x50) {
    puVar7 = (undefined8 *)Zone::NewExpand(pZVar5,0x50);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar7 + 10;
  }
  puVar14 = *(undefined8 **)(this + 0x28);
  uVar20 = puVar14[2];
  uVar17 = puVar14[5];
  uVar16 = puVar14[4];
  uVar19 = puVar14[1];
  uVar18 = *puVar14;
  puVar7[3] = puVar14[3];
  puVar7[2] = uVar20;
  puVar7[5] = uVar17;
  puVar7[4] = uVar16;
  puVar7[1] = uVar19;
  *puVar7 = uVar18;
  pZVar5 = (Zone *)puVar14[9];
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = pZVar5;
  uVar4 = puVar14[7] - puVar14[6];
  if (uVar4 != 0) {
    if ((ulong)((long)uVar4 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = *(undefined8 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar8) < uVar4) {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar5,uVar4);
    }
    else {
      *(ulong *)(pZVar5 + 0x10) = (long)puVar8 + uVar4;
    }
    puVar7[6] = puVar8;
    puVar7[7] = puVar8;
    puVar7[8] = puVar8 + ((long)uVar4 >> 3);
    puVar1 = (undefined8 *)puVar14[7];
    for (puVar14 = (undefined8 *)puVar14[6]; puVar14 != puVar1; puVar14 = puVar14 + 1) {
      *puVar8 = *puVar14;
      puVar8 = (undefined8 *)(puVar7[7] + 8);
      puVar7[7] = puVar8;
    }
  }
  local_38 = local_44;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x30),(piecewise_construct_t *)local_44,(tuple *)&DAT_019febbf,
                     (tuple *)&local_38);
  *(undefined8 **)(lVar6 + 0x18) = puVar7;
  return;
}

