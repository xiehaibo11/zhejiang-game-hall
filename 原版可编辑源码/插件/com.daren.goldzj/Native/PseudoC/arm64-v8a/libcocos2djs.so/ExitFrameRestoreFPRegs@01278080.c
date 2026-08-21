
/* v8::internal::MacroAssembler::ExitFrameRestoreFPRegs() */

void __thiscall v8::internal::MacroAssembler::ExitFrameRestoreFPRegs(MacroAssembler *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [12];
  undefined1 local_90 [12];
  undefined1 local_80 [16];
  
  local_80 = CPURegList::GetCallerSavedV(0x40);
  if (local_80._0_8_ != 0) {
    lVar3 = -0x20;
    do {
      auVar5 = CPURegList::PopHighestIndex((CPURegList *)local_80);
      local_90 = auVar5;
      auVar5 = CPURegList::PopHighestIndex((CPURegList *)local_80);
      iVar2 = auVar5._4_4_;
      uVar4 = 0x44000000;
      if (iVar2 != 0x40) {
        uVar4 = 0x84000000;
      }
      uVar1 = 0x4000000;
      if (iVar2 != 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = (uint)(iVar2 == 0x40) << 0x1f;
      if (auVar5._8_4_ != 0) {
        uVar4 = uVar1;
      }
      local_d0 = 0x400000001d;
      local_c8 = 0;
      local_bc = 2;
      local_c4 = 0xffffffff;
      local_b0 = 0xffffffff00000000;
      uStack_a8 = 0xffffffff;
      local_b8 = lVar3;
      local_a0 = auVar5;
      TurboAssembler::LoadStorePairMacro
                ((TurboAssembler *)this,local_a0,local_90,&local_d0,uVar4 | 0x400000);
      lVar3 = lVar3 + -0x10;
    } while (local_80._0_8_ != 0);
  }
  return;
}

