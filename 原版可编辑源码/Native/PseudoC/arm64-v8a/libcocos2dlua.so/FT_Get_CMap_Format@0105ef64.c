
undefined8 FT_Get_CMap_Format(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
                    /* catch() { ... } // from try @ 0105efb8 with catch @ 0105ef80 */
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    plVar2 = *(long **)(*param_1 + 0xb0);
    pcVar4 = *(code **)(*plVar2 + 0x40);
                    /* try { // try from 0105efb0 to 0115efb7 has its CatchHandler @ 0105f05c */
    if ((pcVar4 != (code *)0x0) &&
       ((puVar3 = (undefined8 *)(*pcVar4)(plVar2,"tt-cmaps"), puVar3 != (undefined8 *)0x0 &&
        (iVar1 = (*(code *)*puVar3)(param_1,auStack_30), iVar1 == 0)))) {
      return local_28;
    }
  }
                    /* try { // try from 0105efb8 to 0115f077 has its CatchHandler @ 0105ef80 */
  return 0xffffffffffffffff;
}

