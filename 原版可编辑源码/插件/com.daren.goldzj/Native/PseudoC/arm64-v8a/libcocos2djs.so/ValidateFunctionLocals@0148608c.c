
/* v8::internal::wasm::AsmJsParser::ValidateFunctionLocals(unsigned long,
   v8::internal::ZoneVector<v8::internal::wasm::ValueType>*) */

void __thiscall
v8::internal::wasm::AsmJsParser::ValidateFunctionLocals
          (AsmJsParser *this,ulong param_1,ZoneVector *param_2)

{
  AsmJsScanner *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  WasmFunctionBuilder *this_01;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  Zone *pZVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  
  if (*(int *)(this + 0x10) != -0x26da) {
    return;
  }
  this_00 = (AsmJsScanner *)(this + 8);
LAB_014860dc:
  this[0x58] = (AsmJsParser)0x1;
  AsmJsScanner::Next(this_00);
  iVar6 = *(int *)(this + 0x10);
  this[0x58] = (AsmJsParser)0x0;
  do {
    if (-10000 < iVar6) {
      uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar10 = "Expected local variable identifier";
      goto LAB_01486ccc;
    }
    AsmJsScanner::Next(this_00);
    puVar2 = (undefined8 *)GetVarInfo(this,iVar6);
    if (*(int *)(puVar2 + 4) != 0) {
      uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar10 = "Duplicate local variable name";
      goto LAB_01486ccc;
    }
    if (*(int *)(this + 0x10) != 0x3d) {
LAB_01486c28:
      uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar10 = "Unexpected token";
LAB_01486ccc:
      *(char **)(this + 0x1e8) = pcVar10;
      *(undefined4 *)(this + 0x1f0) = uVar11;
      return;
    }
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
    iVar17 = (int)param_1;
    if (iVar6 == 0x2d) {
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == -3) {
        iVar6 = *(int *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        if (iVar6 < 0) {
LAB_01486c88:
          uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar10 = "Numeric literal out of range";
          goto LAB_01486ccc;
        }
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = 0x301;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        puVar9 = *(undefined1 **)(param_2 + 8);
        if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
          *puVar9 = 1;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        else {
          lVar13 = *(long *)param_2;
          puVar15 = puVar9 + (1 - lVar13);
          if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
          uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
          puVar14 = (undefined1 *)(uVar7 * 2);
          if (puVar15 <= puVar14) {
            puVar15 = puVar14;
          }
          if (0x3ffffffe < uVar7) {
            puVar15 = (undefined1 *)0x7fffffff;
          }
          if (puVar15 == (undefined1 *)0x0) {
            lVar4 = 0;
          }
          else {
            pZVar8 = *(Zone **)(param_2 + 0x18);
            uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
            lVar4 = *(long *)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
              lVar4 = Zone::NewExpand(pZVar8,uVar7);
            }
            else {
              *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
            }
          }
          puVar9 = puVar9 + (lVar4 - lVar13);
          puVar12 = puVar9 + 1;
          *puVar9 = 1;
          puVar14 = *(undefined1 **)param_2;
          puVar16 = *(undefined1 **)(param_2 + 8);
          while (puVar16 != puVar14) {
            puVar16 = puVar16 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar16;
          }
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
        }
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),-iVar6);
      }
      else {
        if (*(int *)(this + 0x10) != -4) {
LAB_01486c70:
          uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar10 = "Expected variable initial value";
          goto LAB_01486ccc;
        }
        dVar20 = *(double *)(this + 0xe0);
        AsmJsScanner::Next(this_00);
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = 0xed;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        puVar9 = *(undefined1 **)(param_2 + 8);
        if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
          *puVar9 = 4;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        else {
          lVar13 = *(long *)param_2;
          puVar15 = puVar9 + (1 - lVar13);
          if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
          uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
          puVar14 = (undefined1 *)(uVar7 * 2);
          if (puVar15 <= puVar14) {
            puVar15 = puVar14;
          }
          if (0x3ffffffe < uVar7) {
            puVar15 = (undefined1 *)0x7fffffff;
          }
          if (puVar15 == (undefined1 *)0x0) {
            lVar4 = 0;
          }
          else {
            pZVar8 = *(Zone **)(param_2 + 0x18);
            uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
            lVar4 = *(long *)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
              lVar4 = Zone::NewExpand(pZVar8,uVar7);
            }
            else {
              *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
            }
          }
          puVar9 = puVar9 + (lVar4 - lVar13);
          puVar12 = puVar9 + 1;
          *puVar9 = 4;
          puVar14 = *(undefined1 **)param_2;
          puVar16 = *(undefined1 **)(param_2 + 8);
          while (puVar16 != puVar14) {
            puVar16 = puVar16 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar16;
          }
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
        }
        this_01 = *(WasmFunctionBuilder **)(this + 0xf8);
        dVar20 = -dVar20;
