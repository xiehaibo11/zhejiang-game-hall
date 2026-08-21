
void FUN_010465a8(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 010465bc to 011465cb has its CatchHandler @ 010465e8 */
  plVar1 = (long *)(param_1 + 600);
                    /* try { // try from 010465cc to 01146637 has its CatchHandler @ 0104658c */
  if (*(long **)(param_1 + 0x250) == (long *)0x0) {
                    /* catch() { ... } // from try @ 010465bc with catch @ 010465e8 */
    lVar4 = *plVar1;
    uVar2 = 0;
    if (lVar4 == 0) goto LAB_01046608;
LAB_010465f0:
    *(undefined8 *)(lVar4 + 0x250) = uVar2;
  }
  else {
    **(long **)(param_1 + 0x250) = *plVar1;
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x250);
      goto LAB_010465f0;
    }
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  _lws_log(4,"Attempted to attach wsi twice to same vh prot\n");
LAB_01046608:
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

