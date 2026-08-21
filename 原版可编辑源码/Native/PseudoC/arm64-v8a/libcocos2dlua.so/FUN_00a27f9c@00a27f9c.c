
undefined8 FUN_00a27f9c(long *param_1,long param_2,long param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar2 = 1;
  }
  else {
    plVar5 = (long *)param_1[1];
                    /* try { // try from 00a27fdc to 00b2801b has its CatchHandler @ 00a280a0 */
    if (plVar5 == (long *)0x0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
LAB_00a27fe8:
      do {
        uVar1 = FUN_00a282e4(plVar5,&local_54);
        if (((uVar1 & 1) == 0) || (0x3ff < local_54)) {
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x10 & 1) == 0) goto LAB_00a2806c;
LAB_00a28034:
          if (0x3ff < local_54) goto LAB_00a2806c;
          uVar4 = (ulong)(long)(int)local_54 >> 3 & 0x1ffffffffffffff8;
                    /* try { // try from 00a2804c to 00b2805f has its CatchHandler @ 00a280a0 */
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_54 & 0x3fU);
                    /* try { // try from 00a28060 to 00b280bf has its CatchHandler @ 00a27f8c */
          uVar7 = local_54;
          if ((int)local_54 <= (int)uVar6) {
            uVar7 = uVar6;
          }
          if ((uVar1 >> 1 & 1) != 0) goto LAB_00a28084;
          goto LAB_00a280b8;
        }
        uVar4 = (ulong)(long)(int)local_54 >> 3 & 0x1ffffffffffffff8;
                    /* try { // try from 00a2801c to 00b2804b has its CatchHandler @ 00a27f8c */
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_54 & 0x3fU);
        uVar3 = local_54;
        if ((uVar1 >> 0x10 & 1) != 0) goto LAB_00a28034;
LAB_00a2806c:
        uVar7 = uVar3;
        if ((int)uVar3 <= (int)uVar6) {
          uVar7 = uVar6;
        }
        if (uVar3 == 0xffffffff) {
LAB_00a28290:
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) break;
          goto LAB_00a27fe8;
        }
        if ((uVar1 >> 1 & 1) == 0) {
LAB_00a280b8:
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x11 & 1) == 0) goto LAB_00a280f8;
LAB_00a280c0:
          if (0x3ff < local_50) goto LAB_00a280f8;
          uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_50 & 0x3fU);
          uVar8 = local_50;
          if ((int)local_50 <= (int)uVar7) {
            uVar8 = uVar7;
          }
          if ((uVar1 >> 2 & 1) != 0) goto LAB_00a28110;
          goto LAB_00a28144;
        }
LAB_00a28084:
        if (0x3ff < local_50) goto LAB_00a280b8;
        uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffff8;
                    /* catch() { ... } // from try @ 00a27fdc with catch @ 00a280a0
                       catch() { ... } // from try @ 00a2804c with catch @ 00a280a0 */
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_50 & 0x3fU);
        uVar3 = local_50;
        if ((uVar1 >> 0x11 & 1) != 0) goto LAB_00a280c0;
LAB_00a280f8:
        uVar8 = uVar3;
        if ((int)uVar3 <= (int)uVar7) {
          uVar8 = uVar7;
        }
        uVar6 = uVar7;
        if (uVar3 == 0xffffffff) goto LAB_00a28290;
        if ((uVar1 >> 2 & 1) == 0) {
LAB_00a28144:
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x12 & 1) == 0) goto LAB_00a28184;
LAB_00a2814c:
          if (0x3ff < local_4c) goto LAB_00a28184;
          uVar4 = (ulong)(long)(int)local_4c >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_4c & 0x3fU);
          uVar7 = local_4c;
          if ((int)local_4c <= (int)uVar8) {
            uVar7 = uVar8;
          }
          if ((uVar1 >> 3 & 1) != 0) goto LAB_00a2819c;
          goto LAB_00a281d0;
        }
LAB_00a28110:
        if (0x3ff < local_4c) goto LAB_00a28144;
        uVar4 = (ulong)(long)(int)local_4c >> 3 & 0x1ffffffffffffff8;
                    /* try { // try from 00a28138 to 00b28183 has its CatchHandler @ 00a28138
                       catch() { ... } // from try @ 00a28138 with catch @ 00a28138
                       catch() { ... } // from try @ 00a28188 with catch @ 00a28138 */
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_4c & 0x3fU);
        uVar3 = local_4c;
        if ((uVar1 >> 0x12 & 1) != 0) goto LAB_00a2814c;
LAB_00a28184:
                    /* try { // try from 00a28184 to 00b28187 has its CatchHandler @ 00a281bc */
                    /* try { // try from 00a28188 to 00b281cf has its CatchHandler @ 00a28138 */
        uVar7 = uVar3;
        if ((int)uVar3 <= (int)uVar8) {
          uVar7 = uVar8;
        }
        uVar6 = uVar8;
        if (uVar3 == 0xffffffff) goto LAB_00a28290;
        if ((uVar1 >> 3 & 1) == 0) {
LAB_00a281d0:
                    /* try { // try from 00a281d0 to 00b2835f has its CatchHandler @ 00a281d0
                       catch() { ... } // from try @ 00a281d0 with catch @ 00a281d0
                       catch() { ... } // from try @ 00a283e0 with catch @ 00a281d0 */
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x13 & 1) == 0) goto LAB_00a28210;
LAB_00a281d8:
          if (0x3ff < local_48) goto LAB_00a28210;
          uVar4 = (ulong)(long)(int)local_48 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_48 & 0x3fU);
          uVar8 = local_48;
          if ((int)local_48 <= (int)uVar7) {
            uVar8 = uVar7;
          }
          if ((uVar1 >> 4 & 1) != 0) goto LAB_00a28224;
          goto LAB_00a28258;
        }
LAB_00a2819c:
        if (0x3ff < local_48) goto LAB_00a281d0;
        uVar4 = (ulong)(long)(int)local_48 >> 3 & 0x1ffffffffffffff8;
                    /* catch() { ... } // from try @ 00a28184 with catch @ 00a281bc */
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_48 & 0x3fU);
        uVar3 = local_48;
        if ((uVar1 >> 0x13 & 1) != 0) goto LAB_00a281d8;
LAB_00a28210:
        uVar8 = uVar3;
        if ((int)uVar3 <= (int)uVar7) {
          uVar8 = uVar7;
        }
        uVar6 = uVar7;
        if (uVar3 == 0xffffffff) goto LAB_00a28290;
        if ((uVar1 >> 4 & 1) == 0) {
LAB_00a28258:
          uVar3 = 0xffffffff;
        }
        else {
LAB_00a28224:
          if (0x3ff < local_44) goto LAB_00a28258;
          uVar4 = (ulong)(long)(int)local_44 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_2 + uVar4) =
               *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_44 & 0x3fU);
          uVar3 = local_44;
        }
        if (((uVar1 >> 0x14 & 1) != 0) && (local_44 < 0x400)) {
          uVar4 = (ulong)(long)(int)local_44 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_44 & 0x3fU);
          uVar6 = local_44;
          if ((int)local_44 <= (int)uVar8) {
            uVar6 = uVar8;
          }
          goto LAB_00a28290;
        }
        uVar1 = uVar3;
        if ((int)uVar3 <= (int)uVar8) {
          uVar1 = uVar8;
        }
        uVar6 = uVar8;
        if (uVar3 != 0xffffffff) {
          uVar6 = uVar1;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    uVar2 = 0;
    *param_5 = uVar6;
  }
  return uVar2;
}

