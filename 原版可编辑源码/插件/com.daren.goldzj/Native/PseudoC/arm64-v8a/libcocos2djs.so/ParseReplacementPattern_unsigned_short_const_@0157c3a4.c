
/* bool v8::internal::CompiledReplacement::ParseReplacementPattern<unsigned short
   const>(v8::internal::ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>*,
   v8::internal::Vector<unsigned short const>, v8::internal::FixedArray, int, int) */

bool v8::internal::CompiledReplacement::ParseReplacementPattern<unsigned_short_const>
               (undefined8 param_1,
               ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart> *param_2,
               long param_3,uint param_4,ulong param_5,int param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong local_a8;
  undefined **local_a0;
  long lStack_98;
  long local_90;
  undefined ***local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0 < (int)param_4) {
    uVar18 = 0;
    uVar15 = 0;
    ppuVar1 = (undefined **)(param_7 << 0x20 | 2);
LAB_0157c444:
    iVar14 = (int)uVar15;
    uVar17 = uVar15;
    uVar6 = uVar18;
    if (*(short *)(param_3 + (long)iVar14 * 2) != 0x24) goto switchD_0157c47c_caseD_25;
    uVar17 = (long)iVar14 + 1;
    uVar16 = (uint)uVar17;
    if (uVar16 != param_4) {
      uVar9 = (uint)*(ushort *)(param_3 + uVar17 * 2);
      switch(uVar9) {
      case 0x24:
        uVar6 = uVar16;
        if ((int)uVar18 < iVar14) {
          local_a0 = (undefined **)((ulong)-uVar18 | uVar17 << 0x20);
          goto LAB_0157c590;
        }
        break;
      case 0x26:
        if ((int)uVar18 < iVar14) {
          local_a0 = (undefined **)((ulong)-uVar18 | uVar15 << 0x20);
          ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                    (param_2,(ReplacementPart *)&local_a0);
        }
        local_a0 = (undefined **)0x3;
        goto LAB_0157c590;
      case 0x27:
        local_a0 = ppuVar1;
        if ((int)uVar18 < iVar14) {
          local_a0 = (undefined **)((ulong)-uVar18 | uVar15 << 0x20);
          ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                    (param_2,(ReplacementPart *)&local_a0);
          local_a0 = ppuVar1;
        }
        goto LAB_0157c590;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar9 = uVar9 - 0x30;
        if ((int)uVar9 <= param_6) {
          lVar13 = (long)iVar14 + 2;
          uVar5 = (uint)lVar13;
          if (((int)uVar5 < (int)param_4) &&
             (uVar10 = (uint)*(ushort *)(param_3 + lVar13 * 2), uVar10 - 0x30 < 10)) {
            uVar10 = (uVar10 + uVar9 * 10) - 0x30;
            if ((int)uVar10 <= param_6) {
              uVar16 = uVar5;
              uVar9 = uVar10;
            }
            uVar17 = (ulong)uVar16;
          }
          if (0 < (int)uVar9) {
            if ((int)uVar18 < iVar14) {
              local_a0 = (undefined **)((ulong)-uVar18 | uVar15 << 0x20);
              ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                        (param_2,(ReplacementPart *)&local_a0);
            }
            local_a0 = (undefined **)((ulong)uVar9 << 0x20 | 3);
            ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                      (param_2,(ReplacementPart *)&local_a0);
            uVar6 = (int)uVar17 + 1;
          }
        }
        break;
      case 0x3c:
        if ((int)param_5 != 0) {
          uVar16 = iVar14 + 2;
          if ((int)uVar16 < (int)param_4) {
            lVar7 = (long)(int)uVar16;
            lVar13 = 0;
            lVar11 = (ulong)uVar16 << 0x20;
            do {
              if (*(short *)(param_3 + (long)(int)uVar16 * 2 + lVar13 * 2) == 0x3e) {
                if ((int)(lVar13 + uVar15) != -3) {
                  local_80 = &local_a0;
                  local_90 = (lVar11 >> 0x20) - lVar7;
                  local_a0 = &PTR_FUN_01cc9350;
                  lStack_98 = param_3 + lVar7 * 2;
                  uVar6 = *(uint *)(param_5 + 3);
                  if ((int)uVar6 < 4) {
                    uVar6 = 0xffffffff;
                    goto LAB_0157c6dc;
                  }
                  uVar17 = 0;
                  iVar12 = 0xf;
                  local_a8 = param_5 & 0xffffffff00000000 | (ulong)*(uint *)(param_5 + 7);
                  goto LAB_0157c66c;
                }
                break;
              }
              lVar13 = lVar13 + 1;
              lVar11 = lVar11 + 0x100000000;
            } while ((int)param_4 - lVar7 != lVar13);
          }
        }
        break;
      case 0x60:
        if ((int)uVar18 < iVar14) {
          local_a0 = (undefined **)((ulong)-uVar18 | uVar15 << 0x20);
          ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                    (param_2,(ReplacementPart *)&local_a0);
        }
        local_a0 = (undefined **)0x1;
LAB_0157c590:
        ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
                  (param_2,(ReplacementPart *)&local_a0);
        uVar6 = iVar14 + 2;
      }
      goto switchD_0157c47c_caseD_25;
    }
    goto LAB_0157c76c;
  }
  uVar18 = 0;
LAB_0157c76c:
  if ((int)uVar18 < (int)param_4) {
    if (uVar18 == 0) {
      bVar3 = true;
      goto LAB_0157c794;
    }
    local_a0 = (undefined **)CONCAT44(param_4,-uVar18);
    ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
              (param_2,(ReplacementPart *)&local_a0);
  }
  bVar3 = false;
LAB_0157c794:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
LAB_0157c66c:
  uVar4 = (*(code *)(*local_80)[6])(local_80,&local_a8);
  if ((uVar4 & 1) != 0) goto LAB_0157c6bc;
  uVar17 = uVar17 + 1;
  if (uVar6 >> 2 <= uVar17) {
    uVar6 = 0xffffffff;
    goto LAB_0157c6dc;
  }
  lVar11 = (long)iVar12;
  iVar12 = iVar12 + 8;
  local_a8 = param_5 & 0xffffffff00000000 | (ulong)*(uint *)(param_5 + lVar11);
  if (local_80 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  goto LAB_0157c66c;
LAB_0157c6bc:
  uVar6 = *(int *)(param_5 + 7 + (long)(iVar12 + -0xb)) >> 1;
LAB_0157c6dc:
  if (&local_a0 == local_80) {
    pcVar8 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_0157c710;
    pcVar8 = (code *)(*local_80)[5];
  }
  (*pcVar8)();
LAB_0157c710:
  if ((int)uVar18 < iVar14) {
    local_a0 = (undefined **)((ulong)-uVar18 | uVar15 << 0x20);
    ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
              (param_2,(ReplacementPart *)&local_a0);
  }
  local_a0 = (undefined **)0x6;
  if (uVar6 != 0xffffffff) {
    local_a0 = (undefined **)((ulong)uVar6 << 0x20 | 3);
  }
  ZoneChunkList<v8::internal::CompiledReplacement::ReplacementPart>::push_back
            (param_2,(ReplacementPart *)&local_a0);
  uVar17 = lVar13 + uVar15 + 2;
  uVar6 = iVar14 + (int)lVar13 + 3;
switchD_0157c47c_caseD_25:
  uVar18 = uVar6;
  uVar6 = (int)uVar17 + 1;
  uVar15 = (ulong)uVar6;
  if ((int)param_4 <= (int)uVar6) goto LAB_0157c76c;
  goto LAB_0157c444;
}

