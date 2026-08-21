
void FUN_010a1ea8(long param_1,long param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ushort *puVar5;
  char cVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_010a4adc();
  if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x2c))) {
    puVar2 = *(ushort **)(param_1 + 0x30);
    puVar3 = *(undefined8 **)(param_2 + 8);
    puVar5 = puVar2 + (long)*(int *)(param_1 + 0x2c) * 0x28;
    pcVar4 = *(char **)(param_2 + 0x10);
    do {
      uVar7 = *(undefined8 *)(puVar2 + 0x10);
      puVar3[1] = *(undefined8 *)(puVar2 + 0x14);
      *puVar3 = uVar7;
      if ((*puVar2 & 1) == 0) {
        cVar6 = ((byte)(*puVar2 >> 1) & 1) + 1;
      }
      else {
        cVar6 = '\0';
      }
      puVar2 = puVar2 + 0x28;
      *pcVar4 = cVar6;
      puVar3 = puVar3 + 2;
      pcVar4 = pcVar4 + 1;
    } while (puVar2 < puVar5);
  }
  return;
}

