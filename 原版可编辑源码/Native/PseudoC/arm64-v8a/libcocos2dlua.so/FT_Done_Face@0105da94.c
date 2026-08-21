
undefined8 FT_Done_Face(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != 0) && (lVar6 = *(long *)(param_1 + 0xb0), lVar6 != 0)) {
    iVar3 = *(int *)(*(long *)(param_1 + 0xf0) + 0x6c);
    iVar4 = iVar3 + -1;
    *(int *)(*(long *)(param_1 + 0xf0) + 0x6c) = iVar4;
    if (iVar4 != 0 && 0 < iVar3) {
      return 0;
    }
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 != (long *)0x0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      do {
        if (plVar5[2] == param_1) {
          lVar2 = *plVar5;
          plVar5 = (long *)plVar5[1];
          puVar1 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar1 = (undefined8 *)(lVar6 + 0x20);
          }
          *puVar1 = plVar5;
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)(lVar6 + 0x28);
          }
          *plVar5 = lVar2;
                    /* catch() { ... } // from try @ 0105da14 with catch @ 0105db20 */
          (**(code **)(lVar7 + 0x10))(lVar7);
                    /* catch() { ... } // from try @ 0105da40 with catch @ 0105db28 */
          FUN_0105db48(lVar7,param_1,lVar6);
          return 0;
        }
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)0x0);
    }
  }
  return 0x23;
}

