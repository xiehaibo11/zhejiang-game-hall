
long FUN_0088399c(long *param_1,long *param_2)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_2 + 2);
  uVar7 = param_2[3];
  pvVar1 = (void *)param_2[4];
  if ((bVar2 & 1) == 0) {
    pvVar1 = (void *)((long)param_2 + 0x11);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  lVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_40,pvVar1,uVar7);
  param_2[1] = lVar4;
  plVar5 = (long *)FUN_00883b20(param_1,lVar4,param_2 + 2);
  uVar6 = param_1[1];
  uVar7 = param_2[1];
  uVar11 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar6 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar6))))))
                            ));
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar8 < 2) {
    uVar7 = uVar6 - 1 & uVar7;
  }
  else if (uVar6 <= uVar7) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar7 / uVar6;
    }
    uVar7 = uVar7 - uVar9 * uVar6;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar7 * 8) = plVar5;
    if (*param_2 != 0) {
      uVar7 = *(ulong *)(*param_2 + 8);
      if (uVar8 < 2) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar8 * uVar6;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    if (*param_2 != 0) {
      uVar9 = *(ulong *)(*param_2 + 8);
      if (uVar8 < 2) {
        uVar9 = uVar9 & uVar6 - 1;
      }
      else if (uVar6 <= uVar9) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar9 / uVar6;
        }
        uVar9 = uVar9 - uVar8 * uVar6;
      }
      if (uVar9 != uVar7) {
        *(long **)(*param_1 + uVar9 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)param_2;
}

