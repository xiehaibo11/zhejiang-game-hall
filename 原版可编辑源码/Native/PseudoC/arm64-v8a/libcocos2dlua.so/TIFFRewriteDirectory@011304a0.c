
undefined8 TIFFRewriteDirectory(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  
                    /* try { // try from 011304a0 to 01230533 has its CatchHandler @ 011304a0
                       catch() { ... } // from try @ 011304a0 with catch @ 011304a0
                       catch() { ... } // from try @ 01130540 with catch @ 011304a0 */
  uVar7 = param_1[3];
  if (uVar7 == 0) {
                    /* try { // try from 01130534 to 0123053f has its CatchHandler @ 01130558 */
    uVar4 = FUN_0112dfbc(param_1,1,1,0);
    return uVar4;
  }
  if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0) {
    uVar8 = (ulong)*(uint *)((long)param_1 + 0x26c);
    if (uVar7 != uVar8) {
      uVar7 = (*(code *)param_1[0x7a])(param_1[0x77],uVar8,0);
      if (uVar7 == uVar8) {
        do {
          lVar2 = (*(code *)param_1[0x78])(param_1[0x77],&local_48,2);
          if (lVar2 != 2) break;
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabShort(&local_48);
          }
          iVar1 = (int)uVar8 + 2;
          (*(code *)param_1[0x7a])(param_1[0x77],iVar1 + (uint)(ushort)local_48 * 0xc,0);
          lVar2 = (*(code *)param_1[0x78])(param_1[0x77],&local_38,4);
          if (lVar2 != 4) goto LAB_01130770;
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabLong(&local_38);
          }
          uVar8 = (ulong)local_38;
          if (param_1[3] == uVar8) {
            local_40 = 0;
            (*(code *)param_1[0x7a])(param_1[0x77],iVar1 + (uint)(ushort)local_48 * 0xc,0);
            lVar2 = (*(code *)param_1[0x79])(param_1[0x77],&local_40,4);
            if (lVar2 == 4) goto LAB_011307c4;
            goto LAB_01130818;
          }
          uVar7 = (*(code *)param_1[0x7a])(param_1[0x77],uVar8,0);
        } while (uVar7 == uVar8);
      }
      goto LAB_0113072c;
    }
    *(undefined4 *)((long)param_1 + 0x26c) = 0;
    param_1[3] = 0;
    (*(code *)param_1[0x7a])(param_1[0x77],4,0);
    lVar2 = (*(code *)param_1[0x79])(param_1[0x77],(long)param_1 + 0x26c,4);
    if (lVar2 == 4) goto LAB_01130580;
  }
  else {
    uVar8 = param_1[0x4e];
                    /* try { // try from 01130540 to 0123056b has its CatchHandler @ 011304a0 */
    if (uVar8 != uVar7) {
      uVar7 = (*(code *)param_1[0x7a])(param_1[0x77],uVar8,0);
      if (uVar7 == uVar8) {
        while( true ) {
          lVar2 = (*(code *)param_1[0x78])(param_1[0x77],&local_38,8);
          if (lVar2 != 8) goto LAB_0113072c;
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabLong8(&local_38);
          }
          if (0xffff < CONCAT44(uStack_34,local_38)) {
            uVar4 = param_1[0x77];
            pcVar5 = "TIFFRewriteDirectory";
            pcVar6 = "Sanity check on tag count failed, likely corrupt TIFF";
            goto LAB_01130754;
          }
          lVar2 = uVar8 + ((ulong)local_38 & 0xffff) * 0x14 + 8;
          (*(code *)param_1[0x7a])(param_1[0x77],lVar2,0);
          lVar3 = (*(code *)param_1[0x78])(param_1[0x77],&local_40,8);
          if (lVar3 != 8) goto LAB_01130770;
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabLong8(&local_40);
          }
          uVar8 = CONCAT44(uStack_3c,local_40);
          if (uVar8 == param_1[3]) break;
          uVar7 = (*(code *)param_1[0x7a])(param_1[0x77],uVar8,0);
          if (uVar7 != uVar8) goto LAB_0113072c;
        }
        local_48 = 0;
        (*(code *)param_1[0x7a])(param_1[0x77],lVar2,0);
        lVar2 = (*(code *)param_1[0x79])(param_1[0x77],&local_48,8);
        if (lVar2 != 8) goto LAB_01130818;
LAB_011307c4:
        param_1[3] = 0;
        goto LAB_01130580;
      }
LAB_0113072c:
      uVar4 = param_1[0x77];
      pcVar5 = "TIFFRewriteDirectory";
      pcVar6 = "Error fetching directory count";
      goto LAB_01130754;
    }
                    /* catch() { ... } // from try @ 01130534 with catch @ 01130558 */
    param_1[0x4e] = 0;
    param_1[3] = 0;
    (*(code *)param_1[0x7a])(param_1[0x77],8,0);
    lVar2 = (*(code *)param_1[0x79])(param_1[0x77],param_1 + 0x4e,8);
    if (lVar2 == 8) {
LAB_01130580:
      uVar4 = FUN_0112dfbc(param_1,1,1,0);
      return uVar4;
    }
  }
  uVar4 = param_1[0x77];
  pcVar5 = (char *)*param_1;
  pcVar6 = "Error updating TIFF header";
LAB_01130754:
  TIFFErrorExt(uVar4,pcVar5,pcVar6);
  return 0;
LAB_01130770:
  uVar4 = param_1[0x77];
  pcVar5 = "TIFFRewriteDirectory";
  pcVar6 = "Error fetching directory link";
  goto LAB_01130754;
LAB_01130818:
  uVar4 = param_1[0x77];
  pcVar5 = "TIFFRewriteDirectory";
  pcVar6 = "Error writing directory link";
  goto LAB_01130754;
}

