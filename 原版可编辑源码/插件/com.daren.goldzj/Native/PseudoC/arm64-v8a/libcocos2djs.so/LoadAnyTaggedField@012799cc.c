
/* v8::internal::TurboAssembler::LoadAnyTaggedField(v8::internal::Register const&,
   v8::internal::MemOperand const&) */

void __thiscall
v8::internal::TurboAssembler::LoadAnyTaggedField
          (TurboAssembler *this,Register *param_1,MemOperand *param_2)

{
  long lVar1;
  ulong local_80;
  uint local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ DecompressAnyTagged");
  local_80 = 0x200000003f;
  if (*(uint *)param_1 != 0x3f) {
    local_80 = (ulong)*(uint *)param_1 | 0x2000000000;
  }
  local_78 = 0;
  LoadStoreMacro(this,&local_80,param_2,0x80400000);
  local_50 = *(undefined8 *)param_1;
  local_48 = *(undefined4 *)(param_1 + 8);
  local_80 = local_80 & 0xffffffffffffff00;
  local_78 = local_78 & 0xffffff00;
  local_60 = 0;
  local_58 = 0x13;
  local_44 = 0xffffffff00000000;
  local_3c = 0;
  AddSubMacro(this,param_1,&DAT_019f4144,&local_80,0,0);
  AssemblerBase::RecordComment((AssemblerBase *)this,"]");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

