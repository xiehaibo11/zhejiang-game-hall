
/* v8::internal::wasm::SideTable::SideTable(v8::internal::Zone*, v8::internal::wasm::WasmModule
   const*, v8::internal::wasm::InterpreterCode*) */

void __thiscall
v8::internal::wasm::SideTable::SideTable
          (SideTable *this,Zone *param_1,WasmModule *param_2,InterpreterCode *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  CLabel CVar4;
  long lVar5;
  bool bVar6;
  ushort *puVar7;
  ulong uVar8;
  CLabel *pCVar9;
  long lVar10;
  CLabel *pCVar11;
  CLabel *pCVar12;
  CLabel *pCVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  CLabel *pCVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  int *piVar25;
  CLabel *pCVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  long lVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long *local_160;
  CLabel *local_120;
  int local_114;
  undefined **local_110 [2];
  ushort *local_100;
  ushort *puStack_f8;
  byte local_e0;
  void *local_d0;
  long local_c8 [2];
  long *local_b8;
  Zone aZStack_b0 [16];
  CLabel *local_a0;
  long lStack_98;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(Zone **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(SideTable **)this = this + 8;
  *(undefined4 *)(this + 0x20) = 0;
  Zone::Zone(aZStack_b0,*(AccountingAllocator **)(param_1 + 0x20),
             "../../src/wasm/wasm-interpreter.cc:673");
  uVar31 = *(undefined4 *)**(undefined8 **)param_3;
  if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
    pCVar12 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
  }
  else {
    pCVar12 = local_a0;
    local_a0 = local_a0 + 0x30;
  }
  *(undefined8 *)pCVar12 = 0;
  *(undefined4 *)(pCVar12 + 8) = 0;
  *(undefined4 *)(pCVar12 + 0xc) = uVar31;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x18) = 0;
  *(undefined8 *)(pCVar12 + 0x20) = 0;
  *(Zone **)(pCVar12 + 0x28) = aZStack_b0;
  if ((ulong)(lStack_98 - (long)local_a0) < 0x20) {
    pCVar13 = (CLabel *)Zone::NewExpand(aZStack_b0,0x20);
  }
  else {
    pCVar13 = local_a0;
    local_a0 = local_a0 + 0x20;
  }
  uVar14 = *(undefined8 *)(param_3 + 0x30);
  *(CLabel **)(pCVar13 + 8) = pCVar12;
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined4 *)(pCVar13 + 0x18) = uVar31;
  pCVar13[0x1c] = (CLabel)0x0;
  *(undefined8 *)pCVar13 = uVar14;
  BytecodeIterator::BytecodeIterator
            ((BytecodeIterator *)local_110,*(uchar **)(param_3 + 0x30),*(uchar **)(param_3 + 0x38),
             (BodyLocalDecls *)(param_3 + 8));
  if (local_100 < puStack_f8) {
    plVar23 = (long *)0x0;
    pCVar12 = pCVar13 + 0x20;
    local_114 = 0;
    local_160 = (long *)0x0;
    plVar16 = (long *)0x0;
    local_120 = pCVar12;
    do {
      uVar24 = (uint)(byte)*local_100;
      uVar8 = WasmOpcodes::IsPrefixOpcode(uVar24);
      if ((uVar8 & 1) != 0) {
        uVar24 = ((*local_100 & 0xff00) << 8 | (uint)*local_100 << 0x18) >> 0x10;
      }
      CVar4 = pCVar12[-4];
      if (CVar4 == (CLabel)0x0) {
        uVar14 = StackEffect(param_2,(Signature *)**(undefined8 **)param_3,(uchar *)local_100,
                             (uchar *)puStack_f8);
        iVar30 = local_114 - (int)uVar14;
        local_114 = iVar30 + (int)((ulong)uVar14 >> 0x20);
        if (*(int *)(this + 0x20) < local_114) {
          *(int *)(this + 0x20) = local_114;
        }
      }
      else {
        iVar30 = 0;
      }
      if ((plVar16 != plVar23) && (uVar8 = WasmOpcodes::IsThrowingOpcode(uVar24), (uVar8 & 1) != 0))
      {
        if (CVar4 == (CLabel)0x0) {
          SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
          ::CLabel::Ref(*(CLabel **)(pCVar13 + plVar23[-1] * 0x20 + 0x10),(uchar *)local_100,iVar30)
          ;
        }
        if (*(int *)(this + 0x20) <= iVar30) {
          *(int *)(this + 0x20) = iVar30 + 1;
        }
      }
      pCVar26 = pCVar13;
      plVar33 = plVar16;
      switch(uVar24) {
      case 2:
      case 3:
        uVar20 = (uint)*(byte *)((long)local_100 + 1);
        puVar27 = (undefined4 *)0x0;
        iVar32 = 0;
        bVar6 = false;
        iVar30 = 0;
        switch(uVar20) {
        case 0x40:
          break;
        default:
          if ((char)*(byte *)((long)local_100 + 1) < '\0') {
            uVar20 = uVar20 & 0x7f | ((byte)local_100[1] & 0x7f) << 7;
            if ((char)(byte)local_100[1] < '\0') {
              uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe;
              if ((char)*(byte *)((long)local_100 + 3) < '\0') {
                uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15;
                if ((char)(byte)local_100[2] < '\0') {
                  uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
                }
                else {
                  uVar20 = (int)(uVar20 << 4) >> 4;
                }
              }
              else {
                uVar20 = (int)(uVar20 << 0xb) >> 0xb;
              }
            }
            else {
              uVar20 = (int)(uVar20 << 0x12) >> 0x12;
            }
          }
          else {
            uVar20 = (int)(uVar20 << 0x19) >> 0x19;
          }
          iVar32 = 10;
          puVar27 = *(undefined4 **)(*(long *)(param_2 + 0x58) + (ulong)uVar20 * 8);
          bVar6 = true;
          iVar30 = puVar27[2];
          break;
        case 0x68:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 9;
          break;
        case 0x6f:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 6;
          break;
        case 0x70:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 7;
          break;
        case 0x7b:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 5;
          break;
        case 0x7c:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 4;
          break;
        case 0x7d:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 3;
          break;
        case 0x7e:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 2;
          break;
        case 0x7f:
          puVar27 = (undefined4 *)0x0;
          bVar6 = false;
          iVar30 = 0;
          iVar32 = 1;
        }
        if (uVar24 == 3) {
          if (bVar6) {
            uVar31 = puVar27[2];
          }
          else {
LAB_01213090:
            uVar31 = 0;
          }
        }
        else {
          if (iVar32 == 0) goto LAB_01213090;
          if (iVar32 == 10) {
            uVar31 = *puVar27;
          }
          else {
            uVar31 = 1;
          }
        }
        if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
          pCVar9 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
        }
        else {
          pCVar9 = local_a0;
          local_a0 = local_a0 + 0x30;
        }
        puVar7 = local_100;
        *(undefined8 *)pCVar9 = 0;
        *(int *)(pCVar9 + 8) = local_114 - iVar30;
        *(undefined4 *)(pCVar9 + 0xc) = uVar31;
        *(undefined8 *)(pCVar9 + 0x10) = 0;
        *(undefined8 *)(pCVar9 + 0x18) = 0;
        *(undefined8 *)(pCVar9 + 0x20) = 0;
        *(Zone **)(pCVar9 + 0x28) = aZStack_b0;
        if (iVar32 == 0) {
          uVar31 = 0;
        }
        else if (iVar32 == 10) {
          uVar31 = *puVar27;
        }
        else {
          uVar31 = 1;
        }
        if (pCVar12 < local_120) {
          *(ushort **)pCVar12 = local_100;
          *(CLabel **)(pCVar12 + 8) = pCVar9;
          *(undefined8 *)(pCVar12 + 0x10) = 0;
          *(undefined4 *)(pCVar12 + 0x18) = uVar31;
          pCVar12[0x1c] = (CLabel)0x0;
          pCVar11 = pCVar12;
        }
        else {
          lVar21 = (long)pCVar12 - (long)pCVar13 >> 5;
          uVar8 = lVar21 + 1;
          if (uVar8 >> 0x1a != 0) {
LAB_01213784:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar22 = (long)local_120 - (long)pCVar13 >> 4;
          if (uVar8 <= uVar22) {
            uVar8 = uVar22;
          }
          if (0x1fffffe < (ulong)((long)local_120 - (long)pCVar13 >> 5)) {
            uVar8 = 0x3ffffff;
          }
          if (uVar8 == 0) {
            local_120 = (CLabel *)0x0;
          }
          else {
            uVar22 = uVar8 * 0x20;
            if (uVar22 < (ulong)(lStack_98 - (long)local_a0) ||
                uVar22 - (lStack_98 - (long)local_a0) == 0) {
              local_120 = local_a0;
              local_a0 = local_a0 + uVar22;
            }
            else {
              local_120 = (CLabel *)Zone::NewExpand(aZStack_b0,uVar22);
            }
          }
          pCVar11 = local_120 + lVar21 * 0x20;
          local_120 = local_120 + uVar8 * 0x20;
          *(ushort **)pCVar11 = puVar7;
          *(CLabel **)(pCVar11 + 8) = pCVar9;
          *(undefined8 *)(pCVar11 + 0x10) = 0;
          *(undefined4 *)(pCVar11 + 0x18) = uVar31;
          pCVar11[0x1c] = (CLabel)0x0;
          pCVar26 = pCVar11;
          while (pCVar12 != pCVar13) {
            uVar14 = *(undefined8 *)(pCVar12 + -0x20);
            uVar35 = *(undefined8 *)(pCVar12 + -8);
            uVar34 = *(undefined8 *)(pCVar12 + -0x10);
            *(undefined8 *)(pCVar26 + -0x18) = *(undefined8 *)(pCVar12 + -0x18);
            *(undefined8 *)(pCVar26 + -0x20) = uVar14;
            *(undefined8 *)(pCVar26 + -8) = uVar35;
            *(undefined8 *)(pCVar26 + -0x10) = uVar34;
            pCVar26 = pCVar26 + -0x20;
            pCVar12 = pCVar12 + -0x20;
          }
        }
        pCVar12 = pCVar11 + 0x20;
        pCVar11[0x1c] = pCVar11[-4];
        if (uVar24 == 3) {
          *(ushort **)pCVar9 = local_100;
        }
        break;
      case 4:
        uVar20 = (uint)*(byte *)((long)local_100 + 1);
        puVar27 = (undefined4 *)0x0;
        iVar32 = 1;
        uVar31 = 1;
        iVar30 = local_114;
        switch(uVar20) {
        case 0x40:
          iVar32 = 0;
          puVar27 = (undefined4 *)0x0;
          uVar31 = 0;
          break;
        default:
          if ((char)*(byte *)((long)local_100 + 1) < '\0') {
            uVar20 = uVar20 & 0x7f | ((byte)local_100[1] & 0x7f) << 7;
            if ((char)(byte)local_100[1] < '\0') {
              uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe;
              if ((char)*(byte *)((long)local_100 + 3) < '\0') {
                uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15;
                if ((char)(byte)local_100[2] < '\0') {
                  uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
                }
                else {
                  uVar20 = (int)(uVar20 << 4) >> 4;
                }
              }
              else {
                uVar20 = (int)(uVar20 << 0xb) >> 0xb;
              }
            }
            else {
              uVar20 = (int)(uVar20 << 0x12) >> 0x12;
            }
          }
          else {
            uVar20 = (int)(uVar20 << 0x19) >> 0x19;
          }
          iVar32 = 10;
          puVar27 = *(undefined4 **)(*(long *)(param_2 + 0x58) + (ulong)uVar20 * 8);
          uVar31 = *puVar27;
          iVar30 = local_114 - puVar27[2];
          break;
        case 0x68:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 9;
          break;
        case 0x6f:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 6;
          break;
        case 0x70:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 7;
          break;
        case 0x7b:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 5;
          break;
        case 0x7c:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 4;
          break;
        case 0x7d:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 3;
          break;
        case 0x7e:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar32 = 2;
          break;
        case 0x7f:
          break;
        }
        if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
          pCVar11 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
        }
        else {
          pCVar11 = local_a0;
          local_a0 = local_a0 + 0x30;
        }
        *(undefined8 *)pCVar11 = 0;
        *(int *)(pCVar11 + 8) = iVar30;
        *(undefined4 *)(pCVar11 + 0xc) = uVar31;
        *(undefined8 *)(pCVar11 + 0x10) = 0;
        *(undefined8 *)(pCVar11 + 0x18) = 0;
        *(undefined8 *)(pCVar11 + 0x20) = 0;
        *(Zone **)(pCVar11 + 0x28) = aZStack_b0;
        if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
          pCVar9 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
        }
        else {
          pCVar9 = local_a0;
          local_a0 = local_a0 + 0x30;
        }
        puVar7 = local_100;
        *(undefined8 *)pCVar9 = 0;
        *(undefined8 *)(pCVar9 + 0xc) = 0;
        *(undefined8 *)(pCVar9 + 0x1c) = 0;
        *(int *)(pCVar9 + 8) = local_114;
        *(undefined8 *)(pCVar9 + 0x14) = 0;
        *(undefined4 *)(pCVar9 + 0x24) = 0;
        *(Zone **)(pCVar9 + 0x28) = aZStack_b0;
        if (iVar32 == 0) {
          uVar31 = 0;
        }
        else if (iVar32 == 10) {
          uVar31 = *puVar27;
        }
        else {
          uVar31 = 1;
        }
        if (pCVar12 < local_120) {
          *(ushort **)pCVar12 = local_100;
          *(CLabel **)(pCVar12 + 8) = pCVar11;
          *(CLabel **)(pCVar12 + 0x10) = pCVar9;
          *(undefined4 *)(pCVar12 + 0x18) = uVar31;
          pCVar12[0x1c] = (CLabel)0x0;
          pCVar17 = pCVar12;
        }
        else {
          lVar21 = (long)pCVar12 - (long)pCVar13 >> 5;
          uVar8 = lVar21 + 1;
          if (uVar8 >> 0x1a != 0) goto LAB_01213784;
          uVar22 = (long)local_120 - (long)pCVar13 >> 4;
          if (uVar8 <= uVar22) {
            uVar8 = uVar22;
          }
          if (0x1fffffe < (ulong)((long)local_120 - (long)pCVar13 >> 5)) {
            uVar8 = 0x3ffffff;
          }
          if (uVar8 == 0) {
            local_120 = (CLabel *)0x0;
          }
          else {
            uVar22 = uVar8 * 0x20;
            if (uVar22 < (ulong)(lStack_98 - (long)local_a0) ||
                uVar22 - (lStack_98 - (long)local_a0) == 0) {
              local_120 = local_a0;
              local_a0 = local_a0 + uVar22;
            }
            else {
              local_120 = (CLabel *)Zone::NewExpand(aZStack_b0,uVar22);
            }
          }
          pCVar17 = local_120 + lVar21 * 0x20;
          local_120 = local_120 + uVar8 * 0x20;
          *(ushort **)pCVar17 = puVar7;
          *(CLabel **)(pCVar17 + 8) = pCVar11;
          *(CLabel **)(pCVar17 + 0x10) = pCVar9;
          *(undefined4 *)(pCVar17 + 0x18) = uVar31;
          pCVar17[0x1c] = (CLabel)0x0;
          pCVar26 = pCVar17;
          while (pCVar12 != pCVar13) {
            uVar14 = *(undefined8 *)(pCVar12 + -0x20);
            uVar35 = *(undefined8 *)(pCVar12 + -8);
            uVar34 = *(undefined8 *)(pCVar12 + -0x10);
            *(undefined8 *)(pCVar26 + -0x18) = *(undefined8 *)(pCVar12 + -0x18);
            *(undefined8 *)(pCVar26 + -0x20) = uVar14;
            *(undefined8 *)(pCVar26 + -8) = uVar35;
            *(undefined8 *)(pCVar26 + -0x10) = uVar34;
            pCVar26 = pCVar26 + -0x20;
            pCVar12 = pCVar12 + -0x20;
          }
        }
        pCVar12 = pCVar17 + 0x20;
        pCVar17[0x1c] = pCVar17[-4];
        if (CVar4 == (CLabel)0x0) {
LAB_012133b8:
          SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
          ::CLabel::Ref(pCVar9,(uchar *)local_100,local_114);
        }
        break;
      case 5:
        pCVar12[-4] = pCVar12[-0x24];
        if (pCVar12[-0x24] == (CLabel)0x0) {
          SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
          ::CLabel::Ref(*(CLabel **)(pCVar12 + -0x18),(uchar *)local_100,local_114);
        }
        **(long **)(pCVar12 + -0x10) = (long)((long)local_100 + 1);
        piVar25 = *(int **)(pCVar12 + -0x10);
        plVar16 = *(long **)(piVar25 + 4);
        plVar18 = *(long **)(piVar25 + 6);
        if (plVar16 != plVar18) {
          lVar21 = *(long *)(param_3 + 0x30);
          do {
            lVar15 = *plVar16;
            lVar29 = plVar16[1];
            local_c8[0] = lVar15 - lVar21;
            iVar30 = *piVar25;
            iVar32 = piVar25[2];
            local_b8 = local_c8;
            lVar10 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     ::
                     __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                               ((ulong *)this,(piecewise_construct_t *)local_c8,
                                (tuple *)&DAT_019ef5ec,(tuple *)&local_b8);
            *(int *)(lVar10 + 0x28) = iVar30 - (int)lVar15;
            *(int *)(lVar10 + 0x2c) = (int)lVar29 - iVar32;
            plVar16 = plVar16 + 2;
            *(int *)(lVar10 + 0x30) = piVar25[3];
          } while (plVar16 != plVar18);
          piVar25 = *(int **)(pCVar12 + -0x10);
        }
        local_114 = piVar25[2];
        *(undefined8 *)(pCVar12 + -0x10) = 0;
        break;
      case 6:
        uVar20 = (uint)*(byte *)((long)local_100 + 1);
        puVar27 = (undefined4 *)0x0;
        iVar30 = 0;
        uVar31 = 0;
        switch(uVar20) {
        case 0x40:
          break;
        default:
          if ((char)*(byte *)((long)local_100 + 1) < '\0') {
            uVar20 = uVar20 & 0x7f | ((byte)local_100[1] & 0x7f) << 7;
            if ((char)(byte)local_100[1] < '\0') {
              uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe;
              if ((char)*(byte *)((long)local_100 + 3) < '\0') {
                uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15;
                if ((char)(byte)local_100[2] < '\0') {
                  uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
                }
                else {
                  uVar20 = (int)(uVar20 << 4) >> 4;
                }
              }
              else {
                uVar20 = (int)(uVar20 << 0xb) >> 0xb;
              }
            }
            else {
              uVar20 = (int)(uVar20 << 0x12) >> 0x12;
            }
          }
          else {
            uVar20 = (int)(uVar20 << 0x19) >> 0x19;
          }
          iVar30 = 10;
          puVar27 = *(undefined4 **)(*(long *)(param_2 + 0x58) + (ulong)uVar20 * 8);
          uVar31 = *puVar27;
          break;
        case 0x68:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 9;
          break;
        case 0x6f:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 6;
          break;
        case 0x70:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 7;
          break;
        case 0x7b:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 5;
          break;
        case 0x7c:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 4;
          break;
        case 0x7d:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 3;
          break;
        case 0x7e:
          puVar27 = (undefined4 *)0x0;
          uVar31 = 1;
          iVar30 = 2;
          break;
        case 0x7f:
          puVar27 = (undefined4 *)0x0;
          iVar30 = 1;
          uVar31 = 1;
        }
        if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
          pCVar9 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
        }
        else {
          pCVar9 = local_a0;
          local_a0 = local_a0 + 0x30;
        }
        *(undefined8 *)pCVar9 = 0;
        *(int *)(pCVar9 + 8) = local_114;
        *(undefined4 *)(pCVar9 + 0xc) = uVar31;
        *(undefined8 *)(pCVar9 + 0x10) = 0;
        *(undefined8 *)(pCVar9 + 0x18) = 0;
        *(undefined8 *)(pCVar9 + 0x20) = 0;
        *(Zone **)(pCVar9 + 0x28) = aZStack_b0;
        if ((ulong)(lStack_98 - (long)local_a0) < 0x30) {
          pCVar11 = (CLabel *)Zone::NewExpand(aZStack_b0,0x30);
        }
        else {
          pCVar11 = local_a0;
          local_a0 = local_a0 + 0x30;
        }
        puVar7 = local_100;
        *(int *)(pCVar11 + 8) = local_114;
        *(undefined4 *)(pCVar11 + 0xc) = 1;
        *(undefined8 *)pCVar11 = 0;
        *(undefined8 *)(pCVar11 + 0x10) = 0;
        *(undefined8 *)(pCVar11 + 0x18) = 0;
        *(undefined8 *)(pCVar11 + 0x20) = 0;
        *(Zone **)(pCVar11 + 0x28) = aZStack_b0;
        uVar31 = 0;
        if (iVar30 != 0) {
          if (iVar30 == 10) {
            uVar31 = *puVar27;
          }
          else {
            uVar31 = 1;
          }
        }
        if (pCVar12 < local_120) {
          *(ushort **)pCVar12 = local_100;
          *(CLabel **)(pCVar12 + 8) = pCVar9;
          *(CLabel **)(pCVar12 + 0x10) = pCVar11;
          *(undefined4 *)(pCVar12 + 0x18) = uVar31;
          pCVar12[0x1c] = (CLabel)0x0;
          pCVar17 = pCVar12;
        }
        else {
          lVar21 = (long)pCVar12 - (long)pCVar13 >> 5;
          uVar8 = lVar21 + 1;
          if (uVar8 >> 0x1a != 0) goto LAB_01213784;
          uVar22 = (long)local_120 - (long)pCVar13 >> 4;
          if (uVar8 <= uVar22) {
            uVar8 = uVar22;
          }
          if (0x1fffffe < (ulong)((long)local_120 - (long)pCVar13 >> 5)) {
            uVar8 = 0x3ffffff;
          }
          if (uVar8 == 0) {
            local_120 = (CLabel *)0x0;
          }
          else {
            uVar22 = uVar8 * 0x20;
            if (uVar22 < (ulong)(lStack_98 - (long)local_a0) ||
                uVar22 - (lStack_98 - (long)local_a0) == 0) {
              local_120 = local_a0;
              local_a0 = local_a0 + uVar22;
            }
            else {
              local_120 = (CLabel *)Zone::NewExpand(aZStack_b0,uVar22);
            }
          }
          pCVar17 = local_120 + lVar21 * 0x20;
          local_120 = local_120 + uVar8 * 0x20;
          *(ushort **)pCVar17 = puVar7;
          *(CLabel **)(pCVar17 + 8) = pCVar9;
          *(CLabel **)(pCVar17 + 0x10) = pCVar11;
          *(undefined4 *)(pCVar17 + 0x18) = uVar31;
          pCVar17[0x1c] = (CLabel)0x0;
          pCVar26 = pCVar17;
          while (pCVar12 != pCVar13) {
            uVar14 = *(undefined8 *)(pCVar12 + -0x20);
            uVar35 = *(undefined8 *)(pCVar12 + -8);
            uVar34 = *(undefined8 *)(pCVar12 + -0x10);
            *(undefined8 *)(pCVar26 + -0x18) = *(undefined8 *)(pCVar12 + -0x18);
            *(undefined8 *)(pCVar26 + -0x20) = uVar14;
            *(undefined8 *)(pCVar26 + -8) = uVar35;
            *(undefined8 *)(pCVar26 + -0x10) = uVar34;
            pCVar26 = pCVar26 + -0x20;
            pCVar12 = pCVar12 + -0x20;
          }
        }
        pCVar12 = pCVar17 + 0x20;
        lVar21 = (long)pCVar12 - (long)pCVar26 >> 5;
        lVar29 = lVar21 + -1;
        if (plVar23 < local_160) {
          *plVar23 = lVar29;
          plVar18 = plVar23;
        }
        else {
          lVar10 = (long)plVar23 - (long)plVar16 >> 3;
          uVar8 = lVar10 + 1;
          if (uVar8 >> 0x1c != 0) goto LAB_01213784;
          uVar22 = (long)local_160 - (long)plVar16 >> 2;
          if (uVar8 <= uVar22) {
            uVar8 = uVar22;
          }
          if (0x7fffffe < (ulong)((long)local_160 - (long)plVar16 >> 3)) {
            uVar8 = 0xfffffff;
          }
          if (uVar8 == 0) {
            lVar15 = 0;
          }
          else {
            uVar22 = uVar8 * 8;
            lVar15 = *(long *)(param_1 + 0x10);
            if (uVar22 < (ulong)(*(long *)(param_1 + 0x18) - lVar15) ||
                uVar22 - (*(long *)(param_1 + 0x18) - lVar15) == 0) {
              *(ulong *)(param_1 + 0x10) = lVar15 + uVar22;
            }
            else {
              lVar15 = Zone::NewExpand(param_1,uVar22);
            }
          }
          plVar18 = (long *)(lVar15 + lVar10 * 8);
          local_160 = (long *)(lVar15 + uVar8 * 8);
          *plVar18 = lVar29;
          plVar33 = plVar18;
          while (plVar16 != plVar23) {
            plVar23 = plVar23 + -1;
            plVar33 = plVar33 + -1;
            *plVar33 = *plVar23;
          }
        }
        plVar23 = plVar18 + 1;
        pCVar17[0x1c] = pCVar26[lVar21 * 0x20 + -0x24];
        break;
      case 7:
        plVar23 = plVar23 + -1;
        pCVar12[-4] = pCVar12[-0x24];
        if (pCVar12[-0x24] == (CLabel)0x0) {
          SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
          ::CLabel::Ref(*(CLabel **)(pCVar12 + -0x18),(uchar *)local_100,local_114);
        }
        **(long **)(pCVar12 + -0x10) = (long)((long)local_100 + 1);
        piVar25 = *(int **)(pCVar12 + -0x10);
        plVar16 = *(long **)(piVar25 + 4);
        plVar18 = *(long **)(piVar25 + 6);
        if (plVar16 != plVar18) {
          lVar21 = *(long *)(param_3 + 0x30);
          do {
            lVar15 = *plVar16;
            lVar29 = plVar16[1];
            local_c8[0] = lVar15 - lVar21;
            iVar30 = *piVar25;
            iVar32 = piVar25[2];
            local_b8 = local_c8;
            lVar10 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     ::
                     __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                               ((ulong *)this,(piecewise_construct_t *)local_c8,
                                (tuple *)&DAT_019ef5ec,(tuple *)&local_b8);
            *(int *)(lVar10 + 0x28) = iVar30 - (int)lVar15;
            *(int *)(lVar10 + 0x2c) = (int)lVar29 - iVar32;
            plVar16 = plVar16 + 2;
            *(int *)(lVar10 + 0x30) = piVar25[3];
          } while (plVar16 != plVar18);
        }
        *(undefined8 *)(pCVar12 + -0x10) = 0;
        local_114 = *(int *)(*(long *)(pCVar12 + -0x18) + 8) + 1;
        break;
      case 10:
        uVar20 = *(byte *)((long)local_100 + 1) & 0x7f;
        if ((char)*(byte *)((long)local_100 + 1) < '\0') {
          uVar20 = uVar20 | ((byte)local_100[1] & 0x7f) << 7;
          if ((char)(byte)local_100[1] < '\0') {
            uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe;
            if ((char)*(byte *)((long)local_100 + 3) < '\0') {
              uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15;
              if ((char)(byte)local_100[2] < '\0') {
                uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
                lVar21 = 5;
              }
              else {
                lVar21 = 4;
              }
            }
            else {
              lVar21 = 3;
            }
          }
          else {
            lVar21 = 2;
          }
        }
        else {
          lVar21 = 1;
        }
        bVar3 = *(byte *)((long)local_100 + lVar21 + 1);
        uVar19 = bVar3 & 0x7f;
        if ((((char)bVar3 < '\0') &&
            (bVar3 = *(byte *)((long)local_100 + lVar21 + 2), uVar19 = uVar19 | (bVar3 & 0x7f) << 7,
            (char)bVar3 < '\0')) &&
           ((bVar3 = *(byte *)((long)local_100 + lVar21 + 3),
            uVar19 = uVar19 | (bVar3 & 0x7f) << 0xe, (char)bVar3 < '\0' &&
            (bVar3 = *(byte *)((long)local_100 + lVar21 + 4),
            uVar19 = uVar19 | (bVar3 & 0x7f) << 0x15, (char)bVar3 < '\0')))) {
          uVar19 = uVar19 | (uint)*(byte *)((long)local_100 + lVar21 + 5) << 0x1c;
        }
        if (CVar4 == (CLabel)0x0) {
          SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
          ::CLabel::Ref(*(CLabel **)
                         (pCVar13 +
                         (~(ulong)uVar20 + ((ulong)((long)pCVar12 - (long)pCVar13) >> 5)) * 0x20 + 8
                         ),(uchar *)local_100,
                        local_114 +
                        *(int *)(*(long *)(*(long *)(param_2 + 0x100) + (ulong)uVar19 * 8) + 8) + -1
                       );
        }
        break;
      case 0xb:
        plVar16 = *(long **)(pCVar12 + -0x18);
        if (*plVar16 == 0) {
          if (*(undefined8 **)(pCVar12 + -0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(pCVar12 + -0x10) = local_100;
            plVar16 = *(long **)(pCVar12 + -0x18);
          }
          *plVar16 = (long)((long)local_100 + 1);
        }
        SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::
        InterpreterCode*)::Control::Finish(v8::internal::ZoneMap<unsigned_long,v8::internal::wasm::
        ControlTransferEntry,std::__ndk1::less<unsigned_long>_>__unsigned_char_const__
                  (pCVar12 + -0x20,this,*(undefined8 *)(param_3 + 0x30));
        local_114 = *(int *)(pCVar12 + -8) + *(int *)(*(long *)(pCVar12 + -0x18) + 8);
        pCVar12 = pCVar12 + -0x20;
        break;
      case 0xc:
      case 0xd:
        uVar20 = *(byte *)((long)local_100 + 1) & 0x7f;
        if (((((char)*(byte *)((long)local_100 + 1) < '\0') &&
             (uVar20 = uVar20 | ((byte)local_100[1] & 0x7f) << 7, (char)(byte)local_100[1] < '\0'))
            && (uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe,
               (char)*(byte *)((long)local_100 + 3) < '\0')) &&
           (uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15, (char)(byte)local_100[2] < '\0'))
        {
          uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
        }
        if (CVar4 == (CLabel)0x0) {
          pCVar9 = *(CLabel **)
                    (pCVar13 +
                    (~(ulong)uVar20 + ((ulong)((long)pCVar12 - (long)pCVar13) >> 5)) * 0x20 + 8);
          goto LAB_012133b8;
        }
        break;
      case 0xe:
        bVar3 = *(byte *)((long)local_100 + 1);
        uVar20 = bVar3 & 0x7f;
        if ((char)bVar3 < '\0') {
          uVar20 = uVar20 | ((byte)local_100[1] & 0x7f) << 7;
          if ((char)(byte)local_100[1] < '\0') {
            uVar20 = uVar20 | (*(byte *)((long)local_100 + 3) & 0x7f) << 0xe;
            if ((char)*(byte *)((long)local_100 + 3) < '\0') {
              uVar20 = uVar20 | ((byte)local_100[2] & 0x7f) << 0x15;
              if ((char)(byte)local_100[2] < '\0') {
                lVar21 = 5;
                uVar20 = uVar20 | (uint)*(byte *)((long)local_100 + 5) << 0x1c;
              }
              else {
                lVar21 = 4;
              }
            }
            else {
              lVar21 = 3;
            }
          }
          else {
            lVar21 = 2;
          }
        }
        else {
          lVar21 = 1;
        }
        if (CVar4 == (CLabel)0x0) {
          pbVar28 = (byte *)((long)local_100 + 1) + lVar21;
          uVar19 = 0;
          do {
            uVar1 = uVar19 + 1;
            uVar2 = *pbVar28 & 0x7f;
            uVar8 = (ulong)uVar2;
            if ((char)*pbVar28 < '\0') {
              uVar2 = uVar2 | (pbVar28[1] & 0x7f) << 7;
              uVar8 = (ulong)uVar2;
              if ((char)pbVar28[1] < '\0') {
                uVar2 = uVar2 | (pbVar28[2] & 0x7f) << 0xe;
                uVar8 = (ulong)uVar2;
                if ((char)pbVar28[2] < '\0') {
                  uVar2 = uVar2 | (pbVar28[3] & 0x7f) << 0x15;
                  uVar8 = (ulong)uVar2;
                  if ((char)pbVar28[3] < '\0') {
                    uVar8 = (ulong)(uVar2 | (uint)pbVar28[4] << 0x1c);
                    lVar21 = 5;
                  }
                  else {
                    lVar21 = 4;
                  }
                }
                else {
                  lVar21 = 3;
                }
              }
              else {
                lVar21 = 2;
              }
            }
            else {
              lVar21 = 1;
            }
            pbVar28 = pbVar28 + lVar21;
            SideTable(v8::internal::Zone*,v8::internal::wasm::WasmModule_const*,v8::internal::wasm::InterpreterCode*)
            ::CLabel::Ref(*(CLabel **)
                           (pCVar13 + (((long)pCVar12 - (long)pCVar13 >> 5) + ~uVar8) * 0x20 + 8),
                          (byte *)((long)local_100 + (ulong)uVar19),local_114);
            uVar19 = uVar1;
          } while (uVar1 <= uVar20);
        }
      }
      uVar8 = WasmOpcodes::IsUnconditionalJump(uVar24);
      if ((uVar8 & 1) != 0) {
        pCVar12[-4] = (CLabel)0x1;
      }
      if (local_100 < puStack_f8) {
        uVar8 = OpcodeLength((uchar *)local_100,(uchar *)puStack_f8);
        local_100 = (ushort *)((long)local_100 + (uVar8 & 0xffffffff));
        if (puStack_f8 <= local_100) {
          local_100 = puStack_f8;
        }
      }
      pCVar13 = pCVar26;
      plVar16 = plVar33;
    } while (local_100 < puStack_f8);
  }
  local_110[0] = &PTR__Decoder_01cbc3a8;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  Zone::~Zone(aZStack_b0);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

