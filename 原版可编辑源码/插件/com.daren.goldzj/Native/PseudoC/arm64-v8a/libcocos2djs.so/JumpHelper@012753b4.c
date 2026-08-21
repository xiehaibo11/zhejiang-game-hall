
/* v8::internal::TurboAssembler::JumpHelper(long, v8::internal::RelocInfo::Mode,
   v8::internal::Condition) */

void __thiscall
v8::internal::TurboAssembler::JumpHelper
          (TurboAssembler *this,ulong param_1,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != 0xf) {
    local_98 = 0;
    if (param_4 != 0xe) {
      B(this,&local_98,param_4 ^ 1);
    }
    if ((param_3 & 0xff) == 7) {
      lVar3 = *(long *)(this + 0x198);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar4 = *(undefined8 *)(this + 0x1a8);
      uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_a8 = 0x400000003f;
      if (uVar2 != 0x3f) {
        local_a8 = (ulong)uVar2 | 0x4000000000;
      }
      local_a0 = 0;
      local_68 = 7;
      uStack_60 = 0xffffffff;
      local_70 = *(long *)(this + 0x20) + param_1 * 4;
      local_90[0] = 0;
      local_88 = 0;
      local_58 = 2;
      Mov(this,&local_a8,local_90,0);
      Assembler::br((Assembler *)this,(Register *)&local_a8);
      *(long *)(this + 0x198) = lVar3;
      *(undefined8 *)(this + 0x1a8) = uVar4;
    }
    else {
      Assembler::near_jump((Assembler *)this,param_1 & 0xffffffff,param_3);
    }
    Assembler::bind((Label *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

