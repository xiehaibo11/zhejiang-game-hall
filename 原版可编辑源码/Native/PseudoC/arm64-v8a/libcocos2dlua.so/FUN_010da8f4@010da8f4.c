
uint FUN_010da8f4(undefined8 param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_130 [256];
  
  if ((param_2 == (byte *)0x0) || (bVar3 = *param_2, bVar3 == 0)) {
    uVar4 = 0;
    *param_3 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = true;
    pbVar2 = param_2;
    bVar5 = 0;
    do {
      if (bVar1) {
        while ((pbVar2 = pbVar2 + 1, bVar6 = bVar5, bVar3 < 0xa1 && (0x5d < (byte)(bVar3 - 0x21))))
        {
          bVar6 = bVar3;
          if (bVar5 != 0) {
            bVar6 = bVar5;
          }
          bVar3 = *pbVar2;
          bVar5 = bVar6;
          if (*pbVar2 == 0) goto LAB_010da9ec;
        }
LAB_010da9a4:
        bVar1 = false;
        *param_3 = bVar3;
      }
      else {
        pbVar2 = pbVar2 + 1;
        bVar6 = bVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010daa44 with catch @ 010da97c
                       catch(type#1 @ 00000000) { ... } // from try @ 010daae4 with catch @ 010da97c
                       catch(type#1 @ 00000000) { ... } // from try @ 010dab98 with catch @ 010da97c
                        */
        if ((0xa0 < bVar3) || ((byte)(bVar3 - 0x21) < 0x5e)) goto LAB_010da9a4;
        *param_3 = 0x20;
        if (bVar3 != 0x20) {
          bVar6 = bVar3;
        }
        bVar1 = true;
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
    } while ((uVar4 < 0x4f) && (bVar3 = *pbVar2, bVar5 = bVar6, bVar3 != 0));
LAB_010da9ec:
    bVar3 = bVar6;
    if ((uVar4 != 0) && (bVar1)) {
      uVar4 = uVar4 - 1;
      param_3 = param_3 + -1;
      bVar3 = 0x20;
      if (bVar6 != 0) {
        bVar3 = bVar6;
      }
    }
    *param_3 = 0;
                    /* try { // try from 010daa0c to 011daa0f has its CatchHandler @ 010dab18 */
    if (uVar4 != 0) {
      if (*pbVar2 == 0) {
        if (bVar3 != 0) {
                    /* try { // try from 010daa38 to 011daa43 has its CatchHandler @ 010dab1c */
          png_warning_parameter(auStack_130,1,param_2);
                    /* try { // try from 010daa44 to 011daadb has its CatchHandler @ 010da97c */
          png_warning_parameter_signed(auStack_130,2,4,bVar3);
          png_formatted_warning(param_1,auStack_130,"keyword \"@1\": bad character \'0x@2\'");
        }
      }
      else {
        png_warning(param_1,"keyword truncated");
      }
    }
  }
  return uVar4;
}

