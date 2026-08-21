
/* v8::internal::ErrorUtils::FormatStackTrace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::Object>) */

undefined8
v8::internal::ErrorUtils::FormatStackTrace(Isolate *param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  IncrementalStringBuilder aIStack_c0 [8];
  int local_b8;
  int local_b0;
  int local_ac;
  long *local_a0;
  undefined8 local_98 [6];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pIVar2 = param_1 + 0xb808;
  pIVar3 = param_1 + 0x95a0;
  if (*pIVar2 == (Isolate)0x0) {
    local_98[0] = *param_2;
    puVar8 = (ulong *)JSReceiver::GetCreationContext((JSReceiver *)local_98);
    uVar13 = Isolate::HasPrepareStackTraceCallback(param_1);
    if ((uVar13 & 1) == 0) {
      uVar13 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x35f);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      puVar6 = (ulong *)JSReceiver::GetProperty(param_1,puVar8,"prepareStackTrace");
      if (puVar6 == (ulong *)0x0) goto LAB_00f5dd30;
      uVar13 = *puVar6;
      if (((uVar13 & 1) == 0) ||
         (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x439))
      goto LAB_00f5cf1c;
      *pIVar2 = (Isolate)0x1;
      Isolate::CountUsage(param_1,0x2c);
      lVar5 = FUN_00f5dec8(param_1,param_3);
      if (lVar5 == 0) goto LAB_00f5d2fc;
      plVar7 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar7 + 0x18))();
        plVar7 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      *plVar7 = (long)param_2;
      plVar7[1] = lVar5;
      uVar12 = Execution::Call(param_1,puVar6,puVar8,2,plVar7);
      operator_delete__(plVar7);
    }
    else {
      *pIVar2 = (Isolate)0x1;
      lVar5 = FUN_00f5dec8(param_1,param_3);
      if (lVar5 == 0) {
LAB_00f5d2fc:
        uVar12 = 0;
      }
      else {
        uVar12 = Isolate::RunPrepareStackTraceCallback(param_1,puVar8,param_2,lVar5);
      }
    }
    *pIVar2 = (Isolate)0x0;
  }
  else {
LAB_00f5cf1c:
    pIVar2 = param_1 + 0x2c19;
    IncrementalStringBuilder::IncrementalStringBuilder(aIStack_c0,param_1);
    lVar5 = ToString(param_1,param_2);
    if (lVar5 == 0) {
      uVar13 = *(ulong *)(param_1 + 0x2bd8);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      *pIVar2 = (Isolate)0x0;
      lVar5 = ToString(param_1,puVar8);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
        *pIVar2 = (Isolate)0x0;
        lVar5 = (long)local_ac;
        local_ac = local_ac + 1;
        if (local_b8 == 0) {
          *(undefined1 *)(*local_a0 + lVar5 + 0xb) = 0x3c;
          if (local_ac == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x65;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x6f;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x3e;
        }
        else {
          *(undefined2 *)(*local_a0 + lVar5 * 2 + 0xb) = 0x3c;
          if (local_ac == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x65;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x6f;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x3e;
        }
        local_ac = local_ac + 1;
        if (local_ac == local_b0) goto LAB_00f5d4f8;
      }
      else {
        if (local_b8 == 0) {
          lVar10 = (long)local_ac;
          local_ac = local_ac + 1;
          *(undefined1 *)(*local_a0 + lVar10 + 0xb) = 0x3c;
          if (local_ac == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x65;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x6f;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x3a;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
          iVar1 = local_ac + 1;
          *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
          local_ac = iVar1;
          if (iVar1 == local_b0) {
            IncrementalStringBuilder::Extend(aIStack_c0);
          }
        }
        else {
          lVar10 = 0;
          uVar9 = 0x3c;
          do {
            lVar14 = (long)local_ac;
            local_ac = local_ac + 1;
            *(ushort *)(*local_a0 + lVar14 * 2 + 0xb) = uVar9;
            if (local_ac == local_b0) {
              IncrementalStringBuilder::Extend(aIStack_c0);
            }
            uVar9 = (ushort)(byte)"<error: "[lVar10 + 1];
            lVar10 = lVar10 + 1;
          } while (lVar10 != 8);
        }
        IncrementalStringBuilder::AppendString(aIStack_c0,lVar5);
        lVar5 = (long)local_ac;
        local_ac = local_ac + 1;
        if (local_b8 == 0) {
          *(undefined1 *)(*local_a0 + lVar5 + 0xb) = 0x3e;
        }
        else {
          *(undefined2 *)(*local_a0 + lVar5 * 2 + 0xb) = 0x3e;
        }
        if (local_ac == local_b0) {
LAB_00f5d4f8:
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
      }
    }
    else {
      IncrementalStringBuilder::AppendString(aIStack_c0,lVar5);
    }
    if (param_2 != (undefined8 *)0x0) {
      wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_98);
      if (1 < *(int *)(*param_3 + 3)) {
        lVar5 = 0;
        if (local_b8 != 0) goto LAB_00f5d568;
LAB_00f5d5c0:
        lVar10 = (long)local_ac;
        local_ac = local_ac + 1;
        *(undefined1 *)(*local_a0 + lVar10 + 0xb) = 10;
        if (local_ac == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x61;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x74;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        iVar1 = local_ac + 1;
        *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
        local_ac = iVar1;
        if (iVar1 == local_b0) {
          IncrementalStringBuilder::Extend(aIStack_c0);
        }
        do {
          uVar13 = *param_3 & 0xffffffff00000000 |
                   (ulong)*(uint *)(*param_3 + (long)((int)lVar5 << 2) + 7);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar3;
            if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar3 = puVar8 + 1;
            *puVar8 = uVar13;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
          }
          SerializeStackTraceFrame(param_1,puVar8,aIStack_c0);
          uVar13 = *(ulong *)(param_1 + 0x2bd8);
          if (((uVar13 & 1) == 0) || ((int)uVar13 != *(int *)(param_1 + 0xa8))) {
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)pIVar3;
              if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
                puVar8 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar3 = puVar8 + 1;
              *puVar8 = uVar13;
            }
            else {
              puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
            }
            *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
            *pIVar2 = (Isolate)0x0;
            lVar10 = ToString(param_1,puVar8);
            if (lVar10 == 0) {
              lVar10 = (long)local_ac;
              local_ac = local_ac + 1;
              if (local_b8 != 0) {
                *(undefined2 *)(*local_a0 + lVar10 * 2 + 0xb) = 0x3c;
                if (local_ac == local_b0) goto LAB_00f5da80;
                goto LAB_00f5da8c;
              }
              *(undefined1 *)(*local_a0 + lVar10 + 0xb) = 0x3c;
              if (local_ac == local_b0) goto LAB_00f5dbc0;
LAB_00f5dbcc:
              iVar1 = local_ac + 1;
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x65;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x6f;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x3e;
            }
            else {
              if (local_b8 == 0) {
                lVar14 = (long)local_ac;
                local_ac = local_ac + 1;
                *(undefined1 *)(*local_a0 + lVar14 + 0xb) = 0x3c;
                if (local_ac == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x65;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x6f;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x72;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x3a;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                iVar1 = local_ac + 1;
                *(undefined1 *)(*local_a0 + (long)local_ac + 0xb) = 0x20;
                local_ac = iVar1;
                if (iVar1 == local_b0) {
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
              }
              else {
                lVar14 = 0;
                uVar9 = 0x3c;
                do {
                  lVar11 = (long)local_ac;
                  local_ac = local_ac + 1;
                  *(ushort *)(*local_a0 + lVar11 * 2 + 0xb) = uVar9;
                  if (local_ac == local_b0) {
                    IncrementalStringBuilder::Extend(aIStack_c0);
                  }
                  uVar9 = (ushort)(byte)"<error: "[lVar14 + 1];
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 8);
              }
              IncrementalStringBuilder::AppendString(aIStack_c0,lVar10);
              lVar10 = (long)local_ac;
              local_ac = local_ac + 1;
              if (local_b8 == 0) {
                *(undefined1 *)(*local_a0 + lVar10 + 0xb) = 0x3c;
                if (local_ac == local_b0) {
LAB_00f5dbc0:
                  IncrementalStringBuilder::Extend(aIStack_c0);
                }
                goto LAB_00f5dbcc;
              }
              *(undefined2 *)(*local_a0 + lVar10 * 2 + 0xb) = 0x3c;
              if (local_ac == local_b0) {
LAB_00f5da80:
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
LAB_00f5da8c:
              iVar1 = local_ac + 1;
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x65;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x6f;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              iVar1 = local_ac + 1;
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x72;
              local_ac = iVar1;
              if (iVar1 == local_b0) {
                IncrementalStringBuilder::Extend(aIStack_c0);
              }
              *(undefined2 *)(*local_a0 + (long)local_ac * 2 + 0xb) = 0x3e;
            }
            local_ac = local_ac + 1;
            if (local_ac == local_b0) {
              IncrementalStringBuilder::Extend(aIStack_c0);
            }
          }
          lVar5 = lVar5 + 1;
          if (*(int *)(*param_3 + 3) >> 1 <= lVar5) break;
          if (local_b8 == 0) goto LAB_00f5d5c0;
LAB_00f5d568:
          lVar10 = 0;
          uVar9 = 10;
          do {
            lVar14 = (long)local_ac;
            local_ac = local_ac + 1;
            *(ushort *)(*local_a0 + lVar14 * 2 + 0xb) = uVar9;
            if (local_ac == local_b0) {
              IncrementalStringBuilder::Extend(aIStack_c0);
            }
            uVar9 = (ushort)(byte)(&DAT_019b0c57)[lVar10];
            lVar10 = lVar10 + 1;
          } while (lVar10 != 8);
        } while( true );
      }
      uVar12 = IncrementalStringBuilder::Finish(aIStack_c0);
      wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_98);
      goto LAB_00f5dd34;
    }
LAB_00f5dd30:
    uVar12 = 0;
  }
LAB_00f5dd34:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}

