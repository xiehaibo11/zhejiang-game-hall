
/* v8::internal::Script::FindSharedFunctionInfo(v8::internal::Isolate*,
   v8::internal::FunctionLiteral const*) */

ulong * __thiscall
v8::internal::Script::FindSharedFunctionInfo(Script *this,Isolate *param_1,FunctionLiteral *param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","fun->function_literal_id() != kFunctionLiteralIdInvalid");
  }
  uVar4 = *(ulong *)this;
  uVar1 = *(uint *)(uVar4 + 0x17) & 0xfffffffe;
  uVar5 = uVar4 & 0xffffffff00000000;
  if (uVar1 == 6) {
    uVar6 = *(ulong *)(uVar5 + 0x420);
  }
  else {
    uVar6 = uVar5 | *(uint *)(uVar4 + 0x2b);
  }
  if (iVar2 < *(int *)(uVar6 + 3) >> 1) {
    if (uVar1 == 6) {
      uVar5 = *(ulong *)(uVar5 + 0x420);
    }
    else {
      uVar5 = uVar5 | *(uint *)(uVar4 + 0x2b);
    }
    uVar1 = *(uint *)(uVar5 + (long)(iVar2 << 2) + 7);
    puVar3 = (ulong *)0x0;
    if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
      if ((int)((ulong)uVar1 & 0xfffffffffffffffd) == *(int *)(param_1 + 0xa0)) {
        puVar3 = (ulong *)0x0;
      }
      else {
        uVar4 = (ulong)uVar1 & 0xfffffffffffffffd | uVar5 & 0xffffffff00000000;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(param_1 + 0x95a0);
          if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar4;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
        }
      }
    }
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","fun->function_literal_id() < shared_function_infos().length()");
}

