
void FT_List_Up(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) && (lVar1 = *param_2, lVar1 != 0)
     ) {
    plVar3 = (long *)param_2[1];
    *(long **)(lVar1 + 8) = plVar3;
                    /* try { // try from 0105ffac to 0115ffb3 has its CatchHandler @ 01060020 */
    if (plVar3 == (long *)0x0) {
      plVar3 = param_1 + 1;
    }
    *plVar3 = lVar1;
    *param_2 = 0;
    puVar2 = (undefined8 *)*param_1;
    param_2[1] = (long)puVar2;
    *puVar2 = param_2;
                    /* try { // try from 0105ffc4 to 0115ffe7 has its CatchHandler @ 01060028 */
    *param_1 = param_2;
  }
  return;
}

