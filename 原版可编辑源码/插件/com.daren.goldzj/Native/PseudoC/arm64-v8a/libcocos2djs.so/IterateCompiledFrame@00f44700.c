
/* v8::internal::StandardFrame::IterateCompiledFrame(v8::internal::RootVisitor*) const */

void __thiscall
v8::internal::StandardFrame::IterateCompiledFrame(StandardFrame *this,RootVisitor *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long local_b0;
  long local_a8;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = **(ulong **)(this + 0x28);
  puVar4 = (ulong *)wasm::WasmCodeManager::LookupCode
                              (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),uVar8);
  if (puVar4 == (ulong *)0x0) {
    lVar13 = InnerPointerToCodeCache::GetCacheEntry
                       (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),uVar8);
    lVar5 = *(long *)(lVar13 + 0x18);
    if (lVar5 == 0) {
      Code::GetSafepointEntry(lVar13 + 8);
      *(undefined8 *)(lVar13 + 0x18) = uStack_90;
      *(long *)(lVar13 + 0x10) = local_98;
      lVar5 = *(long *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x20) = local_88;
    }
    lVar13 = *(long *)(lVar13 + 8);
    uVar7 = *(uint *)(lVar13 + 0x17) >> 1 & 0x1f;
    uVar14 = *(uint *)(lVar13 + 0x17) >> 7 & 0xffffff;
    if ((uVar7 < 0xc) && ((1 << (ulong)uVar7 & 0x920U) != 0)) {
      iVar10 = 0;
      bVar1 = false;
    }
    else {
      iVar10 = 0;
      bVar1 = true;
    }
  }
  else {
    SafepointTable::SafepointTable
              ((SafepointTable *)&local_98,*puVar4,puVar4[10],(uint)puVar4[9],false);
    SafepointTable::FindEntry((ulong)&local_98);
    uVar14 = (uint)puVar4[9];
    iVar10 = *(int *)((long)puVar4 + 0x4c);
    lVar13 = 0;
    bVar1 = 1 < *(uint *)((long)puVar4 + 0x3c);
    lVar5 = local_a8;
  }
  lVar9 = *(long *)(this + 0x20);
  if ((*(ulong *)(lVar9 + -8) & 1) == 0) {
    uVar7 = (uint)(*(ulong *)(lVar9 + -8) >> 1);
    lVar6 = 0x10;
    if (uVar7 < 0x19) {
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar2 & 0x2fe28e) == 0) {
        if (((uVar2 & 0x1c00001) != 0) || ((1 << (ulong)(uVar7 & 0x1f) & 0x101010U) != 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      }
      else {
        lVar6 = 8;
      }
    }
  }
  else {
    lVar6 = 0x10;
  }
  lVar11 = (lVar9 - lVar6) - (ulong)((uVar14 * 8 - (int)lVar6) - 0x10);
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,6,0,*(undefined8 *)(this + 0x18),lVar11);
  }
  if (uVar14 != 0) {
    uVar7 = 0;
    do {
      if ((*(byte *)(lVar5 + (ulong)(uVar7 >> 3)) >> (ulong)(uVar7 & 7) & 1) != 0) {
        puVar4 = (ulong *)(lVar11 + (long)(int)uVar7 * 8);
        uVar8 = *puVar4;
        if ((uVar8 & 1) != 0) {
          *puVar4 = *(long *)(this + 0x10) + (uVar8 & 0xffffffff);
        }
        (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar14 != uVar7);
  }
  if (iVar10 != 0) {
    lVar5 = (**(code **)(*(long *)this + 0x38))(this);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,6,0,lVar5,lVar5 + (long)iVar10 * 8);
  }
  if ((int)lVar13 != 0) {
    plVar12 = *(long **)(this + 0x28);
    lVar5 = *plVar12;
    local_98 = lVar13;
    if (*(int *)(lVar13 + 0x17) < 0) {
      lVar13 = Code::OffHeapInstructionStart((Code *)&local_98);
    }
    else {
      lVar13 = lVar13 + 0x3f;
    }
    local_b0 = local_98;
    (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,&local_b0);
    if ((int)local_b0 != (int)local_98) {
      local_98 = local_b0;
      if (*(int *)(local_b0 + 0x17) < 0) {
        lVar11 = Code::OffHeapInstructionStart((Code *)&local_98);
      }
      else {
        lVar11 = local_b0 + 0x3f;
      }
      *plVar12 = lVar11 + (lVar5 - lVar13 & 0xffffffffU);
    }
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,6,0,lVar9 - lVar6,lVar9);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

