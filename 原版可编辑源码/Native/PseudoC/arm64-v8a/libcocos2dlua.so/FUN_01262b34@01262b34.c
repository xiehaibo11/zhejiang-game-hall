
/* WARNING: Removing unreachable block (ram,0x01262b9c) */

void FUN_01262b34(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = __strlen_chk("<",2);
  FUN_01258064(param_2,"<","expected <" + lVar2 + 9);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar2 = 0;
    bVar1 = true;
    lVar3 = lVar5;
    while( true ) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      }
      if (lVar3 == param_2[1]) {
        param_2[1] = lVar5;
      }
      else {
        bVar1 = false;
        lVar5 = param_2[1];
      }
      lVar2 = lVar2 + 1;
      if (lVar2 == *(long *)(param_1 + 0x18)) break;
      lVar3 = lVar5;
      if (!bVar1) {
        lVar3 = __strlen_chk(&DAT_01458dec,3);
        FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar3);
        lVar3 = param_2[1];
      }
    }
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + *param_2 + -1) == '>')) {
    lVar2 = __strlen_chk(" ",2);
    FUN_01258064(param_2," ",
                 "%s has wrong number of arguments: %d, was expecting 0~2\n " + lVar2 + 0x38);
  }
  lVar2 = __strlen_chk(">",2);
  FUN_01258064(param_2,">","<Label | Tag = %d, Label = >" + lVar2 + 0x1b);
  return;
}

