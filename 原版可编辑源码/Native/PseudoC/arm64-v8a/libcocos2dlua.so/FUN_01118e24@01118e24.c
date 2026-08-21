
undefined8 FUN_01118e24(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  uint *puVar3;
  long lVar4;
  uint *local_58;
  uint local_44;
  
  uVar1 = 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118d50 with catch @ 01118e58
                        */
  if ((*(ushort *)(param_2 + 2) < 0x13) &&
     ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x52010U) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118db4 with catch @ 01118e74
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118da4 with catch @ 01118e78
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118d94 with catch @ 01118e7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118dc4 with catch @ 01118e80
                        */
                    /* try { // try from 01118e84 to 01218e8b has its CatchHandler @ 01118e94 */
    uVar1 = FUN_01117fa4(param_1,param_2,&local_44,8,&local_58);
                    /* try { // try from 01118e8c to 01218e97 has its CatchHandler @ 01118ce8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118e84 with catch @ 01118e94
                        */
    if (((int)uVar1 == 0) && (local_58 != (uint *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118ef8 with catch @ 01118e98
                       catch(type#1 @ 00000000) { ... } // from try @ 01118f68 with catch @ 01118e98
                       catch(type#1 @ 00000000) { ... } // from try @ 01118fec with catch @ 01118e98
                        */
      if ((*(ushort *)(param_2 + 2) | 2) == 0x12) {
        *param_3 = local_58;
        if (*(char *)(param_1 + 0x10) < '\0') {
                    /* try { // try from 01118f34 to 01218f3f has its CatchHandler @ 01118fdc */
          TIFFSwabArrayOfLong8(local_58,local_44);
          uVar1 = 0;
                    /* try { // try from 01118f40 to 01218f67 has its CatchHandler @ 01118fe0 */
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        pvVar2 = _TIFFmalloc((ulong)(local_44 << 3));
        if (pvVar2 == (void *)0x0) {
          _TIFFfree(local_58);
          uVar1 = 7;
        }
        else {
          if (((*(short *)(param_2 + 2) == 0xd) || (*(short *)(param_2 + 2) == 4)) &&
             (local_44 != 0)) {
                    /* try { // try from 01118ef0 to 01218ef7 has its CatchHandler @ 01118fc0 */
            lVar4 = 0;
            puVar3 = local_58;
            do {
                    /* try { // try from 01118ef8 to 01218f33 has its CatchHandler @ 01118e98 */
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar3);
              }
              *(ulong *)((long)pvVar2 + lVar4 * 8) = (ulong)*puVar3;
              lVar4 = lVar4 + 1;
              puVar3 = puVar3 + 1;
            } while ((uint)lVar4 < local_44);
          }
          _TIFFfree(local_58);
          uVar1 = 0;
          *param_3 = pvVar2;
        }
      }
    }
    else {
      *param_3 = 0;
    }
  }
                    /* try { // try from 01118f68 to 01218fe3 has its CatchHandler @ 01118e98 */
  return uVar1;
}

