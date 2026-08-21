
/* v8::internal::compiler::CallDescriptor::GetMachineSignature(v8::internal::Zone*) const */

void __thiscall
v8::internal::compiler::CallDescriptor::GetMachineSignature(CallDescriptor *this,Zone *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = **(ulong **)(this + 0x10);
  uVar2 = (*(ulong **)(this + 0x10))[1];
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar5 = (uVar1 + uVar2) * 2 + 7 & 0xfffffffffffffff8;
  if (*(long *)(param_1 + 0x18) - uVar3 < uVar5) {
    uVar3 = Zone::NewExpand(param_1,uVar5);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar5 + uVar3;
  }
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1;
      *(short *)(uVar3 + uVar5 * 2) =
           (short)*(undefined4 *)(*(long *)(*(long *)(this + 0x10) + 0x10) + uVar5 * 8 + 4);
      uVar5 = uVar6;
    } while (uVar1 != uVar6);
    uVar5 = uVar1 & 0xffffffff;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      *(short *)(uVar3 + uVar5 * 2 + uVar6 * 2) =
           (short)*(undefined4 *)
                   ((*(long **)(this + 0x10))[2] + (uVar6 + **(long **)(this + 0x10)) * 8 + 4);
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  puVar4 = *(ulong **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar4) < 0x18) {
    puVar4 = (ulong *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(ulong **)(param_1 + 0x10) = puVar4 + 3;
  }
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  return;
}

