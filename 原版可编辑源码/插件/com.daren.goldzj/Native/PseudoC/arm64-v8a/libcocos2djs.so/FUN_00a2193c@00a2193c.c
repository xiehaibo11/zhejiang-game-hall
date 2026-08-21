
int FUN_00a2193c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21924 with catch @ 00a2194c
                        */
  if (*(int *)(param_1 + 0x420) != 0) {
    iVar3 = FUN_00a3608c(*(undefined8 *)(param_1 + 0x428),&local_68);
    if (iVar3 != 0) {
      FUN_00a23020(param_1,"Invalid TIMEVALUE");
      return iVar3;
    }
    lVar1 = 6;
    if (iStack_50 != 0) {
      lVar1 = (long)iStack_50 + -1;
    }
    FUN_00a0e7c4(param_1 + 0xb08,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                 (&PTR_DAT_01c6d770)[lVar1],local_5c,(&PTR_DAT_01c6d7a8)[iStack_58],local_54 + 0x76c
                 ,uStack_60,local_64,local_68);
                    /* catch() { ... } // from try @ 00a21a84 with catch @ 00a219f0 */
    uVar2 = *(int *)(param_1 + 0x420) - 1;
    if (uVar2 < 3) {
      iVar3 = FUN_00a21380(param_2,(&PTR_s_If_Modified_Since___s_01c6d3c0)[(int)uVar2],
                           param_1 + 0xb08);
      return iVar3;
    }
  }
  return 0;
}

