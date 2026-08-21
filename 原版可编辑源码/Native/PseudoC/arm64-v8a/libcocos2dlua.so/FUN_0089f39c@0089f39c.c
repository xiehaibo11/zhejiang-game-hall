
void FUN_0089f39c(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uchar *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertable(param_1,1,"CCString",0,auStack_48);
  if ((((iVar3 == 0) || (iVar3 = tolua_isstring(param_1,2,0,auStack_48), iVar3 == 0)) ||
      (iVar3 = tolua_isnumber(param_1,3,0,auStack_48), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,4,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'createWithData\'.",auStack_48);
    uVar6 = 0;
  }
  else {
    puVar4 = (uchar *)tolua_tostring(param_1,2,0);
    dVar7 = (double)tolua_tonumber(0,param_1,3);
    pvVar5 = (void *)cocos2d::__String::createWithData(puVar4,(long)dVar7);
    piVar1 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar5,"CCString");
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

