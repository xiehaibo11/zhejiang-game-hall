
/* v8::internal::V8HeapExplorer::AddEntry(v8::internal::HeapObject) */

void __thiscall v8::internal::V8HeapExplorer::AddEntry(V8HeapExplorer *this,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  uint *puVar10;
  StringsStorage *pSVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uVar16;
  ulong local_58;
  
  uVar13 = param_2 & 0xffffffff00000000;
  uVar14 = uVar13 | 7;
  puVar10 = (uint *)(param_2 - 1);
  if (*(short *)(uVar14 + *(uint *)(param_2 - 1)) != 0x439) {
    if (*(short *)(uVar14 + *puVar10) == 0x438) {
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      lVar6 = (long)iVar3;
      pcVar4 = "native_bind";
      uVar5 = 5;
      goto LAB_0119f154;
    }
    if (*(short *)(uVar14 + *puVar10) == 0x42e) {
      pcVar4 = (char *)StringsStorage::GetName
                                 (*(StringsStorage **)(this + 0x18),
                                  uVar13 | *(uint *)((uVar13 | *(uint *)(param_2 + 0xb)) + 0xb));
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      lVar6 = (long)iVar3;
      uVar5 = 6;
      goto LAB_0119f154;
    }
    if (0xa9 < *(ushort *)(uVar14 + *puVar10)) {
      pSVar11 = *(StringsStorage **)(this + 0x18);
      uVar5 = GetConstructorName(param_2);
      pcVar4 = (char *)StringsStorage::GetName(pSVar11,uVar5);
      if ((*(short *)(uVar14 + *(uint *)(param_2 - 1)) == 0xaa) &&
         (uVar14 = *(ulong *)(this + 0x40), uVar14 != 0)) {
        uVar5 = CONCAT17(POPCOUNT((char)(uVar14 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar14 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar14 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar14 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar14 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar14 >> 0x10
                                                                                     )),
                                                                      CONCAT11(POPCOUNT((char)(
                                                  uVar14 >> 8)),POPCOUNT((char)uVar14))))))));
        uVar16 = NEON_uaddlv(uVar5,1);
        uVar12 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar16) & 0xffffffff;
        uVar15 = param_2 & 0xffffffff;
        if (uVar12 < 2) {
          uVar7 = (int)uVar14 - 1 & uVar15;
        }
        else {
          uVar7 = uVar15;
          if (uVar14 <= uVar15) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar15 / uVar14;
            }
            uVar7 = uVar15 - uVar7 * uVar14;
          }
        }
        plVar8 = *(long **)(*(long *)(this + 0x38) + uVar7 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          do {
            uVar9 = plVar8[1];
            if (uVar9 == uVar15) {
              if ((int)plVar8[2] == (int)param_2) {
                pcVar4 = (char *)StringsStorage::GetFormatted
                                           (*(char **)(this + 0x18),"%s / %s",pcVar4,plVar8[3]);
                break;
              }
            }
            else {
              if (uVar12 < 2) {
                uVar9 = uVar9 & uVar14 - 1;
              }
              else if (uVar14 <= uVar9) {
                uVar2 = 0;
                if (uVar14 != 0) {
                  uVar2 = uVar9 / uVar14;
                }
                uVar9 = uVar9 - uVar2 * uVar14;
              }
              if (uVar9 != uVar7) break;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      lVar6 = (long)iVar3;
      uVar5 = 3;
      goto LAB_0119f154;
    }
    if (*(ushort *)(uVar14 + *puVar10) < 0x40) {
      if ((*(ushort *)(uVar14 + *puVar10) < 0x40) && ((*(ushort *)(uVar14 + *puVar10) & 7) == 1)) {
        local_58 = param_2;
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
        lVar6 = (long)iVar3;
        pcVar4 = "(concatenated string)";
        uVar5 = 10;
      }
      else if ((*(ushort *)(uVar14 + *puVar10) < 0x40) &&
              ((*(ushort *)(uVar14 + *puVar10) & 7) == 3)) {
        local_58 = param_2;
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
        lVar6 = (long)iVar3;
        pcVar4 = "(sliced string)";
        uVar5 = 0xb;
      }
      else {
        pcVar4 = (char *)StringsStorage::GetName(*(StringsStorage **)(this + 0x18),param_2);
        local_58 = param_2;
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
        lVar6 = (long)iVar3;
        uVar5 = 2;
      }
      goto LAB_0119f154;
    }
    if (*(ushort *)(uVar14 + *puVar10) == 0x40) {
      if ((*(byte *)(param_2 + 7) & 1) == 0) {
        local_58 = param_2;
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
        lVar6 = (long)iVar3;
        pcVar4 = "symbol";
        uVar5 = 0xc;
        goto LAB_0119f154;
      }
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      pcVar4 = "private symbol";
LAB_0119f3c4:
      lVar6 = (long)iVar3;
      uVar5 = 0;
      goto LAB_0119f154;
    }
    if (*(short *)(uVar14 + *puVar10) == 0x41) {
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      lVar6 = (long)iVar3;
      pcVar4 = "bigint";
      uVar5 = 0xd;
      goto LAB_0119f154;
    }
    if (*(short *)(uVar14 + *puVar10) == 0x9a) {
      local_58 = param_2;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
      lVar6 = (long)iVar3;
      pcVar4 = "";
      uVar5 = 4;
      goto LAB_0119f154;
    }
    if (*(short *)(uVar14 + *puVar10) == 0xa6) {
      uVar1 = *(uint *)(param_2 + 7);
      uVar12 = uVar13 | uVar1;
      if (((uVar1 & 1) == 0) || (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) != 0x83)) {
        if (uVar1 != 0) goto joined_r0x0119f4d4;
LAB_0119f540:
        uVar12 = *(ulong *)(uVar13 + 200);
      }
      else {
        local_58 = uVar12;
        uVar12 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_58);
        if ((uVar12 & 1) == 0) goto LAB_0119f540;
        uVar1 = *(uint *)(param_2 + 7);
        uVar12 = uVar13 | uVar1;
joined_r0x0119f4d4:
        if (((uVar1 & 1) != 0) && (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) == 0x83)) {
          local_58 = uVar12;
          uVar14 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_58);
          if ((uVar14 & 1) == 0) goto LAB_0119f540;
          local_58 = uVar12;
          uVar12 = ScopeInfo::FunctionName((ScopeInfo *)&local_58);
        }
      }
      pSVar11 = *(StringsStorage **)(this + 0x18);
