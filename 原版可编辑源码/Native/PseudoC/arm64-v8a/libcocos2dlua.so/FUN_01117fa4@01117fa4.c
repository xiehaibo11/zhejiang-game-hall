
undefined8 FUN_01117fa4(long param_1,long param_2,int *param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  void *__src;
  uint uVar5;
  ulong uVar6;
  ulong local_58;
  uint local_44;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117f94 with catch @ 01117fa4
                        */
                    /* catch() { ... } // from try @ 01117fd8 with catch @ 01117fa8 */
                    /* try { // try from 01117fd0 to 01217fd7 has its CatchHandler @ 0111801c */
                    /* try { // try from 01117fd8 to 01218037 has its CatchHandler @ 01117fa8 */
  iVar3 = TIFFDataWidth(*(undefined2 *)(param_2 + 2));
  if ((iVar3 == 0) || (uVar6 = *(ulong *)(param_2 + 8), uVar6 == 0)) {
    *param_5 = 0;
    return 0;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = 0x7fffffff / iVar3;
  }
  if ((ulong)(long)iVar2 < uVar6) {
                    /* catch() { ... } // from try @ 01117fd0 with catch @ 0111801c */
    return 6;
  }
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = 0x7fffffff / param_4;
  }
  if (uVar5 < uVar6) {
    return 6;
  }
                    /* try { // try from 01118038 to 0121807f has its CatchHandler @ 01118038
                       catch(type#1 @ 00000000) { ... } // from try @ 01118038 with catch @ 01118038
                       catch(type#1 @ 00000000) { ... } // from try @ 01118088 with catch @ 01118038
                       catch(type#1 @ 00000000) { ... } // from try @ 0111811c with catch @ 01118038
                       catch(type#1 @ 00000000) { ... } // from try @ 01118164 with catch @ 01118038
                        */
  *param_3 = (int)uVar6;
  __ptr = (void *)_TIFFCheckMalloc(param_1,uVar6 & 0xffffffff,(long)iVar3,"ReadDirEntryArray");
  if (__ptr == (void *)0x0) {
    return 7;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar1 = iVar3 * (int)uVar6;
  if ((uVar5 >> 0x13 & 1) == 0) {
    if (4 < uVar1) {
      local_44 = *(uint *)(param_2 + 0x10);
      if ((uVar5 >> 7 & 1) != 0) {
                    /* try { // try from 01118080 to 01218087 has its CatchHandler @ 01118158 */
        TIFFSwabLong(&local_44);
                    /* try { // try from 01118088 to 012180d7 has its CatchHandler @ 01118038 */
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar6 = (ulong)local_44;
      if ((uVar5 >> 0xb & 1) == 0) {
LAB_011180fc:
                    /* try { // try from 01118100 to 0121811b has its CatchHandler @ 0111816c */
        uVar4 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar6,0);
                    /* try { // try from 0111811c to 0121815b has its CatchHandler @ 01118038 */
        if ((uVar4 != uVar6) ||
           (uVar6 = (**(code **)(param_1 + 0x3c0))
                              (*(undefined8 *)(param_1 + 0x3b8),__ptr,(ulong)uVar1), uVar6 != uVar1)
           ) {
LAB_01118154:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118080 with catch @ 01118158
                        */
          _TIFFfree(__ptr);
          return 3;
                    /* try { // try from 0111815c to 01218163 has its CatchHandler @ 01118168 */
        }
        goto LAB_011180cc;
      }
      if (*(ulong *)(param_1 + 0x3a0) < uVar6 + uVar1) goto LAB_01118154;
      goto LAB_01118164;
    }
LAB_011180bc:
    __src = (void *)(param_2 + 0x10);
  }
  else {
    if (uVar1 < 9) goto LAB_011180bc;
                    /* try { // try from 011180d8 to 012180f7 has its CatchHandler @ 01118170 */
    local_58 = *(ulong *)(param_2 + 0x10);
    if ((uVar5 >> 7 & 1) != 0) {
      TIFFSwabLong8(&local_58);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    uVar4 = (ulong)uVar1;
    uVar6 = local_58;
    if ((uVar5 >> 0xb & 1) == 0) goto LAB_011180fc;
    if (((CARRY8(local_58,uVar4)) || (local_58 + uVar4 < uVar4)) ||
       (*(ulong *)(param_1 + 0x3a0) < local_58 + uVar4)) goto LAB_01118154;
LAB_01118164:
                    /* try { // try from 01118164 to 01218183 has its CatchHandler @ 01118038 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111815c with catch @ 01118168
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118100 with catch @ 0111816c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011180d8 with catch @ 01118170
                        */
    __src = (void *)(*(long *)(param_1 + 0x398) + uVar6);
  }
  _TIFFmemcpy(__ptr,__src,(ulong)uVar1);
LAB_011180cc:
  *param_5 = __ptr;
  return 0;
}

