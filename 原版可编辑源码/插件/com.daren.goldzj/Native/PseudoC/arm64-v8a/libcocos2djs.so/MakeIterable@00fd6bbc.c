
/* v8::internal::MinorMarkCompactCollector::MakeIterable(v8::internal::Page*,
   v8::internal::MarkingTreatmentMode, v8::internal::FreeSpaceTreatmentMode) */

void __thiscall
v8::internal::MinorMarkCompactCollector::MakeIterable
          (undefined8 param_1_00,long param_1,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint *__s;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long local_110;
  long lStack_108;
  uint local_100;
  uint local_fc;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  uint local_a0;
  uint local_9c;
  long local_98;
  long local_90;
  undefined4 local_88;
  ulong local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 8) >> 5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!p->IsLargePage()");
  }
  lVar10 = *(long *)(param_1 + 0x108);
  __s = *(uint **)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar13 = *(long *)(param_1 + 0x28) - param_1;
  uStack_c0 = *(undefined8 *)(lVar6 + -0x87c0);
  local_c8 = *(undefined8 *)(lVar6 + -0x87c8);
  local_b8 = *(undefined8 *)(lVar6 + -0x87d0);
  uVar12 = uVar13 >> 7 & 0x1ffffff;
  uVar8 = (ulong)((long)__s - param_1) >> 7 & 0x1ffffff;
  uVar11 = (uint)uVar12;
  local_9c = 0;
  local_80 = 0;
  uVar7 = (uint)uVar8;
  local_98 = param_1;
  if (uVar7 != 0) {
    local_98 = ((long)__s - param_1 & 0xffffff80U) + param_1;
    local_9c = uVar7;
  }
  iVar9 = (int)param_1;
  local_100 = uVar11;
  local_d0 = param_1;
  lStack_b0 = param_1;
  local_a8 = lVar10;
  local_a0 = uVar11;
  if (uVar7 < uVar11) {
    local_88 = *(undefined4 *)(lVar10 + uVar8 * 4);
    local_90 = local_98;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_d0);
    lVar6 = *(long *)(param_1 + 0x18);
    local_100 = (uint)(*(int *)(param_1 + 0x28) - iVar9) >> 7;
  }
  uStack_120 = *(undefined8 *)(lVar6 + -0x87c0);
  local_128 = *(undefined8 *)(lVar6 + -0x87c8);
  local_118 = *(undefined8 *)(lVar6 + -0x87d0);
  local_fc = 0;
  local_e0 = 0;
  local_130 = param_1;
  local_110 = param_1;
  lStack_108 = lVar10;
  if (uVar11 == 0) {
    local_f8 = param_1;
    if (local_100 == 0) goto LAB_00fd6d08;
  }
  else {
    local_f8 = (uVar13 & 0xffffff80) + param_1;
    local_fc = uVar11;
    if (local_100 <= uVar11) {
LAB_00fd6d08:
      local_e0._0_4_ = 0;
      goto LAB_00fd6d0c;
    }
  }
  local_e8 = *(undefined4 *)(lVar10 + uVar12 * 4);
  local_f0 = local_f8;
  LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
            ((iterator *)&local_130);
LAB_00fd6d0c:
  if ((int)local_e0 != (int)local_80) {
    do {
      puVar14 = (uint *)(local_80 - 1);
      uVar8 = (long)puVar14 - (long)__s;
      local_138 = local_80;
      puVar5 = puVar14;
      if (uVar8 != 0) {
        if (puVar14 < __s) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","free_end > free_start");
        }
        uVar11 = (int)__s - iVar9;
        uVar7 = (uint)((int)puVar14 - iVar9) >> 2;
        if (uVar11 >> 2 < uVar7) {
          lVar6 = *(long *)(param_1 + 0x10);
          uVar7 = uVar7 - 1;
          uVar1 = uVar11 >> 7;
          uVar12 = (ulong)uVar1;
          uVar2 = uVar7 >> 5;
          iVar4 = 1 << (ulong)(uVar11 >> 2 & 0x1f);
          uVar7 = 1 << (ulong)(uVar7 & 0x1f);
          if (uVar1 == uVar2) {
            uVar11 = uVar7 - iVar4;
          }
          else {
            *(uint *)(lVar6 + uVar12 * 4) = *(uint *)(lVar6 + uVar12 * 4) & iVar4 - 1U;
            if (uVar1 + 1 < uVar2) {
              memset((void *)(lVar6 + (ulong)((uVar1 + 1) * 4)),0,
                     (ulong)((uVar2 - uVar1) - 2) * 4 + 4);
            }
            uVar11 = uVar7 - 1;
            uVar12 = (ulong)uVar2;
          }
          *(uint *)(lVar6 + uVar12 * 4) =
               *(uint *)(lVar6 + uVar12 * 4) & ((uVar11 | uVar7) ^ 0xffffffff);
        }
        if (param_4 == 1) {
          memset(__s,0xcc,uVar8);
        }
        Heap::CreateFillerObjectAt(*(Heap **)(param_1 + 0x18),__s,uVar8 & 0xffffffff,1,1);
        puVar5 = (uint *)(local_138 - 1);
      }
      iVar4 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_138,local_138 & 0xffffffff00000000 | (ulong)*puVar5);
      __s = (uint *)((long)puVar14 + (long)iVar4);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_d0);
    } while ((int)local_80 != (int)local_e0);
  }
  puVar5 = *(uint **)(param_1 + 0x28);
  uVar8 = (long)puVar5 - (long)__s;
  if (uVar8 != 0) {
    if (puVar5 < __s) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","p->area_end() > free_start");
    }
    uVar11 = (int)__s - iVar9;
    uVar7 = (uint)((int)puVar5 - iVar9) >> 2;
    if (uVar11 >> 2 < uVar7) {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar7 = uVar7 - 1;
      uVar1 = uVar11 >> 7;
      uVar12 = (ulong)uVar1;
      uVar2 = uVar7 >> 5;
      iVar9 = 1 << (ulong)(uVar11 >> 2 & 0x1f);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (uVar1 == uVar2) {
        uVar11 = uVar7 - iVar9;
      }
      else {
        *(uint *)(lVar6 + uVar12 * 4) = *(uint *)(lVar6 + uVar12 * 4) & iVar9 - 1U;
        if (uVar1 + 1 < uVar2) {
          memset((void *)(lVar6 + (ulong)((uVar1 + 1) * 4)),0,(ulong)((uVar2 - uVar1) - 2) * 4 + 4);
        }
        uVar11 = uVar7 - 1;
        uVar12 = (ulong)uVar2;
      }
      *(uint *)(lVar6 + uVar12 * 4) =
           *(uint *)(lVar6 + uVar12 * 4) & ((uVar11 | uVar7) ^ 0xffffffff);
    }
    if (param_4 == 1) {
      memset(__s,0xcc,uVar8);
    }
    Heap::CreateFillerObjectAt(*(Heap **)(param_1 + 0x18),__s,uVar8 & 0xffffffff,1,1);
  }
  if (param_3 == 1) {
    memset(*(void **)(param_1 + 0x108),0,0x2000);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xfffffffffffdffff;
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

