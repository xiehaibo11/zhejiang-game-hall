
undefined8 FUN_00a29e30(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  _union_1457 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68;
  _union_1457 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* catch() { ... } // from try @ 00a29e1c with catch @ 00a29e54 */
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar4 = 1;
  }
  else {
    plVar6 = param_1 + 0x19;
                    /* try { // try from 00a29e68 to 00b29f4f has its CatchHandler @ 00a29e68
                       catch() { ... } // from try @ 00a29e68 with catch @ 00a29e68
                       catch() { ... } // from try @ 00a29fd0 with catch @ 00a29e68 */
    *param_1 = 0;
    plVar3 = (long *)FUN_00a2cc00(plVar6);
    plVar2 = param_1 + 0x23;
    while (plVar3 != (long *)0x0) {
      lVar5 = *plVar2;
      *plVar3 = lVar5;
      local_68 = *(char *)(lVar5 + 0x63c);
      if (local_68 == '\0') {
        uStack_70 = 0;
        local_78 = 0;
        uStack_80 = 0;
        local_88.sa_handler = (__sighandler_t)0x0;
        sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_88);
        local_60.sa_handler = local_88.sa_handler;
        uStack_48 = uStack_70;
        uStack_50 = local_78;
        uStack_58 = 1;
        sigaction(0xd,(sigaction *)&local_60,(sigaction *)0x0);
        lVar5 = *plVar3;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      FUN_00a26ce8(plVar3,1);
      FUN_00a3fd90(plVar3,0);
      if (local_68 == '\0') {
        sigaction(0xd,(sigaction *)&local_88,(sigaction *)0x0);
      }
      plVar3 = (long *)FUN_00a2cc00(plVar6);
    }
    lVar5 = *plVar2;
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      local_68 = *(char *)(lVar5 + 0x63c);
      if (local_68 == '\0') {
        uStack_70 = 0;
        local_78 = 0;
        uStack_80 = 0;
        local_88.sa_handler = (__sighandler_t)0x0;
        sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_88);
                    /* try { // try from 00a29f50 to 00b29f83 has its CatchHandler @ 00a2a050 */
        local_60.sa_handler = local_88.sa_handler;
        uStack_48 = uStack_70;
        uStack_50 = local_78;
        uStack_58 = 1;
        sigaction(0xd,(sigaction *)&local_60,(sigaction *)0x0);
        lVar5 = *plVar2;
      }
      *(long **)(lVar5 + 0x50) = param_1 + 10;
      FUN_00a302cc();
                    /* try { // try from 00a29f84 to 00b29f97 has its CatchHandler @ 00a2a01c */
      FUN_00a396c8(param_1[0x23]);
      bVar1 = true;
    }
                    /* try { // try from 00a29f9c to 00b29fcf has its CatchHandler @ 00a2a020 */
    FUN_00a4b0d4(param_1 + 0x11);
    FUN_00a2c78c(plVar6);
    FUN_00a4ab10(param_1[4],0);
    FUN_00a4ab10(param_1[5],0);
    plVar2 = (long *)param_1[1];
    while (plVar2 != (long *)0x0) {
                    /* try { // try from 00a29fd0 to 00b2a06b has its CatchHandler @ 00a29e68 */
      lVar5 = *plVar2;
      if (*(int *)(plVar2 + 0xb) == 2) {
        FUN_00a302cc(plVar2,plVar2[10]);
        plVar2[10] = 0;
        *(undefined4 *)(plVar2 + 0xb) = 0;
      }
      plVar2[0x15a] = 0;
      plVar2[0xc] = 0;
      plVar2 = (long *)lVar5;
    }
    FUN_00a4b0d4(param_1 + 10);
    FUN_00a2ce9c(0,param_1 + 0x2a);
                    /* catch() { ... } // from try @ 00a29f84 with catch @ 00a2a01c */
    FUN_00a2d0b8(0,param_1 + 0x2b);
                    /* catch() { ... } // from try @ 00a29f9c with catch @ 00a2a020 */
    (*(code *)PTR_free_01769a00)(param_1);
    if ((bVar1) && (local_68 == '\0')) {
      sigaction(0xd,(sigaction *)&local_88,(sigaction *)0x0);
    }
                    /* catch() { ... } // from try @ 00a29f50 with catch @ 00a2a050 */
    uVar4 = 0;
  }
  return uVar4;
}

