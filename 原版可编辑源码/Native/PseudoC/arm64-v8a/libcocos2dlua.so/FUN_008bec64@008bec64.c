
undefined8 FUN_008bec64(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008bece8 to 009becf3 has its CatchHandler @ 008bed84 */
                    /* try { // try from 008becf4 to 009bedbb has its CatchHandler @ 008be884 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glBlendColor\'.",auStack_58);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    glBlendColor((float)(uint)(int)dVar3,(float)(uint)(int)dVar4,(float)(uint)(int)dVar5,
                 (float)(uint)(int)dVar6);
  }
                    /* catch() { ... } // from try @ 008bece8 with catch @ 008bed84 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008bea64 with catch @ 008beda0 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

