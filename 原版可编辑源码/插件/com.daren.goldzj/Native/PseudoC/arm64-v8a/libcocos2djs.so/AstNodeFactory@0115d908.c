
/* v8::internal::AstNodeFactory::AstNodeFactory(v8::internal::AstValueFactory*, v8::internal::Zone*)
    */

void __thiscall
v8::internal::AstNodeFactory::AstNodeFactory
          (AstNodeFactory *this,AstValueFactory *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  
  *(Zone **)this = param_2;
  *(AstValueFactory **)(this + 8) = param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 8) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_2,8);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar1 + 1;
  }
  *puVar1 = 0xaffffffff;
  *(undefined8 **)(this + 0x10) = puVar1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 8) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_2,8);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar1 + 1;
  }
  *puVar1 = 0x32ffffffff;
  *(undefined8 **)(this + 0x18) = puVar1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 8) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_2,8);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar1 + 1;
  }
  *puVar1 = 0x38ffffffff;
  *(undefined8 **)(this + 0x20) = puVar1;
  return;
}

