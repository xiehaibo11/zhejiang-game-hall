
/* v8::internal::Context::is_declaration_context() */

uint __thiscall v8::internal::Context::is_declaration_context(Context *this)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *(ulong *)this;
  local_18 = uVar2 & 0xffffffff00000000;
  if ((((*(short *)((local_18 | *(uint *)(uVar2 - 1)) + 7) == 0x8d) ||
       (*(short *)((local_18 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x8f)) ||
      (*(short *)((local_18 | *(uint *)(uVar2 - 1)) + 7) == 0x90)) ||
     (*(short *)((local_18 | *(uint *)(uVar2 - 1)) + 7) == 0x8e)) {
    uVar1 = 1;
  }
  else if (*(short *)((local_18 | *(uint *)(uVar2 - 1)) + 7) == 0x8c) {
    local_18 = local_18 | *(uint *)(uVar2 + 7);
    uVar1 = ScopeInfo::language_mode((ScopeInfo *)&local_18);
  }
  else if (*(short *)((local_18 | *(uint *)(uVar2 - 1)) + 7) == 0x89) {
    local_18 = local_18 | *(uint *)(uVar2 + 7);
    uVar1 = ScopeInfo::is_declaration_scope((ScopeInfo *)&local_18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

