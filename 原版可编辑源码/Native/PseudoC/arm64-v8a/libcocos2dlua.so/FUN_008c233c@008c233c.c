
void FUN_008c233c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  int local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_58), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glGetShaderInfoLog\'.",auStack_58);
    uVar4 = 0;
  }
  else {
    dVar6 = (double)tolua_tonumber(0,param_1,1);
    glGetShaderiv((int)dVar6,0x8b84,&local_5c);
    uVar5 = (ulong)local_5c;
    if ((long)uVar5 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    glGetShaderInfoLog((int)dVar6,local_5c,0,pvVar3);
    lua_pushstring(param_1,pvVar3);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

