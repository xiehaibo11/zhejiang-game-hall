
void FUN_0012ba64(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (param_3 == 0) {
    bw_lpc(0x7eb8,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x58),
           *(undefined4 *)(param_1 + 0x20));
    uVar6 = 0;
    *(short *)(param_1 + 0x80) = (short)((uint)(*(short *)(param_1 + 0x80) * 0x7333) >> 0xf);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  lVar3 = (long)iVar1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  if (0 < iVar1) {
    iVar4 = *(int *)(param_1 + 0x84);
    lVar5 = 0;
    do {
      iVar4 = iVar4 * 0x19660d + 0x3c6ef35f;
      iVar2 = (iVar4 >> 0x10) * (int)*(short *)(param_1 + 0x80);
      *(short *)(param_2 + lVar3 * 2 + lVar5 * 2) =
           (short)((uint)((iVar2 + 0x2000) - (iVar2 >> 3)) >> 0xe);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar1);
    *(int *)(param_1 + 0x84) = iVar4;
  }
  lVar5 = param_2 + lVar3 * 2;
  iir_mem16(lVar5,*(undefined8 *)(param_1 + 0x58),lVar5,lVar3,*(undefined4 *)(param_1 + 0x20),
            *(undefined8 *)(param_1 + 0x60),param_4);
  qmf_synth(param_2,param_2 + (long)*(int *)(param_1 + 0x14) * 2,&DAT_001370ac,param_2,
            *(undefined4 *)(param_1 + 0x10),0x40,*(undefined8 *)(param_1 + 0x38),
            *(undefined8 *)(param_1 + 0x40),param_4);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x98) = uVar6;
  }
  return;
}

