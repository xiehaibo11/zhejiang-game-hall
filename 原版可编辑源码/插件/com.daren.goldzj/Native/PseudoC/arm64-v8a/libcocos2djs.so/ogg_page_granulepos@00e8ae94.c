
void ogg_page_granulepos(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 local_20 [8];
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0xffffffffffffffff;
LAB_00e8af78:
    if (*(long *)(lVar1 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    return;
  }
  lVar6 = param_1[2];
  lVar3 = 0;
  lVar4 = 0;
  lVar5 = 6;
  lVar7 = *(long *)*param_1 + param_1[1];
  if (6 < lVar6) goto LAB_00e8af24;
  do {
    lVar7 = param_1[2];
    do {
      param_1 = (undefined8 *)param_1[3];
      lVar3 = lVar3 + lVar7;
      lVar7 = param_1[2];
      lVar6 = lVar7 + lVar3;
    } while (lVar6 <= lVar5);
    lVar7 = *(long *)*param_1 + param_1[1];
LAB_00e8af24:
    do {
      if (lVar4 == 7) {
        uVar2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                                (lVar7 + (0xd - 
                                                  lVar3)),local_20[6]),local_20[5]),local_20[4]),
                                                  local_20[3]),local_20[2]),local_20[1]),local_20[0]
                        );
        goto LAB_00e8af78;
      }
      lVar8 = lVar5 - lVar3;
      lVar5 = lVar5 + 1;
      local_20[lVar4] = *(undefined1 *)(lVar7 + lVar8);
      lVar4 = lVar4 + 1;
    } while (lVar5 < lVar6);
  } while( true );
}

