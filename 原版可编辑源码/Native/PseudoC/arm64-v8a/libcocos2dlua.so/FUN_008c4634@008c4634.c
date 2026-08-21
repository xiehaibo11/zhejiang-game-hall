
void FUN_008c4634(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  void *__s;
  ulong __n;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auStack_b8 [16];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_b8);
  if ((((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_b8), iVar3 == 0)) ||
        (iVar3 = tolua_isnumber(param_1,3,0,auStack_b8), iVar3 == 0)) ||
       ((iVar3 = tolua_isnumber(param_1,4,0,auStack_b8), iVar3 == 0 ||
        (iVar3 = tolua_isnumber(param_1,5,0,auStack_b8), iVar3 == 0)))) ||
      ((iVar3 = tolua_isnumber(param_1,6,0,auStack_b8), iVar3 == 0 ||
       ((iVar3 = tolua_isnumber(param_1,7,0,auStack_b8), iVar3 == 0 ||
        (iVar3 = tolua_isnumber(param_1,8,0,auStack_b8), iVar3 == 0)))))) ||
     ((iVar3 = tolua_isnumber(param_1,9,0,auStack_b8), iVar3 == 0 ||
      (iVar3 = tolua_isnoobj(param_1,10,auStack_b8), iVar3 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glTexSubImage2D\'.",auStack_b8);
    uVar14 = 0;
  }
  else {
    dVar5 = (double)tolua_tonumber(0,param_1,1);
    dVar6 = (double)tolua_tonumber(0,param_1,2);
    dVar7 = (double)tolua_tonumber(0,param_1,3);
    dVar8 = (double)tolua_tonumber(0,param_1,4);
    dVar9 = (double)tolua_tonumber(0,param_1,5);
    dVar10 = (double)tolua_tonumber(0,param_1,6);
    dVar11 = (double)tolua_tonumber(0,param_1,7);
    dVar12 = (double)tolua_tonumber(0,param_1,8);
    dVar13 = (double)tolua_tonumber(0,param_1,9);
    __n = (ulong)(uint)(int)dVar13;
    __s = operator_new__(__n,(nothrow_t *)&std::nothrow);
    uVar14 = 0;
    if (__s != (void *)0x0) {
      if ((int)dVar13 == 0) {
        glTexSubImage2D((int)dVar5,(int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,
                        (int)dVar11,(int)dVar12,__s);
        lua_createtable(param_1,0,0);
      }
      else {
        memset(__s,0,__n);
        glTexSubImage2D((int)dVar5,(int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,
                        (int)dVar11,(int)dVar12,__s);
        lua_createtable(param_1,0,0);
        uVar4 = 0;
        do {
          pbVar1 = (byte *)((long)__s + uVar4);
          uVar4 = uVar4 + 1;
          uVar14 = NEON_ucvtf((ulong)*pbVar1);
          lua_pushnumber(uVar14,param_1);
          lua_rawseti(param_1,0xfffffffe,uVar4 & 0xffffffff);
        } while (__n != uVar4);
      }
      operator_delete__(__s);
      uVar14 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}

