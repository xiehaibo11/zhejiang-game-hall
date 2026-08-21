
/* v8::internal::compiler::LoadElimination::AbstractState::LookupElement(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::MachineRepresentation) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractState::LookupElement
          (AbstractState *this,undefined8 param_1,undefined8 param_2,char param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar4 + 0x10);
    do {
      if (puVar6[-2] != 0) {
        uVar5 = puVar6[-1];
        cVar2 = *(char *)(puVar6 + 1);
        uVar3 = thunk_FUN_0176bf74(param_1);
        if ((((uVar3 & 1) != 0) && (uVar3 = thunk_FUN_0176bf74(param_2,uVar5), (uVar3 & 1) != 0)) &&
           ((cVar2 == param_4 || (((byte)(param_4 - 6U) < 3 && ((byte)(cVar2 - 6U) < 3)))))) {
          return *puVar6;
        }
      }
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 4;
    } while (puVar1 != (undefined8 *)(lVar4 + 0x100));
  }
  return 0;
}

