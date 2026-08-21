
undefined4 ssl3_do_write(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* try { // try from 00ad4fec to 00bd4ffb has its CatchHandler @ 00ad5040 */
                    /* try { // try from 00ad4ffc to 00bd5053 has its CatchHandler @ 00ad4f70 */
  iVar1 = ssl3_write_bytes(param_1,param_2,
                           *(long *)(*(long *)(param_1 + 0x1e) + 8) + (long)(int)param_1[0x23],
                           param_1[0x22]);
                    /* catch() { ... } // from try @ 00ad4fc0 with catch @ 00ad5028 */
  if ((iVar1 < 0) ||
     (((int)param_2 == 0x16 &&
      (iVar2 = ssl3_finish_mac(param_1,*(long *)(*(long *)(param_1 + 0x1e) + 8) +
                                       (long)(int)param_1[0x23],iVar1), iVar2 == 0)))) {
    uVar3 = 0xffffffff;
  }
  else {
                    /* catch() { ... } // from try @ 00ad4fb0 with catch @ 00ad5038 */
                    /* catch() { ... } // from try @ 00ad4f98 with catch @ 00ad503c */
    if (param_1[0x22] - iVar1 == 0) {
                    /* catch() { ... } // from try @ 00ad4fec with catch @ 00ad5040 */
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
                    /* try { // try from 00ad5094 to 00bd509b has its CatchHandler @ 00ad50e8 */
        uVar3 = 1;
      }
      else {
                    /* try { // try from 00ad5054 to 00bd5093 has its CatchHandler @ 00ad5054
                       catch() { ... } // from try @ 00ad5054 with catch @ 00ad5054
                       catch() { ... } // from try @ 00ad509c with catch @ 00ad5054 */
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
                    /* try { // try from 00ad509c to 00bd511f has its CatchHandler @ 00ad5054 */
  return uVar3;
}

