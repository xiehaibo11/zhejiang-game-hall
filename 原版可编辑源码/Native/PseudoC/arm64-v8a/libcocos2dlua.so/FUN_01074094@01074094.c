
long FUN_01074094(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int local_54;
  
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  local_54 = 0;
  lVar6 = ft_mem_realloc(uVar11,2,0,param_2,0,&local_54);
  if (local_54 == 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if (param_2 <= uVar12) {
          return lVar6;
        }
        uVar5 = FT_Stream_GetChar(param_1);
        if ((uVar5 >> 7 & 1) != 0) break;
        uVar9 = uVar5 & 0x3f;
        lVar1 = lVar6 + uVar12 * 2;
        lVar13 = 0;
        if (((uVar5 & 0xff) >> 6 & 1) == 0) {
          do {
            cVar3 = FT_Stream_GetChar(param_1);
            *(short *)(lVar1 + lVar13 * 2) = (short)cVar3;
            lVar7 = lVar13 + 1;
            if (param_2 <= uVar12 + lVar13 + 1) break;
            uVar5 = (uint)lVar13;
            lVar13 = lVar7;
          } while (uVar5 < uVar9);
        }
        else {
          do {
            uVar4 = FT_Stream_GetUShort(param_1);
            lVar7 = lVar13 + 1;
            *(undefined2 *)(lVar1 + lVar13 * 2) = uVar4;
            if (param_2 <= uVar12 + lVar13 + 1) break;
            uVar5 = (uint)lVar13;
            lVar13 = lVar7;
          } while (uVar5 < uVar9);
        }
        uVar12 = uVar12 + lVar7;
        if ((uint)lVar7 <= uVar9) goto LAB_01074204;
      }
      uVar8 = (ulong)~(uVar5 & 0xff) | 0xffffffffffffffc0;
      uVar2 = uVar12 - param_2;
      if (uVar12 - param_2 <= uVar8) {
        uVar2 = uVar8;
      }
      memset((void *)(lVar6 + uVar12 * 2),0,uVar2 * -2);
      uVar8 = 0;
      if (-uVar2 < 2) {
LAB_010741dc:
        uVar8 = uVar8 & 0xffffffff;
        do {
          uVar12 = uVar12 + 1;
          uVar9 = (uint)uVar8;
          uVar8 = (ulong)(uVar9 + 1);
          if (param_2 <= uVar12) break;
        } while (uVar9 < (uVar5 & 0x3f));
      }
      else {
        uVar8 = -uVar2 - (uVar2 & 1);
        if (uVar8 == 0) goto LAB_010741dc;
        uVar12 = uVar12 + uVar8;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
        if ((uVar2 & 1) != 0) goto LAB_010741dc;
      }
    } while ((uVar5 & 0x3f) < (uint)uVar8);
LAB_01074204:
    ft_mem_free(uVar11,lVar6);
  }
  return 0;
}

