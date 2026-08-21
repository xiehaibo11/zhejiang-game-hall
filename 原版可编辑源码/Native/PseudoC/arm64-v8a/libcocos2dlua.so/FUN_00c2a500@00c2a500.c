
undefined8 FUN_00c2a500(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)FUN_00c29a84(param_1,1);
  plVar2 = (long *)FUN_00c1cd14(param_1,puVar1,param_2);
  iVar4 = (int)((long)*puVar1 >> 0x2f);
  if (iVar4 == -0xb) {
    if (*plVar2 == -1) goto LAB_00c2a5a4;
    lVar5 = *plVar2;
    uVar3 = 0xffffffff;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    *(long *)(*(long *)(param_1 + 0x20) + -0x10) = lVar5;
  }
  else {
    if (iVar4 != -0xc) {
LAB_00c2a5a4:
                    /* WARNING: Subroutine does not return */
      FUN_00bfb554(param_1,1,5);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    puVar1[-1] = *puVar1;
    puVar1[-2] = *(ulong *)((*(ulong *)(lVar5 + -0x10) & 0x7fffffffffff) + 0x30) & 0x7fffffffffff |
                 0xfffb800000000000;
    if (param_2 == 0x14) {
      *puVar1 = 0xffffffffffffffff;
      return 4;
    }
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 4) = 0xfff90000;
    uVar3 = 4;
  }
  return uVar3;
}

