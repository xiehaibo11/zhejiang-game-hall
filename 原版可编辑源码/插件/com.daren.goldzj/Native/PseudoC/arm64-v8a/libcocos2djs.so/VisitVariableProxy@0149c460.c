
/* v8::internal::CallPrinter::VisitVariableProxy(v8::internal::VariableProxy*) */

void __thiscall
v8::internal::CallPrinter::VisitVariableProxy(CallPrinter *this,VariableProxy *param_1)

{
  VariableProxy *pVVar1;
  
  if (this[0x1e] != (CallPrinter)0x0) {
    pVVar1 = param_1 + 8;
    if (((byte)param_1[5] & 1) != 0) {
      pVVar1 = (VariableProxy *)(*(long *)pVVar1 + 8);
    }
    PrintLiteral(this,**(undefined8 **)pVVar1,0);
    return;
  }
  Print(this,"(var)");
  return;
}

