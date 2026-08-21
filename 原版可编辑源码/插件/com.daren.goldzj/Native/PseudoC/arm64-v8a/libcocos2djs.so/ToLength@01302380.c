
/* WARNING: Removing unreachable block (ram,0x013023f0) */
/* v8::internal::compiler::Typer::Visitor::ToLength(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

void v8::internal::compiler::Typer::Visitor::ToLength(undefined8 param_1,long param_2)

{
  Zone *pZVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long local_28;
  
  local_28 = ToInteger();
  if (local_28 != 1) {
    dVar2 = (double)Type::Min((Type *)&local_28);
    dVar3 = (double)Type::Max((Type *)&local_28);
    if (dVar3 <= 0.0) {
      dVar2 = 0.0;
      pZVar1 = (Zone *)**(undefined8 **)(param_2 + 8);
    }
    else {
      if (dVar2 < 9007199254740991.0) {
        dVar4 = 0.0;
        if (0.0 < dVar2) {
          dVar4 = dVar2;
        }
        Type::Range(dVar4,dVar3,(Zone *)**(undefined8 **)(param_2 + 8));
        return;
      }
      pZVar1 = (Zone *)**(undefined8 **)(param_2 + 8);
      dVar2 = 9007199254740991.0;
    }
    Type::NewConstant(dVar2,pZVar1);
  }
  return;
}

