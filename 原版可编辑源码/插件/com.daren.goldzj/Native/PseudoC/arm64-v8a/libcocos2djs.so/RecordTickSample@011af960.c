
/* v8::internal::ProfileGenerator::RecordTickSample(v8::internal::TickSample const&) */

void __thiscall
v8::internal::ProfileGenerator::RecordTickSample(ProfileGenerator *this,TickSample *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  CodeEntry *pCVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  uint local_c4;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  CodeEntry *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined1 local_88;
  uint7 uStack_87;
  CodeEntry **local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x1010);
  uVar25 = (uint)uVar2;
  local_c0 = operator_new(((ulong)uVar2 & 0xff) * 0x20 + 0x60);
  local_b0 = local_c0 + ((ulong)uVar2 & 0xff) * 4 + 0xc;
  uVar8 = *(ulong *)(param_1 + 8);
  plStack_b8 = local_c0;
  if (uVar8 == 0) {
    local_c4 = 0;
  }
  else {
    if (((uVar2 >> 8 & 1) == 0) || (*(int *)param_1 != 6)) {
      lVar9 = *(long *)(this + 8);
      plVar7 = (long *)(lVar9 + 0x38);
      plVar15 = (long *)*plVar7;
      plVar13 = plVar7;
      for (plVar16 = plVar15; plVar16 != (long *)0x0;
          plVar16 = (long *)plVar16[(ulong)plVar16[4] <= uVar8]) {
        plVar17 = plVar16;
        if ((ulong)plVar16[4] <= uVar8) {
          plVar17 = plVar13;
        }
        plVar13 = plVar17;
      }
      if (plVar13 == *(long **)(lVar9 + 0x30)) {
LAB_011afb38:
        if ((uVar2 >> 8 & 1) == 0) {
          uVar8 = *(ulong *)(param_1 + 0x10);
          for (; plVar15 != (long *)0x0; plVar15 = (long *)plVar15[(ulong)plVar15[4] <= uVar8]) {
            plVar13 = plVar15;
            if ((ulong)plVar15[4] <= uVar8) {
              plVar13 = plVar7;
            }
            plVar7 = plVar13;
          }
          if (plVar7 != *(long **)(lVar9 + 0x30)) {
            plVar15 = (long *)*plVar7;
            if ((long *)*plVar7 == (long *)0x0) {
              do {
                plVar13 = (long *)plVar7[2];
                bVar5 = (long *)*plVar13 == plVar7;
                plVar7 = plVar13;
              } while (bVar5);
            }
            else {
              do {
                plVar13 = plVar15;
                plVar15 = (long *)plVar13[1];
              } while ((long *)plVar13[1] != (long *)0x0);
            }
            if ((uVar8 < plVar13[4] + (ulong)*(uint *)((long)plVar13 + 0x2c)) &&
               (uVar10 = *(long *)(lVar9 + 0x20) + (ulong)*(uint *)(plVar13 + 5),
               pCVar23 = *(CodeEntry **)
                          (*(long *)(*(long *)(lVar9 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                          (uVar10 & 0x1ff) * 8), pCVar23 != (CodeEntry *)0x0)) goto LAB_011afbd0;
          }
        }
        goto LAB_011afce0;
      }
      plVar16 = (long *)*plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        do {
          plVar17 = (long *)plVar13[2];
          bVar5 = (long *)*plVar17 == plVar13;
          plVar13 = plVar17;
        } while (bVar5);
      }
      else {
        do {
          plVar17 = plVar16;
          plVar16 = (long *)plVar17[1];
        } while ((long *)plVar17[1] != (long *)0x0);
      }
      if ((plVar17[4] + (ulong)*(uint *)((long)plVar17 + 0x2c) <= uVar8) ||
         (uVar10 = *(long *)(lVar9 + 0x20) + (ulong)*(uint *)(plVar17 + 5),
         pCVar23 = *(CodeEntry **)
                    (*(long *)(*(long *)(lVar9 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                    (uVar10 & 0x1ff) * 8), pCVar23 == (CodeEntry *)0x0)) goto LAB_011afb38;
LAB_011afbd0:
      plVar7 = *(long **)(pCVar23 + 0x28);
      *(uint *)pCVar23 = *(uint *)pCVar23 | 0x40000000;
      if (plVar7 == (long *)0x0) {
LAB_011afc50:
        local_c4 = *(uint *)(pCVar23 + 0x18);
      }
      else {
        piVar1 = (int *)*plVar7;
        if (piVar1 == (int *)plVar7[1]) goto LAB_011afc50;
        lVar9 = plVar7[1] - (long)piVar1;
        piVar11 = piVar1;
        if (lVar9 != 0) {
          uVar10 = (lVar9 >> 2) * -0x5555555555555555;
          piVar12 = piVar1;
          do {
            uVar14 = uVar10 >> 1;
            piVar11 = piVar12 + uVar14 * 3 + 3;
            uVar10 = uVar10 + ~uVar14;
            if ((int)((int)uVar8 - *(uint *)(pCVar23 + 0x30)) <= piVar12[uVar14 * 3]) {
              piVar11 = piVar12;
              uVar10 = uVar14;
            }
            piVar12 = piVar11;
          } while (uVar10 != 0);
          if (piVar11 != piVar1) {
            piVar11 = piVar11 + -3;
          }
        }
        local_c4 = piVar11[1];
        if (local_c4 == 0) goto LAB_011afc50;
      }
      uStack_98 = (code *)CONCAT44(uStack_98._4_4_,local_c4);
      local_90 = *(undefined8 **)(param_1 + 0x1008);
      local_88 = 1;
      local_a0 = pCVar23;
      if (local_c0 < local_b0) {
        plStack_b8 = local_c0 + 4;
        local_c0[1] = (long)uStack_98;
        *local_c0 = (long)pCVar23;
        local_c0[3] = CONCAT71(uStack_87,1);
        local_c0[2] = (long)local_90;
      }
      else {
        std::__ndk1::
        vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
        ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                  ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                    *)&local_c0,(ProfileStackFrame *)&local_a0);
      }
      uVar25 = *(uint *)pCVar23 >> 8 & 0x3fffff;
      if (((uVar25 == 0x143) || (uVar25 == 0x140)) && (((byte)param_1[0x1011] & 1) == 0)) {
        if (CodeEntry::kUnresolvedEntry != '\x02') {
          local_90 = &DAT_01d3f8d8;
          local_a0 = (CodeEntry *)&PTR_FUN_01c984d0;
          uStack_98 = base::
                      LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::UnresolvedEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                      ::InitInstance;
          local_80 = &local_a0;
          base::CallOnceImpl(&CodeEntry::kUnresolvedEntry,&local_a0);
          if (&local_a0 == local_80) {
            (**(code **)(*local_80 + 0x20))();
          }
          else if (local_80 != (CodeEntry **)0x0) {
            (**(code **)(*local_80 + 0x28))();
          }
        }
        pCVar23 = DAT_01d3f8d8;
        local_a0 = DAT_01d3f8d8;
        uStack_98 = (code *)((ulong)uStack_98 & 0xffffffff00000000);
        local_90 = (undefined8 *)0x0;
        local_88 = 1;
        if (plStack_b8 < local_b0) {
          plStack_b8[1] = (long)uStack_98;
          *plStack_b8 = (long)pCVar23;
          plStack_b8[3] = CONCAT71(uStack_87,1);
          plStack_b8[2] = 0;
          plStack_b8 = plStack_b8 + 4;
        }
        else {
          std::__ndk1::
          vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
          ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                    ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                      *)&local_c0,(ProfileStackFrame *)&local_a0);
        }
      }
      bVar5 = false;
    }
    else {
      lVar9 = *(long *)(this + 8);
      uVar8 = *(ulong *)(param_1 + 0x10);
      plVar7 = (long *)(lVar9 + 0x38);
      for (plVar15 = *(long **)(lVar9 + 0x38); plVar15 != (long *)0x0;
          plVar15 = (long *)plVar15[(ulong)plVar15[4] <= uVar8]) {
        plVar13 = plVar15;
        if ((ulong)plVar15[4] <= uVar8) {
          plVar13 = plVar7;
        }
        plVar7 = plVar13;
      }
      if (plVar7 == *(long **)(lVar9 + 0x30)) {
LAB_011afc9c:
        local_a0 = (CodeEntry *)0x0;
      }
      else {
        plVar15 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          do {
            plVar13 = (long *)plVar7[2];
            bVar5 = (long *)*plVar13 == plVar7;
            plVar7 = plVar13;
          } while (bVar5);
        }
        else {
          do {
            plVar13 = plVar15;
            plVar15 = (long *)plVar13[1];
          } while ((long *)plVar13[1] != (long *)0x0);
        }
        if (plVar13[4] + (ulong)*(uint *)((long)plVar13 + 0x2c) <= uVar8) goto LAB_011afc9c;
        uVar8 = *(long *)(lVar9 + 0x20) + (ulong)*(uint *)(plVar13 + 5);
        local_a0 = *(CodeEntry **)
                    (*(long *)(*(long *)(lVar9 + 8) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                    (uVar8 & 0x1ff) * 8);
        if (local_a0 != (CodeEntry *)0x0) {
          *(uint *)local_a0 = *(uint *)local_a0 | 0x40000000;
        }
      }
      uStack_98 = (code *)((ulong)uStack_98._4_4_ << 0x20);
      local_90 = *(undefined8 **)(param_1 + 0x1008);
      local_88 = 1;
      if (local_c0 < local_b0) {
        plStack_b8 = local_c0 + 4;
        local_c0[1] = (long)uStack_98;
        *local_c0 = (long)local_a0;
        local_c0[3] = CONCAT71(uStack_87,1);
        local_c0[2] = (long)local_90;
      }
      else {
        std::__ndk1::
        vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
        ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                  ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                    *)&local_c0,(ProfileStackFrame *)&local_a0);
      }
