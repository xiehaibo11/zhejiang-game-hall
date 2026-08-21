
undefined8 FT_Select_Size(long param_1,int param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
                    /* try { // try from 0105e854 to 0115e85f has its CatchHandler @ 0105e86c */
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (param_2 < 0) {
                    /* try { // try from 0105e888 to 0115e897 has its CatchHandler @ 0105e8a8 */
    return 6;
  }
  if (param_2 < *(int *)(param_1 + 0x38)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e854 with catch @ 0105e86c
                        */
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xb8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0105e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0xa0),(long)param_2);
      return uVar1;
    }
                    /* try { // try from 0105e898 to 0115e8bb has its CatchHandler @ 0105e818 */
    FT_Select_Metrics(param_1,(long)param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e888 with catch @ 0105e8a8
                        */
    return 0;
  }
  return 6;
}

