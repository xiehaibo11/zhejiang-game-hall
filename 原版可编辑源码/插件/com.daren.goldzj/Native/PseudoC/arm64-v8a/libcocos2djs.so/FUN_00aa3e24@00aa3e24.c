
void FUN_00aa3e24(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 600);
  if (*(long **)(param_1 + 0x250) == (long *)0x0) {
    lVar4 = *plVar1;
    uVar2 = 0;
    if (lVar4 == 0) goto LAB_00aa3e84;
LAB_00aa3e6c:
    *(undefined8 *)(lVar4 + 0x250) = uVar2;
  }
  else {
    **(long **)(param_1 + 0x250) = *plVar1;
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x250);
      goto LAB_00aa3e6c;
    }
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  _lws_log(4,"Attempted to attach wsi twice to same vh prot\n");
LAB_00aa3e84:
  uVar3 = -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x1a8);
  *(ulong *)(param_1 + 0x250) = lVar4 + uVar3;
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(lVar4 + uVar3);
  *(long *)(lVar4 + uVar3) = param_1;
  if (*(long *)(param_1 + 600) != 0) {
    *(long **)(*(long *)(param_1 + 600) + 0x250) = plVar1;
  }
  return;
}