LAB_011afce0:
      local_c4 = 0;
      bVar5 = true;
    }
    uVar25 = (uint)*(ushort *)(param_1 + 0x1010);
    if ((*(ushort *)(param_1 + 0x1010) & 0xff) != 0) {
      uVar8 = 0;
      do {
        lVar9 = *(long *)(this + 8);
        uVar10 = *(ulong *)(param_1 + uVar8 * 8 + 0x18);
        lVar26 = *(long *)(param_1 + uVar8 * 8 + 0x810);
        plVar7 = (long *)(lVar9 + 0x38);
        for (plVar15 = *(long **)(lVar9 + 0x38); plVar15 != (long *)0x0;
            plVar15 = (long *)plVar15[(ulong)plVar15[4] <= uVar10]) {
          plVar13 = plVar15;
          if ((ulong)plVar15[4] <= uVar10) {
            plVar13 = plVar7;
          }
          plVar7 = plVar13;
        }
        if (plVar7 == *(long **)(lVar9 + 0x30)) {
LAB_011aff6c:
          pCVar23 = (CodeEntry *)0x0;
LAB_011aff70:
          iVar19 = 0;
LAB_011aff74:
          uStack_98 = (code *)CONCAT44(uStack_98._4_4_,iVar19);
          local_88 = 1;
          local_a0 = pCVar23;
          if (plStack_b8 < local_b0) {
            plStack_b8[1] = (long)uStack_98;
            *plStack_b8 = (long)pCVar23;
            plStack_b8[3] = CONCAT71(uStack_87,1);
            plStack_b8[2] = lVar26;
            plStack_b8 = plStack_b8 + 4;
            local_90 = (undefined8 *)lVar26;
          }
          else {
            local_90 = (undefined8 *)lVar26;
            std::__ndk1::
            vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
            ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                      ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                        *)&local_c0,(ProfileStackFrame *)&local_a0);
          }
        }
        else {
          plVar15 = (long *)*plVar7;
          if ((long *)*plVar7 == (long *)0x0) {
            do {
              plVar13 = (long *)plVar7[2];
              bVar6 = (long *)*plVar13 == plVar7;
              plVar7 = plVar13;
            } while (bVar6);
          }
          else {
            do {
              plVar13 = plVar15;
              plVar15 = (long *)plVar13[1];
            } while ((long *)plVar13[1] != (long *)0x0);
          }
          if (plVar13[4] + (ulong)*(uint *)((long)plVar13 + 0x2c) <= uVar10) goto LAB_011aff6c;
          uVar14 = *(long *)(lVar9 + 0x20) + (ulong)*(uint *)(plVar13 + 5);
          pCVar23 = *(CodeEntry **)
                     (*(long *)(*(long *)(lVar9 + 8) + (uVar14 >> 6 & 0x3fffffffffffff8)) +
                     (uVar14 & 0x1ff) * 8);
          if (pCVar23 == (CodeEntry *)0x0) goto LAB_011aff70;
          iVar3 = (int)uVar10 - *(int *)(pCVar23 + 0x30);
          *(uint *)pCVar23 = *(uint *)pCVar23 | 0x40000000;
          plVar7 = (long *)CodeEntry::GetInlineStack(pCVar23,iVar3);
          if (plVar7 != (long *)0x0) {
            plVar15 = *(long **)(pCVar23 + 0x28);
            if (plVar15 == (long *)0x0) {
LAB_011affa4:
              iVar19 = 0;
            }
            else {
              piVar1 = (int *)*plVar15;
              if (piVar1 == (int *)plVar15[1]) goto LAB_011affa4;
              lVar9 = plVar15[1] - (long)piVar1;
              piVar11 = piVar1;
              if (lVar9 != 0) {
                uVar10 = (lVar9 >> 2) * -0x5555555555555555;
                piVar12 = piVar1;
                do {
                  uVar14 = uVar10 >> 1;
                  piVar11 = piVar12 + uVar14 * 3 + 3;
                  uVar10 = uVar10 + ~uVar14;
                  if (iVar3 <= piVar12[uVar14 * 3]) {
                    piVar11 = piVar12;
                    uVar10 = uVar14;
                  }
                  piVar12 = piVar11;
                } while (uVar10 != 0);
                if (piVar11 != piVar1) {
                  piVar11 = piVar11 + -3;
                }
              }
              iVar19 = piVar11[1];
            }
            puVar18 = (undefined8 *)*plVar7;
            puVar21 = (undefined8 *)plVar7[1];
            if (puVar18 != puVar21) {
              do {
                uStack_98 = (code *)puVar18[1];
                local_a0 = (CodeEntry *)*puVar18;
                local_88 = 1;
                if (plStack_b8 < local_b0) {
                  plStack_b8[1] = (long)uStack_98;
                  *plStack_b8 = (long)local_a0;
                  plStack_b8[3] = CONCAT71(uStack_87,1);
                  plStack_b8[2] = lVar26;
                  plStack_b8 = plStack_b8 + 4;
                  local_90 = (undefined8 *)lVar26;
                }
                else {
                  local_90 = (undefined8 *)lVar26;
                  std::__ndk1::
                  vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                  ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                            ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                              *)&local_c0,(ProfileStackFrame *)&local_a0);
                }
                puVar18 = puVar18 + 2;
              } while (puVar21 != puVar18);
              puVar18 = (undefined8 *)*plVar7;
              puVar21 = (undefined8 *)plVar7[1];
            }
            *(int *)(local_c0 +
                    (((ulong)((long)plStack_b8 - (long)local_c0) >> 5) -
                    ((ulong)((long)puVar21 - (long)puVar18) >> 4)) * 4 + 1) = iVar19;
          }
          plVar15 = *(long **)(pCVar23 + 0x28);
          if (bVar5) {
            if (plVar15 != (long *)0x0) {
              piVar1 = (int *)*plVar15;
              if (piVar1 != (int *)plVar15[1]) {
                lVar9 = plVar15[1] - (long)piVar1;
                piVar11 = piVar1;
                if (lVar9 != 0) {
                  uVar10 = (lVar9 >> 2) * -0x5555555555555555;
                  piVar12 = piVar1;
                  do {
                    uVar14 = uVar10 >> 1;
                    piVar11 = piVar12 + uVar14 * 3 + 3;
                    uVar10 = uVar10 + ~uVar14;
                    if (iVar3 <= piVar12[uVar14 * 3]) {
                      piVar11 = piVar12;
                      uVar10 = uVar14;
                    }
                    piVar12 = piVar11;
                  } while (uVar10 != 0);
                  if (piVar11 != piVar1) {
                    piVar11 = piVar11 + -3;
                  }
                }
                local_c4 = piVar11[1];
                if (local_c4 != 0) goto LAB_011b00a0;
              }
            }
            local_c4 = *(uint *)(pCVar23 + 0x18);
          }
