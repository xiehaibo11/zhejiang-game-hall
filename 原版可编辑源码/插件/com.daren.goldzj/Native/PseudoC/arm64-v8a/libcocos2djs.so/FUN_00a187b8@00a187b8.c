
undefined8 FUN_00a187b8(long param_1,int param_2,char *param_3,void *param_4,size_t param_5)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  sVar3 = strlen(param_3);
  lVar1 = sVar3 + 1 + param_5;
  lVar5 = lVar1 + 1;
  lVar4 = (*(code *)PTR_malloc_01d1b740)(lVar5);
  if (lVar4 == 0) {
    uVar6 = 0x1b;
  }
  else {
    FUN_00a0e7c4(lVar4,lVar5,&DAT_018905d2,param_3);
    memcpy((void *)(lVar4 + sVar3 + 1),param_4,param_5);
    *(undefined1 *)(lVar4 + lVar1) = 0;
    plVar2 = (long *)(param_1 + 0x8e48);
    lVar5 = FUN_00a16a58(*(undefined8 *)(*plVar2 + (long)param_2 * 8),lVar4);
    uVar6 = 0;
    if (lVar5 == 0) {
      (*(code *)PTR_free_01d1b748)(lVar4);
      FUN_00a16c3c(*(undefined8 *)(*plVar2 + (long)param_2 * 8));
      uVar6 = 0x1b;
    }
    *(long *)(*plVar2 + (long)param_2 * 8) = lVar5;
  }
  return uVar6;
}

