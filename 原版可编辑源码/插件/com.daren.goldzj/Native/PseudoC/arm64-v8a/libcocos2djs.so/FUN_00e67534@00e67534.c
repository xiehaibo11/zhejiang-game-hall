
void FUN_00e67534(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    uVar2 = *(undefined8 *)(*param_1 + 0xb8);
    lVar3 = 0;
    do {
      lVar1 = *(long *)((long)param_1 + lVar3 + 0x20);
      if (lVar1 != 0) {
        if (*(code **)((&PTR_DAT_01c97148)
                       [*(uint *)(*(long *)((long)&PTR_DAT_01c97340 + lVar3) + 4)] + 0x20) !=
            (code *)0x0) {
          (**(code **)((&PTR_DAT_01c97148)
                       [*(uint *)(*(long *)((long)&PTR_DAT_01c97340 + lVar3) + 4)] + 0x20))(lVar1);
          lVar1 = *(long *)((long)param_1 + lVar3 + 0x20);
        }
        FUN_00e139fc(uVar2,lVar1);
        *(undefined8 *)((long)param_1 + lVar3 + 0x20) = 0;
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x2a0);
    FUN_00e139fc(uVar2,param_1);
    return;
  }
  return;
}

