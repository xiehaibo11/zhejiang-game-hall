
/* v8::internal::compiler::Typer::Visitor::ObjectIsArrayBufferView(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::ObjectIsArrayBufferView(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_8;
  
  local_8 = param_1;
  if (param_1 != 1) {
    uVar1 = Type::Maybe((Type *)&local_8,0x20001);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
    }
    else {
      uVar2 = 0x201;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!type.IsNone()");
}

