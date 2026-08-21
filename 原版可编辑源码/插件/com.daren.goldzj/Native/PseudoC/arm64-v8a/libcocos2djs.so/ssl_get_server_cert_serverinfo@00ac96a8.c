
undefined8 ssl_get_server_cert_serverinfo(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  *param_3 = 0;
  lVar3 = *(long *)(param_1 + 0x148);
  uVar1 = ssl_cipher_get_cert_index(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228));
                    /* try { // try from 00ac96dc to 00bc972b has its CatchHandler @ 00ac96dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac96dc with catch @ 00ac96dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac9758 with catch @ 00ac96dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac9874 with catch @ 00ac96dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac9984 with catch @ 00ac96dc
                        */
  if (uVar1 == 0xffffffff) {
LAB_00ac9760:
    ERR_put_error(0x14,0x142,0x44,"ssl/ssl_lib.c",0xad0);
  }
  else {
    if (uVar1 == 8) {
      lVar2 = *(long *)(param_1 + 0x148);
      if (*(long *)(lVar2 + 0x110) == 0) {
        if (*(long *)(lVar2 + 0xe8) == 0) {
          if (*(long *)(lVar2 + 0xc0) == 0) goto LAB_00ac9760;
                    /* try { // try from 00ac972c to 00bc9733 has its CatchHandler @ 00ac9908 */
          uVar1 = 4;
        }
        else {
          uVar1 = 5;
        }
      }
      else {
        uVar1 = 6;
      }
    }
    else if (uVar1 == 0) {
      uVar1 = (uint)(*(long *)(*(long *)(param_1 + 0x148) + 0x20) == 0);
    }
    lVar2 = *(long *)(lVar3 + (long)(int)uVar1 * 0x28 + 0x38);
    if (lVar2 != 0) {
      *param_2 = lVar2;
                    /* try { // try from 00ac974c to 00bc9757 has its CatchHandler @ 00ac98cc */
                    /* try { // try from 00ac9758 to 00bc9783 has its CatchHandler @ 00ac96dc */
      *param_3 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x28 + 0x40);
      return 1;
    }
  }
                    /* try { // try from 00ac9784 to 00bc978f has its CatchHandler @ 00ac98c4 */
  return 0;
}

