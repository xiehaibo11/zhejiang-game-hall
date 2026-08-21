
void FUN_00bf2190(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  do {
    plVar3 = *(long **)(param_1 + 0xd0);
    if (plVar3 == (long *)(param_1 + 0xd0)) {
      return;
    }
    while( true ) {
      *(long *)plVar3[1] = *plVar3;
      *(long *)(*plVar3 + 8) = plVar3[1];
      *(long *)plVar3[-8] = plVar3[-9];
      *(long *)(plVar3[-9] + 8) = plVar3[-8];
      if (plVar3[3] != 0) {
        lVar1 = uv__count_bufs(plVar3[3] + (ulong)*(uint *)(plVar3 + 2) * 0x10,
                               (int)plVar3[4] - *(uint *)(plVar3 + 2));
        plVar2 = (long *)plVar3[3];
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar1;
        if (plVar2 != plVar3 + 5) {
          uv__free(plVar2);
        }
        plVar3[3] = 0;
      }
      if ((code *)plVar3[-3] == (code *)0x0) break;
      (*(code *)plVar3[-3])(plVar3 + -0xb,*(undefined4 *)((long)plVar3 + 0x24));
      plVar3 = *(long **)(param_1 + 0xd0);
      if (plVar3 == (long *)(param_1 + 0xd0)) {
        return;
      }
    }
  } while( true );
}

