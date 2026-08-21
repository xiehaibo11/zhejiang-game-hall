
/* v8::internal::wasm::AsmJsParser::ValidateFunctionParams(v8::internal::ZoneVector<v8::internal::wasm::AsmType*>*)
    */

void __thiscall
v8::internal::wasm::AsmJsParser::ValidateFunctionParams(AsmJsParser *this,ZoneVector *param_1)

{
  AsmJsScanner *this_00;
  int iVar1;
  int iVar2;
  AsmJsParser AVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  Zone *pZVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int *local_88;
  int *local_80;
  int *local_78;
  Zone *local_70;
  AsmJsParser *local_68;
  
  this[0x58] = (AsmJsParser)0x1;
  if (*(int *)(this + 0x10) != 0x28) {
    this[0x1e4] = (AsmJsParser)0x1;
    *(char **)(this + 0x1e8) = "Unexpected token";
    *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
    return;
  }
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  local_70 = *(Zone **)(this + 0x1b0);
  local_68 = this + 0x198;
  local_80 = (int *)0x0;
  local_78 = (int *)0x0;
  lVar15 = *(long *)(this + 0x1a0);
  if (*(long *)(this + 0x198) == lVar15) {
    piVar13 = (int *)0x0;
    AVar3 = this[0x1e4];
    local_88 = local_80;
  }
  else {
    piVar13 = *(int **)(lVar15 + -0x20);
    *(undefined8 *)(lVar15 + -0x20) = 0;
    *(undefined8 *)(lVar15 + -0x18) = 0;
    local_78 = *(int **)(lVar15 + -0x10);
    *(undefined8 *)(lVar15 + -0x10) = 0;
    plVar7 = (long *)(*(long *)(this + 0x1a0) + -0x20);
    lVar15 = *plVar7;
    if (lVar15 != 0) {
      *(long *)(*(long *)(this + 0x1a0) + -0x18) = lVar15;
    }
    *(long **)(this + 0x1a0) = plVar7;
    AVar3 = this[0x1e4];
    local_88 = piVar13;
    local_80 = piVar13;
  }
  while (AVar3 == (AsmJsParser)0x0) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 0x29) goto LAB_01485b74;
    if (-10000 < iVar1) {
      uVar12 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar11 = "Expected parameter name";
      goto LAB_01485f94;
    }
    AsmJsScanner::Next(this_00);
    if (piVar13 < local_78) {
      *piVar13 = iVar1;
      piVar13 = local_80;
      piVar8 = local_88;
    }
    else {
      lVar15 = (long)piVar13 - (long)local_88 >> 2;
      uVar6 = lVar15 + 1;
      if (uVar6 >> 0x1d != 0) goto LAB_01486088;
      uVar16 = (long)local_78 - (long)local_88 >> 1;
      if (uVar6 <= uVar16) {
        uVar6 = uVar16;
      }
      if (0xffffffe < (ulong)((long)local_78 - (long)local_88 >> 2)) {
        uVar6 = 0x1fffffff;
      }
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      else {
        uVar16 = uVar6 * 4 + 7 & 0xfffffffffffffff8;
        lVar9 = *(long *)(local_70 + 0x10);
        if ((ulong)(*(long *)(local_70 + 0x18) - lVar9) < uVar16) {
          lVar9 = Zone::NewExpand(local_70,uVar16);
        }
        else {
          *(ulong *)(local_70 + 0x10) = lVar9 + uVar16;
        }
      }
      piVar13 = (int *)(lVar9 + lVar15 * 4);
      *piVar13 = iVar1;
      local_78 = (int *)(lVar9 + uVar6 * 4);
      piVar8 = piVar13;
      while (local_80 != local_88) {
        local_80 = local_80 + -1;
        piVar8 = piVar8 + -1;
        *piVar8 = *local_80;
      }
    }
    local_88 = piVar8;
    piVar13 = piVar13 + 1;
    local_80 = piVar13;
    if (*(int *)(this + 0x10) != 0x29) {
      if (*(int *)(this + 0x10) != 0x2c) goto LAB_01485f80;
      AsmJsScanner::Next(this_00);
    }
    AVar3 = this[0x1e4];
  }
  if (*(int *)(this + 0x10) == 0x29) {
LAB_01485b74:
    AsmJsScanner::Next(this_00);
    this[0x58] = (AsmJsParser)0x0;
    if (*(int *)(this + 0x10) == 0x7b) {
      AsmJsScanner::Next(this_00);
      for (piVar8 = local_88; piVar8 != piVar13; piVar8 = piVar8 + 1) {
        iVar1 = *piVar8;
        if ((*(int *)(this + 0x10) != iVar1) ||
           (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) != 0x3d)) goto LAB_01485f80;
        AsmJsScanner::Next(this_00);
        puVar4 = (undefined8 *)GetVarInfo(this,iVar1);
        if (*(int *)(puVar4 + 4) != 0) {
          uVar12 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar11 = "Duplicate parameter name";
          goto LAB_01485f94;
        }
        iVar2 = *(int *)(this + 0x10);
        if (iVar2 == iVar1) {
          AsmJsScanner::Next(this_00);
          if (*(int *)(this + 0x10) != 0x7c) goto LAB_01485f80;
          AsmJsScanner::Next(this_00);
          if ((*(int *)(this + 0x10) != -3) || (*(int *)(this + 0xe8) != 0)) {
            uVar12 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar11 = "Bad integer parameter annotation.";
            goto LAB_01485f94;
          }
          AsmJsScanner::Next(this_00);
          *(undefined4 *)(puVar4 + 4) = 1;
          *puVar4 = 0x301;
          *(int *)((long)puVar4 + 0x1c) =
               (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3);
          puVar4 = *(undefined8 **)(param_1 + 8);
          if (*(undefined8 **)(param_1 + 0x10) <= puVar4) {
            lVar15 = (long)puVar4 - *(long *)param_1 >> 3;
            uVar6 = lVar15 + 1;
            if (uVar6 >> 0x1c == 0) {
              lVar9 = (long)*(undefined8 **)(param_1 + 0x10) - *(long *)param_1;
              uVar16 = lVar9 >> 2;
              if (uVar6 <= uVar16) {
                uVar6 = uVar16;
              }
              if (0x7fffffe < (ulong)(lVar9 >> 3)) {
                uVar6 = 0xfffffff;
              }
              if (uVar6 == 0) {
                lVar9 = 0;
              }
              else {
                pZVar10 = *(Zone **)(param_1 + 0x18);
                uVar16 = uVar6 * 8;
                lVar9 = *(long *)(pZVar10 + 0x10);
                if (uVar16 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar9) ||
                    uVar16 - (*(long *)(pZVar10 + 0x18) - lVar9) == 0) {
                  *(ulong *)(pZVar10 + 0x10) = lVar9 + uVar16;
                }
                else {
                  lVar9 = Zone::NewExpand(pZVar10,uVar16);
                }
              }
              puVar4 = (undefined8 *)(lVar9 + lVar15 * 8);
              puVar14 = puVar4 + 1;
              *puVar4 = 0x301;
              puVar5 = *(undefined8 **)param_1;
              puVar17 = *(undefined8 **)(param_1 + 8);
              lVar9 = lVar9 + uVar6 * 8;
              while (puVar17 != puVar5) {
                puVar17 = puVar17 + -1;
                puVar4 = puVar4 + -1;
                *puVar4 = *puVar17;
              }
              goto LAB_01485f1c;
            }
            goto LAB_01486088;
          }
          *puVar4 = 0x301;
LAB_01485db4:
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        }
        else {
          if (iVar2 != 0x2b) {
            if (0xff < iVar2) {
              AsmJsScanner::Next(this_00);
              puVar5 = (undefined8 *)GetVarInfo(this,iVar2);
              uVar6 = AsmType::IsA((AsmType *)*puVar5,*(AsmType **)(this + 0x268));
              if ((uVar6 & 1) != 0) {
                if (((*(int *)(this + 0x10) != 0x28) ||
                    (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) != iVar1)) ||
                   (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) != 0x29)) goto LAB_01485f80;
                AsmJsScanner::Next(this_00);
                uVar18 = 0xe00d;
                *(undefined4 *)(puVar4 + 4) = 1;
                *puVar4 = 0xe00d;
                *(int *)((long)puVar4 + 0x1c) =
                     (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3);
                puVar4 = *(undefined8 **)(param_1 + 8);
                if (puVar4 < *(undefined8 **)(param_1 + 0x10)) goto LAB_01485db0;
                lVar15 = (long)puVar4 - *(long *)param_1 >> 3;
                uVar6 = lVar15 + 1;
                if (uVar6 >> 0x1c == 0) {
                  lVar9 = (long)*(undefined8 **)(param_1 + 0x10) - *(long *)param_1;
                  uVar16 = lVar9 >> 2;
                  if (uVar6 <= uVar16) {
                    uVar6 = uVar16;
                  }
                  if (0x7fffffe < (ulong)(lVar9 >> 3)) {
                    uVar6 = 0xfffffff;
                  }
                  if (uVar6 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    pZVar10 = *(Zone **)(param_1 + 0x18);
                    uVar16 = uVar6 * 8;
                    lVar9 = *(long *)(pZVar10 + 0x10);
                    if (uVar16 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar9) ||
                        uVar16 - (*(long *)(pZVar10 + 0x18) - lVar9) == 0) {
                      *(ulong *)(pZVar10 + 0x10) = lVar9 + uVar16;
                    }
                    else {
                      lVar9 = Zone::NewExpand(pZVar10,uVar16);
                    }
                  }
                  puVar4 = (undefined8 *)(lVar9 + lVar15 * 8);
                  puVar14 = puVar4 + 1;
                  *puVar4 = 0xe00d;
                  puVar5 = *(undefined8 **)param_1;
                  puVar17 = *(undefined8 **)(param_1 + 8);
                  lVar9 = lVar9 + uVar6 * 8;
                  while (puVar17 != puVar5) {
                    puVar17 = puVar17 + -1;
                    puVar4 = puVar4 + -1;
                    *puVar4 = *puVar17;
                  }
                  goto LAB_01485f1c;
                }
LAB_01486088:
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            uVar12 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar11 = "Expected fround";
            goto LAB_01485f94;
          }
          AsmJsScanner::Next(this_00);
          if (*(int *)(this + 0x10) != iVar1) goto LAB_01485f80;
          AsmJsScanner::Next(this_00);
          uVar18 = 0xed;
          *(undefined4 *)(puVar4 + 4) = 1;
          *puVar4 = 0xed;
          *(int *)((long)puVar4 + 0x1c) =
               (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3);
          puVar4 = *(undefined8 **)(param_1 + 8);
          if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
LAB_01485db0:
            *puVar4 = uVar18;
            goto LAB_01485db4;
          }
          lVar15 = (long)puVar4 - *(long *)param_1 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x1c != 0) goto LAB_01486088;
          lVar9 = (long)*(undefined8 **)(param_1 + 0x10) - *(long *)param_1;
          uVar16 = lVar9 >> 2;
          if (uVar6 <= uVar16) {
            uVar6 = uVar16;
          }
          if (0x7fffffe < (ulong)(lVar9 >> 3)) {
            uVar6 = 0xfffffff;
          }
          if (uVar6 == 0) {
            lVar9 = 0;
          }
          else {
            pZVar10 = *(Zone **)(param_1 + 0x18);
            uVar16 = uVar6 * 8;
            lVar9 = *(long *)(pZVar10 + 0x10);
            if (uVar16 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar9) ||
                uVar16 - (*(long *)(pZVar10 + 0x18) - lVar9) == 0) {
              *(ulong *)(pZVar10 + 0x10) = lVar9 + uVar16;
            }
            else {
              lVar9 = Zone::NewExpand(pZVar10,uVar16);
            }
          }
          puVar4 = (undefined8 *)(lVar9 + lVar15 * 8);
          puVar14 = puVar4 + 1;
          *puVar4 = 0xed;
          puVar5 = *(undefined8 **)param_1;
          puVar17 = *(undefined8 **)(param_1 + 8);
          lVar9 = lVar9 + uVar6 * 8;
          while (puVar17 != puVar5) {
            puVar17 = puVar17 + -1;
            puVar4 = puVar4 + -1;
            *puVar4 = *puVar17;
          }
