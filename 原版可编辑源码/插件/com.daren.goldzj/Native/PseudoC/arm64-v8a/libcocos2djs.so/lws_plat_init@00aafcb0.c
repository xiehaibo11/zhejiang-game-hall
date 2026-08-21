
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
                    /* try { // try from 00aafcd4 to 00bafcdb has its CatchHandler @ 00ab0840 */
  lVar4 = FUN_00aa8a78((long)*(int *)(param_1 + 0xc58) << 3,"lws_lookup");
  *(long *)(param_1 + 0x828) = lVar4;
  if (lVar4 == 0) {
    uVar6 = 1;
    _lws_log(1,"OOM on lws_lookup array for %d connections\n",*(undefined4 *)(param_1 + 0xc58));
  }
  else {
                    /* try { // try from 00aafcec to 00bafcfb has its CatchHandler @ 00ab0838 */
    iVar2 = open("/dev/urandom",0);
    *(int *)(param_1 + 0xc6c) = iVar2;
    if (iVar2 < 0) {
      uVar6 = 1;
      _lws_log(1,"Unable to open random device %s %d\n","/dev/urandom",iVar2);
    }
    else {
      iVar2 = FUN_00ab54c0(param_1);
      uVar6 = 0;
      if ((iVar2 == 0) && (sVar1 != 0)) {
        iVar2 = -(int)sVar1;
                    /* try { // try from 00aafd18 to 00bafd2b has its CatchHandler @ 00ab0850 */
        __pipedes = (int *)(param_1 + 0x7c0);
        do {
          iVar3 = pipe(__pipedes);
          if (iVar3 != 0) {
            _lws_log(1,"Unable to create pipe\n");
            return 1;
          }
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

