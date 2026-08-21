
undefined8
FUN_00a2f7ac(long param_1,char *param_2,size_t param_3,undefined8 *param_4,size_t *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char *__s;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  __s = (char *)(*(code *)PTR_malloc_017699f8)((param_3 << 2) / 3 + 4);
  if (__s == (char *)0x0) {
    uVar4 = 0x1b;
  }
  else {
    pcVar5 = __s;
    if (param_3 != 0) {
      sVar6 = 0;
      do {
        pbVar1 = (byte *)(param_2 + sVar6);
        bVar2 = *pbVar1;
        if (param_3 - 1 == sVar6) {
          FUN_00a241ac(pcVar5,5,"%c%c==",*(undefined1 *)(param_1 + (ulong)(bVar2 >> 2)),
                       *(undefined1 *)(param_1 + ((ulong)bVar2 & 3) * 0x10));
LAB_00a2f918:
          pcVar5 = pcVar5 + 4;
          break;
        }
        bVar3 = pbVar1[1];
        if (param_3 - 2 == sVar6) {
          FUN_00a241ac(pcVar5,5,"%c%c%c=",*(undefined1 *)(param_1 + (ulong)(bVar2 >> 2)),
                       *(undefined1 *)(param_1 + (ulong)((uint)(bVar3 >> 4) | (bVar2 & 3) << 4)),
                       *(undefined1 *)(param_1 + (ulong)((bVar3 & 0xf) << 2)));
          goto LAB_00a2f918;
        }
        FUN_00a241ac(pcVar5,5,"%c%c%c%c",*(undefined1 *)(param_1 + (ulong)(bVar2 >> 2)),
                     *(undefined1 *)(param_1 + (ulong)((uint)(bVar3 >> 4) | (bVar2 & 3) << 4)),
                     *(undefined1 *)(param_1 + (ulong)((uint)(pbVar1[2] >> 6) | (bVar3 & 0xf) << 2))
                     ,*(undefined1 *)(param_1 + ((ulong)pbVar1[2] & 0x3f)));
        sVar6 = sVar6 + 3;
        pcVar5 = pcVar5 + 4;
      } while (param_3 != sVar6);
    }
    *pcVar5 = '\0';
    *param_4 = __s;
    (*(code *)PTR_free_01769a00)(0);
    sVar6 = strlen(__s);
    uVar4 = 0;
    *param_5 = sVar6;
  }
  return uVar4;
}