LAB_01485f1c:
          *(undefined8 **)param_1 = puVar4;
          *(undefined8 **)(param_1 + 8) = puVar14;
          *(long *)(param_1 + 0x10) = lVar9;
        }
        if (*(int *)(this + 0x10) != 0x7d) {
          if (*(int *)(this + 0x10) == 0x3b) {
            AsmJsScanner::Next(this_00);
          }
          else if (this[0xec] == (AsmJsParser)0x0) {
            this[0x1e4] = (AsmJsParser)0x1;
            *(char **)(this + 0x1e8) = "Expected ;";
            *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
          }
        }
      }
      goto LAB_01485f9c;
    }
  }
LAB_01485f80:
  uVar12 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar11 = "Unexpected token";
LAB_01485f94:
  *(char **)(this + 0x1e8) = pcVar11;
  *(undefined4 *)(this + 0x1f0) = uVar12;
LAB_01485f9c:
  puVar4 = *(undefined8 **)(local_68 + 8);
  if (puVar4 < *(undefined8 **)(local_68 + 0x10)) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = local_70;
    *puVar4 = local_88;
    puVar4[1] = local_80;
    puVar4[2] = local_78;
    *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::ZoneVector<int>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<int>>>
    ::__emplace_back_slow_path<v8::internal::ZoneVector<int>>
              ((vector<v8::internal::ZoneVector<int>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<int>>>
                *)local_68,(ZoneVector *)&local_88);
  }
  return;
}

