
/* v8::internal::compiler::RepresentationSelector::VisitBinop(v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo, v8::internal::compiler::UseInfo,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitBinop
          (RepresentationSelector *this,long param_1,undefined8 *param_3,undefined8 *param_4,
          undefined1 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined1 local_e0 [4];
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  if (*(int *)(this + 0x78) == 2) {
    local_80 = local_a0;
    uStack_78 = uStack_98;
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    ConvertInput(this,param_1,0,&local_80,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_80 = local_a0;
    uStack_78 = uStack_98;
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    EnqueueInput(this,param_1,0,&local_80);
  }
  uStack_b8 = param_4[1];
  local_c0 = *param_4;
  uStack_a8 = param_4[3];
  uStack_b0 = param_4[2];
  if (*(int *)(this + 0x78) == 2) {
    local_80 = local_c0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_68 = uStack_a8;
    ConvertInput(this,param_1,1,&local_80,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_80 = local_c0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_68 = uStack_a8;
    EnqueueInput(this,param_1,1,&local_80);
  }
  iVar4 = 2;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if ((~uVar1 & 0xf000000) == 0) {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar2 = uVar1 >> 0x18 & 0xf;
    }
    if ((int)uVar2 <= iVar4) break;
    local_e0[0] = 0;
    local_dc = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_c8 = 0xffffffff;
    EnqueueInput(this,param_1,iVar4,local_e0);
    iVar4 = iVar4 + 1;
  }
  if (*(int *)(this + 0x78) == 1) {
    *(undefined1 *)(*(long *)(this + 0x18) + ((ulong)uVar1 & 0xffffff) * 0x28 + 1) = param_5;
  }
  else if (*(int *)(this + 0x78) == 0) {
    *(undefined8 *)(*(long *)(this + 0x18) + ((ulong)uVar1 & 0xffffff) * 0x28 + 0x10) = param_6;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

