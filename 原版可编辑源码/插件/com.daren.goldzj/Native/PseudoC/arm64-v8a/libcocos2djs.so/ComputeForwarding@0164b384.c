
/* WARNING: Removing unreachable block (ram,0x0164b8bc) */
/* v8::internal::compiler::JumpThreading::ComputeForwarding(v8::internal::Zone*,
   v8::internal::ZoneVector<v8::internal::compiler::RpoNumber>*,
   v8::internal::compiler::InstructionSequence*, bool) */

undefined1
v8::internal::compiler::JumpThreading::ComputeForwarding
          (Zone *param_1,ZoneVector *param_2,InstructionSequence *param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  Instruction *this;
  long *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  long local_a8;
  Zone *local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  Zone *local_80;
  long *local_78;
  undefined4 local_68 [2];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = (long *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = (long *)0x0;
  local_a8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_68[0] = 0xffffffff;
  local_a0 = param_1;
  local_80 = param_1;
  std::__ndk1::
  vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
  ::assign((vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
            *)param_2,
           ((*(long **)(param_3 + 0x10))[1] - **(long **)(param_3 + 0x10)) * 0x20000000 >> 0x20,
           (RpoNumber *)local_68);
  plVar13 = (long *)**(long **)(param_3 + 0x10);
  plVar14 = (long *)(*(long **)(param_3 + 0x10))[1];
  if (plVar13 == plVar14) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(*plVar13 + 100);
      if (*(int *)(*(long *)param_2 + (long)iVar1 * 4) == -1) {
        uVar15 = 0;
        if ((long)local_b0 - (long)puStack_b8 != 0) {
          uVar15 = ((long)local_b0 - (long)puStack_b8) * 0x80 - 1;
        }
        uVar11 = local_90;
        if (uVar15 == local_90) {
          std::__ndk1::
          deque<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
                      *)&local_c0);
          uVar11 = local_90 + local_88;
        }
        *(int *)(*(long *)((long)puStack_b8 + (uVar11 >> 7 & 0x1fffffffffffff8)) +
                (uVar11 & 0x3ff) * 4) = iVar1;
        local_88 = local_88 + 1;
        *(undefined4 *)(*(long *)param_2 + (long)iVar1 * 4) = 0xfffffffe;
        if (local_88 == 0) {
          local_88 = 0;
        }
        else {
LAB_0164b4dc:
          do {
            uVar15 = (local_88 + local_90) - 1;
            lVar9 = **(long **)(param_3 + 0x10);
            uVar15 = (ulong)*(int *)(*(long *)((long)puStack_b8 + (uVar15 >> 7 & 0x1fffffffffffff8))
                                    + (uVar15 & 0x3ff) * 4);
            if ((ulong)((*(long **)(param_3 + 0x10))[1] - lVar9 >> 3) <= uVar15) {
LAB_0164ba10:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar9 = *(long *)(lVar9 + uVar15 * 8);
            if (FLAG_trace_turbo_jt != '\0') {
              PrintF("jt [%d] B%d\n",local_88,(ulong)*(uint *)(lVar9 + 100));
            }
            uVar4 = *(uint *)(lVar9 + 100);
            if (*(long *)(lVar9 + 0x28) - (long)*(int **)(lVar9 + 0x20) == 4) {
              uVar15 = (ulong)**(int **)(lVar9 + 0x20);
              lVar7 = **(long **)(param_3 + 0x10);
              if ((ulong)((*(long **)(param_3 + 0x10))[1] - lVar7 >> 3) <= uVar15)
              goto LAB_0164ba10;
              lVar7 = *(long *)(lVar7 + uVar15 * 8);
              iVar1 = *(int *)(lVar7 + 0x74);
              if ((*(int *)(lVar7 + 0x70) == iVar1) ||
                 (uVar15 = ((long)iVar1 + *(long *)(param_3 + 0xb0)) - 1,
                 (**(uint **)(*(long *)(*(long *)(param_3 + 0x88) +
                                       (uVar15 >> 6 & 0x3fffffffffffff8)) + (uVar15 & 0x1ff) * 8) &
                 0x1c000) != 0x8000)) goto LAB_0164b5a0;
            }
            else {
LAB_0164b5a0:
              lVar7 = (long)*(int *)(lVar9 + 0x70);
              uVar6 = uVar4;
              if (*(int *)(lVar9 + 0x70) < *(int *)(lVar9 + 0x74)) {
                do {
                  this = *(Instruction **)
                          (*(long *)(*(long *)(param_3 + 0x88) +
                                    ((ulong)(lVar7 + *(long *)(param_3 + 0xb0)) >> 6 &
                                    0x3fffffffffffff8)) +
                          (lVar7 + *(long *)(param_3 + 0xb0) & 0x1ffU) * 8);
                  uVar15 = Instruction::AreMovesRedundant(this);
                  if ((uVar15 & 1) == 0) {
                    if (FLAG_trace_turbo_jt != '\0') {
                      pcVar5 = "  parallel move\n";
LAB_0164b6b4:
                      PrintF(pcVar5);
                    }
                    goto LAB_0164b6b8;
                  }
                  if ((*(uint *)this & 0x1c000) != 0) {
                    if (FLAG_trace_turbo_jt != '\0') {
                      pcVar5 = "  flags\n";
                      goto LAB_0164b6b4;
                    }
                    goto LAB_0164b6b8;
                  }
                  uVar6 = *(uint *)this & 0x1ff;
                  if (uVar6 != 0x11) {
                    if (uVar6 == 0xd) {
                      if (FLAG_trace_turbo_jt != '\0') {
                        PrintF("  jmp\n");
                      }
                      if ((param_4) ||
                         ((*(char *)(lVar9 + 0x7e) == '\0' && (*(char *)(lVar9 + 0x7d) == '\0')))) {
                        uVar4 = InstructionSequence::InputRpo(param_3,this,0);
                      }
                    }
                    else if (FLAG_trace_turbo_jt != '\0') {
                      pcVar5 = "  other\n";
                      goto LAB_0164b6b4;
                    }
                    goto LAB_0164b6b8;
                  }
                  if (FLAG_trace_turbo_jt != '\0') {
                    PrintF("  nop\n");
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 < *(int *)(lVar9 + 0x74));
                uVar6 = *(uint *)(lVar9 + 100);
              }
              if ((int)(uVar6 + 1) <
                  (int)((ulong)((*(long **)(param_3 + 0x10))[1] - **(long **)(param_3 + 0x10)) >> 3)
                 ) {
                uVar4 = uVar6 + 1;
              }
            }
LAB_0164b6b8:
            uVar15 = (local_88 + local_90) - 1;
            uVar6 = *(uint *)(*(long *)((long)puStack_b8 + (uVar15 >> 7 & 0x1fffffffffffff8)) +
                             (uVar15 & 0x3ff) * 4);
            lVar9 = *(long *)param_2;
            if (uVar6 == uVar4) {
              if (FLAG_trace_turbo_jt != '\0') {
                PrintF("  xx %d\n",(ulong)uVar4);
                lVar9 = *(long *)param_2;
              }
              puVar8 = (uint *)(lVar9 + (long)(int)uVar4 * 4);
            }
            else {
              uVar2 = *(uint *)(lVar9 + (long)(int)uVar4 * 4);
              if (uVar2 == 0xffffffff) {
                if (FLAG_trace_turbo_jt != '\0') {
                  PrintF("  fw %d -> %d (recurse)\n",(ulong)uVar6,(ulong)uVar4);
                }
                uVar15 = local_90 + local_88;
                uVar11 = 0;
                if ((long)local_b0 - (long)puStack_b8 != 0) {
                  uVar11 = ((long)local_b0 - (long)puStack_b8) * 0x80 - 1;
                }
                if (uVar11 == uVar15) {
                  std::__ndk1::
                  deque<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
                              *)&local_c0);
                  uVar15 = local_90 + local_88;
                }
                *(uint *)(*(long *)((long)puStack_b8 + (uVar15 >> 7 & 0x1fffffffffffff8)) +
                         (uVar15 & 0x3ff) * 4) = uVar4;
                local_88 = local_88 + 1;
                *(undefined4 *)(*(long *)param_2 + (long)(int)uVar4 * 4) = 0xfffffffe;
                if (local_88 == 0) {
                  local_88 = 0;
                  break;
                }
                goto LAB_0164b4dc;
              }
              if (uVar2 == 0xfffffffe) {
                if (FLAG_trace_turbo_jt != '\0') {
                  PrintF("  fw %d -> %d (cycle)\n",(ulong)uVar6,(ulong)uVar4);
                  lVar9 = *(long *)param_2;
                }
                puVar8 = (uint *)(lVar9 + (long)(int)uVar6 * 4);
              }
              else {
                if (FLAG_trace_turbo_jt != '\0') {
                  PrintF("  fw %d -> %d (forward)\n",(ulong)uVar6,(ulong)uVar4);
                  lVar9 = *(long *)param_2;
                }
                puVar8 = (uint *)(lVar9 + (long)(int)uVar6 * 4);
                uVar4 = uVar2;
              }
              uVar3 = 1;
            }
            *puVar8 = uVar4;
            lVar9 = local_88 + local_90;
            lVar7 = 0;
            if ((long)local_b0 - (long)puStack_b8 != 0) {
              lVar7 = ((long)local_b0 - (long)puStack_b8) * 0x80 + -1;
            }
            local_88 = local_88 + -1;
            if (0x7ff < (lVar7 - lVar9) + 1U) {
              plVar12 = (long *)local_b0[-1];
              if ((local_78 == (long *)0x0) || ((ulong)local_78[1] < 0x401)) {
                plVar12[1] = 0x400;
                *plVar12 = (long)local_78;
                local_78 = plVar12;
              }
              local_b0 = local_b0 + -1;
            }
          } while (local_88 != 0);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar14);
  }
  if ((FLAG_trace_turbo_jt != '\0') &&
     (0 < (int)((ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 2))) {
    uVar15 = 0;
    do {
      PrintF("B%d ",uVar15 & 0xffffffff);
      lVar9 = *(long *)param_2;
      cVar10 = FLAG_trace_turbo_jt;
      while( true ) {
        if (uVar15 == *(uint *)(lVar9 + uVar15 * 4)) {
          if (cVar10 != '\0') {
            PrintF("\n");
          }
        }
        else if (cVar10 != '\0') {
          PrintF("-> B%d\n");
        }
        lVar9 = *(long *)param_2;
        uVar15 = uVar15 + 1;
        if ((long)(int)((ulong)(*(long *)(param_2 + 8) - lVar9) >> 2) <= (long)uVar15)
        goto LAB_0164b928;
        if (FLAG_trace_turbo_jt != '\0') break;
        cVar10 = '\0';
      }
    } while( true );
  }
LAB_0164b928:
  std::__ndk1::
  __deque_base<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
  ::clear((__deque_base<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
           *)&local_c0);
  if (puStack_b8 == local_b0) {
LAB_0164b9a4:
    if (((local_c0 != (long *)0x0) && (0xf < (ulong)(local_a8 - (long)local_c0))) &&
       ((uVar15 = local_a8 - (long)local_c0 >> 3, local_98 == 0 ||
        (*(ulong *)(local_98 + 8) <= uVar15)))) {
      local_c0[1] = uVar15;
      *local_c0 = local_98;
    }
    return uVar3;
  }
  plVar14 = (long *)*puStack_b8;
  plVar13 = local_78;
  if (local_78 != (long *)0x0) goto LAB_0164b974;
  do {
    plVar13 = plVar14;
    plVar13[1] = 0x400;
    *plVar13 = (long)local_78;
    local_78 = plVar13;
    do {
      puStack_b8 = puStack_b8 + 1;
      if (local_b0 == puStack_b8) goto LAB_0164b9a4;
      plVar14 = (long *)*puStack_b8;
      if (plVar13 == (long *)0x0) break;
LAB_0164b974:
    } while (0x400 < (ulong)plVar13[1]);
  } while( true );
}

