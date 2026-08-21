
undefined8 FUN_015331f8(int *param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *this;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  uint local_34;
  
  plVar1 = (long *)(param_1 + 6);
  local_34 = param_2;
  uVar4 = v8::base::hash_value(param_2);
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar7 <= uVar4) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar4 / uVar7;
        }
        uVar9 = uVar4 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*plVar1 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar4) {
          if (*(uint *)(plVar10 + 2) == param_2) goto LAB_01533338;
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar7 - 1;
          }
          else if (uVar7 <= uVar11) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar3 * uVar7;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  this = *(Zone **)(param_1 + 0x1a);
  lVar6 = *(long *)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - lVar6) < 0x70) {
    lVar6 = v8::internal::Zone::NewExpand(this,0x70);
  }
  else {
    *(long *)(this + 0x10) = lVar6 + 0x70;
  }
  FUN_01532c68(lVar6,param_2,*(undefined8 *)(param_1 + 0x1a));
  if (*param_1 != -1) {
    *(int *)(lVar6 + 0xc) = *(int *)(&DAT_01a4aa70 + (long)*param_1 * 4) + param_1[3];
    iVar2 = param_1[2];
    *(int **)(lVar6 + 0x10) = param_1;
    *(int *)(lVar6 + 8) = iVar2 + 1;
  }
  plVar10 = (long *)FUN_015334e8(plVar1,&local_34);
  *plVar10 = lVar6;
LAB_01533338:
  puVar5 = (undefined8 *)FUN_015334e8(plVar1,&local_34);
  return *puVar5;
}