LAB_011b00a0:
          iVar19 = 0;
          if (plVar15 == (long *)0x0) {
LAB_011b0100:
            bVar5 = false;
            if (plVar7 != (long *)0x0) goto LAB_011afe20;
            goto LAB_011aff74;
          }
          piVar1 = (int *)*plVar15;
          if (piVar1 != (int *)plVar15[1]) {
            lVar9 = plVar15[1] - (long)piVar1;
            piVar11 = piVar1;
            if (lVar9 != 0) {
              uVar10 = (lVar9 >> 2) * -0x5555555555555555;
              piVar12 = piVar1;
              do {
                uVar14 = uVar10 >> 1;
                piVar11 = piVar12 + uVar14 * 3 + 3;
                uVar10 = uVar10 + ~uVar14;
                if (iVar3 <= piVar12[uVar14 * 3]) {
                  piVar11 = piVar12;
                  uVar10 = uVar14;
                }
                piVar12 = piVar11;
              } while (uVar10 != 0);
              if (piVar11 != piVar1) {
                piVar11 = piVar11 + -3;
              }
            }
            iVar19 = piVar11[1];
            goto LAB_011b0100;
          }
          iVar19 = 0;
          bVar5 = false;
          if (plVar7 == (long *)0x0) goto LAB_011aff74;
        }
