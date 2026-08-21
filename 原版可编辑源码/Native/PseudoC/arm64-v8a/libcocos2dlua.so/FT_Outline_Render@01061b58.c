
undefined8 FT_Outline_Render(long param_1,long param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 == 0) {
    return 0x14;
  }
  if (param_3 != 0) {
    lVar7 = *(long *)(param_1 + 0x128);
    lVar8 = *(long *)(param_1 + 0x118);
    *(long *)(param_3 + 8) = param_2;
    if (lVar7 == 0) {
      return 0x13;
    }
    bVar1 = false;
    while( true ) {
      uVar3 = (**(code **)(lVar7 + 0x70))(*(undefined8 *)(lVar7 + 0x68),param_3);
      uVar2 = (uint)uVar3;
      if ((uVar2 == 0) || ((uVar2 & 0xff) != 0x13)) break;
      plVar4 = (long *)(param_1 + 0x118);
      if (lVar8 != 0) {
        plVar4 = (long *)(lVar8 + 8);
      }
      lVar8 = *plVar4;
      while( true ) {
        if (lVar8 == 0) {
          return uVar3;
        }
        lVar7 = *(long *)(lVar8 + 0x10);
        if (*(int *)(lVar7 + 0x20) == 0x6f75746c) break;
        lVar8 = *(long *)(lVar8 + 8);
      }
      bVar1 = true;
      if (lVar7 == 0) {
        return uVar3;
      }
    }
    if (!bVar1) {
      return uVar3;
    }
    if (uVar2 != 0) {
      return uVar3;
    }
    plVar4 = *(long **)(param_1 + 0x118);
    if (plVar4 != (long *)0x0) {
      while (plVar4[2] != lVar7) {
        plVar4 = (long *)plVar4[1];
        if (plVar4 == (long *)0x0) {
          return 6;
        }
      }
      lVar8 = *plVar4;
      if (lVar8 != 0) {
        plVar6 = (long *)plVar4[1];
        *(long **)(lVar8 + 8) = plVar6;
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)(param_1 + 0x120);
        }
        *plVar6 = lVar8;
        *plVar4 = 0;
        puVar5 = *(undefined8 **)(param_1 + 0x118);
        plVar4[1] = (long)puVar5;
        *puVar5 = plVar4;
        *(long **)(param_1 + 0x118) = plVar4;
      }
      if (*(int *)(lVar7 + 0x20) != 0x6f75746c) {
        return 0;
      }
      *(long *)(param_1 + 0x128) = lVar7;
      return 0;
    }
  }
  return 6;
}

