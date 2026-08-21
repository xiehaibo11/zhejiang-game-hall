
/* v8::internal::Runtime::FunctionForEntry(unsigned long) */

undefined * v8::internal::Runtime::FunctionForEntry(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_01cb7920;
  lVar2 = 0x1f9;
  do {
    if (*(ulong *)(puVar1 + 0x10) == param_1) {
      return puVar1;
    }
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0x20;
  } while (lVar2 != 0);
  return (undefined *)0x0;
}

