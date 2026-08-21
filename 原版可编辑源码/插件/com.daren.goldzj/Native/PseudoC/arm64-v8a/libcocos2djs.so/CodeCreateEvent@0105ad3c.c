
/* v8::internal::ExternalCodeEventListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name, int, int) */

void __thiscall
v8::internal::ExternalCodeEventListener::CodeCreateEvent
          (ExternalCodeEventListener *this,uint param_2,ulong param_3,ulong param_4,ulong param_5,
          undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 *local_78;
  ulong local_68;
  
  uVar1 = *(uint *)(param_4 + 7);
  uVar8 = *(undefined8 *)(this + 0x10);
  uVar10 = param_4 & 0xffffffff00000000;
  uVar9 = uVar10 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83)) {
    if (uVar1 != 0) goto joined_r0x0105adcc;
  }
  else {
    local_b0 = uVar9;
    uVar9 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_b0);
    if ((uVar9 & 1) != 0) {
      uVar1 = *(uint *)(param_4 + 7);
      uVar9 = uVar10 | uVar1;
joined_r0x0105adcc:
      if (((uVar1 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83))
      goto LAB_0105ae0c;
      local_b0 = uVar9;
      uVar3 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_b0);
      if ((uVar3 & 1) != 0) {
        local_b0 = uVar9;
        uVar9 = ScopeInfo::FunctionName((ScopeInfo *)&local_b0);
        goto LAB_0105ae0c;
      }
    }
  }
  uVar9 = *(ulong *)(uVar10 + 200);
LAB_0105ae0c:
  pIVar4 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
  }
  lVar6 = Name::ToFunctionName(uVar8,puVar5);
  if (lVar6 != 0) {
    pIVar4 = *(Isolate **)(this + 0x10);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = param_5;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),param_5);
    }
    lVar7 = Name::ToFunctionName(pIVar4,puVar5);
    if (lVar7 != 0) {
      local_98 = 0;
      lStack_90 = 0;
      uVar9 = param_3 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar9 + *(uint *)(param_3 - 1)) == 0x9a) {
        if (*(int *)(param_3 + 0x17) < 0) {
          local_68 = param_3;
          local_a8 = Code::OffHeapInstructionStart((Code *)&local_68);
        }
        else {
          local_a8 = param_3 + 0x3f;
          local_68 = param_3;
        }
      }
      else {
        local_a8 = param_3 + 0x21;
      }
      if (*(short *)(uVar9 + *(uint *)(param_3 - 1)) == 0x9a) {
        if (*(int *)(param_3 + 0x17) < 0) {
          local_68 = param_3;
          iVar2 = Code::OffHeapInstructionSize((Code *)&local_68);
        }
        else {
          iVar2 = *(int *)(param_3 + 0x13);
          local_68 = param_3;
        }
      }
      else {
        iVar2 = *(int *)(param_3 + 3) >> 1;
      }
      local_a0 = (long)iVar2;
      local_98 = lVar6;
      lStack_90 = lVar7;
      local_88 = param_6;
      uStack_84 = param_7;
      if (0x16 < param_2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_80 = *(undefined4 *)(&DAT_019d513c + (long)(int)param_2 * 4);
      local_78 = &DAT_0189703a;
      (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),&local_b0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