LAB_011afe20:
        uVar25 = (uint)*(ushort *)(param_1 + 0x1010);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)*(ushort *)(param_1 + 0x1010));
    }
  }
  if (FLAG_prof_browser_mode != '\0') {
    if (local_c0 != plStack_b8) {
      bVar5 = true;
      plVar7 = local_c0;
      do {
        lVar9 = *plVar7;
        bVar5 = (bool)(bVar5 & lVar9 == 0);
        if (plStack_b8 + -4 == plVar7) break;
        plVar7 = plVar7 + 4;
      } while (lVar9 == 0);
      if (!bVar5) goto LAB_011b01bc;
    }
    local_a0 = (CodeEntry *)EntryForVMState();
    uStack_98 = (code *)((ulong)uStack_98 & 0xffffffff00000000);
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    if (plStack_b8 < local_b0) {
      plStack_b8[1] = (long)uStack_98;
      *plStack_b8 = (long)local_a0;
      plStack_b8[3] = (ulong)uStack_87 << 8;
      plStack_b8[2] = 0;
      plStack_b8 = plStack_b8 + 4;
    }
    else {
      std::__ndk1::
      vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
      ::__push_back_slow_path<v8::internal::ProfileStackFrame>
                ((vector<v8::internal::ProfileStackFrame,std::__ndk1::allocator<v8::internal::ProfileStackFrame>>
                  *)&local_c0,(ProfileStackFrame *)&local_a0);
    }
    uVar25 = (uint)*(ushort *)(param_1 + 0x1010);
  }
LAB_011b01bc:
  lVar9 = *(long *)this;
  uVar20 = *(undefined8 *)(param_1 + 0x1018);
  uVar24 = *(undefined8 *)(param_1 + 0x1020);
  base::Semaphore::Wait((Semaphore *)(lVar9 + 0x50));
  puVar18 = *(undefined8 **)(lVar9 + 0x40);
  if (*(undefined8 **)(lVar9 + 0x38) != puVar18) {
    puVar21 = *(undefined8 **)(lVar9 + 0x38);
    do {
      puVar22 = puVar21 + 1;
      CpuProfile::AddPath((CpuProfile *)*puVar21,uVar20,&local_c0,local_c4,uVar25 >> 9 & 1,uVar24);
      puVar21 = puVar22;
    } while (puVar18 != puVar22);
  }
  base::Semaphore::Signal((Semaphore *)(lVar9 + 0x50));
  if (local_c0 != (long *)0x0) {
    plStack_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

