
/* v8::internal::TurboAssembler::Adr(v8::internal::Register const&, v8::internal::Label*,
   v8::internal::TurboAssembler::AdrHint) */

void __thiscall
v8::internal::TurboAssembler::Adr(TurboAssembler *this,Register *param_1,Label *param_2,int param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_e8;
  uint local_e0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Assembler *local_a0;
  BlockScope local_98 [24];
  long local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_4 != 0) {
    if (-1 < (int)*(uint *)param_2) {
      lVar5 = *(long *)(this + 0x198);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar6 = *(undefined8 *)(this + 0x1a8);
      uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_e8 = 0x400000003f;
      if (uVar3 != 0x3f) {
        local_e8 = (ulong)uVar3 | 0x4000000000;
      }
      local_e0 = 0;
      local_a0 = (Assembler *)this;
      ConstantPool::BlockScope::BlockScope(local_98,(Assembler *)this,0x10);
      Assembler::CheckVeneerPool(local_a0,false,true,0x10);
      Assembler::StartBlockVeneerPool(local_a0);
      Assembler::adr((Assembler *)this,param_1,param_2);
      Assembler::nop((Assembler *)this,2);
      Assembler::nop((Assembler *)this,2);
      Assembler::MoveWide((Assembler *)this,&local_e8,0,0xffffffff,0x40000000);
      Assembler::EndBlockVeneerPool(local_a0);
      ConstantPool::BlockScope::~BlockScope(local_98);
      *(long *)(this + 0x198) = lVar5;
      *(undefined8 *)(this + 0x1a8) = uVar6;
      goto LAB_012702f4;
    }
    iVar1 = ~*(uint *)param_2 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
    if ((long)iVar1 + 0x100000U >> 0x15 != 0) {
      Assembler::adr((Assembler *)this,param_1,-0x100000);
      iVar1 = iVar1 + 0x100000;
      local_c8 = (long)iVar1;
      local_e8 = local_e8 & 0xffffffffffffff00;
      local_e0 = local_e0 & 0xffffff00;
      local_c0 = 0x13;
      local_b8 = 0xffffffff;
      local_b0 = 2;
      if (iVar1 < 0) {
        lVar5 = -local_c8;
        uVar4 = Assembler::IsImmAddSub(lVar5);
        if ((uVar4 & 1) != 0) {
          local_a0 = (Assembler *)((ulong)local_a0 & 0xffffffffffffff00);
          local_98[0] = (BlockScope)0x0;
          local_70 = 0xffffffff;
          local_78 = 0x13;
          local_68 = 2;
          local_80 = lVar5;
          AddSubMacro(this,param_1,param_1,&local_a0,0,0x40000000);
          goto LAB_012702f4;
        }
      }
      AddSubMacro(this,param_1,param_1,&local_e8,0,0);
      goto LAB_012702f4;
    }
  }
  Assembler::adr((Assembler *)this,param_1,param_2);
LAB_012702f4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

