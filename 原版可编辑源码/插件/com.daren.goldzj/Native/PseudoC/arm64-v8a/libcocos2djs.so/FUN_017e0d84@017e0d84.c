
void FUN_017e0d84(Label *param_1,undefined8 param_2,byte param_3,byte param_4,int param_5,
                 int param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  Decoder *this;
  byte *pbVar4;
  ulong uVar5;
  undefined8 local_88;
  undefined1 local_80;
  int local_7f;
  undefined8 local_7b;
  undefined4 local_73;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_5 + 1 == param_6) {
    this = (Decoder *)*param_7;
    pbVar4 = (byte *)param_7[2];
    *(int *)(param_7 + 3) = *(int *)(param_7 + 3) + 1;
    if (pbVar4 < *(byte **)(this + 0x18)) {
      uVar3 = *pbVar4 & 0x7f;
      if ((char)*pbVar4 < '\0') {
        uVar3 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (this,pbVar4 + 1,(uint *)&local_88,"branch table entry",uVar3);
        uVar5 = local_88 & 0xffffffff;
      }
      else {
        uVar5 = 1;
        local_88 = CONCAT44(local_88._4_4_,1);
      }
    }
    else {
      local_88 = (ulong)local_88._4_4_ << 0x20;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)this,(char *)pbVar4,"expected %s","branch table entry");
      uVar5 = 0;
      uVar3 = 0;
    }
    param_7[2] = param_7[2] + uVar5;
    FUN_017e0f84(param_1,param_2,uVar3,param_8);
  }
  else {
    local_88 = 0;
    iVar1 = param_5 + ((uint)(param_6 - param_5) >> 1);
    local_7b = 0;
    local_73 = 0;
    local_80 = 1;
    local_7f = iVar1;
    v8::internal::wasm::LiftoffAssembler::LoadConstant
              ((LiftoffAssembler *)param_1,param_3,&local_80,0x13);
    v8::internal::wasm::LiftoffAssembler::emit_cond_jump
              (param_1,2,&local_88,1,(ulong)param_4 | 0x4000000000,0,(ulong)param_3 | 0x4000000000,0
              );
    FUN_017e0d84(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,param_8);
    v8::internal::Assembler::bind(param_1);
    if (param_1[0x370] == (Label)0x0) {
      FUN_017e0d84(param_1,param_2,param_3,param_4,iVar1,param_6,param_7,param_8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

