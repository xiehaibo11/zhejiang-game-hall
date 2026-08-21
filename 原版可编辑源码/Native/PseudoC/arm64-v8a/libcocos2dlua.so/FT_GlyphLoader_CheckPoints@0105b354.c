
int FT_GlyphLoader_CheckPoints(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  short sVar5;
  bool bVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  
                    /* try { // try from 0105b358 to 0115b35f has its CatchHandler @ 0105b414 */
                    /* try { // try from 0105b360 to 0115b42f has its CatchHandler @ 0105b328 */
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar2;
  lVar8 = *param_1;
  uVar1 = *(short *)((long)param_1 + 0x1a) + param_2 + (int)*(short *)((long)param_1 + 0x62);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 + 7;
    if (uVar1 >> 0xf != 0) {
      return 10;
    }
    pvVar12 = (void *)param_1[4];
    uVar1 = uVar1 & 0xfffffff8;
    uVar10 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (pvVar12 == (void *)0x0) {
LAB_0105b538:
        iVar11 = 0;
        goto joined_r0x0105b540;
      }
      (**(code **)(lVar8 + 0x10))(lVar8,pvVar12);
      iVar11 = 0;
      pvVar12 = (void *)0x0;
LAB_0105b544:
      param_1[4] = (long)pvVar12;
      if (iVar11 == 0) {
        pvVar12 = (void *)param_1[5];
        if (uVar1 == 0) goto LAB_0105b40c;
LAB_0105b554:
        if (uVar2 == 0) {
          pvVar7 = (void *)(**(code **)(lVar8 + 8))(lVar8,uVar10);
                    /* try { // try from 0105b5e4 to 0115b677 has its CatchHandler @ 0105b430 */
          if (pvVar7 == (void *)0x0) {
            param_1[5] = 0;
            goto LAB_0105b7b8;
          }
          memset(pvVar7,0,uVar10);
          goto LAB_0105b5fc;
        }
        pvVar7 = (void *)(**(code **)(lVar8 + 0x18))(lVar8,uVar9,uVar10,pvVar12);
        iVar11 = (uint)(pvVar7 == (void *)0x0) << 6;
        if (pvVar7 != (void *)0x0) {
          pvVar12 = pvVar7;
        }
joined_r0x0105b584:
        if ((uVar2 < uVar1) && (iVar11 == 0)) {
          memset((void *)((long)pvVar12 + uVar9),0,uVar10 - uVar9);
          param_1[5] = (long)pvVar12;
          cVar3 = *(char *)((long)param_1 + 0x14);
        }
        else {
          param_1[5] = (long)pvVar12;
          if (iVar11 != 0) goto LAB_0105b7bc;
          cVar3 = *(char *)((long)param_1 + 0x14);
        }
        if (cVar3 != '\0') {
          pvVar12 = (void *)param_1[8];
          uVar4 = uVar1 * 2;
          uVar13 = (ulong)uVar4;
          uVar2 = uVar2 << 1;
          uVar14 = (ulong)uVar2;
          if (uVar4 == 0) {
            if (pvVar12 == (void *)0x0) goto LAB_0105b744;
                    /* try { // try from 0105b6f8 to 0115b707 has its CatchHandler @ 0105b720 */
            (**(code **)(lVar8 + 0x10))(lVar8,pvVar12);
            iVar11 = 0;
            pvVar12 = (void *)0x0;
LAB_0105b770:
            param_1[8] = (long)pvVar12;
            if (iVar11 != 0) goto LAB_0105b7bc;
          }
          else {
            if (uVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105b6f8 with catch @ 0105b720
                        */
              pvVar12 = (void *)(**(code **)(lVar8 + 8))(lVar8,uVar13 << 4);
              if (pvVar12 == (void *)0x0) {
                param_1[8] = 0;
                goto LAB_0105b7b8;
              }
                    /* try { // try from 0105b734 to 0115b85f has its CatchHandler @ 0105b734
                       catch() { ... } // from try @ 0105b734 with catch @ 0105b734
                       catch() { ... } // from try @ 0105b880 with catch @ 0105b734 */
              memset(pvVar12,0,uVar13 << 4);
LAB_0105b744:
              iVar11 = 0;
            }
            else {
                    /* catch() { ... } // from try @ 0105b5b8 with catch @ 0105b640 */
              pvVar7 = (void *)(**(code **)(lVar8 + 0x18))(lVar8,uVar14 << 4,uVar13 << 4,pvVar12);
              iVar11 = (uint)(pvVar7 == (void *)0x0) << 6;
              if (pvVar7 != (void *)0x0) {
                pvVar12 = pvVar7;
              }
            }
            if ((uVar4 <= uVar2) || (iVar11 != 0)) goto LAB_0105b770;
            memset((void *)((long)pvVar12 + uVar14 * 0x10),0,(uVar13 - uVar14) * 0x10);
            param_1[8] = (long)pvVar12;
          }
          memmove((void *)((long)pvVar12 + uVar10 * 0x10),(void *)((long)pvVar12 + uVar9 * 0x10),
                  uVar9 * 0x10);
          param_1[9] = param_1[8] + uVar10 * 0x10;
        }
        bVar6 = true;
        *(uint *)(param_1 + 1) = uVar1;
        goto LAB_0105b438;
      }
    }
    else {
      if (uVar2 != 0) {
        pvVar7 = (void *)(**(code **)(lVar8 + 0x18))(lVar8,uVar9 << 4,uVar10 << 4,pvVar12);
        iVar11 = (uint)(pvVar7 == (void *)0x0) << 6;
        if (pvVar7 != (void *)0x0) {
          pvVar12 = pvVar7;
        }
joined_r0x0105b540:
        if ((uVar1 <= uVar2) || (iVar11 != 0)) goto LAB_0105b544;
        memset((void *)((long)pvVar12 + uVar9 * 0x10),0,(uVar10 - uVar9) * 0x10);
        param_1[4] = (long)pvVar12;
        pvVar12 = (void *)param_1[5];
        if (uVar1 != 0) goto LAB_0105b554;
LAB_0105b40c:
        pvVar7 = (void *)0x0;
        if (pvVar12 == (void *)0x0) {
LAB_0105b5fc:
          iVar11 = 0;
          pvVar12 = pvVar7;
        }
        else {
                    /* catch() { ... } // from try @ 0105b358 with catch @ 0105b414 */
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar12);
          iVar11 = 0;
          pvVar12 = (void *)0x0;
        }
        goto joined_r0x0105b584;
      }
      pvVar12 = (void *)(**(code **)(lVar8 + 8))(lVar8,uVar10 << 4);
      if (pvVar12 != (void *)0x0) {
        memset(pvVar12,0,uVar10 << 4);
        goto LAB_0105b538;
      }
      param_1[4] = 0;
