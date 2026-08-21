
void ft_synthesize_vertical_metrics(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = lVar3;
  if (lVar3 <= lVar1) {
    lVar2 = lVar1;
  }
  if (-1 < lVar3) {
    lVar2 = lVar1 - lVar3;
  }
  if (param_2 == 0) {
    param_2 = (lVar2 * 0xc) / 10;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = param_2 - lVar2;
  *(long *)(param_1 + 0x38) = param_2;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 1;
  }
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
                    /* catch() { ... } // from try @ 0105e2cc with catch @ 0105e294 */
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x10) - (lVar1 >> 1);
  *(long *)(param_1 + 0x30) = lVar2 >> 1;
  return;
}

