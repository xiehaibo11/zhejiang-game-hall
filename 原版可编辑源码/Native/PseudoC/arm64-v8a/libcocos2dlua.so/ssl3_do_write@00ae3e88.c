
undefined4 ssl3_do_write(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* try { // try from 00ae3e9c to 00be3eef has its CatchHandler @ 00ae3e9c
                       catch() { ... } // from try @ 00ae3e9c with catch @ 00ae3e9c
                       catch() { ... } // from try @ 00ae3f08 with catch @ 00ae3e9c */
  iVar1 = ssl3_write_bytes(param_1,param_2,
                           *(long *)(*(long *)(param_1 + 0x1e) + 8) + (long)(int)param_1[0x23],
                           param_1[0x22]);
  if ((iVar1 < 0) ||
     (((int)param_2 == 0x16 &&
      (iVar2 = ssl3_finish_mac(param_1,*(long *)(*(long *)(param_1 + 0x1e) + 8) +
                                       (long)(int)param_1[0x23],iVar1), iVar2 == 0)))) {
    uVar3 = 0xffffffff;
  }
  else {
                    /* try { // try from 00ae3ef0 to 00be3f07 has its CatchHandler @ 00ae3f6c */
    if (param_1[0x22] - iVar1 == 0) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        uVar3 = 1;
      }
      else {
                    /* try { // try from 00ae3f08 to 00be3f7f has its CatchHandler @ 00ae3e9c */
        uVar3 = 1;
        (**(code **)(param_1 + 0x28))
                  (1,*param_1,param_2 & 0xffffffff,*(undefined8 *)(*(long *)(param_1 + 0x1e) + 8),
                   (long)(int)param_1[0x23] + (long)iVar1,param_1,*(undefined8 *)(param_1 + 0x2a));
      }
    }
    else {
      uVar3 = 0;
      param_1[0x22] = param_1[0x22] - iVar1;
      param_1[0x23] = param_1[0x23] + iVar1;
    }
  }
  return uVar3;
}

