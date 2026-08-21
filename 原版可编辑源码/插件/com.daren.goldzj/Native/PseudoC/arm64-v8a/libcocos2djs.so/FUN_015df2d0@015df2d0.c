
void FUN_015df2d0(long param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long local_e8 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(param_5 + 8);
  uVar1 = lVar7 + 1;
  local_f0 = &local_68;
  local_100 = local_e8;
  if (uVar1 < 0x11) {
    local_f8 = local_e8 + uVar1;
    local_e8[0] = param_4;
    if (lVar7 == 0) goto LAB_015df38c;
  }
  else {
    local_f8 = local_e8;
    v8::base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_100,uVar1);
    local_f8 = local_100 + uVar1;
    *local_100 = param_4;
  }
  plVar5 = (long *)(param_7 + 0x10);
  lVar6 = 0;
  do {
    lVar2 = lVar6 + 1;
    local_100[lVar6 + 1] = *plVar5;
    plVar5 = plVar5 + 3;
    lVar6 = lVar2;
  } while (lVar7 != lVar2);
LAB_015df38c:
  if (param_4 == 0) {
    uVar4 = v8::internal::compiler::WasmGraphBuilder::ReturnCall
                      (*(undefined8 *)(param_1 + 8),param_6,local_100,
                       (long)local_f8 - (long)local_100 >> 3,
                       *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8));
  }
  else {
    uVar4 = v8::internal::compiler::WasmGraphBuilder::ReturnCallIndirect
                      (*(undefined8 *)(param_1 + 8),param_3,param_6);
  }
  FUN_015ddc44(param_1,param_2,uVar4);
  if (local_100 != local_e8) {
    free(local_100);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

