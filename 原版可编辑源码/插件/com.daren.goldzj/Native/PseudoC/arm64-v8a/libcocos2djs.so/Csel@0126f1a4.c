
/* v8::internal::TurboAssembler::Csel(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Operand const&, v8::internal::Condition) */

void __thiscall
v8::internal::TurboAssembler::Csel
          (TurboAssembler *this,undefined8 param_1,long param_2,char *param_3,undefined4 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_70;
  undefined4 local_68;
  ulong local_60;
  undefined4 local_58;
  
  puVar4 = &local_70;
  if (*(int *)(param_3 + 0x30) == -1) {
    if (((*(int *)(param_3 + 0x34) == 0) && (*(int *)(param_3 + 0x38) == 2)) && (*param_3 == '\0'))
    {
      uVar2 = *(ulong *)(param_3 + 0x20);
      puVar1 = &DAT_019f4018;
      if (*(int *)(param_2 + 4) != 0x40) {
        puVar1 = &DAT_019f4000;
      }
      local_58 = (undefined4)puVar1[1];
      local_60 = *puVar1;
      if (uVar2 == 0xffffffffffffffff) {
        Assembler::csinv((Assembler *)this,param_1,param_2,&local_60,param_5);
        return;
      }
      if (uVar2 == 1) {
        Assembler::csinc((Assembler *)this,param_1,param_2,&local_60,param_5);
        return;
      }
      if (uVar2 == 0) goto LAB_0126f204;
      lVar5 = *(long *)(this + 0x198);
      if (lVar5 == 0) goto LAB_0126f368;
      uVar6 = *(undefined8 *)(this + 0x1a8);
      uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_68 = 0;
      local_70 = uVar3 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
      Mov(this,(Register *)&local_70,uVar2);
      goto LAB_0126f278;
    }
  }
  else if ((*(int *)(param_3 + 0x3c) != -1) && (*(int *)(param_3 + 0x44) == 0)) {
    local_60 = *(ulong *)(param_3 + 0x30);
    local_58 = *(undefined4 *)(param_3 + 0x38);
LAB_0126f204:
    Assembler::csel((Assembler *)this,param_1,param_2,&local_60,param_5);
    return;
  }
  lVar5 = *(long *)(this + 0x198);
  if (lVar5 == 0) {
LAB_0126f368:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar6 = *(undefined8 *)(this + 0x1a8);
  uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
  local_60 = uVar2 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
  local_58 = 0;
  Mov(this,&local_60,param_3,0);
  puVar4 = &local_60;
LAB_0126f278:
  Assembler::csel((Assembler *)this,param_1,param_2,puVar4,param_5);
  *(long *)(this + 0x198) = lVar5;
  *(undefined8 *)(this + 0x1a8) = uVar6;
  return;
}

