
undefined8 FUN_00a2e2a4(long param_1,int param_2,char *param_3,char *param_4)

{
  long lVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  __n = strlen(param_4);
  sVar3 = strlen(param_3);
  lVar1 = sVar3 + 1 + __n;
  lVar5 = lVar1 + 1;
  lVar4 = (*(code *)PTR_malloc_017699f8)(lVar5);
  if (lVar4 == 0) {
    uVar6 = 0x1b;
  }
  else {
    FUN_00a241ac(lVar4,lVar5,&DAT_013c2ecf,param_3);
    memcpy((void *)(lVar4 + sVar3 + 1),param_4,__n);
    *(undefined1 *)(lVar4 + lVar1) = 0;
    plVar2 = (long *)(param_1 + 0x8e48);
    lVar5 = FUN_00a2c440(*(undefined8 *)(*plVar2 + (long)param_2 * 8),lVar4);
    uVar6 = 0;
    if (lVar5 == 0) {
      (*(code *)PTR_free_01769a00)(lVar4);
      FUN_00a2c624(*(undefined8 *)(*plVar2 + (long)param_2 * 8));
      uVar6 = 0x1b;
    }
    *(long *)(*plVar2 + (long)param_2 * 8) = lVar5;
  }
                    /* try { // try from 00a2e3a8 to 00b2e3ff has its CatchHandler @ 00a2e3a8
                       catch() { ... } // from try @ 00a2e3a8 with catch @ 00a2e3a8
                       catch() { ... } // from try @ 00a2e404 with catch @ 00a2e3a8 */
  return uVar6;
}

