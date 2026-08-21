
void FUN_01203e64(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    pvVar2 = (void *)param_2[9];
    if (pvVar2 != (void *)0x0) {
      param_2[10] = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)param_2[6];
    if (pvVar2 != (void *)0x0) {
      param_2[7] = pvVar2;
      operator_delete(pvVar2);
    }
    pbVar5 = (byte *)param_2[3];
    if (pbVar5 != (byte *)0x0) {
      pbVar4 = (byte *)param_2[4];
      pbVar3 = pbVar5;
      if (pbVar4 != pbVar5) {
        bVar1 = pbVar4[-0x18];
        pbVar3 = pbVar4 + -0x18;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (pbVar5 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar4 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
        pbVar3 = (byte *)param_2[3];
      }
      param_2[4] = pbVar5;
      operator_delete(pbVar3);
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      param_2[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

