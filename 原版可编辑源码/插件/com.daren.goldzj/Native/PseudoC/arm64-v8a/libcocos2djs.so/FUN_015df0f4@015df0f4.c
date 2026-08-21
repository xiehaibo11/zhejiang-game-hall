
void FUN_015df0f4(long *param_1,long param_2,undefined4 param_3,long param_4,ulong *param_5,
                 undefined4 param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *local_128;
  undefined8 *local_120;
  long **local_118;
  undefined8 uStack_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long local_f0 [16];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  uVar9 = *param_5;
  uVar2 = param_5[1];
  local_f8 = local_70;
  uVar7 = uVar2 + 1;
  local_108 = local_f0;
  if (0x10 < uVar7) {
    local_100 = local_f0;
    v8::base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_108,uVar7);
  }
  local_100 = local_108 + uVar7;
  local_118 = &local_108;
  local_128 = &uStack_110;
  if (1 < uVar9) {
    local_120 = &uStack_110;
    v8::base::SmallVector<v8::internal::compiler::Node*,1ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,1ul> *)&local_128,uVar9);
  }
  local_120 = local_128 + uVar9;
  *local_108 = param_4;
  if (uVar2 != 0) {
    plVar5 = (long *)(param_7 + 0x10);
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      local_108[uVar7 + 1] = *plVar5;
      plVar5 = plVar5 + 3;
      uVar7 = uVar1;
    } while (uVar2 != uVar1);
  }
  if (param_4 == 0) {
    uVar4 = v8::internal::compiler::WasmGraphBuilder::CallDirect
                      (param_1[1],param_6,local_108,(long)local_100 - (long)local_108 >> 3,local_128
                       ,(long)local_120 - (long)local_128 >> 3,
                       *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8));
  }
  else {
    uVar4 = v8::internal::compiler::WasmGraphBuilder::CallIndirect(param_1[1],param_3,param_6);
  }
  FUN_015ddc44(param_1,param_2,uVar4);
  if (uVar9 != 0) {
    puVar6 = local_128;
    puVar8 = (undefined8 *)(param_8 + 0x10);
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar9 != 0);
  }
  if (*param_1 != 0) {
    v8::internal::compiler::WasmGraphBuilder::InitInstanceCache
              ((WasmGraphBuilder *)param_1[1],(WasmInstanceCacheNodes *)(*param_1 + 0x18));
  }
  if (local_128 != &uStack_110) {
    free(local_128);
  }
  if (local_108 != local_f0) {
    free(local_108);
  }
  if (*(long *)(lVar3 + 0x28) == local_70[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

