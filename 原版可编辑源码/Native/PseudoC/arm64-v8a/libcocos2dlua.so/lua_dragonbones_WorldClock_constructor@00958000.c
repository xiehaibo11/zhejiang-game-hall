
/* lua_dragonbones_WorldClock_constructor(lua_State*) */

void lua_dragonbones_WorldClock_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    uVar5 = luaval_to_number(param_1,2,&local_30,"db.WorldClock:WorldClock");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,&DAT_012d3027,0);
      goto LAB_0095812c;
    }
    puVar4 = operator_new(0x38);
    puVar4[6] = 0;
    puVar4[5] = 0;
    *puVar4 = &PTR__WorldClock_016d66f0;
    *(float *)(puVar4 + 1) = (float)local_30;
    *(undefined8 *)((long)puVar4 + 0xc) = 0x3f800000;
    puVar4[4] = 0;
    puVar4[3] = 0;
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.WorldClock:WorldClock",iVar2 + -1,0);
LAB_0095812c:
      uVar6 = 0;
      goto LAB_00958130;
    }
    puVar4 = operator_new(0x38);
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR__WorldClock_016d66f0;
    puVar4[1] = 0x3f80000000000000;
    puVar4[6] = 0;
    puVar4[5] = 0;
  }
  tolua_pushusertype(param_1,puVar4,"db.WorldClock");
  uVar3 = lua_gettop(param_1);
  tolua_register_gc(param_1,uVar3);
  uVar6 = 1;
LAB_00958130:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

