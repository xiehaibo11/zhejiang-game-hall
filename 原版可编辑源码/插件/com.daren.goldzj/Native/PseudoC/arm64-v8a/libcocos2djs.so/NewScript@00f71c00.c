
/* v8::internal::Factory::NewScript(v8::internal::Handle<v8::internal::String>) */

void v8::internal::Factory::NewScript(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xfd8) >> 1;
  uVar2 = 1;
  if (iVar1 != 0x3fffffff) {
    uVar2 = iVar1 + 1;
  }
  *(ulong *)(param_1 + 0xfd8) = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  NewScriptWithId();
  return;
}

