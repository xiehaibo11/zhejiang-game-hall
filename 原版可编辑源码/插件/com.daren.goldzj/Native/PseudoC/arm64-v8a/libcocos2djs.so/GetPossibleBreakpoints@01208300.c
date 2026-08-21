
/* v8::internal::WasmScript::GetPossibleBreakpoints(v8::internal::wasm::NativeModule*,
   v8::debug::Location const&, v8::debug::Location const&,
   std::__ndk1::vector<v8::debug::BreakLocation, std::__ndk1::allocator<v8::debug::BreakLocation>
   >*) */

void v8::internal::WasmScript::GetPossibleBreakpoints
               (NativeModule *param_1,Location *param_2,Location *param_3,vector *param_4)

{
  bool bVar1;
  uchar *puVar2;
  long lVar3;
  Location *this;
  long lVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  uint *puVar17;
  WasmModule *pWVar18;
  undefined4 local_144;
  int iStack_140;
  uint local_13c;
  undefined **local_138;
  undefined8 local_130;
  uchar *local_128;
  uchar *puStack_120;
  byte local_108;
  void *local_f8;
  undefined4 local_f0 [6];
  undefined8 local_d8;
  Zone *local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  Zone aZStack_b0 [64];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pWVar18 = *(WasmModule **)(param_1 + 200);
  iVar6 = debug::Location::GetLineNumber(param_2);
  if ((iVar6 == 0) && (iVar6 = debug::Location::GetColumnNumber(param_2), -1 < iVar6)) {
    uVar13 = debug::Location::IsEmpty(param_3);
    if ((uVar13 & 1) == 0) {
      iVar6 = debug::Location::GetLineNumber(param_3);
      if ((iVar6 == 0) && (iVar6 = debug::Location::GetColumnNumber(param_3), -1 < iVar6)) {
        iVar6 = debug::Location::GetColumnNumber(param_3);
        iVar9 = debug::Location::GetColumnNumber(param_2);
        if (iVar9 <= iVar6) goto LAB_01208398;
      }
    }
    else {
LAB_01208398:
      uVar7 = debug::Location::GetColumnNumber(param_2);
      uVar7 = wasm::GetNearestWasmFunction(pWVar18,uVar7);
      if (-1 < (int)uVar7) {
        uVar8 = debug::Location::GetColumnNumber(param_2);
        uVar13 = debug::Location::IsEmpty(param_3);
        if ((uVar13 & 1) == 0) {
          uVar10 = debug::Location::GetColumnNumber(param_3);
          uVar11 = wasm::GetNearestWasmFunction(pWVar18,uVar10);
        }
        else {
          uVar11 = (int)((ulong)(*(long *)(pWVar18 + 0x90) - *(long *)(pWVar18 + 0x88)) >> 5) - 1;
          lVar15 = *(long *)(pWVar18 + 0x88) + (long)(int)uVar11 * 0x20;
          uVar10 = *(int *)(lVar15 + 0x14) + *(int *)(lVar15 + 0x10);
        }
        if ((uVar7 != uVar11) ||
           (lVar15 = *(long *)(pWVar18 + 0x88) + (ulong)uVar7 * 0x20,
           uVar8 <= (uint)(*(int *)(lVar15 + 0x14) + *(int *)(lVar15 + 0x10)))) {
          local_c8 = &PTR__AccountingAllocator_01cbced0;
          local_c0 = 0;
          uStack_b8 = 0;
          Zone::Zone(aZStack_b0,(AccountingAllocator *)&local_c8,"../../src/wasm/wasm-debug.cc:998")
          ;
          if ((int)uVar7 <= (int)uVar11) {
            lVar15 = **(long **)(param_1 + 0xe0);
            uVar13 = (ulong)uVar7;
            do {
              lVar3 = *(long *)(pWVar18 + 0x88) + uVar13 * 0x20;
              piVar16 = (int *)(lVar3 + 0x14);
              if (*piVar16 != 0) {
                local_f0[0] = 0;
                local_d8 = 0;
                local_d0 = aZStack_b0;
                puVar17 = (uint *)(lVar3 + 0x10);
                uVar7 = *puVar17;
                wasm::BytecodeIterator::BytecodeIterator
                          ((BytecodeIterator *)&local_138,(uchar *)(lVar15 + (ulong)uVar7),
                           (uchar *)(lVar15 + (ulong)(*piVar16 + uVar7)),(BodyLocalDecls *)local_f0)
                ;
                puVar5 = puStack_120;
                uVar12 = local_130;
                for (puVar2 = local_128;
                    (puVar5 != puVar2 &&
                    (local_13c = *puVar17 + ((int)puVar2 - (int)uVar12), local_13c < uVar10));
                    puVar2 = puVar2 + (uVar14 & 0xffffffff)) {
                  if (uVar8 <= local_13c) {
                    local_144 = 3;
                    iStack_140 = 0;
                    this = *(Location **)(param_4 + 8);
                    if (this < *(Location **)(param_4 + 0x10)) {
                      debug::Location::Location(this,0,local_13c);
                      *(undefined4 *)(this + 0xc) = 3;
                      *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 0x10;
                    }
                    else {
                      std::__ndk1::
                      vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>>
                      ::__emplace_back_slow_path<int,unsigned_int&,v8::debug::BreakLocationType>
                                ((vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>>
                                  *)param_4,&iStack_140,&local_13c,(BreakLocationType *)&local_144);
                    }
                  }
                  uVar14 = wasm::OpcodeLength(puVar2,puVar5);
                }
                local_138 = &PTR__Decoder_01cbc3a8;
                if ((local_108 & 1) != 0) {
                  operator_delete(local_f8);
                }
              }
              bVar1 = (long)uVar13 < (long)(int)uVar11;
              uVar13 = uVar13 + 1;
            } while (bVar1);
          }
          Zone::~Zone(aZStack_b0);
          AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_c8);
          uVar12 = 1;
          goto LAB_01208350;
        }
      }
    }
  }
  uVar12 = 0;
LAB_01208350:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}

