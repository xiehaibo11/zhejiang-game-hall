
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_3d_Terrain_create(lua_State*) */

undefined4 lua_cocos2dx_3d_Terrain_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  char *in_x3;
  undefined4 uVar7;
  int local_114;
  TerrainData aTStack_110 [8];
  byte local_108;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  byte local_d8;
  void *local_c8;
  byte local_b8;
  void *local_a8;
  byte local_98;
  void *local_88;
  byte local_78;
  void *local_68;
  long local_48;
  
                    /* try { // try from 008fd3e4 to 009fd43f has its CatchHandler @ 008fd2f4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    cocos2d::Terrain::TerrainData::TerrainData(aTStack_110);
    uVar3 = luaval_to_terraindata(param_1,2,aTStack_110,in_x3);
    uVar4 = luaval_to_int32(param_1,3,&local_114,"cc.Terrain:create");
    if ((uVar3 & uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::Terrain::create(aTStack_110,local_114);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Terrain");
      }
      goto LAB_008fd5ec;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_create\'",0);
LAB_008fd524:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Terrain:create",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_008fd568;
    }
    cocos2d::Terrain::TerrainData::TerrainData(aTStack_110);
                    /* catch() { ... } // from try @ 008fd344 with catch @ 008fd424
                       catch() { ... } // from try @ 008fd3d0 with catch @ 008fd424 */
    uVar5 = luaval_to_terraindata(param_1,2,aTStack_110,in_x3);
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_create\'",0);
      goto LAB_008fd524;
    }
    pvVar6 = (void *)cocos2d::Terrain::create(aTStack_110,1);
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "cc.Terrain");
    }
LAB_008fd5ec:
    uVar7 = 1;
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
LAB_008fd568:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

