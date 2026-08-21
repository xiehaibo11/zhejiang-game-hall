
undefined8 FT_List_Iterate(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 6;
  if ((param_1 != (long *)0x0) && (param_2 != (code *)0x0)) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return 0;
    }
    do {
      lVar3 = *(long *)(lVar2 + 8);
      uVar1 = (*param_2)(lVar2,param_3);
      if ((int)uVar1 != 0) {
        lVar3 = lVar2;
      }
    } while ((lVar3 != 0) && (lVar2 = lVar3, (int)uVar1 == 0));
  }
  return uVar1;
}

