
void FUN_009be404(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar2 != pbVar3);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
                    /* try { // try from 009be478 to 00abe493 has its CatchHandler @ 009be4a8 */
  operator_delete(pbVar3);
  return;
}

