
ulong FUN_01133c74(ulong param_1,FILE *param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  size_t __size;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  uint *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x350);
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x48);
  uVar4 = param_1;
  if ((uVar3 >> 9 & 1) != 0) {
    if (*(short *)(param_1 + 0x78) == 4) {
      fwrite("  Group 4 Options:",0x12,1,param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01133ee8 with catch @ 01133d00
                        */
      if ((*(byte *)(lVar6 + 0x20) >> 1 & 1) != 0) {
        pcVar5 = " ";
LAB_01133d9c:
        fprintf(param_2,"%suncompressed data",pcVar5);
      }
    }
    else {
                    /* try { // try from 01133d20 to 01233d23 has its CatchHandler @ 0113402c */
      fwrite("  Group 3 Options:",0x12,1,param_2);
      puVar7 = (uint *)(lVar6 + 0x20);
      uVar3 = *puVar7;
      if ((uVar3 & 1) == 0) {
        pcVar5 = " ";
      }
      else {
        fprintf(param_2,"%s2-d encoding"," ");
        uVar3 = *puVar7;
        pcVar5 = "+";
      }
      if ((uVar3 >> 2 & 1) != 0) {
        fprintf(param_2,"%sEOL padding",pcVar5);
        uVar3 = *puVar7;
        pcVar5 = "+";
      }
      if ((uVar3 >> 1 & 1) != 0) goto LAB_01133d9c;
    }
                    /* try { // try from 01133db8 to 01233dc3 has its CatchHandler @ 01134030 */
    uVar2 = fprintf(param_2," (%lu = 0x%lx)\n",(ulong)*(uint *)(lVar6 + 0x20),
                    (ulong)*(uint *)(lVar6 + 0x20));
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x48);
    uVar4 = (ulong)uVar2;
  }
  if ((uVar3 >> 3 & 1) == 0) goto joined_r0x01133ca4;
  fwrite("  Fax Data:",0xb,1,param_2);
  sVar1 = *(short *)(lVar6 + 0x14);
  if (sVar1 == 2) {
    pcVar5 = " uncorrected errors";
    __size = 0x13;
LAB_01133e20:
    fwrite(pcVar5,__size,1,param_2);
  }
  else {
    if (sVar1 == 1) {
      pcVar5 = " receiver regenerated";
      __size = 0x15;
      goto LAB_01133e20;
    }
    if (sVar1 == 0) {
      pcVar5 = " clean";
      __size = 6;
      goto LAB_01133e20;
    }
  }
                    /* try { // try from 01133e3c to 01233e47 has its CatchHandler @ 01134038 */
  uVar3 = fprintf(param_2," (%u = 0x%x)\n",(ulong)*(ushort *)(lVar6 + 0x14),
                  (ulong)*(ushort *)(lVar6 + 0x14));
  uVar4 = (ulong)uVar3;
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x48);
joined_r0x01133ca4:
  if ((uVar3 >> 2 & 1) != 0) {
    uVar3 = fprintf(param_2,"  Bad Fax Lines: %lu\n",(ulong)*(uint *)(lVar6 + 0x1c));
    uVar4 = (ulong)uVar3;
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x48);
  }
  if ((uVar3 >> 4 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
  }
  else {
    uVar3 = fprintf(param_2,"  Consecutive Bad Fax Lines: %lu\n",(ulong)*(uint *)(lVar6 + 0x18));
    uVar4 = (ulong)uVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01133cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar4;
  }
  return uVar4;
}

