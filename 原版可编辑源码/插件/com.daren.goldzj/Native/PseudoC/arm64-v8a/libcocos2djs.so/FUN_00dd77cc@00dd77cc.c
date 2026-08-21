
ulong FUN_00dd77cc(ulong param_1,FILE *param_2,undefined8 param_3)

{
  char *pcVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  size_t __size;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  uint *puVar8;
  
  lVar7 = *(long *)(param_1 + 0x350);
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x48);
  uVar5 = param_1;
  if ((uVar4 >> 9 & 1) != 0) {
    if (*(short *)(param_1 + 0x78) == 4) {
      fwrite("  Group 4 Options:",0x12,1,param_2);
      if ((*(byte *)(lVar7 + 0x20) >> 1 & 1) != 0) {
        pcVar6 = " ";
LAB_00dd78f4:
        fprintf(param_2,"%suncompressed data",pcVar6);
      }
    }
    else {
      fwrite("  Group 3 Options:",0x12,1,param_2);
      puVar8 = (uint *)(lVar7 + 0x20);
      uVar4 = *puVar8;
      if ((uVar4 & 1) == 0) {
        pcVar1 = " ";
        pcVar6 = pcVar1;
      }
      else {
        fprintf(param_2,"%s2-d encoding",&DAT_019afa78);
        uVar4 = *puVar8;
        pcVar1 = "+";
        pcVar6 = "+";
      }
      if ((uVar4 >> 2 & 1) != 0) {
        fprintf(param_2,"%sEOL padding",pcVar1);
        uVar4 = *puVar8;
        pcVar6 = "+";
      }
      if ((uVar4 >> 1 & 1) != 0) goto LAB_00dd78f4;
    }
    uVar3 = fprintf(param_2," (%lu = 0x%lx)\n",(ulong)*(uint *)(lVar7 + 0x20),
                    (ulong)*(uint *)(lVar7 + 0x20));
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x48);
    uVar5 = (ulong)uVar3;
  }
  if ((uVar4 >> 3 & 1) == 0) goto joined_r0x00dd77fc;
  fwrite("  Fax Data:",0xb,1,param_2);
  sVar2 = *(short *)(lVar7 + 0x14);
  if (sVar2 == 2) {
    pcVar6 = " uncorrected errors";
    __size = 0x13;
LAB_00dd7978:
    fwrite(pcVar6,__size,1,param_2);
  }
  else {
    if (sVar2 == 1) {
      pcVar6 = " receiver regenerated";
      __size = 0x15;
      goto LAB_00dd7978;
    }
    if (sVar2 == 0) {
      pcVar6 = " clean";
      __size = 6;
      goto LAB_00dd7978;
    }
  }
  uVar4 = fprintf(param_2," (%u = 0x%x)\n",(ulong)*(ushort *)(lVar7 + 0x14),
                  (ulong)*(ushort *)(lVar7 + 0x14));
  uVar5 = (ulong)uVar4;
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x48);
joined_r0x00dd77fc:
  if ((uVar4 >> 2 & 1) != 0) {
    uVar4 = fprintf(param_2,"  Bad Fax Lines: %lu\n",(ulong)*(uint *)(lVar7 + 0x1c));
    uVar5 = (ulong)uVar4;
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x48);
  }
  if ((uVar4 >> 4 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
  }
  else {
    uVar4 = fprintf(param_2,"  Consecutive Bad Fax Lines: %lu\n",(ulong)*(uint *)(lVar7 + 0x18));
    uVar5 = (ulong)uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dd7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar5;
  }
  return uVar5;
}

