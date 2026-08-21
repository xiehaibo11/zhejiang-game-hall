
undefined8 FUN_00a57864(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t __n;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  ulong uVar7;
  
  pcVar1 = (char *)(*(code *)PTR_malloc_017699f8)(0x400);
  __n = strlen(param_2);
  if (pcVar1 != (char *)0x0) {
    for (; __n != 0; __n = __n - sVar2) {
      while (sVar2 = send(*(int *)(param_1 + 0x4f0),param_2,__n,0x4000), sVar2 == -1) {
        piVar3 = (int *)__errno();
        if (*piVar3 != 4) goto LAB_00a57a40;
      }
      param_2 = param_2 + sVar2;
    }
    uVar7 = 0;
    pcVar4 = pcVar1;
LAB_00a57950:
    do {
      pcVar1 = pcVar4;
      sVar2 = recv(*(int *)(param_1 + 0x4f0),pcVar1 + uVar7,0x400,0);
      if (sVar2 == -1) {
        piVar3 = (int *)__errno();
        cVar6 = '\x04';
        if (*piVar3 == 4) {
          cVar6 = '\x05';
        }
        pcVar4 = pcVar1;
        if (cVar6 == '\0') goto LAB_00a57950;
      }
      else {
        if (sVar2 == 0) goto LAB_00a57a40;
        uVar7 = sVar2 + uVar7;
        if (pcVar1[uVar7 - 1] == '\n') {
          pcVar1[uVar7 - 1] = '\0';
          if ((uVar7 < 4) || (param_3 == 1 && uVar7 == 3)) goto LAB_00a57a40;
          if (param_3 == 1) {
            if ((*pcVar1 != 'Y') || (pcVar1[1] != 'R')) goto LAB_00a57a40;
          }
          else {
            if (param_3 != 2) goto LAB_00a57a10;
            if (*pcVar1 == 'A') {
              if (pcVar1[1] != 'F') goto LAB_00a57a40;
            }
            else if ((*pcVar1 != 'K') || (pcVar1[1] != 'K')) goto LAB_00a57a40;
          }
          if (pcVar1[2] == ' ') {
LAB_00a57a10:
            uVar5 = FUN_00a24258(&DAT_013c93d9,uVar7 - 4,pcVar1 + 3);
            *(undefined8 *)(param_1 + 0x500) = uVar5;
            (*(code *)PTR_free_01769a00)(pcVar1);
            return 0;
          }
          goto LAB_00a57a40;
        }
        pcVar4 = (char *)FUN_00a4e398(pcVar1,uVar7 + 0x400);
        cVar6 = '\x01';
        if (pcVar4 != (char *)0x0) goto LAB_00a57950;
      }
      pcVar4 = pcVar1;
    } while (cVar6 == '\x05');
    if (cVar6 == '\x04') {
LAB_00a57a40:
      (*(code *)PTR_free_01769a00)(pcVar1);
      return 9;
    }
  }
  return 0x1b;
}

