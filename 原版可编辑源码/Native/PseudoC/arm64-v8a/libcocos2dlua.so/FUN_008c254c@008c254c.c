
undefined4 FUN_008c254c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  int local_4c;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
                    /* try { // try from 008c2610 to 009c2613 has its CatchHandler @ 008c2644 */
    tolua_error(param_1,"#ferror in function \'glGetShaderiv\'.",auStack_48);
                    /* try { // try from 008c2614 to 009c2657 has its CatchHandler @ 008c25e0 */
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    dVar4 = (double)tolua_tonumber(0,param_1,1);
    dVar5 = (double)tolua_tonumber(0,param_1,2);
                    /* try { // try from 008c25e0 to 009c260f has its CatchHandler @ 008c25e0
                       catch() { ... } // from try @ 008c25e0 with catch @ 008c25e0
                       catch() { ... } // from try @ 008c2614 with catch @ 008c25e0 */
    glGetShaderiv((int)dVar4,(int)dVar5,&local_4c);
    lua_pushnumber((double)(long)local_4c,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

