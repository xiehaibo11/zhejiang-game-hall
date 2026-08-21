
int buffer_meth_send(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  double dVar13;
  long local_78;
  long local_70;
  long local_68;
  
                    /* try { // try from 009d15cc to 00ad1803 has its CatchHandler @ 009cee70 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar4 = lua_gettop();
  local_78 = 0;
  lVar6 = luaL_checklstring(param_1,2,&local_78);
  dVar13 = (double)luaL_optnumber(0x3ff0000000000000,param_1,3);
  lVar9 = (long)dVar13;
  dVar13 = (double)luaL_optnumber(0xbff0000000000000,param_1,4);
  lVar7 = (long)dVar13;
  if (lVar9 < 0) {
    lVar9 = lVar9 + local_78 + 1;
  }
  if (lVar7 < 0) {
    lVar7 = lVar7 + local_78 + 1;
  }
  if (lVar9 < 2) {
    lVar9 = 1;
  }
  lVar2 = local_78;
  if (lVar7 <= local_78) {
    lVar2 = lVar7;
  }
  if ((lVar2 < lVar9) || (uVar1 = (lVar2 - lVar9) + 1, lVar2 - lVar9 == -1)) {
    uVar11 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar11 = 0;
    do {
      local_70 = 0;
      uVar8 = uVar1 - uVar11;
      if (0x1fff < uVar8) {
        uVar8 = 0x2000;
      }
      iVar5 = (*(code *)puVar12[1])(*puVar12,lVar6 + lVar9 + -1 + uVar11,uVar8,&local_70,uVar10);
      uVar11 = local_70 + uVar11;
    } while ((iVar5 == 0) && (uVar11 < uVar1));
    *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + uVar11;
    if (iVar5 != 0) {
      lua_pushnil(param_1);
      uVar10 = (*(code *)(*(undefined8 **)(param_2 + 0x18))[3])
                         (**(undefined8 **)(param_2 + 0x18),iVar5);
      lua_pushstring(param_1,uVar10);
      lua_pushnumber((double)((lVar9 + uVar11) - 1),param_1);
      goto LAB_009d169c;
    }
  }
  lua_pushnumber((double)((lVar9 + uVar11) - 1),param_1);
  lua_pushnil(param_1);
  lua_pushnil(param_1);
LAB_009d169c:
  iVar5 = lua_gettop(param_1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar5 - iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

