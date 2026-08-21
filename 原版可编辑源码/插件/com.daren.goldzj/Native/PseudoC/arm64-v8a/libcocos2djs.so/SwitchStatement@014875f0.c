
/* v8::internal::wasm::AsmJsParser::SwitchStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::SwitchStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  AsmType *this_01;
  long *plVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  AsmJsParser *local_58;
  int *piVar12;
  
  if (*(int *)(this + 0x10) == -0x26db) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) == 0x28) {
      AsmJsScanner::Next(this_00);
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)(this + 0x108)) {
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Stack overflow while parsing asm.js module.";
        goto LAB_01487820;
      }
      this_01 = (AsmType *)Expression(this,(AsmType *)0x0);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return;
      }
      uVar4 = AsmType::IsA(this_01,(AsmType *)0x721);
      if ((uVar4 & 1) == 0) {
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Expected signed for switch value";
        goto LAB_01487820;
      }
      if (*(int *)(this + 0x10) != 0x29) goto LAB_0148780c;
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x1dc) < 1) {
        *(undefined4 *)(this + 0x1dc) = 1;
      }
      uVar2 = *(uint *)(this + 0x1d8);
      WasmFunctionBuilder::EmitSetLocal(*(WasmFunctionBuilder **)(this + 0xf8),uVar2);
      BareBegin(this,0,*(undefined4 *)(this + 0x29c));
      WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
      local_60 = *(undefined8 *)(this + 0x1d0);
      local_58 = this + 0x1b8;
      *(undefined4 *)(this + 0x29c) = 0;
      local_70 = (int *)0x0;
      local_68 = 0;
      lVar8 = *(long *)(this + 0x1c0);
      if (*(long *)(this + 0x1b8) != lVar8) {
        local_70 = *(int **)(lVar8 + -0x20);
        *(undefined8 *)(lVar8 + -0x20) = 0;
        *(undefined8 *)(lVar8 + -0x18) = 0;
        local_68 = *(undefined8 *)(lVar8 + -0x10);
        *(undefined8 *)(lVar8 + -0x10) = 0;
        plVar5 = (long *)(*(long *)(this + 0x1c0) + -0x20);
        lVar8 = *plVar5;
        if (lVar8 != 0) {
          *(long *)(*(long *)(this + 0x1c0) + -0x18) = lVar8;
        }
        *(long **)(this + 0x1c0) = plVar5;
      }
      local_78 = local_70;
      GatherCases(this,(ZoneVector *)&local_78);
      if (*(int *)(this + 0x10) == 0x7b) {
        AsmJsScanner::Next(this_00);
        if ((long)local_70 - (long)local_78 != -4) {
          lVar8 = ((long)local_70 - (long)local_78 >> 2) + 1;
          do {
            BareBegin(this,3,0);
            WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar3 = local_70;
        if (local_78 == local_70) {
          iVar10 = 0;
        }
        else {
          piVar11 = local_78;
          iVar9 = 0;
          do {
            piVar12 = piVar11 + 1;
            iVar10 = *piVar11;
            WasmFunctionBuilder::EmitGetLocal(*(WasmFunctionBuilder **)(this + 0xf8),uVar2);
            WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar10);
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x46);
            iVar10 = iVar9 + 1;
            WasmFunctionBuilder::EmitWithI32V(*(WasmFunctionBuilder **)(this + 0xf8),0xd,iVar9);
            piVar11 = piVar12;
            iVar9 = iVar10;
          } while (piVar3 != piVar12);
        }
        WasmFunctionBuilder::EmitWithI32V(*(WasmFunctionBuilder **)(this + 0xf8),0xc,iVar10);
        if (this[0x1e4] == (AsmJsParser)0x0) {
          do {
            iVar10 = *(int *)(this + 0x10);
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
            *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
            if (iVar10 != -0x26e7) goto LAB_01487890;
            uVar4 = GetCurrentStackPosition();
            if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_01487954;
            ValidateCase(this);
          } while (this[0x1e4] == (AsmJsParser)0x0);
          goto LAB_01487970;
        }
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
        *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
LAB_01487890:
        iVar10 = *(int *)(this + 0x10);
        if (iVar10 != -0x26e4) {
LAB_014878c4:
          if (iVar10 == 0x7d) {
            AsmJsScanner::Next(this_00);
            *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
            goto LAB_01487970;
          }
          goto LAB_014878f0;
        }
        uVar4 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar4) {
          ValidateDefault(this);
          if (this[0x1e4] != (AsmJsParser)0x0) goto LAB_01487970;
          iVar10 = *(int *)(this + 0x10);
          goto LAB_014878c4;
        }
LAB_01487954:
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Stack overflow while parsing asm.js module.";
      }
      else {
LAB_014878f0:
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Unexpected token";
      }
      *(char **)(this + 0x1e8) = pcVar6;
      *(undefined4 *)(this + 0x1f0) = uVar7;
LAB_01487970:
      puVar1 = *(undefined8 **)(local_58 + 8);
      if (puVar1 < *(undefined8 **)(local_58 + 0x10)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = local_60;
        *puVar1 = local_78;
        puVar1[1] = local_70;
        puVar1[2] = local_68;
        *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 0x20;
        return;
      }
      std::__ndk1::
      vector<v8::internal::ZoneVector<int>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<int>>>
      ::__emplace_back_slow_path<v8::internal::ZoneVector<int>>
                ((vector<v8::internal::ZoneVector<int>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<int>>>
                  *)local_58,(ZoneVector *)&local_78);
      return;
    }
  }
LAB_0148780c:
  uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar6 = "Unexpected token";
LAB_01487820:
  *(char **)(this + 0x1e8) = pcVar6;
  *(undefined4 *)(this + 0x1f0) = uVar7;
  return;
}

