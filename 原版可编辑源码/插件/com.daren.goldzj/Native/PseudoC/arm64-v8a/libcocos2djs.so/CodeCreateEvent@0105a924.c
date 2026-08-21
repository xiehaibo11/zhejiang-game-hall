
/* v8::internal::ExternalCodeEventListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, char const*) */

void __thiscall
v8::internal::ExternalCodeEventListener::CodeCreateEvent
          (ExternalCodeEventListener *this,uint param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_88 [8];
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulong local_28;
  
  local_70 = 0;
  lStack_68 = 0;
  uVar2 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_28 = param_3;
      local_80 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      local_80 = param_3 + 0x3f;
      local_28 = param_3;
    }
  }
  else {
    local_80 = param_3 + 0x21;
  }
  if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_28 = param_3;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_28);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x13);
      local_28 = param_3;
    }
  }
  else {
    iVar1 = *(int *)(param_3 + 3) >> 1;
  }
  local_78 = (long)iVar1;
  local_60 = 0;
  local_70 = *(long *)(this + 0x10) + 200;
  lStack_68 = local_70;
  if (param_2 < 0x17) {
    local_58 = *(undefined4 *)(&DAT_019d513c + (long)(int)param_2 * 4);
    local_50 = param_4;
    (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),auStack_88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

