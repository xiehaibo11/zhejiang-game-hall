
void FUN_0161bd78(long param_1)

{
  bool bVar1;
  Register *pRVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (1 < *(int *)(param_1 + 0x94)) {
    local_140 = *(undefined8 *)(param_1 + 0x88);
    local_138 = *(undefined4 *)(param_1 + 0x90);
    v8::internal::TurboAssembler::Tbz
              (*(TurboAssembler **)(param_1 + 0x20),(Register *)&local_140,0,
               (Label *)(param_1 + 0x10));
  }
  pRVar2 = (Register *)(param_1 + 0x88);
  v8::internal::TurboAssembler::DecompressTaggedPointer
            (*(TurboAssembler **)(param_1 + 0x20),pRVar2,pRVar2);
  v8::internal::TurboAssembler::CheckPageFlag
            (*(TurboAssembler **)(param_1 + 0x20),pRVar2,2,1,param_1 + 0x10);
  lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  iVar7 = *(int *)(param_1 + 0x94);
  uVar3 = *(uint *)(lVar9 + 4);
  uVar8 = (ulong)uVar3;
  bVar1 = iVar7 < 1;
  if (uVar3 == 1) {
    bVar6 = *(long *)(lVar9 + 8) != 0;
    cVar4 = *(char *)(param_1 + 0x9c);
  }
  else {
    if (0 < (int)uVar3) {
      plVar10 = *(long **)(lVar9 + 8);
      do {
        if (*plVar10 != 0) {
          bVar6 = true;
          cVar4 = *(char *)(param_1 + 0x9c);
          goto joined_r0x0161bfe0;
        }
        uVar8 = uVar8 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar8 != 0);
    }
    bVar6 = false;
    cVar4 = *(char *)(param_1 + 0x9c);
  }
joined_r0x0161bfe0:
  if (cVar4 != '\0') {
    v8::internal::TurboAssembler::Push
              (*(TurboAssembler **)(param_1 + 0x20),(CPURegister *)&DAT_01a56388,
               (CPURegister *)&DAT_01a563a0,(CPURegister *)&DAT_01a56394,
               (CPURegister *)&DAT_01a56394);
    v8::internal::compiler::UnwindingInfoWriter::MarkLinkRegisterOnTopOfStack
              (*(UnwindingInfoWriter **)(param_1 + 0xa0),
               *(int *)(*(long *)(param_1 + 0x20) + 0x20) -
               *(int *)(*(long *)(param_1 + 0x20) + 0x10),(Register *)&DAT_01a56370);
    iVar7 = *(int *)(param_1 + 0x94);
  }
  if (iVar7 == 2) {
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    local_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    local_50 = *(undefined8 *)(param_1 + 0x80);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    local_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    local_90 = *(undefined8 *)(param_1 + 0x40);
    v8::internal::TurboAssembler::CallEphemeronKeyBarrier
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x38),&local_90,bVar6);
    cVar4 = *(char *)(param_1 + 0x9c);
  }
  else if (*(int *)(param_1 + 0x98) == 1) {
    uStack_d8 = *(undefined8 *)(param_1 + 0x48);
    local_e0 = *(undefined8 *)(param_1 + 0x40);
    uStack_c8 = *(undefined8 *)(param_1 + 0x58);
    uStack_d0 = *(undefined8 *)(param_1 + 0x50);
    local_a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_b8 = *(undefined8 *)(param_1 + 0x68);
    local_c0 = *(undefined8 *)(param_1 + 0x60);
    uStack_a8 = *(undefined8 *)(param_1 + 0x78);
    uStack_b0 = *(undefined8 *)(param_1 + 0x70);
    v8::internal::TurboAssembler::CallRecordWriteStub();
    cVar4 = *(char *)(param_1 + 0x9c);
  }
  else {
    uStack_128 = *(undefined8 *)(param_1 + 0x48);
    local_130 = *(undefined8 *)(param_1 + 0x40);
    uStack_118 = *(undefined8 *)(param_1 + 0x58);
    uStack_120 = *(undefined8 *)(param_1 + 0x50);
    local_f0 = *(undefined8 *)(param_1 + 0x80);
    uStack_108 = *(undefined8 *)(param_1 + 0x68);
    local_110 = *(undefined8 *)(param_1 + 0x60);
    uStack_f8 = *(undefined8 *)(param_1 + 0x78);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    v8::internal::TurboAssembler::CallRecordWriteStub
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x38),&local_130,bVar1,bVar6);
    cVar4 = *(char *)(param_1 + 0x9c);
  }
  if (cVar4 != '\0') {
    v8::internal::TurboAssembler::Pop
              (*(TurboAssembler **)(param_1 + 0x20),(CPURegister *)&DAT_01a563a0,
               (CPURegister *)&DAT_01a56388,(CPURegister *)&DAT_01a56394,
               (CPURegister *)&DAT_01a56394);
    v8::internal::compiler::UnwindingInfoWriter::MarkPopLinkRegisterFromTopOfStack
              (*(UnwindingInfoWriter **)(param_1 + 0xa0),
               *(int *)(*(long *)(param_1 + 0x20) + 0x20) -
               *(int *)(*(long *)(param_1 + 0x20) + 0x10));
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

