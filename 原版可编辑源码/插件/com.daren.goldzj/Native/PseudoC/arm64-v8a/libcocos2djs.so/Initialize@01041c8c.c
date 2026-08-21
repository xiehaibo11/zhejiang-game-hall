
/* v8::internal::interpreter::Interpreter::Initialize() */

void __thiscall v8::internal::interpreter::Interpreter::Initialize(Interpreter *this)

{
  Builtins *this_00;
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 local_44;
  long local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  this_00 = (Builtins *)(*(long *)(this + 8) + 0x9e00);
  plVar1 = (long *)Builtins::builtin_handle(this_00,0x38);
  local_40 = *plVar1;
  if (*(int *)(local_40 + 0x17) < 0) {
    lVar2 = Code::OffHeapInstructionStart((Code *)&local_40);
  }
  else {
    lVar2 = local_40 + 0x3f;
  }
  *(long *)(this + 0x1818) = lVar2;
  lVar2 = Builtins::builtin(this_00,0x48f);
  local_44 = 0x3d9;
  plVar1 = operator_new(0x28);
  plVar1[4] = (long)this;
  plVar1[2] = lVar2;
  plVar1[3] = (long)this_00;
  local_34[0] = 0;
  *plVar1 = (long)&PTR_FUN_01cacbc8;
  plVar1[1] = (long)&local_44;
  local_38[0] = 1;
  FUN_01042348(plVar1,local_34,local_38);
  iVar3 = 1;
  do {
    local_34[0] = (undefined1)iVar3;
    local_38[0] = 1;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_34,local_38);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xb7);
  iVar3 = 0;
  do {
    local_34[0] = (undefined1)iVar3;
    local_38[0] = 2;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_34,local_38);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xb7);
  iVar3 = 0;
  do {
    local_34[0] = (undefined1)iVar3;
    local_38[0] = 4;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_34,local_38);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xb7);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}

