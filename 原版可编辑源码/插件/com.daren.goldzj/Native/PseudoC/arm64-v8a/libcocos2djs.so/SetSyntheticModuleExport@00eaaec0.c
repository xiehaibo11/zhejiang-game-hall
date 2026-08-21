
/* v8::Module::SetSyntheticModuleExport(v8::Local<v8::String>, v8::Local<v8::Value>) */

void __thiscall
v8::Module::SetSyntheticModuleExport(Module *this,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  if (*(short *)((uVar1 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) == 0x45) {
LAB_00eaaf40:
    internal::SyntheticModule::SetExportStrict(uVar1,this,param_2,param_3);
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Module::SetSyntheticModuleExport",
                 "v8::Module::SetSyntheticModuleExport must only be called on a SyntheticModule");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      uVar1 = (ulong)*(uint *)(this + 4) << 0x20;
      goto LAB_00eaaf40;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Module::SetSyntheticModuleExport",
             "v8::Module::SetSyntheticModuleExport must only be called on a SyntheticModule");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

