
/* v8::internal::compiler::Typer::Visitor::ObjectIsMinusZero(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

undefined8 v8::internal::compiler::Typer::Visitor::ObjectIsMinusZero(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long local_8;
  
  if (param_1 != 0x801) {
    local_8 = param_1;
    if (param_1 == 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!type.IsNone()");
    }
    uVar1 = Type::SlowIs((Type *)&local_8,0x801);
    if ((uVar1 & 1) == 0) {
      uVar1 = Type::Maybe((Type *)&local_8,0x801);
      if ((uVar1 & 1) != 0) {
        return 0x201;
      }
      puVar2 = (undefined8 *)(param_2 + 0xa0);
      goto LAB_0130294c;
    }
  }
  puVar2 = (undefined8 *)(param_2 + 0xa8);
LAB_0130294c:
  return *puVar2;
}

