
/* v8::internal::PatchingAssembler::PatchAdrFar(long) */

void v8::internal::PatchingAssembler::PatchAdrFar(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong in_x1;
  uint *puVar4;
  long lVar5;
  ulong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar1 = *puVar4;
  if (((uVar1 & 0x9f000000) != 0x10000000) ||
     ((uVar1 >> 0x12 & 0x1800) != 0 || (uVar1 >> 5 & 0x7ffff) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","expected_adr->IsAdr() && (expected_adr->ImmPCRel() == 0)");
  }
  lVar5 = 0;
  do {
    if (lVar5 == 8) {
      uVar2 = puVar4[3];
      if (((uVar2 & 0x7fffe0) == 0) && ((uVar2 & 0x7f800000 | 0x80000000) == 0xd2800000)) {
        local_b0 = (ulong)uVar1 & 0x1f | 0x4000000000;
        local_a8 = 0;
        Assembler::Emit((Assembler *)param_1,
                        ((uint)in_x1 & 0xfffc) << 3 | ((uint)in_x1 & 3) << 0x1d |
                        (uint)((ulong)uVar1 & 0x1f) | 0x10000000);
        Assembler::Emit((Assembler *)param_1,
                        (uint)(in_x1 >> 0xb) & 0x1fffe0 | uVar2 & 0x1f | 0xd2a00000);
        Assembler::Emit((Assembler *)param_1,
                        (uint)(in_x1 >> 0x1b) & 0x1fffe0 | uVar2 & 0x1f | 0xf2c00000);
        local_a0[0] = 0;
        local_98 = 0;
        local_80 = 0;
        local_78 = 0x13;
        uStack_60 = 0xffffffff;
        local_68 = 0;
        local_70 = (ulong)uVar2 & 0x1f | 0x4000000000;
        Assembler::AddSub(param_1,&local_b0,&local_b0,local_a0,0,0);
        if (*(long *)(lVar3 + 0x28) == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "expected_movz->IsMovz() && (expected_movz->ImmMoveWide() == 0) && (expected_movz->ShiftMoveWide() == 0)"
              );
    }
    uVar2 = *(uint *)((long)puVar4 + lVar5 + 4);
  } while ((((uVar2 & 0xff200000) == 0xaa000000) && ((uVar2 & 0x1f) == 2)) &&
          (lVar5 = lVar5 + 4, (uVar2 >> 0x10 & 0x1f) == 2));
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","InstructionAt((i + 1) * kInstrSize)->IsNop(ADR_FAR_NOP)");
}

