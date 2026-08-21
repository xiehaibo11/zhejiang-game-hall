
/* v8::internal::ContextOnlyDescriptor::InitializePlatformIndependent(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::ContextOnlyDescriptor::InitializePlatformIndependent
          (ContextOnlyDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined2 *puVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 1;
  puVar1 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined2 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *puVar1 = 0;
  *(undefined2 **)(param_1 + 0x20) = puVar1;
  *puVar1 = 0x708;
  return;
}

