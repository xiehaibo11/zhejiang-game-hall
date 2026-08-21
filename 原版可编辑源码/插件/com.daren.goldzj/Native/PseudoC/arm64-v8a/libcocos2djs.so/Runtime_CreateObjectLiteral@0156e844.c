
/* v8::internal::Runtime_CreateObjectLiteral(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CreateObjectLiteral(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  Isolate *pIVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  Isolate *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *puStack_88;
  byte local_80;
  Isolate *local_78;
  uint local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar18 = FUN_0156ed20(param_1,param_2,param_3);
    if (*(long *)(lVar8 + 0x28) == local_68) {
      return uVar18;
    }
    goto LAB_0156ecb8;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar5 = *(ulong **)pIVar1;
  puVar6 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  puVar10 = param_2 + -2;
  uVar17 = *puVar10;
  if (((uVar17 & 1) == 0) ||
     (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x82)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsObjectBoilerplateDescription()");
  }
  uVar19 = (uint)param_2[-3];
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  uVar3 = (int)uVar19 >> 1;
  if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x9f) {
    iVar4 = (int)param_2[-1] >> 1;
    if (*(int *)(uVar15 + 0xf) <= iVar4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","literals_slot.ToInt() < vector->length()");
    }
    lVar14 = (long)(iVar4 << 2) + 0x1f;
    uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(lVar14 + uVar15);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = puVar5;
      if (puVar6 == puVar5) {
        puVar9 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = uVar15;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
      uVar15 = *puVar9;
    }
    uVar7 = uVar19 >> 1 & 1;
    uVar19 = uVar7;
    if (FLAG_track_double_fields != '\0') {
      uVar19 = 0;
    }
    if ((uVar15 & 1) == 0) {
      if ((uVar3 & 4) == 0 && (int)uVar15 == 0) {
        *(undefined4 *)(*param_2 + lVar14) = 2;
        pIVar13 = (Isolate *)FUN_01571608(param_3,puVar10,uVar3,0);
        if ((uVar7 != 0) && (FLAG_track_double_fields == '\0')) goto joined_r0x0156eb24;
        local_a0 = (Isolate *)&local_78;
        local_98 = (ulong *)((ulong)local_98 & 0xffffffff00000000);
        local_78 = param_3;
        lVar14 = FUN_01570f78(&local_a0,pIVar13);
        if (lVar14 != 0) goto LAB_0156e98c;
      }
      else {
        puVar10 = (ulong *)FUN_01571608(param_3,puVar10,uVar3,1);
        local_98 = (ulong *)0x0;
        local_90 = (ulong *)0x0;
        local_a0 = param_3;
        puVar9 = (ulong *)FUN_01570ca8(&local_a0);
        local_70 = 0;
        local_78 = (Isolate *)&local_a0;
        lVar11 = FUN_01571d94(&local_78,puVar10);
        if (lVar11 != 0) {
          FUN_01570e50(&local_a0,puVar9,puVar10);
          uVar17 = *param_2;
          uVar15 = *puVar9;
          piVar2 = (int *)(uVar17 + lVar14);
          *piVar2 = (int)uVar15;
          if (((int)uVar15 != 3) && ((uVar15 & 1) != 0)) {
            uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar16 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar17,piVar2,uVar15 & 0xfffffffffffffffd);
              uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar16 & 0x18) != 0) &&
               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar17,piVar2,uVar15 & 0xfffffffffffffffd);
            }
          }
          goto LAB_0156eb54;
        }
      }
    }
    else {
      uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar15;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
      }
LAB_0156eb54:
      local_80 = ((byte)(uVar3 >> 1) ^ 0xff) & 1;
      local_90 = (ulong *)0x0;
      puVar12 = *(ulong **)pIVar1;
      uVar15 = *puVar9;
      local_a0 = param_3;
      local_98 = puVar9;
      puStack_88 = puVar9;
      if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar15;
      uVar15 = *puVar12;
      local_90 = puVar12;
      if (*(CanonicalHandleScope **)(local_a0 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar13 = local_a0 + 0x95a0;
        puVar9 = *(ulong **)pIVar13;
        if (puVar9 == *(ulong **)(local_a0 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(local_a0);
        }
        *(ulong **)pIVar13 = puVar9 + 1;
        *puVar9 = uVar15;
      }
      else {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(local_a0 + 0x95b8),uVar15);
      }
      local_78 = (Isolate *)&local_a0;
      local_70 = uVar19;
      pIVar13 = (Isolate *)FUN_01572554(&local_78,puVar10);
joined_r0x0156eb24:
      if (pIVar13 != (Isolate *)0x0) goto LAB_0156ec3c;
    }
LAB_0156ec38:
    pIVar13 = param_3 + 0x180;
  }
  else {
    pIVar13 = (Isolate *)FUN_01571608(param_3,puVar10,uVar3,0);
    if (((uVar19 >> 1 & 1) == 0) || (FLAG_track_double_fields != '\0')) {
      local_a0 = (Isolate *)&local_78;
      local_98 = (ulong *)((ulong)local_98 & 0xffffffff00000000);
      local_78 = param_3;
      lVar14 = FUN_01570f78(&local_a0,pIVar13);
      if (lVar14 == 0) goto LAB_0156ec38;
    }
LAB_0156e98c:
    if (pIVar13 == (Isolate *)0x0) goto LAB_0156ec38;
  }
LAB_0156ec3c:
  uVar18 = *(undefined8 *)pIVar13;
  *(ulong **)pIVar1 = puVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar6) {
    *(ulong **)(param_3 + 0x95a8) = puVar6;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return uVar18;
  }
LAB_0156ecb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

