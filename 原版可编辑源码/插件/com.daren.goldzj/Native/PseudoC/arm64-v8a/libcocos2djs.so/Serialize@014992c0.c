
/* v8::internal::SourceTextModuleDescriptor::Entry::Serialize(v8::internal::Isolate*) const */

void __thiscall
v8::internal::SourceTextModuleDescriptor::Entry::Serialize(Entry *this,Isolate *param_1)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  long *plVar4;
  
  if ((long)*(int *)(this + 0x20) + 0x40000000U >> 0x1f == 0) {
    if (*(long **)(this + 8) == (long *)0x0) {
      pIVar1 = param_1 + 0xa0;
      plVar4 = *(long **)(this + 0x10);
    }
    else {
      pIVar1 = (Isolate *)**(long **)(this + 8);
      plVar4 = *(long **)(this + 0x10);
    }
    if (plVar4 == (long *)0x0) {
      pIVar2 = param_1 + 0xa0;
      plVar4 = *(long **)(this + 0x18);
    }
    else {
      pIVar2 = (Isolate *)*plVar4;
      plVar4 = *(long **)(this + 0x18);
    }
    if (plVar4 == (long *)0x0) {
      pIVar3 = param_1 + 0xa0;
    }
    else {
      pIVar3 = (Isolate *)*plVar4;
    }
    SourceTextModuleInfoEntry::New
              (param_1,pIVar1,pIVar2,pIVar3,(long)*(int *)(this + 0x20),*(undefined4 *)(this + 0x24)
               ,*(undefined4 *)this,*(undefined4 *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","Smi::IsValid(module_request)");
}

