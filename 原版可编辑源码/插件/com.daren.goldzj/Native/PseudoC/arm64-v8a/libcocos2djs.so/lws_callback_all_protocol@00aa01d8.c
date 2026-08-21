
undefined8 lws_callback_all_protocol(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = (int)*(short *)(param_1 + 0xca6);
  if (*(short *)(param_1 + 0xca6) != 0) {
    plVar4 = (long *)(param_1 + 0xe0);
    do {
      uVar2 = *(uint *)(plVar4 + 0xdd);
      iVar3 = iVar3 + -1;
                    /* try { // try from 00aa0210 to 00ba0217 has its CatchHandler @ 00aa0400 */
      if (uVar2 != 0) {
        lVar5 = 0;
                    /* try { // try from 00aa0218 to 00ba021f has its CatchHandler @ 00aa041c */
        uVar6 = 0;
        do {
          while ((lVar1 = *(long *)(*(long *)(param_1 + 0x828) + (long)*(int *)(*plVar4 + lVar5) * 8
                                   ), lVar1 != 0 && (*(long *)(lVar1 + 0x248) == param_2))) {
                    /* try { // try from 00aa0258 to 00ba025f has its CatchHandler @ 00aa0420 */
            (**(code **)(param_2 + 8))(lVar1,param_3,*(undefined8 *)(lVar1 + 0x270),0,0);
            uVar2 = *(uint *)(plVar4 + 0xdd);
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 8;
            if (uVar2 <= uVar6) goto LAB_00aa027c;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
        } while (uVar6 < uVar2);
      }
LAB_00aa027c:
      plVar4 = plVar4 + 0xdf;
    } while (iVar3 != 0);
  }
  return 0;
}

