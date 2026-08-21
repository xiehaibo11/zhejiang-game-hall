
/* v8::internal::WasmInterpreterEntryFrame::Summarize(std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary> >*) const */

void __thiscall
v8::internal::WasmInterpreterEntryFrame::Summarize(WasmInterpreterEntryFrame *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  ulong *local_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  ulong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined2 local_34;
  undefined1 local_32;
  
  pIVar3 = *(Isolate **)(this + 0x10);
  uVar5 = *(ulong *)(*(long *)(this + 0x20) + -0x10);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
    uVar5 = *puVar4;
  }
  local_a0 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x8b);
  WasmDebugInfo::GetInterpretedStack((ulong)&local_a0);
  puVar1 = local_68;
  while( true ) {
    if (puVar1 == local_60) {
      if (local_68 != (undefined8 *)0x0) {
        operator_delete(local_68);
      }
      return;
    }
    local_a0 = *(ulong *)(this + 0x10);
    uStack_98 = 2;
    uStack_88 = 0;
    uStack_84 = (undefined4)*puVar1;
    uStack_80 = (undefined4)((ulong)*puVar1 >> 0x20);
    puVar2 = *(ulong **)(param_1 + 8);
    local_90 = puVar4;
    if (puVar2 < *(ulong **)(param_1 + 0x10)) {
      puVar2[6] = local_70;
      puVar2[3] = (ulong)CONCAT43(uStack_84,CONCAT12(local_32,local_34)) << 8;
      puVar2[2] = (ulong)puVar4;
      puVar2[5] = uStack_78;
      puVar2[4] = CONCAT44(uStack_7c,uStack_80);
      puVar2[1] = CONCAT44(uStack_94,2);
      *puVar2 = local_a0;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x38;
    }
    else {
      std::__ndk1::
      vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>::
      __push_back_slow_path<v8::internal::FrameSummary>
                ((vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>
                  *)param_1,(FrameSummary *)&local_a0);
    }
    if (2 < uStack_98) break;
    puVar1 = puVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

