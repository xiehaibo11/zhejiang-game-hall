
/* v8::internal::ExternalCodeEventListener::RegExpCodeCreateEvent(v8::internal::AbstractCode,
   v8::internal::String) */

void __thiscall
v8::internal::ExternalCodeEventListener::RegExpCodeCreateEvent
          (ExternalCodeEventListener *this,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  ulong *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  ulong local_38;
  
  local_68 = (ulong *)0x0;
  lStack_60 = 0;
  uVar4 = param_2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_38 = param_2;
      local_78 = Code::OffHeapInstructionStart((Code *)&local_38);
    }
    else {
      local_78 = param_2 + 0x3f;
      local_38 = param_2;
    }
  }
  else {
    local_78 = param_2 + 0x21;
  }
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_38 = param_2;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_38);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x13);
      local_38 = param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 3) >> 1;
  }
  local_70 = (long)iVar1;
  pIVar3 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = param_3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),param_3);
  }
  local_50 = 9;
  lStack_60 = *(long *)(this + 0x10) + 200;
  local_58 = 0;
  local_48 = &DAT_0189703a;
  local_68 = puVar2;
  (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),auStack_80);
  return;
}