LAB_014867ec:
        WasmFunctionBuilder::EmitF64Const(this_01,dVar20);
      }
LAB_01486b28:
      WasmFunctionBuilder::EmitSetLocal
                (*(WasmFunctionBuilder **)(this + 0xf8),*(uint *)((long)puVar2 + 0x1c));
    }
    else {
      if (iVar6 < 0x100) {
        if (iVar6 != -3) {
          if (iVar6 != -4) goto LAB_01486c70;
          dVar20 = *(double *)(this + 0xe0);
          AsmJsScanner::Next(this_00);
          *(undefined4 *)(puVar2 + 4) = 1;
          *puVar2 = 0xed;
          *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
          puVar9 = *(undefined1 **)(param_2 + 8);
          if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
            *puVar9 = 4;
            *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
          }
          else {
            lVar13 = *(long *)param_2;
            puVar15 = puVar9 + (1 - lVar13);
            if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
            uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
            puVar14 = (undefined1 *)(uVar7 * 2);
            if (puVar15 <= puVar14) {
              puVar15 = puVar14;
            }
            if (0x3ffffffe < uVar7) {
              puVar15 = (undefined1 *)0x7fffffff;
            }
            if (puVar15 == (undefined1 *)0x0) {
              lVar4 = 0;
            }
            else {
              pZVar8 = *(Zone **)(param_2 + 0x18);
              uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
              lVar4 = *(long *)(pZVar8 + 0x10);
              if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
                lVar4 = Zone::NewExpand(pZVar8,uVar7);
              }
              else {
                *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
              }
            }
            puVar9 = puVar9 + (lVar4 - lVar13);
            puVar12 = puVar9 + 1;
            *puVar9 = 4;
            puVar14 = *(undefined1 **)param_2;
            puVar16 = *(undefined1 **)(param_2 + 8);
            while (puVar16 != puVar14) {
              puVar16 = puVar16 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar16;
            }
            *(undefined1 **)param_2 = puVar9;
            *(undefined1 **)(param_2 + 8) = puVar12;
            *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
          }
          this_01 = *(WasmFunctionBuilder **)(this + 0xf8);
          goto LAB_014867ec;
        }
        iVar6 = *(int *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = 0x301;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        puVar9 = *(undefined1 **)(param_2 + 8);
        if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
          *puVar9 = 1;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        else {
          lVar13 = *(long *)param_2;
          puVar15 = puVar9 + (1 - lVar13);
          if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
          uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
          puVar14 = (undefined1 *)(uVar7 * 2);
          if (puVar15 <= puVar14) {
            puVar15 = puVar14;
          }
          if (0x3ffffffe < uVar7) {
            puVar15 = (undefined1 *)0x7fffffff;
          }
          if (puVar15 == (undefined1 *)0x0) {
            lVar4 = 0;
          }
          else {
            pZVar8 = *(Zone **)(param_2 + 0x18);
            uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
            lVar4 = *(long *)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
              lVar4 = Zone::NewExpand(pZVar8,uVar7);
            }
            else {
              *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
            }
          }
          puVar9 = puVar9 + (lVar4 - lVar13);
          puVar12 = puVar9 + 1;
          *puVar9 = 1;
          puVar14 = *(undefined1 **)param_2;
          puVar16 = *(undefined1 **)(param_2 + 8);
          while (puVar16 != puVar14) {
            puVar16 = puVar16 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar16;
          }
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
        }
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar6);
        goto LAB_01486b28;
      }
      AsmJsScanner::Next(this_00);
      puVar3 = (undefined8 *)GetVarInfo(this,iVar6);
      if (*(int *)(puVar3 + 4) == 2) {
        if (*(char *)((long)puVar3 + 0x24) != '\0') {
          uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar10 = "Initializing from global requires const variable";
          goto LAB_01486ccc;
        }
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = *puVar3;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        uVar7 = AsmType::IsA((AsmType *)*puVar3,(AsmType *)0x301);
        if ((uVar7 & 1) == 0) {
          uVar7 = AsmType::IsA((AsmType *)*puVar3,(AsmType *)0xe00d);
          if ((uVar7 & 1) == 0) {
            uVar7 = AsmType::IsA((AsmType *)*puVar3,(AsmType *)0xed);
            if ((uVar7 & 1) == 0) {
              uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar10 = "Bad local variable definition";
              goto LAB_01486ccc;
            }
            puVar9 = *(undefined1 **)(param_2 + 8);
            if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
              uVar5 = 4;
              goto LAB_014866d0;
            }
            lVar13 = *(long *)param_2;
            puVar15 = puVar9 + (1 - lVar13);
            if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
            uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
            puVar14 = (undefined1 *)(uVar7 * 2);
            if (puVar15 <= puVar14) {
              puVar15 = puVar14;
            }
            if (0x3ffffffe < uVar7) {
              puVar15 = (undefined1 *)0x7fffffff;
            }
            if (puVar15 == (undefined1 *)0x0) {
              lVar4 = 0;
            }
            else {
              pZVar8 = *(Zone **)(param_2 + 0x18);
              uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
              lVar4 = *(long *)(pZVar8 + 0x10);
              if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
                lVar4 = Zone::NewExpand(pZVar8,uVar7);
              }
              else {
                *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
              }
            }
            puVar9 = puVar9 + (lVar4 - lVar13);
            puVar12 = puVar9 + 1;
            *puVar9 = 4;
            puVar14 = *(undefined1 **)param_2;
            puVar16 = *(undefined1 **)(param_2 + 8);
            puVar15 = puVar15 + lVar4;
            while (puVar16 != puVar14) {
              puVar16 = puVar16 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar16;
            }
          }
          else {
            puVar9 = *(undefined1 **)(param_2 + 8);
            if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
              uVar5 = 3;
LAB_014866d0:
              *puVar9 = uVar5;
              goto LAB_014866d4;
            }
            lVar13 = *(long *)param_2;
            puVar15 = puVar9 + (1 - lVar13);
            if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
            uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
            puVar14 = (undefined1 *)(uVar7 * 2);
            if (puVar15 <= puVar14) {
              puVar15 = puVar14;
            }
            if (0x3ffffffe < uVar7) {
              puVar15 = (undefined1 *)0x7fffffff;
            }
            if (puVar15 == (undefined1 *)0x0) {
              lVar4 = 0;
            }
            else {
              pZVar8 = *(Zone **)(param_2 + 0x18);
              uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
              lVar4 = *(long *)(pZVar8 + 0x10);
              if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
                lVar4 = Zone::NewExpand(pZVar8,uVar7);
              }
              else {
                *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
              }
            }
            puVar9 = puVar9 + (lVar4 - lVar13);
            puVar12 = puVar9 + 1;
            *puVar9 = 3;
            puVar14 = *(undefined1 **)param_2;
            puVar16 = *(undefined1 **)(param_2 + 8);
            puVar15 = puVar15 + lVar4;
            while (puVar16 != puVar14) {
              puVar16 = puVar16 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar16;
            }
          }
