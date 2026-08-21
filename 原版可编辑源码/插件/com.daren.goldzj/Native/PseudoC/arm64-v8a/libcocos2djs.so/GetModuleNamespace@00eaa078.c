
/* v8::Module::GetModuleNamespace() */

void __thiscall v8::Module::GetModuleNamespace(Module *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  uVar1 = *(int *)(uVar3 + 0xb) >> 1;
  if (uVar1 - 3 < 4) {
LAB_00eaa0ec:
    internal::Module::GetModuleNamespace(uVar3 & 0xffffffff00000000,this);
    return;
  }
  if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Module::GetModuleNamespace",
                 "v8::Module::GetModuleNamespace must be used on an instantiated module");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      uVar3 = *(ulong *)this;
      goto LAB_00eaa0ec;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Module::GetModuleNamespace",
             "v8::Module::GetModuleNamespace must be used on an instantiated module");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

