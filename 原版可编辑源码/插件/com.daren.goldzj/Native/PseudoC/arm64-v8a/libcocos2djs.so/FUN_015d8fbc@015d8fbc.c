
void FUN_015d8fbc(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_a0;
  undefined8 *local_98;
  long *local_90;
  undefined8 auStack_88 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = **(ulong **)(param_1 + 0x60);
  if (uVar6 == 0) {
    lVar7 = 0;
    bVar1 = *(byte *)(param_1 + 0x30);
    if ((bVar1 & 1) == 0) goto LAB_015d9008;
LAB_015d9020:
    if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d90c8;
  }
  else {
    lVar7 = *(long *)(param_1 + 0xb8) + uVar6 * -0x18;
    bVar1 = *(byte *)(param_1 + 0x30);
    if ((bVar1 & 1) != 0) goto LAB_015d9020;
LAB_015d9008:
    if (bVar1 >> 1 != 0) goto LAB_015d90c8;
  }
  if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d90c8;
  local_90 = &local_48;
  local_a0 = auStack_88;
  if (uVar6 < 9) {
    local_98 = auStack_88 + uVar6;
    if (uVar6 != 0) goto LAB_015d9080;
  }
  else {
    local_98 = auStack_88;
    v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_a0,uVar6);
    local_98 = local_a0 + uVar6;
LAB_015d9080:
    puVar4 = local_a0;
    puVar5 = (undefined8 *)(lVar7 + 0x10);
    do {
      uVar6 = uVar6 - 1;
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar6 != 0);
  }
  uVar3 = v8::internal::compiler::WasmGraphBuilder::Return
                    (*(undefined8 *)(param_1 + 0x80),local_a0,(long)local_98 - (long)local_a0 >> 3);
  FUN_015ddc44(param_1 + 0x78,param_1,uVar3);
  if (local_a0 != auStack_88) {
    free(local_a0);
  }
LAB_015d90c8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

