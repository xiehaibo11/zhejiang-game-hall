
long FUN_00c1971c(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = 0;
  plVar6 = *(long **)(param_1 + 200);
LAB_00c1973c:
  plVar5 = (long *)*plVar6;
  plVar2 = plVar6;
  do {
    plVar6 = plVar5;
    if (plVar6 == (long *)0x0) {
      return lVar7;
    }
    bVar4 = *(byte *)(plVar6 + 1);
    if ((param_2 == 0 && (bVar4 & 3) == 0) || ((bVar4 >> 3 & 1) != 0)) goto LAB_00c1973c;
    lVar3 = plVar6[4];
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 10) >> 2 & 1) == 0)) {
      lVar3 = FUN_00c1ccbc(lVar3,2,*(undefined8 *)(param_1 + 0x180));
      if (lVar3 != 0) {
        *(byte *)(plVar6 + 1) = *(byte *)(plVar6 + 1) | 8;
        uVar1 = *(uint *)(plVar6 + 3);
        *plVar2 = *plVar6;
        plVar5 = *(long **)(param_1 + 0x60);
        lVar7 = lVar7 + (ulong)uVar1 + 0x30;
        if (plVar5 == (long *)0x0) {
          *plVar6 = (long)plVar6;
          *(long **)(param_1 + 0x60) = plVar6;
          plVar6 = plVar2;
        }
        else {
          *plVar6 = *plVar5;
          *plVar5 = (long)plVar6;
          *(long **)(param_1 + 0x60) = plVar6;
          plVar6 = plVar2;
        }
        goto LAB_00c1973c;
      }
      bVar4 = *(byte *)(plVar6 + 1);
    }
    *(byte *)(plVar6 + 1) = bVar4 | 8;
    plVar5 = (long *)*plVar6;
    plVar2 = plVar6;
  } while( true );
}

