
undefined8 FT_Done_Face(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  if (lVar6 != 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0xf0) + 0x78) + -1;
    *(int *)(*(long *)(param_1 + 0xf0) + 0x78) = iVar4;
    if (iVar4 < 1) {
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 == (long *)0x0) {
        return 0x23;
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      while (plVar5[2] != param_1) {
        plVar5 = (long *)plVar5[1];
        if (plVar5 == (long *)0x0) {
          return 0x23;
        }
      }
      lVar3 = *plVar5;
      plVar5 = (long *)plVar5[1];
      puVar1 = (undefined8 *)(lVar6 + 0x20);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 8);
      }
      *puVar1 = plVar5;
      plVar2 = (long *)(lVar6 + 0x28);
      if (plVar5 != (long *)0x0) {
        plVar2 = plVar5;
      }
      *plVar2 = lVar3;
      (**(code **)(lVar7 + 0x10))(lVar7);
      FUN_00e166c8(lVar7,param_1,lVar6);
    }
    return 0;
  }
  return 0x23;
}

