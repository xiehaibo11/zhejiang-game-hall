
/* v8::ScriptCompiler::CreateCodeCacheForFunction(v8::Local<v8::Function>) */

void v8::ScriptCompiler::CreateCodeCacheForFunction(ulong *param_1)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar2 | (ulong)*(uint *)(*param_1 + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar3);
    uVar3 = *puVar1;
  }
  if ((*(uint *)(uVar3 + 0x1b) & 0x380) == 0x200) {
    internal::CodeSerializer::Serialize();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","shared->is_wrapped()");
}

