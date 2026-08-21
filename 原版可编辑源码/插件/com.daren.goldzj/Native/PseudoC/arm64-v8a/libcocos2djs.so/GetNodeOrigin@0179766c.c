
/* v8::internal::compiler::NodeOriginTable::GetNodeOrigin(v8::internal::compiler::Node*) const */

void v8::internal::compiler::NodeOriginTable::GetNodeOrigin(Node *param_1)

{
  undefined8 *puVar1;
  long in_x1;
  undefined8 *in_x8;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)*(uint *)(in_x1 + 0x14) & 0xffffff;
  if (uVar2 < (ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar2 * 0x20);
    uVar3 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    in_x8[1] = puVar1[1];
    *in_x8 = uVar3;
    in_x8[3] = uVar5;
    in_x8[2] = uVar4;
    return;
  }
  *in_x8 = &DAT_0189703a;
  in_x8[1] = &DAT_0189703a;
  in_x8[3] = 0x8000000000000000;
  return;
}

