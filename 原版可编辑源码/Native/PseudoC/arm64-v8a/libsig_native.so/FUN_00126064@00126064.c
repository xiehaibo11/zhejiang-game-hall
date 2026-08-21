
/* WARNING: Removing unreachable block (ram,0x001260fc) */

void FUN_00126064(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = __strlen_chk("\'lambda",8);
  FUN_0011bcc0(param_2,"\'lambda","\'lambda" + lVar2);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  lVar2 = __strlen_chk(&DAT_0012f410,3);
  FUN_0011bcc0(param_2,&DAT_0012f410,&DAT_0012f410 + lVar2);
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
        lVar3 = __strlen_chk(&DAT_0012f031,3);
        FUN_0011bcc0(param_2,&DAT_0012f031,&DAT_0012f031 + lVar3);
        lVar3 = *(long *)(param_2 + 8);
      }
    }
  }
  lVar2 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar2 + 9);
  return;
}

