
undefined8 FUN_00b87230(char *param_1,int param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint local_48;
  uint uStack_44;
  uint local_38;
  uint uStack_34;
  
                    /* catch() { ... } // from try @ 00b87414 with catch @ 00b8723c */
  piVar7 = (int *)(param_3 + 0x10);
  iVar5 = *piVar7;
  if (iVar5 == 0x10) {
LAB_00b87264:
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x14) = iVar5;
      }
      else if (*(int *)(param_3 + 0x14) != iVar5) goto LAB_00b87264;
      piVar7 = (int *)(param_3 + 0x18);
      iVar5 = 1;
    }
    else if (param_2 < 5) {
      puVar1 = (undefined1 *)(param_3 + iVar5);
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = OPENSSL_hexchar2int(*param_1);
        if ((int)uVar3 < 0) goto LAB_00b87264;
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
        uVar3 = uVar3 & 0xff | uVar6 << 4;
      } while (param_2 != 0);
      puVar1[1] = (char)uVar3;
      iVar5 = 2;
      *puVar1 = (char)(uVar6 >> 4);
    }
    else {
      if ((((0xc < iVar5) || (param_1[param_2] != '\0')) ||
          (iVar2 = sscanf(param_1,"%d.%d.%d.%d",&uStack_34,&local_38,&uStack_44,&local_48),
          iVar2 != 4)) || (0xff < (local_38 | uStack_34 | uStack_44 | local_48))) goto LAB_00b87264;
      puVar1 = (undefined1 *)(param_3 + iVar5);
      *puVar1 = (char)uStack_34;
                    /* try { // try from 00b872d8 to 00c872e3 has its CatchHandler @ 00b875b8 */
      puVar1[1] = (char)local_38;
      puVar1[2] = (char)uStack_44;
      puVar1[3] = (char)local_48;
      iVar5 = 4;
    }
    uVar4 = 1;
    *piVar7 = *piVar7 + iVar5;
  }
  return uVar4;
}

