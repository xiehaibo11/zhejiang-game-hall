
/* v8::Context::BackupIncumbentScope::~BackupIncumbentScope() */

void __thiscall v8::Context::BackupIncumbentScope::~BackupIncumbentScope(BackupIncumbentScope *this)

{
  *(undefined8 *)((ulong)*(uint *)(*(long *)this + 4) << 0x20 | 0xc790) =
       *(undefined8 *)(this + 0x10);
  return;
}

