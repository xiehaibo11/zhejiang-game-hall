
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::AddCheck(v8::internal::Zone*,
   v8::internal::compiler::Node*) const */

void __thiscall
v8::internal::compiler::RedundancyElimination::EffectPathChecks::AddCheck
          (EffectPathChecks *this,Zone *param_1,Node *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  }
  uVar3 = *(undefined8 *)this;
  *puVar1 = param_2;
  puVar1[1] = uVar3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar2 + 2;
  }
  lVar4 = *(long *)(this + 8);
  *puVar2 = puVar1;
  puVar2[1] = lVar4 + 1;
  return;
}

