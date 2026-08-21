
/* WARNING: Type propagation algorithm not settling */

void FUN_008c2828(undefined8 param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  double dVar10;
  int local_64 [3];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = tolua_isnumber(param_1,1,0,&local_58);
  if (((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,&local_58), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,&local_58), iVar3 == 0)) {
switchD_008c2944_caseD_8b56:
                    /* catch() { ... } // from try @ 008c2920 with catch @ 008c2978 */
                    /* catch() { ... } // from try @ 008c2910 with catch @ 008c297c */
    tolua_error(param_1,"#ferror in function \'glGetUniformfv\'.",&local_58);
    uVar6 = 0;
    goto LAB_008c2a74;
  }
  dVar10 = (double)tolua_tonumber(0,param_1,1);
  iVar3 = (int)dVar10;
  dVar10 = (double)tolua_tonumber(0,param_1,2);
  iVar8 = (int)dVar10;
  glGetProgramiv(iVar3,0x8b87,local_64 + 2);
                    /* try { // try from 008c28cc to 009c290f has its CatchHandler @ 008c28cc
                       catch() { ... } // from try @ 008c28cc with catch @ 008c28cc
                       catch() { ... } // from try @ 008c292c with catch @ 008c28cc */
  uVar9 = (ulong)local_64[2];
  if ((long)uVar9 < 0) {
    uVar9 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
  local_64[0] = -1;
  local_64[1] = 0xffffffff;
  glGetActiveUniform(iVar3,iVar8,local_64[2],0,local_64 + 1,local_64,pvVar4);
                    /* try { // try from 008c2910 to 009c2917 has its CatchHandler @ 008c297c */
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
                    /* try { // try from 008c2920 to 009c292b has its CatchHandler @ 008c2978 */
                    /* try { // try from 008c292c to 009c298f has its CatchHandler @ 008c28cc */
  switch(local_64[0]) {
  case 0x8b50:
    uVar9 = 2;
    break;
  case 0x8b51:
    uVar9 = 3;
    break;
  case 0x8b52:
  case 0x8b5a:
    uVar9 = 4;
    break;
  case 0x8b53:
  case 0x8b54:
  case 0x8b55:
switchD_008c2944_caseD_8b53:
    piVar5 = operator_new__(4,(nothrow_t *)&std::nothrow);
    glGetUniformiv(iVar3,iVar8,piVar5);
    lua_createtable(param_1,0,0);
    lua_pushnumber((double)(long)*piVar5,param_1);
    lua_rawseti(param_1,0xfffffffe,1);
    goto LAB_008c2a68;
  case 0x8b56:
  case 0x8b57:
  case 0x8b58:
  case 0x8b59:
    goto switchD_008c2944_caseD_8b56;
  case 0x8b5b:
                    /* try { // try from 008c29f8 to 009c2a37 has its CatchHandler @ 008c29f8
                       catch() { ... } // from try @ 008c29f8 with catch @ 008c29f8
                       catch() { ... } // from try @ 008c2a60 with catch @ 008c29f8 */
    uVar9 = 9;
    break;
  case 0x8b5c:
    uVar9 = 0x10;
    break;
  default:
    if (local_64[0] == 0x1404) goto switchD_008c2944_caseD_8b53;
    if (local_64[0] != 0x1406) goto switchD_008c2944_caseD_8b56;
    uVar9 = 1;
  }
  piVar5 = operator_new__((ulong)(uint)((int)uVar9 << 2),(nothrow_t *)&std::nothrow);
  glGetUniformfv(iVar3,iVar8,piVar5);
  lua_createtable(param_1,0,0);
                    /* try { // try from 008c2a38 to 009c2a5f has its CatchHandler @ 008c2ab0 */
  uVar7 = 0;
  do {
    pfVar1 = (float *)(piVar5 + uVar7);
    uVar7 = uVar7 + 1;
    lua_pushnumber((double)*pfVar1,param_1);
    lua_rawseti(param_1,0xfffffffe,uVar7 & 0xffffffff);
                    /* try { // try from 008c2a60 to 009c2acb has its CatchHandler @ 008c29f8 */
  } while (uVar9 != uVar7);
LAB_008c2a68:
  operator_delete__(piVar5);
  uVar6 = 1;
LAB_008c2a74:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

