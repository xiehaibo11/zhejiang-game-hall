
void FUN_011aabc4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 200);
  plVar6 = (long *)*plVar5;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x1000000;
  do {
    while( true ) {
      if (plVar5 == plVar6) {
        if ((long *)(param_1 + 0xb8) == *(long **)(param_1 + 0xb8)) {
          FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x80,4);
          iVar2 = FUN_011a393c(param_1 + 0x80,1);
          if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 2 & 1) != 0)) &&
             (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
            *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
          }
        }
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
        return;
      }
      *(long *)plVar6[1] = *plVar6;
      *(long *)(*plVar6 + 8) = plVar6[1];
      *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
      lVar3 = FUN_011a1a9c(plVar6[0x13],(int)plVar6[0x12]);
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar3;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
      if ((long *)plVar6[0x13] != plVar6 + 0x16) {
        FUN_0119f27c();
      }
      pcVar4 = (code *)plVar6[0x15];
      plVar6[0x13] = 0;
      if (pcVar4 != (code *)0x0) break;
LAB_011aac64:
      plVar6 = (long *)*plVar5;
    }
    if (-1 < plVar6[0x14]) {
      (*pcVar4)(plVar6 + -10,0);
      goto LAB_011aac64;
    }
    (*pcVar4)(plVar6 + -10);
    plVar6 = (long *)*plVar5;
  } while( true );
}

