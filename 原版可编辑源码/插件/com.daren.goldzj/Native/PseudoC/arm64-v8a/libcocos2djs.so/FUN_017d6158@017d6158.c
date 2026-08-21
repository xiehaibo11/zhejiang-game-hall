
void FUN_017d6158(Label *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((v8::internal::FLAG_wasm_no_stack_checks == '\0') &&
     (*(char *)(*(long *)(param_1 + 0x360) + 9) != '\0')) {
    uVar5 = *(undefined8 *)(param_1 + 0x240);
    local_70 = operator_new(8);
    *local_70 = 0;
    local_68 = operator_new(8);
    *local_68 = 0;
    local_60 = 0x13;
    local_50 = 0;
    uStack_5c = param_2;
    local_58 = uVar5;
    FUN_017d64b0(param_1 + 0x378,&local_70);
    puVar2 = local_68;
    local_68 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
    }
    puVar2 = local_70;
    local_70 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
    }
    lVar4 = *(long *)(param_1 + 0x380);
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar3 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                        ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = LZCOUNT((uVar3 >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar3 = uVar3 & 0xff | 0x4000000000;
    v8::internal::wasm::LiftoffAssembler::LoadFromInstance(param_1,uVar3,0,0x23,8);
    v8::internal::wasm::LiftoffAssembler::StackCheck(param_1,*(undefined8 *)(lVar4 + -0x28),uVar3,0)
    ;
    v8::internal::Assembler::bind(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

