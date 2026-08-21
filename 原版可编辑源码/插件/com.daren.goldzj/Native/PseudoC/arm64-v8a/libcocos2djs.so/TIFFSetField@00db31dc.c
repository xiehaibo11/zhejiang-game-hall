
undefined8
TIFFSetField(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  local_90 = (undefined1 *)register0x00000008;
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
      ppuStack_48 = ppuStack_88;
      local_50 = local_90;
      uStack_38 = uStack_78;
      puStack_40 = puStack_80;
      uVar3 = (*(code *)param_1[0x81])(param_1,param_2 & 0xffffffff,&local_50);
      return uVar3;
    }
    TIFFErrorExt(param_1[0x77],"TIFFSetField","%s: Cannot modify tag \"%s\" while writing",*param_1,
                 *(undefined8 *)(lVar2 + 0x20));
  }
  return 0;
}

