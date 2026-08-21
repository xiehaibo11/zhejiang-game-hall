
/* v8::Context::BackupIncumbentScope::BackupIncumbentScope(v8::Local<v8::Context>) */

void __thiscall
v8::Context::BackupIncumbentScope::BackupIncumbentScope(BackupIncumbentScope *this,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(long *)this = param_2;
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = internal::GetCurrentStackPosition();
  *(undefined8 *)(this + 8) = uVar3;
  puVar1 = (undefined8 *)((ulong)uVar2 << 0x20 | 0xc790);
  *(undefined8 *)(this + 0x10) = *puVar1;
  *puVar1 = this;
  return;
}

