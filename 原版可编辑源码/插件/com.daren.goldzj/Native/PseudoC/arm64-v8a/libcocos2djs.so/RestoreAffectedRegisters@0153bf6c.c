
/* v8::internal::Trace::RestoreAffectedRegisters(v8::internal::RegExpMacroAssembler*, int,
   v8::internal::DynamicBitSet const&, v8::internal::DynamicBitSet const&) */

Trace * __thiscall
v8::internal::Trace::RestoreAffectedRegisters
          (Trace *this,RegExpMacroAssembler *param_1,int param_2,DynamicBitSet *param_3,
          DynamicBitSet *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_2 < 0) {
    return this;
  }
  if (0x1f < (uint)param_2) goto LAB_0153bfd8;
LAB_0153bfa0:
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((*(uint *)param_3 & uVar1) == 0) {
    uVar5 = param_2;
    if ((*(uint *)param_4 & uVar1) == 0) goto LAB_0153bfc4;
    goto LAB_0153c048;
  }
LAB_0153bfb0:
  this = (Trace *)(**(code **)(*(long *)param_1 + 0x118))(param_1,param_2);
  uVar5 = param_2;
LAB_0153bfc4:
  while( true ) {
    param_2 = uVar5 - 1;
    if ((int)uVar5 < 1) {
      return this;
    }
    if ((uint)param_2 < 0x20) break;
LAB_0153bfd8:
    puVar3 = *(undefined8 **)(param_3 + 8);
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (ulong)*(uint *)((long)puVar3 + 0xc), 0 < (int)*(uint *)((long)puVar3 + 0xc))) {
      puVar4 = (uint *)*puVar3;
      do {
        if (*puVar4 == param_2) goto LAB_0153bfb0;
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
    puVar3 = *(undefined8 **)(param_4 + 8);
    uVar5 = param_2;
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (ulong)*(uint *)((long)puVar3 + 0xc), 0 < (int)*(uint *)((long)puVar3 + 0xc))) {
      puVar4 = (uint *)*puVar3;
      do {
        if (*puVar4 == param_2) goto LAB_0153c048;
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  goto LAB_0153bfa0;
LAB_0153c048:
  uVar5 = param_2;
  if (0 < param_2) {
    puVar3 = *(undefined8 **)(param_4 + 8);
    do {
      uVar1 = uVar5 - 1;
      if (uVar1 < 0x20) {
        if ((*(uint *)param_4 >> (ulong)(uVar1 & 0x1f) & 1) == 0) goto LAB_0153c0b8;
      }
      else {
        if ((puVar3 == (undefined8 *)0x0) ||
           (uVar2 = (ulong)*(uint *)((long)puVar3 + 0xc), (int)*(uint *)((long)puVar3 + 0xc) < 1))
        goto LAB_0153c0b8;
        puVar4 = (uint *)*puVar3;
        while (*puVar4 != uVar1) {
          uVar2 = uVar2 - 1;
          puVar4 = puVar4 + 1;
          if (uVar2 == 0) goto LAB_0153c0b8;
        }
      }
      uVar5 = uVar1;
    } while (0 < (int)uVar1);
    uVar5 = 0;
  }
LAB_0153c0b8:
  this = (Trace *)(**(code **)(*(long *)param_1 + 0x168))(param_1,uVar5,param_2);
  goto LAB_0153bfc4;
}

