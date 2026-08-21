
void FUN_00bf4b1c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x20000;
  while (plVar7 = *(long **)(param_1 + 200), plVar7 != (long *)(param_1 + 200)) {
    while( true ) {
      lVar4 = plVar7[0x12];
      *(long *)plVar7[1] = *plVar7;
      *(long *)(*plVar7 + 8) = plVar7[1];
      *(long *)plVar7[-7] = plVar7[-8];
      *(long *)(plVar7[-8] + 8) = plVar7[-7];
      lVar4 = uv__count_bufs(plVar7[0x13],(int)lVar4);
      plVar6 = (long *)plVar7[0x13];
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar4;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
      if (plVar6 != plVar7 + 0x16) {
        uv__free(plVar6);
      }
      pcVar5 = (code *)plVar7[0x15];
      plVar7[0x13] = 0;
      if (pcVar5 == (code *)0x0) break;
      if (plVar7[0x14] < 0) {
        (*pcVar5)(plVar7 + -10,plVar7[0x14] & 0xffffffff);
      }
      else {
        (*pcVar5)(plVar7 + -10,0);
      }
      plVar7 = *(long **)(param_1 + 200);
      if (plVar7 == (long *)(param_1 + 200)) goto LAB_00bf4bec;
    }
  }
LAB_00bf4bec:
  if (*(long *)(param_1 + 0xb8) == param_1 + 0xb8) {
    uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x80,4);
    iVar3 = uv__io_active(param_1 + 0x80,1);
    if (iVar3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar2 = uVar1;
      if ((uVar1 >> 0xe & 1) != 0) {
        uVar2 = uVar1 & 0xffffbfff;
        *(uint *)(param_1 + 0x58) = uVar2;
        if ((uVar1 & 0x2000) != 0) {
          *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
        }
      }
      goto LAB_00bf4c00;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x58);
LAB_00bf4c00:
  *(uint *)(param_1 + 0x58) = uVar2 & 0xfffdffff;
  return;
}

