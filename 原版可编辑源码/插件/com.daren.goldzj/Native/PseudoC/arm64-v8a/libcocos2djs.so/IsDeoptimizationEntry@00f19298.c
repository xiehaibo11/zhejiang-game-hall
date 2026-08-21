
/* v8::internal::Deoptimizer::IsDeoptimizationEntry(v8::internal::Isolate*, unsigned long,
   v8::internal::DeoptimizeKind*) */

undefined8
v8::internal::Deoptimizer::IsDeoptimizationEntry
          (Isolate *param_1,ulong param_2,DeoptimizeKind *param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x9570);
  if (*(long *)(lVar2 + 8) + 0x3fU == param_2 && (int)*(long *)(lVar2 + 8) != 0) {
    uVar1 = 0;
  }
  else if ((*(long *)(lVar2 + 0x10) + 0x3fU == param_2) && ((int)*(long *)(lVar2 + 0x10) != 0)) {
    uVar1 = 1;
  }
  else {
    if (*(long *)(lVar2 + 0x18) + 0x3fU != param_2) {
      return 0;
    }
    if ((int)*(long *)(lVar2 + 0x18) == 0) {
      return 0;
    }
    uVar1 = 2;
  }
  *param_3 = uVar1;
  return 1;
}