LAB_0119f54c:
      pcVar4 = (char *)StringsStorage::GetName(pSVar11,uVar12);
    }
    else {
      if (*(short *)(uVar14 + *puVar10) != 0x65) {
        if (*(short *)(uVar14 + *puVar10) != 0x8f) {
          if (*(ushort *)(uVar14 + *puVar10) - 0x88 < 10) {
            local_58 = param_2;
            iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1))
            ;
            lVar6 = (long)iVar3;
            pcVar4 = "system / Context";
            uVar5 = 3;
          }
          else if (((*(ushort *)(uVar14 + *puVar10) - 0x76 < 0xf) ||
                   (*(short *)(uVar14 + *puVar10) == 0x87)) ||
                  (*(short *)(uVar14 + *puVar10) == 0x85)) {
            local_58 = param_2;
            iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1))
            ;
            lVar6 = (long)iVar3;
            pcVar4 = "";
            uVar5 = 1;
          }
          else if (*(short *)(uVar14 + *puVar10) == 0x42) {
            local_58 = param_2;
            iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1))
            ;
            lVar6 = (long)iVar3;
            pcVar4 = "number";
            uVar5 = 7;
          }
          else {
            pcVar4 = (char *)GetSystemEntryName(this,param_2);
            local_58 = param_2;
            iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1))
            ;
            lVar6 = (long)iVar3;
            uVar5 = 0;
          }
          goto LAB_0119f154;
        }
        local_58 = param_2;
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
        pcVar4 = "system / NativeContext";
        goto LAB_0119f3c4;
      }
      if (((*(uint *)(param_2 + 7) & 1) != 0) &&
         (uVar12 = uVar13 | *(uint *)(param_2 + 7),
         *(ushort *)(uVar14 + *(uint *)(uVar12 - 1)) < 0x40)) {
        pSVar11 = *(StringsStorage **)(this + 0x18);
        goto LAB_0119f54c;
      }
      pcVar4 = "";
    }
    local_58 = param_2;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
    lVar6 = (long)iVar3;
    uVar5 = 4;
    goto LAB_0119f154;
  }
  pSVar11 = *(StringsStorage **)(this + 0x18);
  uVar15 = uVar13 | *(uint *)(param_2 + 0xb);
  uVar1 = *(uint *)(uVar15 + 7);
  uVar12 = uVar13 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) != 0x83)) {
    if (uVar1 != 0) goto joined_r0x0119f094;
LAB_0119f118:
    uVar12 = *(ulong *)(uVar13 + 200);
  }
  else {
    local_58 = uVar12;
    uVar12 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_58);
    if ((uVar12 & 1) == 0) goto LAB_0119f118;
    uVar1 = *(uint *)(uVar15 + 7);
    uVar12 = uVar13 | uVar1;
joined_r0x0119f094:
    if (((uVar1 & 1) != 0) && (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) == 0x83)) {
      local_58 = uVar12;
      uVar14 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_58);
      if ((uVar14 & 1) == 0) goto LAB_0119f118;
      local_58 = uVar12;
      uVar12 = ScopeInfo::FunctionName((ScopeInfo *)&local_58);
    }
  }
  pcVar4 = (char *)StringsStorage::GetName(pSVar11,uVar12);
  local_58 = param_2;
  iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar13 | *(uint *)(param_2 - 1));
  lVar6 = (long)iVar3;
  uVar5 = 5;
LAB_0119f154:
  AddEntry(this,puVar10,uVar5,pcVar4,lVar6);
  return;
}

