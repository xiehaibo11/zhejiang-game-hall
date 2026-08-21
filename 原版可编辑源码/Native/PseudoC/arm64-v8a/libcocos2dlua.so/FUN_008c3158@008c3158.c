
undefined8 FUN_008c3158(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
                    /* try { // try from 008c315c to 009c3167 has its CatchHandler @ 008c322c */
                    /* try { // try from 008c3168 to 009c318f has its CatchHandler @ 008c30c8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_38);
                    /* try { // try from 008c3190 to 009c3197 has its CatchHandler @ 008c3228 */
                    /* try { // try from 008c3198 to 009c31b7 has its CatchHandler @ 008c30c8 */
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
                    /* try { // try from 008c31c0 to 009c31df has its CatchHandler @ 008c30c8 */
    tolua_error(param_1,"#ferror in function \'glLinkProgram\'.",auStack_38);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    glLinkProgram((int)dVar3);
                    /* try { // try from 008c31b8 to 009c31bf has its CatchHandler @ 008c3228 */
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 008c31e0 to 009c31eb has its CatchHandler @ 008c3228 */
                    /* try { // try from 008c31ec to 009c322f has its CatchHandler @ 008c30c8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

