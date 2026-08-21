
undefined8 FUN_00136a04(ulong *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar10 = *param_2;
  uVar4 = param_1[1];
  lVar9 = *param_3;
  if (uVar4 != 0) {
    uVar5 = uVar10;
    if (uVar4 <= uVar10) {
      uVar5 = uVar4;
    }
    if (lVar9 != 0) {
      cVar2 = (char)param_1[2];
      if (cVar2 != '\0') {
        uVar6 = 0;
        if ((uVar5 & 0xfffffffffffffff8) != 0) {
          do {
            uVar11 = *(undefined8 *)(lVar9 + uVar6);
            *(ulong *)(lVar9 + uVar6) =
                 CONCAT17((char)((ulong)uVar11 >> 0x38) + cVar2,
                          CONCAT16((char)((ulong)uVar11 >> 0x30) + cVar2,
                                   CONCAT15((char)((ulong)uVar11 >> 0x28) + cVar2,
                                            CONCAT14((char)((ulong)uVar11 >> 0x20) + cVar2,
                                                     CONCAT13((char)((ulong)uVar11 >> 0x18) + cVar2,
                                                              CONCAT12((char)((ulong)uVar11 >> 0x10)
                                                                       + cVar2,CONCAT11((char)((
                                                  ulong)uVar11 >> 8) + cVar2,(char)uVar11 + cVar2)))
                                                  ))));
            uVar6 = uVar6 + 8;
          } while (uVar6 < (uVar5 & 0xfffffffffffffff8));
        }
        if (uVar6 < uVar5) {
          lVar8 = uVar5 - uVar6;
          pcVar7 = (char *)(lVar9 + uVar6);
          do {
            lVar8 = lVar8 + -1;
            *pcVar7 = *pcVar7 + cVar2;
            pcVar7 = pcVar7 + 1;
          } while (lVar8 != 0);
        }
      }
      lVar9 = lVar9 + uVar5;
    }
    uVar10 = uVar10 - uVar5;
    param_1[1] = uVar4 - uVar5;
  }
  uVar4 = *param_1;
  do {
    if ((uVar4 == 0) || (uVar10 == 0)) {
      *param_2 = uVar10;
      *param_3 = lVar9;
      return 1;
    }
    uVar5 = param_1[0xd];
    uVar6 = param_1[0xe];
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    uVar1 = uVar10;
    if (uVar4 <= uVar10) {
      uVar1 = uVar4;
    }
    if (uVar6 - uVar5 < uVar1) {
      iVar3 = FUN_00135af4(param_1 + 9);
      if (iVar3 == 0) {
        uVar5 = param_1[0xd];
LAB_00136b58:
        param_1[0xd] = uVar5 + uVar1;
        return 0;
      }
      uVar5 = param_1[0xd];
      if (param_1[0xe] - uVar5 < uVar1) goto LAB_00136b58;
    }
    param_1[0xd] = uVar5 + uVar1;
    if (param_1[0xc] == 0) {
      return 0;
    }
    if (lVar9 != 0) {
      FUN_00135904(lVar9,param_1[0xc] + uVar5,uVar1);
      lVar9 = lVar9 + uVar1;
    }
    uVar10 = uVar10 - uVar1;
    uVar4 = *param_1 - uVar1;
    *param_1 = uVar4;
  } while( true );
}

