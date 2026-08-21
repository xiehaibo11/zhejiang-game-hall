
undefined8 FUN_0089dc38(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  __Array *this;
  Ref *pRVar3;
  double dVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"CCArray",0,auStack_58);
  if ((((iVar2 == 0) || (iVar2 = tolua_isusertype(param_1,2,&DAT_012769c7,0,auStack_58), iVar2 == 0)
       ) || (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_58), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'insertObject\'.",auStack_58);
  }
  else {
    this = (__Array *)tolua_tousertype(param_1,1,0);
    pRVar3 = (Ref *)tolua_tousertype(param_1,2,0);
    dVar4 = (double)tolua_tonumber(0,param_1,3);
    if (this == (__Array *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'insertObject\'",0);
    }
    cocos2d::__Array::insertObject(this,pRVar3,(ulong)(uint)(int)dVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