LAB_01486b08:
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15;
        }
        else {
          puVar9 = *(undefined1 **)(param_2 + 8);
          if (*(undefined1 **)(param_2 + 0x10) <= puVar9) {
            lVar13 = *(long *)param_2;
            puVar15 = puVar9 + (1 - lVar13);
            if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
            uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
            puVar14 = (undefined1 *)(uVar7 * 2);
            if (puVar15 <= puVar14) {
              puVar15 = puVar14;
            }
            if (0x3ffffffe < uVar7) {
              puVar15 = (undefined1 *)0x7fffffff;
            }
            if (puVar15 == (undefined1 *)0x0) {
              lVar4 = 0;
            }
            else {
              pZVar8 = *(Zone **)(param_2 + 0x18);
              uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
              lVar4 = *(long *)(pZVar8 + 0x10);
              if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
                lVar4 = Zone::NewExpand(pZVar8,uVar7);
              }
              else {
                *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
              }
            }
            puVar9 = puVar9 + (lVar4 - lVar13);
            puVar12 = puVar9 + 1;
            *puVar9 = 1;
            puVar14 = *(undefined1 **)param_2;
            puVar16 = *(undefined1 **)(param_2 + 8);
            puVar15 = puVar15 + lVar4;
            while (puVar16 != puVar14) {
              puVar16 = puVar16 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar16;
            }
            goto LAB_01486b08;
          }
          *puVar9 = 1;
