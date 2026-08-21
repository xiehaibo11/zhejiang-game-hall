
/* WARNING: Removing unreachable block (ram,0x00126aa4) */

void FUN_00126a60(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(param_2 + 8);
    lVar4 = 0;
    bVar1 = true;
    lVar2 = lVar5;
    while( true ) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + lVar4 * 8);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      if (*(char *)((long)plVar3 + 9) != '\x01') {
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      }
      if (lVar2 == *(long *)(param_2 + 8)) {
        *(long *)(param_2 + 8) = lVar5;
      }
      else {
        bVar1 = false;
        lVar5 = *(long *)(param_2 + 8);
      }
      lVar4 = lVar4 + 1;
      if (lVar4 == *(long *)(param_1 + 0x18)) break;
      lVar2 = lVar5;
      if (!bVar1) {
        lVar2 = __strlen_chk(&DAT_0012f031,3);
        FUN_0011bcc0(param_2,&DAT_0012f031,&DAT_0012f031 + lVar2);
        lVar2 = *(long *)(param_2 + 8);
      }
    }
  }
  return;
}

