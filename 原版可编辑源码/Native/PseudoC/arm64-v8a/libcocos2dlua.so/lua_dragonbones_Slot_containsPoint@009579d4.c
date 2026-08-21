
/* lua_dragonbones_Slot_containsPoint(lua_State*) */

void lua_dragonbones_Slot_containsPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Slot *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Slot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"db.Slot:containsPoint");
    uVar5 = luaval_to_number(param_1,3,&local_58,"db.Slot:containsPoint");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = dragonBones::Slot::containsPoint(this,(float)dStack_50,(float)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00957abc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_Slot_containsPoint\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:containsPoint",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00957abc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