LAB_014866d4:
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        WasmFunctionBuilder::EmitWithI32V
                  (*(WasmFunctionBuilder **)(this + 0xf8),0x23,
                   *(int *)((long)puVar3 + 0x1c) + *(int *)(this + 0x2b0));
        goto LAB_01486b28;
      }
      uVar7 = AsmType::IsA((AsmType *)*puVar3,*(AsmType **)(this + 0x268));
      if ((uVar7 & 1) == 0) {
        uVar11 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar10 = "expected fround or const global";
        goto LAB_01486ccc;
      }
      if (*(int *)(this + 0x10) != 0x28) goto LAB_01486c28;
      AsmJsScanner::Next(this_00);
      iVar6 = *(int *)(this + 0x10);
      if (iVar6 == 0x2d) {
        AsmJsScanner::Next(this_00);
        iVar6 = *(int *)(this + 0x10);
        bVar1 = true;
        if (iVar6 != -3) goto LAB_01486310;
LAB_01486560:
        iVar6 = *(int *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        if (iVar6 < 0) goto LAB_01486c88;
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = 0xe00d;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        puVar9 = *(undefined1 **)(param_2 + 8);
        if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
          *puVar9 = 3;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        else {
          lVar13 = *(long *)param_2;
          puVar15 = puVar9 + (1 - lVar13);
          if ((ulong)puVar15 >> 0x1f != 0) goto LAB_01486d0c;
          uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
          puVar14 = (undefined1 *)(uVar7 * 2);
          if (puVar15 <= puVar14) {
            puVar15 = puVar14;
          }
          if (0x3ffffffe < uVar7) {
            puVar15 = (undefined1 *)0x7fffffff;
          }
          if (puVar15 == (undefined1 *)0x0) {
            lVar4 = 0;
          }
          else {
            pZVar8 = *(Zone **)(param_2 + 0x18);
            uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
            lVar4 = *(long *)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
              lVar4 = Zone::NewExpand(pZVar8,uVar7);
            }
            else {
              *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
            }
          }
          puVar9 = puVar9 + (lVar4 - lVar13);
          puVar12 = puVar9 + 1;
          *puVar9 = 3;
          puVar14 = *(undefined1 **)param_2;
          puVar16 = *(undefined1 **)(param_2 + 8);
          while (puVar16 != puVar14) {
            puVar16 = puVar16 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar16;
          }
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
        }
        iVar17 = -iVar6;
        if (!bVar1) {
          iVar17 = iVar6;
        }
        fVar18 = (float)iVar17;
      }
      else {
        bVar1 = false;
        if (iVar6 == -3) goto LAB_01486560;
LAB_01486310:
        if (iVar6 != -4) goto LAB_01486c70;
        dVar20 = *(double *)(this + 0xe0);
        AsmJsScanner::Next(this_00);
        *(undefined4 *)(puVar2 + 4) = 1;
        *puVar2 = 0xe00d;
        *(int *)((long)puVar2 + 0x1c) = (*(int *)(param_2 + 8) + iVar17) - *(int *)param_2;
        puVar9 = *(undefined1 **)(param_2 + 8);
        if (puVar9 < *(undefined1 **)(param_2 + 0x10)) {
          *puVar9 = 3;
          *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        }
        else {
          lVar13 = *(long *)param_2;
          puVar15 = puVar9 + (1 - lVar13);
          if ((ulong)puVar15 >> 0x1f != 0) {
LAB_01486d0c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar7 = (long)*(undefined1 **)(param_2 + 0x10) - lVar13;
          puVar14 = (undefined1 *)(uVar7 * 2);
          if (puVar15 <= puVar14) {
            puVar15 = puVar14;
          }
          if (0x3ffffffe < uVar7) {
            puVar15 = (undefined1 *)0x7fffffff;
          }
          if (puVar15 == (undefined1 *)0x0) {
            lVar4 = 0;
          }
          else {
            pZVar8 = *(Zone **)(param_2 + 0x18);
            uVar7 = (ulong)(puVar15 + 7) & 0xfffffffffffffff8;
            lVar4 = *(long *)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar4) < uVar7) {
              lVar4 = Zone::NewExpand(pZVar8,uVar7);
            }
            else {
              *(ulong *)(pZVar8 + 0x10) = lVar4 + uVar7;
            }
          }
          puVar9 = puVar9 + (lVar4 - lVar13);
          puVar12 = puVar9 + 1;
          *puVar9 = 3;
          puVar14 = *(undefined1 **)param_2;
          puVar16 = *(undefined1 **)(param_2 + 8);
          while (puVar16 != puVar14) {
            puVar16 = puVar16 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar16;
          }
          *(undefined1 **)param_2 = puVar9;
          *(undefined1 **)(param_2 + 8) = puVar12;
          *(undefined1 **)(param_2 + 0x10) = puVar15 + lVar4;
        }
        dVar19 = -dVar20;
        if (!bVar1) {
          dVar19 = dVar20;
        }
        if (dVar19 <= 3.4028234663852886e+38) {
          if (dVar19 < -3.4028234663852886e+38) {
            if (-3.4028235677973362e+38 <= dVar19) {
              fVar18 = -3.4028235e+38;
            }
            else {
              fVar18 = -INFINITY;
            }
          }
          else {
            fVar18 = (float)dVar19;
          }
        }
        else if (dVar19 <= 3.4028235677973362e+38) {
          fVar18 = 3.4028235e+38;
        }
        else {
          fVar18 = INFINITY;
        }
      }
      WasmFunctionBuilder::EmitF32Const(*(WasmFunctionBuilder **)(this + 0xf8),fVar18);
      WasmFunctionBuilder::EmitSetLocal
                (*(WasmFunctionBuilder **)(this + 0xf8),*(uint *)((long)puVar2 + 0x1c));
      if (*(int *)(this + 0x10) != 0x29) goto LAB_01486c28;
      AsmJsScanner::Next(this_00);
    }
    iVar6 = *(int *)(this + 0x10);
    if (iVar6 != 0x2c) break;
    this[0x58] = (AsmJsParser)0x1;
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
    this[0x58] = (AsmJsParser)0x0;
  } while( true );
  if (iVar6 == 0x3b) {
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
  }
  else {
    if (iVar6 == 0x7d) {
      return;
    }
    if (this[0xec] == (AsmJsParser)0x0) {
      this[0x1e4] = (AsmJsParser)0x1;
      *(char **)(this + 0x1e8) = "Expected ;";
      *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
    }
  }
  if (iVar6 != -0x26da) {
    return;
  }
  goto LAB_014860dc;
}

