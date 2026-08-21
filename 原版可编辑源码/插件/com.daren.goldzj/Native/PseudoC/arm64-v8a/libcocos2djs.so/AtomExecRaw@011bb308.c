
/* v8::internal::RegExpImpl::AtomExecRaw(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int,
   int*, int) */

void v8::internal::RegExpImpl::AtomExecRaw
               (long param_1,ulong *param_2,undefined8 param_3,int param_4,long param_5,int param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong local_a0 [2];
  long local_90;
  ulong *puStack_88;
  long local_80;
  code *local_78;
  int local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar7 = (long *)String::Flatten(param_1,param_3,0);
  local_a0[0] = *param_2 & 0xffffffff00000000;
  local_a0[0] = local_a0[0] | *(uint *)((local_a0[0] | *(uint *)(*param_2 + 0xb)) + 0x13);
  iVar3 = *(int *)(local_a0[0] + 7);
  uVar8 = 0;
  if (iVar3 + param_4 <= *(int *)(*plVar7 + 7)) {
    if (0 < param_6) {
      uVar8 = 0;
      do {
        auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_a0);
        puVar9 = auVar16._0_8_;
        local_90 = *plVar7;
        auVar17 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_90);
        uVar11 = auVar17._8_8_ & 0xffffffff00000000;
        uVar14 = auVar16._8_4_;
        local_80 = (long)(int)uVar14;
        uVar15 = 0xfa;
        uVar10 = uVar14;
        local_90 = param_1;
        puStack_88 = puVar9;
        if (auVar16._8_8_ >> 0x20 == 1) {
          if (uVar11 == 0x100000000) {
            if ((int)uVar14 < 0xfb) {
              uVar10 = uVar15;
            }
            local_78 = StringSearch<unsigned_char,unsigned_char>::SingleCharSearch;
            if (uVar14 != 1) {
              local_78 = StringSearch<unsigned_char,unsigned_char>::LinearSearch;
            }
            pcVar13 = StringSearch<unsigned_char,unsigned_char>::InitialSearch;
          }
          else {
            if ((int)uVar14 < 0xfb) {
              uVar10 = uVar15;
            }
            local_78 = StringSearch<unsigned_char,unsigned_short>::SingleCharSearch;
            if (uVar14 != 1) {
              local_78 = StringSearch<unsigned_char,unsigned_short>::LinearSearch;
            }
            pcVar13 = StringSearch<unsigned_char,unsigned_short>::InitialSearch;
          }
LAB_011bb3d4:
          local_70 = uVar10 - 0xfa;
          if (6 < (int)uVar14) {
            local_78 = pcVar13;
          }
          iVar6 = (*local_78)(&local_90,auVar17._0_8_,(long)auVar17._8_4_,param_4);
        }
        else {
          if (uVar11 != 0x100000000) {
            if ((int)uVar14 < 0xfb) {
              uVar10 = uVar15;
            }
            local_78 = StringSearch<unsigned_short,unsigned_short>::SingleCharSearch;
            if (uVar14 != 1) {
              local_78 = StringSearch<unsigned_short,unsigned_short>::LinearSearch;
            }
            pcVar13 = StringSearch<unsigned_short,unsigned_short>::InitialSearch;
            goto LAB_011bb3d4;
          }
          if ((int)uVar14 < 0xfb) {
            uVar10 = uVar15;
          }
          local_70 = uVar10 - 0xfa;
          puVar2 = (ulong *)((long)puVar9 + local_80 * 2);
          puVar12 = puVar9;
          if (uVar14 < 8) {
joined_r0x011bb570:
            for (; puVar12 < puVar2; puVar12 = (ulong *)((long)puVar12 + 2)) {
              if (0xff < (ushort)*puVar12) goto LAB_011bb598;
            }
            iVar6 = (int)((ulong)((long)puVar12 - (long)puVar9) >> 1);
          }
          else {
            if (((ulong)puVar9 & 7) == 0) {
LAB_011bb53c:
              puVar1 = puVar12 + 2;
              for (; (puVar1 <= puVar2 && ((*puVar12 & 0xff00ff00ff00ff00) == 0));
                  puVar12 = puVar12 + 1) {
                puVar1 = puVar12 + 3;
              }
              goto joined_r0x011bb570;
            }
            uVar4 = (ushort)*puVar9;
            while (uVar4 < 0x100) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              if (((ulong)puVar12 & 7) == 0) goto LAB_011bb53c;
              uVar4 = *(ushort *)puVar12;
            }
LAB_011bb598:
            iVar6 = (int)((long)puVar12 - (long)puVar9 >> 1);
          }
          local_78 = StringSearch<unsigned_short,unsigned_char>::FailSearch;
          if (((int)uVar14 <= iVar6) &&
             (local_78 = StringSearch<unsigned_short,unsigned_char>::InitialSearch, (int)uVar14 < 7)
             ) {
            local_78 = StringSearch<unsigned_short,unsigned_char>::SingleCharSearch;
            if (uVar14 != 1) {
              local_78 = StringSearch<unsigned_short,unsigned_char>::LinearSearch;
            }
          }
          iVar6 = (*local_78)(&local_90,auVar17._0_8_,(long)auVar17._8_4_,param_4);
        }
        if (iVar6 == -1) {
          uVar8 = uVar8 >> 1 & 0x7fffffff;
          goto LAB_011bb60c;
        }
        uVar11 = uVar8 * 4;
        uVar8 = uVar8 + 2;
        param_4 = iVar6 + iVar3;
        *(int *)(param_5 + uVar11) = iVar6;
        *(int *)(param_5 + (uVar11 | 4)) = param_4;
      } while ((int)uVar8 < param_6);
    }
    if (param_6 < 0) {
      param_6 = param_6 + 1;
    }
    uVar8 = (ulong)(uint)(param_6 >> 1);
  }
LAB_011bb60c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

