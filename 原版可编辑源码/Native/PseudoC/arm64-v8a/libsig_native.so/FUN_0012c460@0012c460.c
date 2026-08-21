
undefined1  [16] FUN_0012c460(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined1 auStack_e00 [960];
  undefined1 auStack_a40 [784];
  undefined8 local_730;
  undefined8 local_728;
  long local_700;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  FUN_0012c094(auStack_e00,&stack0x00000000);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    iVar2 = FUN_0012b4b0(auStack_a40,auStack_680);
    if ((iVar2 == 5) || (iVar2 != 0)) goto LAB_0012c598;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar3 = FUN_0012ae74(auStack_a40);
        param_1[3] = lVar3 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        iVar2 = FUN_0012c1bc(param_1,auStack_a40);
        if (iVar2 == 7) {
          FUN_0012ad68(auStack_e00,auStack_a40);
          FUN_0012c45c(local_730,local_728);
        }
LAB_0012c598:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_0012c598;
    }
    FUN_0012c170(auStack_a40,auStack_680);
  } while( true );
}

