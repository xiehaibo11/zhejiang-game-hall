
void lua_pcall(long param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar8 + 0xc1);
  if (param_4 == 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    lVar4 = 0;
  }
  else {
    if (param_4 < 1) {
      puVar7 = *(undefined8 **)(param_1 + 0x28);
      puVar3 = puVar7 + param_4;
    }
    else {
      puVar7 = *(undefined8 **)(param_1 + 0x28);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_4 * 8 + -8);
      if (puVar7 <= puVar3) {
        puVar3 = (undefined8 *)(lVar8 + 0xe8);
      }
    }
    lVar4 = (long)puVar3 - *(long *)(param_1 + 0x38);
  }
  puVar6 = puVar7 + -(long)param_2;
  puVar3 = puVar7 + 1;
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  puVar5 = puVar7;
  if (puVar6 < puVar7) {
    do {
      puVar3 = puVar5 + -1;
      *puVar5 = puVar5[-1];
      puVar5 = puVar3;
    } while (puVar6 < puVar3);
    puVar7 = puVar7 + ~((ulong)((long)puVar7 + (-1 - (long)puVar6)) >> 3);
    puVar3 = puVar7 + 1;
  }
  *puVar7 = 0xffffffffffffffff;
  iVar2 = FUN_00c175a0((int)param_1,puVar3,param_3 + 1,lVar4);
  if (iVar2 != 0) {
    *(byte *)(lVar8 + 0xc1) = bVar1 & 0xf0 | *(byte *)(lVar8 + 0xc1) & 0xf;
  }
  return;
}

