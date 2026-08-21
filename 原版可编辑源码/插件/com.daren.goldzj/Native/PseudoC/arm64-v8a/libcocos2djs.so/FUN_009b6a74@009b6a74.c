
void FUN_009b6a74(undefined8 *param_1)

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
      pbVar3 = pbVar1 + -0x30;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x20));
      }
      pbVar1 = pbVar3;
                    /* try { // try from 009b6ab8 to 00ab6b9b has its CatchHandler @ 009b6858 */
    } while (pbVar2 != pbVar3);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}

