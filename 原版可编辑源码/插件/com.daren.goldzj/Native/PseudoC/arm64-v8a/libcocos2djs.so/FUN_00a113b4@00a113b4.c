
undefined8 * FUN_00a113b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(*(code *)PTR_calloc_01d1b760)(1,0x180);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN_00a1a8c4(puVar2 + 10);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a342e0(puVar2 + 0x11,param_1,FUN_00a15530,FUN_00a15540,free), iVar1 == 0)) {
      iVar1 = FUN_00a16d38(puVar2 + 0x19,param_2);
      if (iVar1 == 0) {
        lVar3 = FUN_00a33f88(FUN_00a11508);
        puVar2[4] = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_00a33f88(FUN_00a11508);
          puVar2[5] = lVar3;
          if (lVar3 != 0) {
            lVar3 = FUN_00a0ef74();
            puVar2[0x23] = lVar3;
            if (lVar3 != 0) {
              *(undefined8 **)(lVar3 + 0x60) = puVar2;
              *(undefined8 **)(lVar3 + 0xad0) = puVar2 + 0x19;
              puVar2[0x27] = 5;
              puVar2[0x24] = 0xffffffffffffffff;
              return puVar2;
            }
          }
        }
      }
    }
    FUN_00a346ec(puVar2 + 0x11);
    FUN_00a346ec(puVar2 + 10);
    FUN_00a16da4(puVar2 + 0x19);
    FUN_00a23ce0(puVar2[0x23]);
    puVar2[0x23] = 0;
    FUN_00a34128(puVar2[4],0);
    FUN_00a34128(puVar2[5],0);
    (*(code *)PTR_free_01d1b748)(puVar2);
  }
  return (undefined8 *)0x0;
}

