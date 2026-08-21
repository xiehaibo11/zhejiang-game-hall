
void FUN_0014c3c4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pvVar8 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar8 + 8);
  puVar3 = pvVar8;
  if (0xfef < lVar4 + 0x40U) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar8;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  *(long *)((long)puVar3 + 8) = lVar4 + 0x40;
  uVar5 = *param_2;
  uVar6 = *param_3;
  uVar7 = *param_5;
  uVar10 = param_4[1];
  uVar9 = *param_4;
  uVar1 = *param_6;
  uVar2 = *param_7;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00168ae0;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x10012;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = uVar6;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x40) = uVar7;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x38) = uVar10;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = uVar9;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x48) = uVar1;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x4c) = uVar2;
  return;
}

