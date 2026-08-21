
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::Copy(v8::internal::Zone*,
   v8::internal::compiler::RedundancyElimination::EffectPathChecks const*) */

void v8::internal::compiler::RedundancyElimination::EffectPathChecks::Copy
               (Zone *param_1,EffectPathChecks *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  }
  uVar2 = *(undefined8 *)param_2;
  puVar1[1] = *(undefined8 *)(param_2 + 8);
  *puVar1 = uVar2;
  return;
}

