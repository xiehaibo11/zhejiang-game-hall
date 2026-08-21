
/* v8::internal::wasm::LiftoffAssembler::CallC(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::wasm::LiftoffRegister const*, v8::internal::wasm::LiftoffRegister const*,
   v8::internal::wasm::ValueType, int, v8::internal::ExternalReference) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::CallC
          (LiftoffAssembler *this,long *param_1,byte *param_2,byte *param_3,char param_5,int param_6
          ,undefined8 param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  Operand *pOVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong local_100;
  uint local_f8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  Operand local_b8 [8];
  undefined1 local_b0;
  ulong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = param_6 + 0xfU & 0xfffffff0;
  lVar9 = (long)(int)uVar1;
  if (uVar1 != 0) {
    local_100 = local_100 & 0xffffffffffffff00;
    local_f8 = local_f8 & 0xffffff00;
    local_d8 = 0x13;
    local_d0 = 0xffffffff;
    local_c8 = 2;
    local_e0 = lVar9;
    if ((int)uVar1 < 0) {
      uVar5 = Assembler::IsImmAddSub(-lVar9);
      if ((uVar5 & 1) == 0) goto LAB_017d9524;
      local_b8[0] = (Operand)0x0;
      local_b0 = 0;
      local_88 = 0xffffffff;
      local_90 = 0x13;
      local_80 = CONCAT44(local_80._4_4_,2);
      pOVar6 = local_b8;
      uVar7 = 0;
      local_98 = -lVar9;
    }
    else {
LAB_017d9524:
      pOVar6 = (Operand *)&local_100;
      uVar7 = 0x40000000;
    }
    TurboAssembler::AddSubMacro((TurboAssembler *)this,&DAT_01a63d04,&DAT_01a63d04,pOVar6,0,uVar7);
  }
  lVar11 = param_1[1];
  if (lVar11 != 0) {
    uVar10 = 0;
    pbVar8 = (byte *)(param_1[2] + *param_1);
    do {
      uVar3 = *pbVar8 - 1;
      switch(uVar3) {
      case 0:
        bVar2 = *param_2;
        uVar5 = (ulong)bVar2 | 0x2000000000;
        local_100 = 0x200000003f;
        goto LAB_017d960c;
      case 1:
        bVar2 = *param_2;
        uVar5 = (ulong)bVar2 | 0x4000000000;
        local_100 = 0x400000003f;
LAB_017d960c:
        local_f8 = 0;
        if (bVar2 != 0x3f) {
          local_100 = uVar5;
        }
        break;
      case 2:
        local_f8 = 1;
        local_100 = (ulong)(*param_2 - 0x1d) | 0x2000000000;
        break;
      case 3:
        local_f8 = 1;
        local_100 = (ulong)(*param_2 - 0x1d) | 0x4000000000;
        break;
      default:
        goto switchD_017d95a4_default;
      }
      local_98 = (ulong)uVar10;
      local_b8[0] = (Operand)0x0;
      local_b0 = 0;
      local_90 = 0x13;
      local_80 = CONCAT44(local_80._4_4_,2);
      local_88 = 0xffffffff;
      TurboAssembler::Poke((TurboAssembler *)this,(CPURegister *)&local_100,local_b8);
      if (3 < uVar3) goto switchD_017d95a4_default;
      param_2 = param_2 + 1;
      lVar11 = lVar11 + -1;
      pbVar8 = pbVar8 + 1;
      uVar10 = (1 << (ulong)(*(uint *)(&DAT_01a634c0 + (long)(char)uVar3 * 4) & 0x1f)) + uVar10;
    } while (lVar11 != 0);
  }
  local_90 = 0x13;
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_88 = 0x400000003f;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_01a63d40,local_b8,0);
  TurboAssembler::CallCFunction(this,param_7,1);
  if (*param_1 == 0) {
    if (param_5 != '\0') goto LAB_017d972c;
    goto LAB_017d9804;
  }
  if (*param_3 != 0) {
    Move(this,*param_3,0,*(undefined1 *)param_1[2]);
  }
  param_3 = param_3 + 1;
  if (param_5 == '\0') goto LAB_017d9804;
LAB_017d972c:
  switch(param_5) {
  case '\x01':
    bVar2 = *param_3;
    uVar5 = (ulong)bVar2 | 0x2000000000;
    local_100 = 0x200000003f;
    goto LAB_017d97b8;
  case '\x02':
    bVar2 = *param_3;
    uVar5 = (ulong)bVar2 | 0x4000000000;
    local_100 = 0x400000003f;
LAB_017d97b8:
    local_f8 = 0;
    if (bVar2 != 0x3f) {
      local_100 = uVar5;
    }
    break;
  case '\x03':
    local_f8 = 1;
    local_100 = (ulong)(*param_3 - 0x1d) | 0x2000000000;
    break;
  case '\x04':
    local_f8 = 1;
    local_100 = (ulong)(*param_3 - 0x1d) | 0x4000000000;
    break;
  default:
switchD_017d95a4_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,2);
  TurboAssembler::Peek((TurboAssembler *)this,(CPURegister *)&local_100,local_b8);
LAB_017d9804:
  if (uVar1 == 0) goto LAB_017d98a4;
  local_100 = local_100 & 0xffffffffffffff00;
  local_f8 = local_f8 & 0xffffff00;
  local_d8 = 0x13;
  local_d0 = 0xffffffff;
  local_c8 = 2;
  local_e0 = lVar9;
  if ((int)uVar1 < 0) {
    uVar5 = Assembler::IsImmAddSub(-lVar9);
    if ((uVar5 & 1) == 0) goto LAB_017d9884;
    local_b8[0] = (Operand)0x0;
    local_b0 = 0;
    local_88 = 0xffffffff;
    local_90 = 0x13;
    local_80 = CONCAT44(local_80._4_4_,2);
    pOVar6 = local_b8;
    uVar7 = 0x40000000;
    local_98 = -lVar9;
  }
  else {
LAB_017d9884:
    pOVar6 = (Operand *)&local_100;
    uVar7 = 0;
  }
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&DAT_01a63d04,&DAT_01a63d04,pOVar6,0,uVar7);
LAB_017d98a4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

