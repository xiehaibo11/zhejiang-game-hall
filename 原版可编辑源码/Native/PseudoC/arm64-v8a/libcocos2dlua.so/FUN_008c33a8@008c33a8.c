
void FUN_008c33a8(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  void *__s;
  size_t __n;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [16];
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_a8);
                    /* try { // try from 008c3454 to 009c349f has its CatchHandler @ 008c3454
                       catch() { ... } // from try @ 008c3454 with catch @ 008c3454
                       catch() { ... } // from try @ 008c34f0 with catch @ 008c3454
                       catch() { ... } // from try @ 008c3604 with catch @ 008c3454
                       catch() { ... } // from try @ 008c368c with catch @ 008c3454
                       catch() { ... } // from try @ 008c3714 with catch @ 008c3454
                       catch() { ... } // from try @ 008c378c with catch @ 008c3454
                       catch() { ... } // from try @ 008c37ec with catch @ 008c3454 */
  if (((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_a8), iVar3 == 0)) ||
       (iVar3 = tolua_isnumber(param_1,3,0,auStack_a8), iVar3 == 0)) ||
      ((iVar3 = tolua_isnumber(param_1,4,0,auStack_a8), iVar3 == 0 ||
       (iVar3 = tolua_isnumber(param_1,5,0,auStack_a8), iVar3 == 0)))) ||
     ((iVar3 = tolua_isnumber(param_1,6,0,auStack_a8), iVar3 == 0 ||
      ((iVar3 = tolua_isnumber(param_1,7,0,auStack_a8), iVar3 == 0 ||
       (iVar3 = tolua_isnoobj(param_1,8,auStack_a8), iVar3 == 0)))))) {
    tolua_error(param_1,"#ferror in function \'glReadPixels\'.",auStack_a8);
    uVar12 = 0;
  }
  else {
                    /* try { // try from 008c34a0 to 009c34ef has its CatchHandler @ 008c38a4 */
    dVar5 = (double)tolua_tonumber(0,param_1,1);
    dVar6 = (double)tolua_tonumber(0,param_1,2);
    dVar7 = (double)tolua_tonumber(0,param_1,3);
    dVar8 = (double)tolua_tonumber(0,param_1,4);
                    /* try { // try from 008c34f0 to 009c3543 has its CatchHandler @ 008c3454 */
    dVar9 = (double)tolua_tonumber(0,param_1,5);
    dVar10 = (double)tolua_tonumber(0,param_1,6);
    dVar11 = (double)tolua_tonumber(0,param_1,7);
    __n = (size_t)dVar11;
    uVar4 = __n;
    if ((long)__n < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    uVar12 = 0;
    if (__s != (void *)0x0) {
                    /* try { // try from 008c3544 to 009c3557 has its CatchHandler @ 008c38a4 */
      if ((long)__n < 1) {
        glReadPixels((int)dVar5,(int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,__s);
        lua_createtable(param_1,0,0);
      }
      else {
        memset(__s,0,__n);
        glReadPixels((int)dVar5,(int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,__s);
        lua_createtable(param_1,0,0);
        uVar4 = 0;
        do {
          pbVar1 = (byte *)((long)__s + uVar4);
          uVar4 = uVar4 + 1;
          uVar12 = NEON_ucvtf((ulong)*pbVar1);
          lua_pushnumber(uVar12,param_1);
          lua_rawseti(param_1,0xfffffffe,uVar4 & 0xffffffff);
        } while (__n != uVar4);
      }
      operator_delete__(__s);
      uVar12 = 1;
    }
  }
                    /* try { // try from 008c35fc to 009c3603 has its CatchHandler @ 008c380c */
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
                    /* try { // try from 008c3604 to 009c3683 has its CatchHandler @ 008c3454 */
  return;
}

