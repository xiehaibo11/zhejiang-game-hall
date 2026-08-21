
undefined8 FUN_00a4b3cc(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0xd4) == 0) {
    memset((void *)(param_2 + 0xd8),0,0x70);
    *(code **)(param_2 + 0x118) = FUN_00a4b49c;
    *(code **)(param_2 + 0x120) = FUN_00a4b4b4;
    iVar1 = inflateInit_((void *)(param_2 + 0xd8),"1.2.8",0x70);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x108) == 0) {
        FUN_00a38a08(*param_1,
                     "Error while processing content unencoding: Unknown failure within decompression software."
                    );
      }
      else {
        FUN_00a38a08(*param_1,"Error while processing content unencoding: %s");
      }
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 1;
                    /* try { // try from 00a4b478 to 00b4b4c3 has its CatchHandler @ 00a4b478
                       catch() { ... } // from try @ 00a4b478 with catch @ 00a4b478
                       catch() { ... } // from try @ 00a4b4c8 with catch @ 00a4b478 */
  }
  *(undefined4 *)(param_2 + 0xe0) = param_3;
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
  uVar2 = FUN_00a4b4c8(param_1,param_2);
  return uVar2;
}

