
undefined8 FUN_008c73d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glEnableVertexAttribs\'.",auStack_38);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    cocos2d::GL::enableVertexAttribs((int)dVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

