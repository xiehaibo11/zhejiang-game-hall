
/* v8::internal::Runtime_DisassembleFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DisassembleFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (TracingFlags::runtime_stats == 0) {
    iVar1 = *(int *)(param_3 + 0x95b0);
    if (param_3 == (Isolate *)0x0) {
      iVar1 = iVar1 + 1;
    }
    *(int *)(param_3 + 0x95b0) = iVar1;
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar2 = FUN_015a39cc(param_1);
  return uVar2;
}

