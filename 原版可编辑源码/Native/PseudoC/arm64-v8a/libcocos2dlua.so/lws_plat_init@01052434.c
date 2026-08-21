
undefined4 lws_plat_init(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *__pipedes;
  undefined4 uVar6;
  
  sVar1 = *(short *)(param_1 + 0xca6);
  lVar4 = FUN_0104b1fc((long)*(int *)(param_1 + 0xc58) << 3,"lws_lookup");
  *(long *)(param_1 + 0x828) = lVar4;
  if (lVar4 == 0) {
    uVar6 = 1;
                    /* try { // try from 010524e8 to 011524ef has its CatchHandler @ 01053638 */
    _lws_log(1,"OOM on lws_lookup array for %d connections\n",*(undefined4 *)(param_1 + 0xc58));
  }
  else {
    iVar2 = open("/dev/urandom",0);
    *(int *)(param_1 + 0xc6c) = iVar2;
    if (iVar2 < 0) {
      uVar6 = 1;
      _lws_log(1,"Unable to open random device %s %d\n","/dev/urandom",iVar2);
    }
    else {
      iVar2 = FUN_01057c44(param_1);
      uVar6 = 0;
      if ((iVar2 == 0) && (sVar1 != 0)) {
        iVar2 = -(int)sVar1;
        __pipedes = (int *)(param_1 + 0x7c0);
        do {
          iVar3 = pipe(__pipedes);
          if (iVar3 != 0) {
            _lws_log(1,"Unable to create pipe\n");
            return 1;
          }
                    /* try { // try from 010524b4 to 011524c3 has its CatchHandler @ 0105363c */
          piVar5 = *(int **)(__pipedes + -0x1b8);
          iVar2 = iVar2 + 1;
          *piVar5 = *__pipedes;
          piVar5[1] = 1;
          __pipedes[2] = 1;
          __pipedes = __pipedes + 0x1be;
        } while (iVar2 != 0);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

