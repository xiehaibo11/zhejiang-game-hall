
undefined8 FUN_00a40384(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
                    /* try { // try from 00a40384 to 00b40397 has its CatchHandler @ 00a4041c */
                    /* try { // try from 00a4039c to 00b403cf has its CatchHandler @ 00a40420 */
  if (*(char *)((long)param_1 + 0x3bf) == '\0') {
    uVar2 = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x3bb) == '\0') {
      if (*(char *)((long)param_1 + 0x3be) == '\0') {
                    /* try { // try from 00a403d0 to 00b4046b has its CatchHandler @ 00a40160 */
        puVar1 = param_1 + 0x1a;
        if (param_2 != 1) {
          puVar1 = param_1 + 0x18;
        }
      }
      else {
        puVar1 = param_1 + 0x2d;
      }
    }
    else {
      puVar1 = param_1 + 0x1d;
    }
    uVar2 = *puVar1;
    if (*(char *)((long)param_1 + 0x3bc) == '\0') {
      if (*(char *)((long)param_1 + 0x3be) == '\0') {
        if (param_2 == 1) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x35);
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x34);
        }
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x2f);
      }
    }
    else {
      uVar3 = *(uint *)((long)param_1 + 0x1a4);
    }
    *(undefined1 *)((long)param_1 + 0x3db) = 1;
                    /* catch() { ... } // from try @ 00a40384 with catch @ 00a4041c */
                    /* catch() { ... } // from try @ 00a4039c with catch @ 00a40420 */
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 4:
    case 6:
                    /* catch() { ... } // from try @ 00a40350 with catch @ 00a40450 */
      uVar2 = FUN_00a4e4dc(param_1[0x29],uVar2,uVar3,param_2,param_1);
      break;
    case 5:
    case 7:
      uVar2 = FUN_00a4e9a0(param_1[0x29],param_1[0x2a],uVar2,uVar3,param_2,param_1);
      break;
    default:
      FUN_00a38a08(*param_1,"unknown proxytype option given");
      uVar2 = 7;
    }
    *(undefined1 *)((long)param_1 + 0x3db) = 0;
  }
  return uVar2;
}

