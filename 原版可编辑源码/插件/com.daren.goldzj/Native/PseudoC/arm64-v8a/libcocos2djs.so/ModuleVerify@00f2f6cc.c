
/* v8::internal::Module::ModuleVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Module::ModuleVerify(Module *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::ModuleVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  uVar1 = *(int *)(uVar2 + 0xb) >> 1;
  if ((*(uint *)(uVar2 + 0x13) & 1) == 0) {
    if (uVar1 != 6) {
LAB_00f2f740:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","status() == Module::kErrored == !exception().IsTheHole(isolate)"
              );
    }
  }
  else if ((uVar1 != 6) == (*(uint *)(uVar2 + 0x13) != *(uint *)(param_1 + 0xa8)))
  goto LAB_00f2f740;
  uVar4 = uVar2 & 0xffffffff00000000;
  uVar3 = uVar4 | *(uint *)(uVar2 + 0xf);
  if ((*(uint *)(uVar2 + 0xf) != *(uint *)(param_1 + 0xa0)) &&
     (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xac)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "module_namespace().IsUndefined(isolate) || module_namespace().IsJSModuleNamespace()");
  }
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xac) {
    if ((*(int *)(uVar2 + 0xb) < 0) || (uVar1 < 2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Module::kInstantiating <= status()");
    }
    if (*(int *)(uVar3 + 0xb) != (int)uVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","JSModuleNamespace::cast(module_namespace()).module() == *this");
    }
  }
  if (*(uint *)(uVar2 + 7) < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","hash() != 0");
  }
  return;
}

