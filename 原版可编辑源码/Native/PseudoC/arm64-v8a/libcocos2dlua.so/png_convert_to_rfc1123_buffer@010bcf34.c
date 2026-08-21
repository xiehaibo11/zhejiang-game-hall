
undefined8 png_convert_to_rfc1123_buffer(long param_1,ushort *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_38 [5];
  undefined1 auStack_33 [3];
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((((*param_2 >> 4 < 0x271) && ((byte)param_2[1] - 1 < 0xc)) &&
        ((byte)(*(char *)((long)param_2 + 3) - 1U) < 0x1f)) &&
       ((((byte)param_2[2] < 0x18 && (*(byte *)((long)param_2 + 5) < 0x3c)) &&
        ((byte)param_2[3] < 0x3d)))) {
      uVar1 = png_format_number(auStack_38,auStack_33,1);
      uVar2 = png_safecat(param_1,0x1d,0,uVar1);
      uVar3 = uVar2;
      if (uVar2 < 0x1c) {
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = 0x20;
      }
      uVar2 = png_safecat(param_1,0x1d,uVar3,&UNK_0147339c + (ulong)(byte)param_2[1] * 4);
      uVar3 = uVar2;
      if (uVar2 < 0x1c) {
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = 0x20;
      }
      uVar1 = png_format_number(auStack_38,auStack_33,1,*param_2);
      uVar2 = png_safecat(param_1,0x1d,uVar3,uVar1);
      uVar3 = uVar2;
      if (uVar2 < 0x1c) {
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = 0x20;
      }
      uVar1 = png_format_number(auStack_38,auStack_33,2,(char)param_2[2]);
      uVar2 = png_safecat(param_1,0x1d,uVar3,uVar1);
      uVar3 = uVar2;
      if (uVar2 < 0x1c) {
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = 0x3a;
      }
      uVar1 = png_format_number(auStack_38,auStack_33,2,*(undefined1 *)((long)param_2 + 5));
      uVar2 = png_safecat(param_1,0x1d,uVar3,uVar1);
      uVar3 = uVar2;
      if (uVar2 < 0x1c) {
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = 0x3a;
      }
      uVar1 = png_format_number(auStack_38,auStack_33,2,(char)param_2[3]);
      uVar1 = png_safecat(param_1,0x1d,uVar3,uVar1);
      png_safecat(param_1,0x1d,uVar1,&DAT_01472b54);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

