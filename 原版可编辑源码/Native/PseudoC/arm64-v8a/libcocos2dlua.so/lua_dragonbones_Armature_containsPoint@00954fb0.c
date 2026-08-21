
/* lua_dragonbones_Armature_containsPoint(lua_State*) */

void lua_dragonbones_Armature_containsPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Armature *this;
  ulong uVar3;
  ulong uVar4;
  Slot *pSVar5;
  char *pcVar6;
  undefined8 uVar7;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"db.Armature:containsPoint");
    uVar4 = luaval_to_number(param_1,3,&local_58,"db.Armature:containsPoint");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pSVar5 = (Slot *)dragonBones::Armature::containsPoint(this,(float)dStack_50,(float)local_58);
      if (pSVar5 == (Slot *)0x0) {
                    /* try { // try from 009550dc to 00a550ef has its CatchHandler @ 00955174 */
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        pcVar6 = getLuaTypeName<dragonBones::Slot>(pSVar5,"db.Slot");
        tolua_pushusertype(param_1,pSVar5,pcVar6);
        uVar7 = 1;
      }
      goto LAB_009550b0;
    }
                    /* try { // try from 009550a8 to 00a550db has its CatchHandler @ 009551a8 */
    tolua_error(param_1,&DAT_012d2740,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:containsPoint",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_009550b0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

