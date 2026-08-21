
/* v8::internal::StoreWithVectorDescriptor::InitializePlatformIndependent(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreWithVectorDescriptor::InitializePlatformIndependent
          (StoreWithVectorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0x500000001;
  puVar1 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  *puVar1 = 0x708070807080708;
  *(undefined4 *)(puVar1 + 1) = 0x7080206;
  return;
}

