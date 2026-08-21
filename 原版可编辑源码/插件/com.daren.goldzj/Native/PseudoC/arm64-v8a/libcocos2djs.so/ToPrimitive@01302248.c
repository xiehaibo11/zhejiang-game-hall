
/* v8::internal::compiler::Typer::Visitor::ToPrimitive(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

long v8::internal::compiler::Typer::Visitor::ToPrimitive(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_8;
  
  local_8 = param_1;
  if ((param_1 == 0x8007fff) || (uVar1 = Type::SlowIs((Type *)&local_8,0x8007fff), (uVar1 & 1) != 0)
     ) {
    uVar1 = Type::Maybe((Type *)&local_8,0x47f0001);
    lVar2 = 0x8007fff;
    if ((uVar1 & 1) == 0) {
      lVar2 = local_8;
    }
  }
  else {
    lVar2 = 0x8007fff;
  }
  return lVar2;
}

