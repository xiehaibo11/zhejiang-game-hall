
int FUN_00a37324(long param_1,undefined8 param_2)

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
  
                    /* catch() { ... } // from try @ 00a3716c with catch @ 00a37324 */
                    /* catch() { ... } // from try @ 00a37130 with catch @ 00a37328
                       catch() { ... } // from try @ 00a371a4 with catch @ 00a37328
                       catch() { ... } // from try @ 00a372c4 with catch @ 00a37328 */
                    /* catch() { ... } // from try @ 00a371c8 with catch @ 00a37338
                       catch() { ... } // from try @ 00a372e8 with catch @ 00a37338 */
  if (*(int *)(param_1 + 0x420) != 0) {
    iVar3 = FUN_00a4ca74(*(undefined8 *)(param_1 + 0x428),&local_68);
    if (iVar3 != 0) {
      FUN_00a38a08(param_1,"Invalid TIMEVALUE");
      return iVar3;
    }
    lVar1 = 6;
    if (iStack_50 != 0) {
      lVar1 = (long)iStack_50 + -1;
    }
    FUN_00a241ac(param_1 + 0xb08,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                 (&PTR_DAT_016a3f40)[lVar1],local_5c,(&PTR_DAT_016a3f78)[iStack_58],local_54 + 0x76c
                 ,uStack_60,local_64,local_68);
    uVar2 = *(int *)(param_1 + 0x420) - 1;
    if (uVar2 < 3) {
      iVar3 = FUN_00a36d68(param_2,(&PTR_s_If_Modified_Since___s_016a3b90)[(int)uVar2],
                           param_1 + 0xb08);
      return iVar3;
    }
  }
  return 0;
}

