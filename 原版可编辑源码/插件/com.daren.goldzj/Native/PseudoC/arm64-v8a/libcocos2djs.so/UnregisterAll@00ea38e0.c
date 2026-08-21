
/* v8::RegisteredExtension::UnregisterAll() */

void v8::RegisteredExtension::UnregisterAll(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = first_extension_;
  while (plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    plVar2 = (long *)plVar3[1];
    *plVar3 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    operator_delete(plVar3);
    plVar3 = plVar2;
  }
  first_extension_ = (long *)0x0;
  return;
}

