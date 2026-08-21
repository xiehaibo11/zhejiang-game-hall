
undefined8 FT_Select_Charmap(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == 0) {
    return 6;
  }
  if (param_2 != 0x756e6963) {
    plVar1 = *(long **)(param_1 + 0x50);
    if (plVar1 == (long *)0x0) {
      return 0x26;
    }
                    /* try { // try from 0105ee20 to 0115ee27 has its CatchHandler @ 0105eecc */
    if (0 < *(int *)(param_1 + 0x48)) {
      plVar2 = plVar1;
      do {
        plVar3 = plVar2 + 1;
                    /* try { // try from 0105ee28 to 0115eee7 has its CatchHandler @ 0105edf0 */
        if (*(int *)(*plVar2 + 8) == param_2) {
          *(long *)(param_1 + 0xa8) = *plVar2;
          return 0;
        }
        plVar2 = plVar3;
      } while (plVar3 < plVar1 + *(int *)(param_1 + 0x48));
      return 6;
    }
    return 6;
  }
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 == (long *)0x0) {
    return 0x26;
  }
  plVar2 = plVar1 + (long)*(int *)(param_1 + 0x48) + -1;
  do {
    plVar3 = plVar1 + (long)*(int *)(param_1 + 0x48) + -1;
    if (plVar2 < plVar1) {
      do {
        if (plVar3 < plVar1) {
          return 0x26;
        }
        lVar4 = *plVar3;
        plVar3 = plVar3 + -1;
      } while (*(int *)(lVar4 + 8) != 0x756e6963);
      *(long *)(param_1 + 0xa8) = lVar4;
                    /* catch() { ... } // from try @ 0105ee28 with catch @ 0105edf0 */
      return 0;
    }
    lVar4 = *plVar2;
    if (*(int *)(lVar4 + 8) == 0x756e6963) {
      if (*(short *)(lVar4 + 0xc) == 0) {
        if (*(short *)(lVar4 + 0xe) == 4) goto LAB_0105ee8c;
      }
      else if ((*(short *)(lVar4 + 0xc) == 3) && (*(short *)(lVar4 + 0xe) == 10)) {
LAB_0105ee8c:
        *(long *)(param_1 + 0xa8) = lVar4;
        return 0;
      }
    }
    plVar2 = plVar2 + -1;
  } while( true );
}

