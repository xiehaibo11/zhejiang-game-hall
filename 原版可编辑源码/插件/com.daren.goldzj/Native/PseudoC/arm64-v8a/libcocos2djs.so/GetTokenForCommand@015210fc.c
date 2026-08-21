
/* v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::GetTokenForCommand(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*) */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::GetTokenForCommand
          (DeferredCommands *this,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int local_28;
  undefined4 uStack_24;
  
  if (param_2 == 4) {
    return 0;
  }
  if (param_2 == 3) {
    if (*(int *)(this + 0x34) != -1) {
      return *(int *)(this + 0x34);
    }
    puVar1 = *(undefined8 **)(this + 0x10);
    local_38 = 3;
    uStack_30 = 0;
    iVar3 = (int)((ulong)((long)puVar1 - *(long *)(this + 8)) >> 3) * -0x55555555;
    if (*(undefined8 **)(this + 0x18) <= puVar1) {
      local_28 = iVar3;
      std::__ndk1::
      vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
      ::
      __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
                ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
                  *)(this + 8),(Entry *)&local_38);
      *(int *)(this + 0x34) = iVar3;
      return iVar3;
    }
    puVar1[2] = CONCAT44(uStack_24,iVar3);
    puVar1[1] = 0;
    *puVar1 = CONCAT44(uStack_34,3);
    lVar2 = *(long *)(this + 0x10);
    *(int *)(this + 0x34) = iVar3;
  }
  else if (param_2 == 2) {
    if (*(int *)(this + 0x30) != -1) {
      return *(int *)(this + 0x30);
    }
    puVar1 = *(undefined8 **)(this + 0x10);
    local_38 = 2;
    uStack_30 = 0;
    iVar3 = (int)((ulong)((long)puVar1 - *(long *)(this + 8)) >> 3) * -0x55555555;
    if (*(undefined8 **)(this + 0x18) <= puVar1) {
      local_28 = iVar3;
      std::__ndk1::
      vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
      ::
      __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
                ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
                  *)(this + 8),(Entry *)&local_38);
      *(int *)(this + 0x30) = iVar3;
      return iVar3;
    }
    puVar1[2] = CONCAT44(uStack_24,iVar3);
    puVar1[1] = 0;
    *puVar1 = CONCAT44(uStack_34,2);
    lVar2 = *(long *)(this + 0x10);
    *(int *)(this + 0x30) = iVar3;
  }
  else {
    puVar1 = *(undefined8 **)(this + 0x10);
    iVar3 = (int)((ulong)((long)puVar1 - *(long *)(this + 8)) >> 3) * -0x55555555;
    if (*(undefined8 **)(this + 0x18) <= puVar1) {
      local_38 = param_2;
      uStack_30 = param_3;
      local_28 = iVar3;
      std::__ndk1::
      vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
      ::
      __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
                ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
                  *)(this + 8),(Entry *)&local_38);
      return iVar3;
    }
    puVar1[2] = CONCAT44(uStack_24,iVar3);
    puVar1[1] = param_3;
    *puVar1 = CONCAT44(uStack_34,param_2);
    lVar2 = *(long *)(this + 0x10);
  }
  *(long *)(this + 0x10) = lVar2 + 0x18;
  return iVar3;
}