LAB_0105b7b8:
      iVar11 = 0x40;
    }
LAB_0105b7bc:
    lVar8 = *param_1;
    if (param_1[4] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[5] = 0;
    if (param_1[6] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[6] = 0;
    if (param_1[8] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[8] = 0;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    memcpy(param_1 + 0xc,param_1 + 3,0x48);
  }
  else {
    bVar6 = false;
LAB_0105b438:
    sVar5 = (short)param_1[3];
    uVar2 = *(uint *)((long)param_1 + 0xc);
    uVar9 = (ulong)uVar2;
    uVar1 = sVar5 + param_3 + (int)(short)param_1[0xc];
    if (uVar2 < uVar1) {
      uVar1 = uVar1 + 3;
      if (uVar1 >> 0xf != 0) {
        return 10;
      }
      pvVar12 = (void *)param_1[6];
      uVar1 = uVar1 & 0xfffffffc;
      uVar10 = (ulong)uVar1;
      if (uVar1 == 0) {
        if (pvVar12 != (void *)0x0) {
                    /* try { // try from 0105b5b8 to 0115b5e3 has its CatchHandler @ 0105b640 */
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar12);
        }
        iVar11 = 0;
        pvVar12 = (void *)0x0;
LAB_0105b698:
        param_1[6] = (long)pvVar12;
        if (iVar11 != 0) goto LAB_0105b7bc;
      }
      else {
        if (uVar2 == 0) {
          pvVar12 = (void *)(**(code **)(lVar8 + 8))(lVar8,uVar10 << 1);
          if (pvVar12 == (void *)0x0) {
            param_1[6] = 0;
            goto LAB_0105b7b8;
          }
          memset(pvVar12,0,uVar10 << 1);
          iVar11 = 0;
          if (uVar1 != 0) goto LAB_0105b4bc;
          goto LAB_0105b698;
        }
        pvVar7 = (void *)(**(code **)(lVar8 + 0x18))(lVar8,uVar9 << 1,uVar10 << 1,pvVar12);
        iVar11 = (uint)(pvVar7 == (void *)0x0) << 6;
        if (pvVar7 != (void *)0x0) {
          pvVar12 = pvVar7;
        }
        if (uVar1 <= uVar2) goto LAB_0105b698;
LAB_0105b4bc:
        if (iVar11 != 0) goto LAB_0105b698;
        memset((void *)((long)pvVar12 + uVar9 * 2),0,(uVar10 - uVar9) * 2);
        param_1[6] = (long)pvVar12;
      }
      sVar5 = (short)param_1[3];
      *(uint *)((long)param_1 + 0xc) = uVar1;
    }
    else {
      if (!bVar6) {
        return 0;
      }
      pvVar12 = (void *)param_1[6];
    }
    lVar8 = (long)*(short *)((long)param_1 + 0x1a);
    iVar11 = 0;
    param_1[0xd] = param_1[4] + lVar8 * 0x10;
    param_1[0xe] = param_1[5] + lVar8;
    param_1[0xf] = (long)((long)pvVar12 + (long)sVar5 * 2);
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      param_1[0x11] = param_1[8] + lVar8 * 0x10;
      param_1[0x12] = param_1[9] + lVar8 * 0x10;
    }
  }
                    /* try { // try from 0105b860 to 0115b87f has its CatchHandler @ 0105b964 */
  return iVar11;
}

