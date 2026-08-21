
/* v8::internal::TurboAssembler::DecompressTaggedSigned(v8::internal::Register const&,
   v8::internal::MemOperand const&) */

void __thiscall
v8::internal::TurboAssembler::DecompressTaggedSigned
          (TurboAssembler *this,Register *param_1,MemOperand *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  ulong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_90;
  uint local_88;
  long local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ DecompressTaggedSigned");
  local_90 = 0x200000003f;
  if (*(uint *)param_1 != 0x3f) {
    local_90 = (ulong)*(uint *)param_1 | 0x2000000000;
  }
  local_88 = 0;
  LoadStoreMacro(this,&local_90,param_2,0x80400000);
  if (FLAG_debug_code != '\0') {
    local_b8 = ((ulong)(uint)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) & 0xffff) << 0x20 |
               0xaddb000000000000;
    local_d8[0] = 0;
    local_d0 = 0;
    local_b0 = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    uVar2 = Assembler::IsImmAddSub(-local_b8);
    if ((uVar2 & 1) == 0) {
      puVar3 = (ulong *)local_d8;
      uVar4 = 0;
    }
    else {
      local_90 = local_90 & 0xffffffffffffff00;
      local_88 = local_88 & 0xffffff00;
      local_68 = 0x13;
      local_70 = -local_b8;
      local_60 = 0xffffffff;
      local_58 = 2;
      puVar3 = &local_90;
      uVar4 = 0x40000000;
    }
    AddSubMacro(this,param_1,param_1,puVar3,0,uVar4);
  }
  AssemblerBase::RecordComment((AssemblerBase *)this,"]");
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

