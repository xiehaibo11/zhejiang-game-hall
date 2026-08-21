
/* v8::internal::compiler::OperationTyper::NumberSilenceNaN(v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberSilenceNaN(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = param_2;
  uVar2 = Type::Maybe((Type *)&local_18,0x1001);
  uVar1 = 0x1c5f;
  if ((uVar2 & 1) == 0) {
    uVar1 = local_18;
  }
  return uVar1;
}

