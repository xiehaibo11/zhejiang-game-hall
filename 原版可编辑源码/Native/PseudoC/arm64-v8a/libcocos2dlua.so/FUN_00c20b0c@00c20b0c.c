
undefined8 FUN_00c20b0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  char cVar7;
  ulong __n;
  long lVar8;
  undefined1 local_1;
  
  puVar3 = *(undefined1 **)(param_3 + 0x10);
  uVar5 = (int)*(undefined8 *)(param_3 + 8) - (int)puVar3;
  if (uVar5 < 0x400) {
    FUN_00c1a418(param_3,0x400);
    puVar3 = *(undefined1 **)(param_3 + 0x10);
    uVar5 = (int)*(undefined8 *)(param_3 + 8) - (int)puVar3;
  }
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0x40);
  uVar1 = *(uint *)(lVar8 + 0x10);
  if (uVar5 < uVar1 + 10) {
    puVar3 = (undefined1 *)FUN_00c1a418(param_3);
  }
  *puVar3 = 0x1b;
  puVar3[1] = 0x4c;
  puVar3[2] = 0x4a;
  puVar3[3] = 2;
  puVar6 = puVar3 + 5;
  cVar7 = '\x02';
  if (*(int *)(param_3 + 0x38) == 0) {
    cVar7 = '\0';
  }
  puVar3[4] = cVar7 + (*(byte *)(*(long *)(param_3 + 0x20) + 0x3d) & 4) + 8;
  if (*(int *)(param_3 + 0x38) == 0) {
    __n = (ulong)uVar1;
    pvVar4 = (void *)thunk_FUN_00bff61c(puVar6,__n);
    pvVar4 = memcpy(pvVar4,(void *)(lVar8 + 0x18),__n);
    puVar6 = (undefined1 *)((long)pvVar4 + __n);
  }
  uVar2 = (**(code **)(param_3 + 0x28))
                    (*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
                     (int)puVar6 - (int)*(undefined8 *)(param_3 + 0x10),
                     *(undefined8 *)(param_3 + 0x30));
  *(undefined4 *)(param_3 + 0x3c) = uVar2;
  FUN_00c2053c(param_3,*(undefined8 *)(param_3 + 0x20));
  if (*(int *)(param_3 + 0x3c) == 0) {
    local_1 = 0;
    uVar2 = (**(code **)(param_3 + 0x28))
                      (*(undefined8 *)(param_3 + 0x18),&local_1,1,*(undefined8 *)(param_3 + 0x30));
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  return 0;
}

