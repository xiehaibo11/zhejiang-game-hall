
/* v8::internal::wasm::LiftoffAssembler::PatchPrepareStackFrame(int, unsigned int) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::PatchPrepareStackFrame
          (LiftoffAssembler *this,int param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  AssemblerOptions local_1e8;
  undefined4 local_1e7;
  undefined1 local_1e3;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined **local_1d0 [47];
  Assembler *local_58;
  BlockScope aBStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = param_2 + 0xf & 0xfffffff0;
  uVar2 = Assembler::IsImmAddSub((ulong)uVar3);
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar3 + 0xfff & 0xfffff000;
    uVar2 = Assembler::IsImmAddSub((ulong)uVar3);
    if ((uVar2 & 1) == 0) {
      if (this[0x344] == (LiftoffAssembler)0x0) {
        (**(code **)(*(long *)this + 0x10))(this);
        this[0x344] = (LiftoffAssembler)0x14;
        *(char **)(this + 0x348) = "Stack too big";
      }
      goto LAB_017e39d4;
    }
  }
  local_1e7 = 0;
  local_1e0 = 0;
  local_1e8 = (AssemblerOptions)0x1;
  local_1e3 = 1;
  local_1d8 = 0;
  PatchingAssembler::PatchingAssembler
            ((PatchingAssembler *)local_1d0,&local_1e8,
             (uchar *)(*(long *)(this + 0x10) + (long)param_1),1);
  PatchingAssembler::PatchSubSp((PatchingAssembler *)local_1d0,uVar3);
  local_1d0[0] = &PTR__PatchingAssembler_01cbcf38;
  Assembler::EndBlockVeneerPool(local_58);
  ConstantPool::BlockScope::~BlockScope(aBStack_50);
  Assembler::~Assembler((Assembler *)local_1d0);
LAB_017e39d4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

