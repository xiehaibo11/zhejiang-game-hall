
/* v8::internal::CallPrinter::VisitLiteral(v8::internal::Literal*) */

void __thiscall v8::internal::CallPrinter::VisitLiteral(CallPrinter *this,Literal *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Literal::BuildValue(param_1,*(Isolate **)this);
  PrintLiteral(this,uVar1,1);
  return;
}

