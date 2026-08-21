
/* v8::internal::TranslatedState::Init(v8::internal::Isolate*, unsigned long,
   v8::internal::TranslationIterator*, v8::internal::FixedArray, v8::internal::RegisterValues*,
   __sFILE*, int) */

void __thiscall
v8::internal::TranslatedState::Init
          (TranslatedState *this,undefined8 param_1,undefined8 param_2,long *param_3,
          undefined8 param_5,undefined8 param_6,__sFILE *param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  void *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  long local_a8;
  void *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long local_80;
  ulong local_78;
  
  *(undefined4 *)(this + 0x28) = param_8;
  *(undefined8 *)(this + 0x18) = param_1;
  uVar9 = (ulong)(int)param_3[1];
  uVar13 = 0;
  uVar11 = 0;
  pbVar6 = (byte *)(*param_3 + uVar9 + 7);
  do {
    iVar14 = (int)uVar9;
    uVar8 = iVar14 + 1;
    uVar9 = (ulong)uVar8;
    *(uint *)(param_3 + 1) = uVar8;
    bVar3 = *pbVar6;
    uVar11 = (uint)(bVar3 >> 1) << (ulong)(uVar13 & 0x1f) | uVar11;
    uVar13 = uVar13 + 7;
    pbVar6 = pbVar6 + 1;
  } while ((bVar3 & 1) != 0);
  uVar13 = -(uVar11 >> 1);
  if ((uVar11 & 1) == 0) {
    uVar13 = uVar11 >> 1;
  }
  if (uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","opcode == Translation::BEGIN");
  }
  uVar13 = 0;
  iVar14 = iVar14 + 2;
  uVar11 = 0;
  pbVar6 = (byte *)(*param_3 + (long)(int)uVar8 + 7);
  do {
    *(int *)(param_3 + 1) = iVar14;
    bVar3 = *pbVar6;
    iVar14 = iVar14 + 1;
    uVar8 = uVar13 & 0x1f;
    uVar13 = uVar13 + 7;
    uVar11 = (uint)(bVar3 >> 1) << (ulong)uVar8 | uVar11;
    pbVar6 = pbVar6 + 1;
  } while ((bVar3 & 1) != 0);
  uVar13 = -(uVar11 >> 1);
  if ((uVar11 & 1) == 0) {
    uVar13 = uVar11 >> 1;
  }
  std::__ndk1::
  vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>::
  reserve((vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>
           *)this,(long)(int)uVar13);
  uVar9 = (ulong)(int)param_3[1];
  pbVar6 = (byte *)(*param_3 + uVar9 + 7);
  do {
    iVar14 = (int)uVar9;
    uVar11 = iVar14 + 1;
    uVar9 = (ulong)uVar11;
    *(uint *)(param_3 + 1) = uVar11;
    bVar3 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while ((bVar3 & 1) != 0);
  uVar8 = 0;
  uVar5 = 0;
  iVar14 = iVar14 + 2;
  pbVar6 = (byte *)(*param_3 + (long)(int)uVar11 + 7);
  do {
    *(int *)(param_3 + 1) = iVar14;
    bVar3 = *pbVar6;
    iVar14 = iVar14 + 1;
    uVar11 = uVar8 & 0x1f;
    uVar8 = uVar8 + 7;
    uVar5 = (uint)(bVar3 >> 1) << (ulong)uVar11 | uVar5;
    pbVar6 = pbVar6 + 1;
  } while ((bVar3 & 1) != 0);
  uVar11 = -(uVar5 >> 1);
  if ((uVar5 & 1) == 0) {
    uVar11 = uVar5 >> 1;
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","update_feedback_count >= 0");
  }
  if (1 < (int)uVar11) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","update_feedback_count <= 1");
  }
  if (uVar11 == 1) {
    ReadUpdateFeedback(this,param_3,param_5,param_7);
  }
  uStack_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = (void *)0x0;
  if (0 < (int)uVar13) {
    uVar11 = 0;
    do {
      CreateNextTranslatedFrame(&local_f8);
      puVar2 = *(undefined8 **)(this + 8);
      if (puVar2 < *(undefined8 **)(this + 0x10)) {
        *(undefined4 *)(puVar2 + 4) = local_d8;
        puVar2[1] = uStack_f0;
        *puVar2 = local_f8;
        puVar2[3] = uStack_e0;
        puVar2[2] = local_e8;
        puVar2[5] = local_d0;
        puVar2[6] = puStack_c8;
        puVar2[7] = local_c0;
        puVar2[8] = local_b8;
        puStack_c8 = (undefined8 *)0x0;
        local_d0 = (void *)0x0;
        local_b8 = 0;
        local_c0 = (undefined8 *)0x0;
        puVar2[9] = local_b0;
        puVar2[10] = local_a8;
        local_b0 = 0;
        local_a8 = 0;
        *(long *)(this + 8) = *(long *)(this + 8) + 0x58;
      }
      else {
        std::__ndk1::
        vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>
        ::__push_back_slow_path<v8::internal::TranslatedFrame>
                  ((vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>
                    *)this,(TranslatedFrame *)&local_f8);
      }
      lVar7 = (long)local_c0 - (long)puStack_c8;
      if (lVar7 != 0) {
        plVar12 = (long *)((long)puStack_c8 + (local_b0 >> 4 & 0xffffffffffffff8));
        lVar15 = *plVar12 + (local_b0 & 0x7f) * 0x20;
        lVar1 = *(long *)((long)puStack_c8 + (local_a8 + local_b0 >> 4 & 0xffffffffffffff8)) +
                (local_a8 + local_b0 & 0x7f) * 0x20;
        while (lVar1 != lVar15) {
          while (lVar15 = lVar15 + 0x20, lVar15 - *plVar12 == 0x1000) {
            plVar12 = plVar12 + 1;
            lVar15 = *plVar12;
            if (lVar1 == lVar15) goto LAB_00f196ac;
          }
        }
      }
LAB_00f196ac:
      local_a8 = 0;
      puVar2 = local_c0;
      while (uVar9 = lVar7 >> 3, local_c0 = puVar2, 2 < uVar9) {
        operator_delete((void *)*puStack_c8);
        puStack_c8 = puStack_c8 + 1;
        puVar2 = local_c0;
        lVar7 = (long)local_c0 - (long)puStack_c8;
      }
      if (uVar9 == 1) {
        local_b0 = 0x40;
      }
      else if (uVar9 == 2) {
        local_b0 = 0x80;
      }
      puVar16 = puStack_c8;
      if (puStack_c8 != puVar2) {
        do {
          puVar17 = puVar16 + 1;
          operator_delete((void *)*puVar16);
          puVar16 = puVar17;
        } while (puVar2 != puVar17);
        if ((long)local_c0 - (long)puStack_c8 != 0) {
          local_c0 = local_c0 + (((long)local_c0 - (long)puStack_c8) - 8U >> 3 ^ 0xffffffffffffffff)
          ;
        }
      }
      if (local_d0 != (void *)0x0) {
        operator_delete(local_d0);
      }
      lVar7 = *(long *)(this + 8);
      iVar14 = *(int *)(lVar7 + -0x58);
      if (iVar14 - 2U < 4) {
        iVar14 = *(int *)(lVar7 + -0x40) + 2;
      }
      else if (iVar14 == 0) {
        iVar14 = *(int *)(lVar7 + -0x40) +
                 (uint)(ushort)(*(short *)(*(long *)(lVar7 + -0x50) + 0x15) + 1) + 3;
      }
      else {
        if (iVar14 != 1) {
LAB_00f19ac4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar14 = *(int *)(lVar7 + -0x40) + 1;
      }
joined_r0x00f19770:
      if ((0 < iVar14) || (local_78 != 0)) {
        if (param_7 == (__sFILE *)0x0) {
          iVar4 = CreateNextTranslatedValue(this,uVar11,param_3,param_5,param_2,param_6,0);
        }
        else {
          if (local_78 == 0) {
            iVar4 = *(int *)(lVar7 + -0x58);
            if (iVar4 - 2U < 4) {
              iVar4 = *(int *)(lVar7 + -0x40) + 2;
            }
            else if (iVar4 == 0) {
              iVar4 = *(int *)(lVar7 + -0x40) +
                      (uint)(ushort)(*(short *)(*(long *)(lVar7 + -0x50) + 0x15) + 1) + 3;
            }
            else {
              if (iVar4 != 1) goto LAB_00f19ac4;
              iVar4 = *(int *)(lVar7 + -0x40) + 1;
            }
            PrintF(param_7,"    %3i: ",(ulong)(uint)(iVar4 - iVar14));
          }
          else {
            PrintF(param_7,"         ");
            if (local_78 != 0) {
              uVar9 = 0;
              do {
                PrintF(param_7,"  ");
                uVar9 = uVar9 + 1;
              } while (uVar9 < local_78);
            }
          }
          iVar4 = CreateNextTranslatedValue(this,uVar11,param_3,param_5,param_2,param_6,param_7);
          PrintF(param_7,"\n");
        }
        iVar14 = iVar14 + -1;
        uVar9 = local_78;
        if (iVar4 < 1) {
          while (local_78 = uVar9, iVar14 == 0) {
            if (uVar9 == 0) {
              iVar14 = 0;
              break;
            }
            local_78 = uVar9 - 1;
            lVar15 = uVar9 + local_80;
            lVar1 = 0;
            if ((long)local_90 - (long)puStack_98 != 0) {
              lVar1 = ((long)local_90 - (long)puStack_98) * 0x80 + -1;
            }
            iVar14 = *(int *)(*(long *)((long)puStack_98 +
                                       (local_80 + local_78 >> 7 & 0x1fffffffffffff8)) +
                             (local_80 + local_78 & 0x3ff) * 4);
            uVar9 = local_78;
            if (0x7ff < (lVar1 - lVar15) + 1U) {
              operator_delete((void *)local_90[-1]);
              local_90 = local_90 + -1;
              uVar9 = local_78;
            }
          }
        }
        else {
          uVar9 = 0;
          if ((long)local_90 - (long)puStack_98 != 0) {
            uVar9 = ((long)local_90 - (long)puStack_98) * 0x80 - 1;
          }
          uVar10 = local_78 + local_80;
          if (uVar9 == uVar10) {
            std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
                      ((deque<int,std::__ndk1::allocator<int>> *)&local_a0);
            uVar10 = local_80 + local_78;
          }
          *(int *)(*(long *)((long)puStack_98 + (uVar10 >> 7 & 0x1fffffffffffff8)) +
                  (uVar10 & 0x3ff) * 4) = iVar14;
          iVar14 = iVar4;
          local_78 = local_78 + 1;
        }
        goto joined_r0x00f19770;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar13);
  }
  local_78 = 0;
  iVar14 = (int)param_3[1];
  if (iVar14 < *(int *)(*param_3 + 3) >> 1) {
    uVar13 = 0;
    uVar11 = 0;
    pbVar6 = (byte *)(*param_3 + (long)iVar14 + 7);
    do {
      iVar14 = iVar14 + 1;
      *(int *)(param_3 + 1) = iVar14;
      bVar3 = *pbVar6;
      uVar8 = uVar13 & 0x1f;
      uVar13 = uVar13 + 7;
      uVar11 = (uint)(bVar3 >> 1) << (ulong)uVar8 | uVar11;
      pbVar6 = pbVar6 + 1;
    } while ((bVar3 & 1) != 0);
    if (1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!iterator->HasNext() || static_cast<Translation::Opcode>( iterator->Next()) == Translation::BEGIN"
              );
    }
  }
  local_78 = 0;
  lVar7 = (long)local_90 - (long)puStack_98;
  puVar2 = local_90;
  while (uVar9 = lVar7 >> 3, local_90 = puVar2, 2 < uVar9) {
    operator_delete((void *)*puStack_98);
    puStack_98 = puStack_98 + 1;
    puVar2 = local_90;
    lVar7 = (long)local_90 - (long)puStack_98;
  }
  if (uVar9 == 1) {
    local_80 = 0x200;
  }
  else if (uVar9 == 2) {
    local_80 = 0x400;
  }
  puVar16 = puStack_98;
  if (puStack_98 != puVar2) {
    do {
      puVar17 = puVar16 + 1;
      operator_delete((void *)*puVar16);
      puVar16 = puVar17;
    } while (puVar2 != puVar17);
    if ((long)local_90 - (long)puStack_98 != 0) {
      local_90 = local_90 + (((long)local_90 - (long)puStack_98) - 8U >> 3 ^ 0xffffffffffffffff);
    }
  }
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  return;
}

