
undefined8 * speex_packet_to_header(char *param_1,int param_2)

{
  undefined8 *__ptr;
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (((((*param_1 == 'S') && (param_1[1] == 'p')) && (param_1[2] == 'e')) &&
      ((param_1[3] == 'e' && (param_1[4] == 'x')))) &&
     ((param_1[5] == ' ' && ((param_1[6] == ' ' && (param_1[7] == ' ')))))) {
    if (0x4f < param_2) {
      __ptr = calloc(0x50,1);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      __ptr[5] = *(undefined8 *)(param_1 + 0x28);
      __ptr[4] = uVar3;
      __ptr[7] = uVar7;
      __ptr[6] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)param_1;
      __ptr[9] = uVar9;
      __ptr[8] = uVar8;
      __ptr[1] = uVar4;
      *__ptr = uVar3;
      __ptr[3] = uVar6;
      __ptr[2] = uVar5;
      if (2 < *(uint *)(__ptr + 5)) {
        fprintf((FILE *)0x14d168,"notification: %s\n","Invalid mode specified in Speex header");
        free(__ptr);
        return (undefined8 *)0x0;
      }
      if (*(int *)(__ptr + 6) < 3) {
        if (0 < *(int *)(__ptr + 6)) {
          return __ptr;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined4 *)(__ptr + 6) = uVar2;
      return __ptr;
    }
    pcVar1 = "Speex header too small";
  }
  else {
    pcVar1 = "This doesn\'t look like a Speex file";
  }
  fprintf((FILE *)0x14d168,"notification: %s\n",pcVar1);
  return (undefined8 *)0x0;
}

