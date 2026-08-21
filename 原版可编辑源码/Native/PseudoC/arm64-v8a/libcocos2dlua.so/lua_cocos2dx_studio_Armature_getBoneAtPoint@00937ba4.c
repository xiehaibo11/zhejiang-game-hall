
/* lua_cocos2dx_studio_Armature_getBoneAtPoint(lua_State*) */

void lua_cocos2dx_studio_Armature_getBoneAtPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Armature *this;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"ccs.Armature:getBoneAtPoint");
                    /* try { // try from 00937c1c to 00a37c4f has its CatchHandler @ 00937d1c */
    uVar4 = luaval_to_number(param_1,3,&local_58,"ccs.Armature:getBoneAtPoint");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocostudio::Armature::getBoneAtPoint(this,(float)dStack_50,(float)local_58);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
                    /* try { // try from 00937c50 to 00a37c63 has its CatchHandler @ 00937ce8 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccs.Bone");
        uVar6 = 1;
      }
      goto LAB_00937ca0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Armature_getBoneAtPoint\'",0);
  }
  else {
                    /* try { // try from 00937c68 to 00a37c9b has its CatchHandler @ 00937cec */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:getBoneAtPoint",iVar2 + -1,2);
  }
                    /* try { // try from 00937c9c to 00a37d37 has its CatchHandler @ 0093796c */
  uVar6 = 0;
LAB_00937ca0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

