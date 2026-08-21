
/* v8::internal::compiler::Typer::Visitor::ObjectIsSmi(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

undefined8 v8::internal::compiler::Typer::Visitor::ObjectIsSmi(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_8;
  
  local_8 = param_1;
  uVar1 = BitsetType::SignedSmall();
  uVar2 = Type::Maybe((Type *)&local_8,uVar1 | 1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
  }
  else {
    uVar3 = 0x201;
  }
  return uVar3;
}

