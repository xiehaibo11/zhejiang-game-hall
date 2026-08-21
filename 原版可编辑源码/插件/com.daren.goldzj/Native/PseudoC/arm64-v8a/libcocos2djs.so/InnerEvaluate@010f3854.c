
/* v8::internal::Module::InnerEvaluate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>) */

Isolate * v8::internal::Module::InnerEvaluate(Isolate *param_1,ulong *param_2)

{
  int iVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  iVar1 = *(int *)(uVar3 + 0xb) >> 1;
  if (iVar1 == 5) {
    return param_1 + 0xa0;
  }
  if (iVar1 == 6) {
    Isolate::Throw(param_1,uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x13),0);
    return (Isolate *)0x0;
  }
  if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kInstantiated");
  }
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x44) {
    pIVar2 = (Isolate *)SourceTextModule::Evaluate();
    return pIVar2;
  }
  pIVar2 = (Isolate *)SyntheticModule::Evaluate();
  return pIVar2;
}

