
/* v8::internal::compiler::Typer::Visitor::ToObject(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

long v8::internal::compiler::Typer::Visitor::ToObject(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_28;
  
  if (param_1 == 0x47f0001) {
    lVar2 = 0x47f0001;
  }
  else {
    local_28 = param_1;
    uVar1 = Type::SlowIs((Type *)&local_28,0x47f0001);
    lVar2 = local_28;
    if ((((uVar1 & 1) == 0) && (lVar2 = 0x20001, local_28 != 0x8007fff)) &&
       (uVar1 = Type::SlowIs((Type *)&local_28,0x8007fff), (uVar1 & 1) == 0)) {
      uVar1 = Type::Maybe((Type *)&local_28,0x40001);
      lVar2 = 0x47f0001;
      if ((uVar1 & 1) == 0) {
        lVar2 = 0x47b0001;
      }
    }
  }
  return lVar2;
}

