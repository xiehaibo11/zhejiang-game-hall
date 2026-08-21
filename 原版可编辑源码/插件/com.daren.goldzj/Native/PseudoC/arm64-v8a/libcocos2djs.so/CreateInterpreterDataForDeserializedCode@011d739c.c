
/* v8::internal::CreateInterpreterDataForDeserializedCode(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, bool) */

void v8::internal::CreateInterpreterDataForDeserializedCode
               (Isolate *param_1,ulong *param_2,uint param_3)

{
  undefined4 *puVar1;
  Mutex *this;
  Isolate *pIVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong *local_a0;
  ulong local_88;
  ulong local_80;
  ScriptIterator aSStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_2 & 0xffffffff00000000;
  uVar14 = uVar10 | *(uint *)(*param_2 + 0xf);
  pIVar2 = param_1 + 0x95a0;
  if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x5b) {
    uVar14 = uVar10 | *(uint *)(uVar14 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar14;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    uVar14 = *puVar6;
  }
  uVar10 = *(ulong *)(param_1 + 200);
  if (((*(uint *)(uVar14 + 7) & 1) != 0) &&
     (uVar10 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 7),
     0x3f < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
    uVar10 = *(ulong *)(param_1 + 200);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_a0 = *(ulong **)pIVar2;
    if (local_a0 == *(ulong **)(param_1 + 0x95a8)) {
      local_a0 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = local_a0 + 1;
    *local_a0 = uVar10;
  }
  else {
    local_a0 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  SharedFunctionInfo::ScriptIterator::ScriptIterator(aSStack_78,param_1,*puVar6);
  uVar10 = SharedFunctionInfo::ScriptIterator::Next(aSStack_78);
  if ((int)uVar10 != 0) {
    do {
      uVar11 = *(uint *)(uVar10 + 3);
      uVar14 = uVar10 & 0xffffffff00000000;
      if ((((uVar11 & 1) != 0) &&
          (*(short *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | uVar11) - 1)) == 0x86)) ||
         ((uVar11 = *(uint *)(uVar10 + 3), (uVar11 & 1) != 0 &&
          (*(short *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | uVar11) - 1)) == 0x61)))) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar2;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar7 + 1;
          *puVar7 = uVar10;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
        }
        puVar8 = (ulong *)Factory::CopyCode((Factory *)param_1,param_1 + 0xfb8);
        puVar9 = (ulong *)Factory::NewStruct((Factory *)param_1,0x61,1);
        uVar14 = *puVar7;
        uVar17 = *puVar9;
        uVar10 = uVar14 & 0xffffffff00000000;
        uVar13 = uVar10 | *(uint *)(uVar14 + 0xf);
        uVar12 = uVar10 | 7;
        if ((*(short *)(uVar12 + *(uint *)(uVar13 - 1)) == 0x5b) &&
           (*(short *)(uVar12 + *(uint *)((uVar10 | *(uint *)(uVar13 + 0x13)) - 1)) == 0x86)) {
          uVar11 = *(uint *)(uVar13 + 0xf);
        }
        else {
          uVar11 = *(uint *)(uVar14 + 3);
          if (((uVar11 & 1) == 0) || (*(short *)(uVar12 + *(uint *)((uVar10 | uVar11) - 1)) != 0x86)
             ) {
            uVar11 = *(uint *)((uVar10 | *(uint *)(uVar14 + 3)) + 3);
          }
          else {
            uVar11 = *(uint *)(uVar14 + 3);
          }
        }
        *(uint *)(uVar17 + 3) = uVar11;
        if ((uVar11 & 1) != 0) {
          uVar12 = uVar10 | uVar11;
          uVar10 = uVar10 | (ulong)uVar11 & 0xfffffffffffc0000;
          uVar14 = *(ulong *)(uVar10 + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar17,uVar17 + 3,uVar12);
            uVar14 = *(ulong *)(uVar10 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar17,uVar17 + 3,uVar12);
          }
        }
        uVar14 = *puVar9;
        uVar10 = *puVar8;
        *(int *)(uVar14 + 7) = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar12 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar10);
            uVar12 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar10);
          }
        }
        uVar14 = *puVar7;
        uVar10 = *puVar9;
        puVar1 = (undefined4 *)(uVar14 + 3);
        *puVar1 = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar12 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,puVar1,uVar10);
            uVar12 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,puVar1,uVar10);
          }
        }
        if ((param_3 & 1) != 0) {
          local_80 = *puVar6;
          local_88 = *puVar7;
          iVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_88);
          iVar4 = Script::GetLineNumber((Script *)&local_80,iVar4);
          local_80 = *puVar6;
          local_88 = *puVar7;
          iVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_88);
          iVar5 = Script::GetColumnNumber((Script *)&local_80,iVar5);
          lVar15 = *(long *)(param_1 + 0xb6d8);
          uVar10 = *puVar8;
          uVar14 = *puVar7;
          uVar12 = *local_a0;
          this = (Mutex *)(lVar15 + 0x28);
          base::Mutex::Lock(this);
          plVar16 = *(long **)(lVar15 + 0x10);
          if (plVar16 != (long *)0x0) {
            do {
              (**(code **)(*(long *)plVar16[2] + 0x28))
                        ((long *)plVar16[2],0xc,uVar10,uVar14,uVar12,iVar4 + 1,iVar5 + 1);
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          base::Mutex::Unlock(this);
        }
      }
      uVar10 = SharedFunctionInfo::ScriptIterator::Next(aSStack_78);
    } while ((int)uVar10 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

