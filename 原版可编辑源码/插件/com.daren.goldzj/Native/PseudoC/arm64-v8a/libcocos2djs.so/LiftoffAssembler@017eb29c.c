
/* v8::internal::wasm::LiftoffAssembler::LiftoffAssembler(std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::LiftoffAssembler(LiftoffAssembler *this,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined1 local_4b;
  undefined8 local_48;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 1;
  local_4f = 0;
  local_4b = 1;
  local_48 = 0;
  local_40 = 0;
  local_58 = (long *)*param_2;
  *param_2 = 0;
  TurboAssemblerBase::TurboAssemblerBase((TurboAssemblerBase *)this,0,&local_50,0,&local_58);
  *(undefined ***)this = &PTR__Assembler_01cbd510;
  auVar3 = TurboAssembler::DefaultTmpList();
  *(undefined1 (*) [16])(this + 0x198) = auVar3;
  auVar3 = TurboAssembler::DefaultFPTmpList();
  plVar2 = local_58;
  *(undefined1 (*) [16])(this + 0x1a8) = auVar3;
  local_58 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(LiftoffAssembler **)(this + 0x1c8) = this + 0x1e0;
  *(LiftoffAssembler **)(this + 0x1d0) = this + 0x1e0;
  *(undefined4 *)(this + 0x1b8) = 0;
  this[0x18a] = (LiftoffAssembler)0x1;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  this[0x344] = (LiftoffAssembler)0x0;
  *(undefined8 *)(this + 0x348) = 0;
  *(LiftoffAssembler **)(this + 0x1d8) = this + 0x240;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined ***)this = &PTR__LiftoffAssembler_01cdb1c8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

