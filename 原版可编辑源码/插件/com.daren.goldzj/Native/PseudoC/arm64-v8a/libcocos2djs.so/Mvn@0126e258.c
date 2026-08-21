
/* v8::internal::TurboAssembler::Mvn(v8::internal::Register const&, v8::internal::Operand const&) */

void __thiscall
v8::internal::TurboAssembler::Mvn(TurboAssembler *this,Register *param_1,Operand *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_80;
  uint local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Operand::NeedsRelocation(param_2,(Assembler *)this);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (((*(int *)(param_2 + 0x34) == 0) && (*(int *)(param_2 + 0x38) == 2)) &&
         (*param_2 == (Operand)0x0)) {
        Mov(this,param_1,~*(ulong *)(param_2 + 0x20));
        goto LAB_0126e378;
      }
    }
    else if (*(int *)(param_2 + 0x40) != -1) {
      local_80 = *(ulong *)(param_2 + 0x30);
      local_78 = *(uint *)(param_2 + 0x38);
      Assembler::EmitExtendShift
                ((Assembler *)this,param_1,&local_80,*(int *)(param_2 + 0x40),
                 *(undefined4 *)(param_2 + 0x44));
      goto LAB_0126e30c;
    }
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    local_60 = *(undefined8 *)(param_2 + 0x20);
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = local_78 & 0xffffff00;
    local_50 = 0xffffffff;
    local_48 = 2;
    Assembler::ldr((Assembler *)this,(CPURegister *)param_1,(Operand *)&local_80);
LAB_0126e30c:
    local_50 = *(undefined8 *)param_1;
    local_48 = *(undefined4 *)(param_1 + 8);
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = local_78 & 0xffffff00;
    local_60 = 0;
    uStack_58 = CONCAT71(uStack_58._1_7_,0x13);
    local_44 = 0xffffffff00000000;
    local_3c = 0;
    param_2 = (Operand *)&local_80;
  }
  Assembler::mvn((Assembler *)this,param_1,param_2);
LAB_0126e378:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

