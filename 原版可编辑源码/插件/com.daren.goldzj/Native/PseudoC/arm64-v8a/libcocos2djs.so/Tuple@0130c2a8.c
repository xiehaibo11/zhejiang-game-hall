
/* v8::internal::compiler::Type::Tuple(v8::internal::compiler::Type, v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::Zone*) */

undefined8 *
v8::internal::compiler::Type::Tuple
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,Zone *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_4,0x10);
  }
  else {
    *(undefined8 **)(param_4 + 0x10) = puVar1 + 2;
  }
  *puVar1 = 0x300000002;
  puVar2 = *(undefined8 **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_4,0x18);
  }
  else {
    *(undefined8 **)(param_4 + 0x10) = puVar2 + 3;
  }
  puVar1[1] = puVar2;
  *puVar2 = param_1;
  *(undefined8 *)(puVar1[1] + 8) = param_2;
  *(undefined8 *)(puVar1[1] + 0x10) = param_3;
  return puVar1;
}

