
/* WARNING: Removing unreachable block (ram,0x012624a0) */

void FUN_01262408(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = __strlen_chk("\'lambda",8);
  FUN_01258064(param_2,"\'lambda","\'lambda" + lVar2);
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  lVar2 = __strlen_chk(&DAT_014a83fb,3);
  FUN_01258064(param_2,&DAT_014a83fb,&DAT_014a83fb + lVar2);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(param_2 + 8);
    lVar2 = 0;
    bVar1 = true;
    lVar3 = lVar5;
    while( true ) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      }
      if (lVar3 == *(long *)(param_2 + 8)) {
        *(long *)(param_2 + 8) = lVar5;
      }
      else {
        bVar1 = false;
        lVar5 = *(long *)(param_2 + 8);
      }
      lVar2 = lVar2 + 1;
      if (lVar2 == *(long *)(param_1 + 0x18)) break;
      lVar3 = lVar5;
      if (!bVar1) {
        lVar3 = __strlen_chk(&DAT_01458dec,3);
        FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar3);
        lVar3 = *(long *)(param_2 + 8);
      }
    }
  }
  lVar2 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar2);
  return;
}

