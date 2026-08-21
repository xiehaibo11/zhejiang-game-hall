
/* v8::internal::compiler::GraphTrimmer::GraphTrimmer(v8::internal::Zone*,
   v8::internal::compiler::Graph*) */

void __thiscall
v8::internal::compiler::GraphTrimmer::GraphTrimmer(GraphTrimmer *this,Zone *param_1,Graph *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  *(Graph **)this = param_2;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 8),param_2,2);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x28) = param_1;
  uVar6 = (ulong)*(uint *)(param_2 + 0x1c);
  if (*(uint *)(param_2 + 0x1c) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = uVar6 * 8;
    if (uVar3 < (ulong)(*(long *)(param_1 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(param_1 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2 + uVar6;
    }
    else {
      puVar2 = (undefined8 *)Zone::NewExpand(param_1,uVar3);
    }
    puVar1 = *(undefined8 **)(this + 0x10);
    puVar4 = *(undefined8 **)(this + 0x18);
    puVar5 = puVar2;
    while (puVar4 != puVar1) {
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar4;
    }
    *(undefined8 **)(this + 0x10) = puVar5;
    *(undefined8 **)(this + 0x18) = puVar2;
    *(undefined8 **)(this + 0x20) = puVar2 + uVar6;
  }
  return;
}

