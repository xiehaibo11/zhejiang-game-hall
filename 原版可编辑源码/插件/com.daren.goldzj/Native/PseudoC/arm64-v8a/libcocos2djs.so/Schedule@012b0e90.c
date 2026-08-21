
/* v8::internal::compiler::Schedule::Schedule(v8::internal::Zone*, unsigned long) */

void __thiscall
v8::internal::compiler::Schedule::Schedule(Schedule *this,Zone *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  Zone *this_00;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Zone **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x60) = param_1;
  uVar3 = NewBasicBlock(this);
  *(undefined8 *)(this + 0x68) = uVar3;
  uVar3 = NewBasicBlock(this);
  lVar6 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x70) = uVar3;
  if ((ulong)(*(long *)(this + 0x38) - lVar6 >> 3) < param_2) {
    this_00 = *(Zone **)(this + 0x40);
    lVar7 = *(long *)(this + 0x30);
    uVar5 = param_2 * 8;
    lVar4 = *(long *)(this_00 + 0x10);
    if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
        uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
    }
    else {
      lVar4 = Zone::NewExpand(this_00,uVar5);
    }
    puVar2 = *(undefined8 **)(this + 0x28);
    puVar9 = *(undefined8 **)(this + 0x30);
    puVar1 = (undefined8 *)(lVar4 + (lVar7 - lVar6 >> 3) * 8);
    puVar8 = puVar1;
    while (puVar9 != puVar2) {
      puVar9 = puVar9 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar9;
    }
    *(undefined8 **)(this + 0x28) = puVar8;
    *(undefined8 **)(this + 0x30) = puVar1;
    *(ulong *)(this + 0x38) = lVar4 + param_2 * 8;
  }
  return;
}

