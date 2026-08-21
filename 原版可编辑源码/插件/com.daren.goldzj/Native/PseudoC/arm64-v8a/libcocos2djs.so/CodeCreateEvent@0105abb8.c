
/* v8::internal::ExternalCodeEventListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name) */

void __thiscall
v8::internal::ExternalCodeEventListener::CodeCreateEvent
          (ExternalCodeEventListener *this,uint param_2,ulong param_3,undefined8 param_4,
          ulong param_5)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 *local_58;
  ulong local_48;
  
  pIVar4 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = param_5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),param_5);
  }
  lVar3 = Name::ToFunctionName(pIVar4,puVar2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  local_78 = 0;
  local_70 = 0;
  uVar5 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_48 = param_3;
      local_88 = Code::OffHeapInstructionStart((Code *)&local_48);
    }
    else {
      local_88 = param_3 + 0x3f;
      local_48 = param_3;
    }
  }
  else {
    local_88 = param_3 + 0x21;
  }
  if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_48 = param_3;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_48);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x13);
      local_48 = param_3;
    }
  }
  else {
    iVar1 = *(int *)(param_3 + 3) >> 1;
  }
  local_80 = (long)iVar1;
  local_70 = *(long *)(this + 0x10) + 200;
  uStack_68 = 0;
  local_78 = lVar3;
  if (param_2 < 0x17) {
    local_60 = *(undefined4 *)(&DAT_019d513c + (long)(int)param_2 * 4);
    local_58 = &DAT_0189703a;
    (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),auStack_90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

