
undefined8 FUN_008be184(undefined8 param_1)

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
                    /* try { // try from 008be1fc to 009be257 has its CatchHandler @ 008bdf68 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'drawColor4B\'.",auStack_58);
  }
  else {
                    /* catch() { ... } // from try @ 008bdf94 with catch @ 008be220 */
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    cocos2d::DrawPrimitives::setDrawColor4B
              ((uchar)(int)dVar3,(uchar)(int)dVar4,(uchar)(int)dVar5,(uchar)(int)dVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

