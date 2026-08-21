
/* v8::internal::WasmDebugInfo::GetLocalScopeObject(v8::internal::Handle<v8::internal::WasmDebugInfo>,
   unsigned long, int) */

undefined8 v8::internal::WasmDebugInfo::GetLocalScopeObject(ulong *param_1)

{
  Factory *pFVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  InterpretedFrame *pIVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  Factory *this;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  Factory *this_00;
  InterpretedFrame *local_d8;
  char *local_d0;
  ulong uStack_c8;
  char local_c0;
  char *local_b0;
  undefined8 uStack_a8;
  char local_a0;
  char *local_98;
  ulong uStack_90;
  char local_88 [24];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar17 = (undefined8 *)
            **(undefined8 **)
              (*(long *)((*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7)) + 3) +
              0x18);
  FUN_01206948(&local_d8,puVar17);
  pIVar5 = local_d8;
  this = (Factory *)*puVar17;
  uVar9 = Factory::NewJSObjectWithNullProto(this);
  iVar6 = wasm::InterpretedFrame::GetParameterCount(pIVar5);
  uVar7 = wasm::InterpretedFrame::GetLocalCount(pIVar5);
  if (0 < (int)uVar7) {
    pFVar1 = this + 0x95a0;
    uVar10 = Factory::NewJSObjectWithNullProto((Factory *)*puVar17);
    local_98 = "locals";
    uStack_90 = 6;
    uVar11 = Factory::InternalizeString<unsigned_char>
                       ((Factory *)*puVar17,(Vector *)&local_98,false);
    JSObject::SetOwnPropertyIgnoreAttributes(uVar9,uVar11,uVar10,0);
    iVar18 = 0;
    uVar19 = 0;
    do {
      lVar12 = wasm::InterpretedFrame::function(pIVar5);
      uVar16 = *param_1;
      iVar3 = *(int *)(lVar12 + 8);
      uVar14 = uVar16 & 0xffffffff00000000;
      if (*(int *)(uVar16 + 0xf) == *(int *)(uVar14 + 0xa0)) {
        uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar16 + 3)) + 0x6f);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)pFVar1;
          if (puVar13 == *(ulong **)(this + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar13 + 1;
          *puVar13 = uVar14;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
        }
        puVar13 = (ulong *)wasm::DecodeLocalNames(this,puVar13);
        uVar16 = *param_1;
        uVar14 = *puVar13;
        *(int *)(uVar16 + 0xf) = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar16,uVar16 + 0xf,uVar14);
            uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0xf,uVar14);
          }
        }
      }
      uVar14 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xf);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pFVar1;
        if (puVar13 == *(ulong **)(this + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)pFVar1 = puVar13 + 1;
        *puVar13 = uVar14;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
        uVar14 = *puVar13;
      }
      if (iVar3 < *(int *)(uVar14 + 3) >> 1) {
        lVar12 = (long)(iVar3 << 2) + 7;
        uVar8 = *(uint *)(lVar12 + uVar14);
        if (((uVar8 & 1) != 0) && (uVar8 == *(uint *)(this + 0xa0))) goto LAB_01206dac;
        uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + lVar12);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)pFVar1;
          if (puVar13 == *(ulong **)(this + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar13 + 1;
          *puVar13 = uVar14;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
          uVar14 = *puVar13;
        }
        if ((long)(*(int *)(uVar14 + 3) >> 1) <= (long)uVar19) goto LAB_01206dac;
        uVar8 = *(uint *)((long)iVar18 + 7 + uVar14);
        if (((uVar8 & 1) != 0) && (uVar8 == *(uint *)(this + 0xa0))) goto LAB_01206dac;
        uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + (long)iVar18 + 7);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)pFVar1;
          if (puVar13 == *(ulong **)(this + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar13 + 1;
          *puVar13 = uVar14;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
        }
        if (puVar13 == (ulong *)0x0) goto LAB_01206dac;
      }
      else {
LAB_01206dac:
        this_00 = (Factory *)*puVar17;
        pcVar2 = "arg#%d";
        if ((long)iVar6 <= (long)uVar19) {
          pcVar2 = "local#%d";
        }
        uStack_90 = 0x15;
        local_98 = local_88;
        uVar8 = SNPrintF(local_88,0x15,pcVar2,uVar19 & 0xffffffff);
        if (((int)uVar8 < 1) || ((int)uStack_90 <= (int)uVar8)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","len > 0 && len < value.length()");
        }
        uStack_c8 = (ulong)uVar8;
        local_d0 = local_98;
        puVar13 = (ulong *)Factory::InternalizeString<unsigned_char>
                                     (this_00,(Vector *)&local_d0,false);
      }
      wasm::InterpretedFrame::GetLocalValue((int)pIVar5);
      uStack_a8 = uStack_90;
      local_b0 = local_98;
      local_a0 = local_88[0];
      uVar11 = FUN_01205458(*puVar17,&local_b0);
      if (puVar13 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      JSObject::SetOwnPropertyIgnoreAttributes(uVar10,puVar13,uVar11,0);
      uVar19 = uVar19 + 1;
      iVar18 = iVar18 + 4;
    } while (uVar7 != uVar19);
  }
  uVar7 = wasm::InterpretedFrame::GetStackHeight(pIVar5);
  uVar10 = Factory::NewJSObjectWithNullProto((Factory *)*puVar17);
  local_98 = "stack";
  uStack_90 = 5;
  uVar11 = Factory::InternalizeString<unsigned_char>((Factory *)*puVar17,(Vector *)&local_98,false);
  JSObject::SetOwnPropertyIgnoreAttributes(uVar9,uVar11,uVar10,0);
  if (0 < (int)uVar7) {
    uVar19 = 0;
    do {
      wasm::InterpretedFrame::GetStackValue((int)pIVar5);
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      local_c0 = local_88[0];
      uVar11 = FUN_01205458(*puVar17,&local_d0);
      JSObject::SetOwnElementIgnoreAttributes(uVar10,uVar19,uVar11,0);
      uVar19 = uVar19 + 1;
    } while (uVar7 != uVar19);
  }
  pIVar5 = local_d8;
  local_d8 = (InterpretedFrame *)0x0;
  if (pIVar5 != (InterpretedFrame *)0x0) {
    wasm::InterpretedFrameDeleter::operator()((InterpretedFrameDeleter *)&local_d8,pIVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

