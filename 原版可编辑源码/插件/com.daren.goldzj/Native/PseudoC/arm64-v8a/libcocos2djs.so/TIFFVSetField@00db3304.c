
undefined8 TIFFVSetField(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = TIFFFindField(param_1,param_2,0);
  if (lVar2 == 0) {
    pcVar1 = "pseudo-";
    if ((uint)param_2 >> 0x10 == 0) {
      pcVar1 = "";
    }
    TIFFErrorExt(param_1[0x77],"TIFFSetField","%s: Unknown %stag %u",*param_1,pcVar1,
                 param_2 & 0xffffffff);
  }
  else {
    if ((((uint)param_2 == 0x101) || ((*(byte *)(param_1 + 2) >> 6 & 1) == 0)) ||
       (*(char *)(lVar2 + 0x1a) != '\0')) {
      uStack_38 = param_3[3];
      local_40 = param_3[2];
      uStack_48 = param_3[1];
      local_50 = *param_3;
      uVar3 = (*(code *)param_1[0x81])(param_1,param_2 & 0xffffffff,&local_50);
      return uVar3;
    }
    TIFFErrorExt(param_1[0x77],"TIFFSetField","%s: Cannot modify tag \"%s\" while writing",*param_1,
                 *(undefined8 *)(lVar2 + 0x20));
  }
  return 0;
}

