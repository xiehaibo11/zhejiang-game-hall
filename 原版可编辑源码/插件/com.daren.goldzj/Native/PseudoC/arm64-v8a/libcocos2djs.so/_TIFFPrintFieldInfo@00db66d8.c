
int _TIFFPrintFieldInfo(undefined8 *param_1,FILE *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  
  iVar3 = fprintf(param_2,"%s: \n",*param_1);
  if (param_1[0x7f] != 0) {
    uVar5 = 0;
    do {
      puVar4 = *(uint **)(param_1[0x7e] + uVar5 * 8);
      pcVar1 = "TRUE";
      if (*(char *)((long)puVar4 + 0x1a) == '\0') {
        pcVar1 = "FALSE";
      }
      pcVar2 = "TRUE";
      if (*(char *)((long)puVar4 + 0x1b) == '\0') {
        pcVar2 = "FALSE";
      }
      iVar3 = fprintf(param_2,"field[%2d] %5lu, %2d, %2d, %d, %2d, %5s, %5s, %s\n",uVar5,
                      (ulong)*puVar4,(long)(short)puVar4[1],(long)*(short *)((long)puVar4 + 6),
                      (ulong)puVar4[2],(ulong)(ushort)puVar4[6],pcVar1,pcVar2,
                      *(undefined8 *)(puVar4 + 8));
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)param_1[0x7f]);
  }
  return iVar3;
}

