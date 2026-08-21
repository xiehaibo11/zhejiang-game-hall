
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::Empty(v8::internal::Zone*) */

void v8::internal::compiler::RedundancyElimination::EffectPathChecks::Empty(Zone *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

