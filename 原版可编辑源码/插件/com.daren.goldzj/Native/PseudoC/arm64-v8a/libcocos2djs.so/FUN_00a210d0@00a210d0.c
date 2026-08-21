
int FUN_00a210d0(long *param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  void *__src;
  long lVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_68;
  
  __src = (void *)*param_1;
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 0x260);
                    /* try { // try from 00a2110c to 00b21113 has its CatchHandler @ 00a211c4 */
  lVar7 = *(long *)(*param_2 + 0x218);
  uVar8 = param_1[2];
                    /* try { // try from 00a21118 to 00b2111f has its CatchHandler @ 00a211e4 */
                    /* try { // try from 00a21120 to 00b2112f has its CatchHandler @ 00a211e0 */
  sVar6 = uVar8;
  if ((((*(byte *)(param_2[0x80] + 0x7c) & 1) != 0) || ((int)param_2[0x30] == 2)) &&
     ((int)param_2[0x47] != 0x14)) {
                    /* try { // try from 00a21148 to 00b2117f has its CatchHandler @ 00a211c8 */
    if (0x3fff < uVar8) {
      sVar6 = 0x4000;
    }
    memcpy((void *)(*param_2 + 0x4b09),__src,sVar6);
    __src = (void *)(*param_2 + 0x4b09);
  }
                    /* try { // try from 00a21180 to 00b211ff has its CatchHandler @ 00a21000 */
  iVar3 = FUN_00a232e8(param_2,uVar2,__src,sVar6,&local_68);
  if (iVar3 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21120 with catch @ 00a211e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21118 with catch @ 00a211e4
                        */
    uVar1 = uVar8 - param_4;
    if (local_68 <= uVar8 - param_4) {
      uVar1 = local_68;
    }
    lVar5 = local_68 - uVar1;
    if ((*(char *)(*param_2 + 0x628) != '\0') &&
       (FUN_00a22e78(*param_2,2,__src,uVar1,param_2), lVar5 != 0)) {
      FUN_00a22e78(*param_2,4,(long)__src + uVar1,lVar5,param_2);
    }
    *param_3 = *param_3 + local_68;
    if (lVar7 == 0) {
      if (uVar8 != local_68) {
        return 0x37;
      }
      FUN_00a173a8(param_2);
    }
    else {
      *(long *)(lVar7 + 0x30) = *(long *)(lVar7 + 0x30) + lVar5;
      if (uVar8 - local_68 != 0) {
        lVar5 = *param_2;
        lVar4 = *param_1;
                    /* try { // try from 00a21274 to 00b21373 has its CatchHandler @ 00a21274
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21274 with catch @ 00a21274
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21390 with catch @ 00a21274
                        */
        uVar10 = *(undefined8 *)(lVar5 + 0x8d18);
        uVar9 = *(undefined8 *)(lVar5 + 0x8d10);
        *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar7 + 0x10);
        *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar7 + 8);
        *(undefined8 *)(lVar7 + 0x60) = uVar10;
        *(undefined8 *)(lVar7 + 0x58) = uVar9;
        *(code **)(lVar5 + 0x8d10) = FUN_00a212bc;
        *(long **)(lVar5 + 0x8d18) = param_2;
        *(ulong *)(lVar7 + 8) = uVar8 - local_68;
        *(ulong *)(lVar7 + 0x10) = lVar4 + local_68;
        *(long **)(lVar7 + 0x80) = param_1;
        *(undefined4 *)(lVar7 + 0x78) = 1;
        return 0;
      }
      *(undefined4 *)(lVar7 + 0x78) = 2;
    }
  }
  (*(code *)PTR_free_01d1b748)(*param_1);
  (*(code *)PTR_free_01d1b748)(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a2110c with catch @ 00a211c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21148 with catch @ 00a211c8
                        */
  return iVar3;
}

