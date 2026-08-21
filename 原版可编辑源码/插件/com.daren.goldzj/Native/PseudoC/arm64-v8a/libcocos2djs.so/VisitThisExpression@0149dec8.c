
/* v8::internal::CallPrinter::VisitThisExpression(v8::internal::ThisExpression*) */

void v8::internal::CallPrinter::VisitThisExpression(ThisExpression *param_1)

{
  Print((CallPrinter *)param_1,"this");
  return;
}

