
void FUN_015e032c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5
                 ,ulong param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_c0;
  undefined8 *local_b8;
  long *local_b0;
  undefined8 auStack_a8 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = &local_68;
  local_c0 = auStack_a8;
  if (param_6 < 9) {
    local_b8 = auStack_a8 + param_6;
    if (param_6 == 0) goto LAB_015e03d8;
  }
  else {
    local_b8 = auStack_a8;
    v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_c0,param_6);
    local_b8 = local_c0 + param_6;
  }
  puVar3 = local_c0;
  puVar4 = (undefined8 *)(param_5 + 0x10);
  do {
    param_6 = param_6 - 1;
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 3;
  } while (param_6 != 0);
LAB_015e03d8:
  uVar2 = v8::internal::compiler::WasmGraphBuilder::SimdLaneOp
                    (*(WasmGraphBuilder **)(param_1 + 8),param_3,param_4,local_c0);
  uVar2 = FUN_015ddc44(param_1,param_2,uVar2);
  *(undefined8 *)(param_7 + 0x10) = uVar2;
  if (local_c0 != auStack_a8) {
    free(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

