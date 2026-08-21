
/* v8::EscapableHandleScope::EscapableHandleScope(v8::Isolate*) */

void __thiscall
v8::EscapableHandleScope::EscapableHandleScope(EscapableHandleScope *this,Isolate *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x95a0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x95a8)) {
    puVar1 = (undefined8 *)internal::HandleScope::Extend((Isolate *)param_1);
  }
  *(undefined8 **)(param_1 + 0x95a0) = puVar1 + 1;
  *puVar1 = uVar2;
  *(undefined8 **)(this + 0x18) = puVar1;
  HandleScope::Initialize((HandleScope *)this,param_1);
  return;
}

