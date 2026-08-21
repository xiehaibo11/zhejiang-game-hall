
/* lua_dragonbones_Slot_intersectsSegment(lua_State*) */

void lua_dragonbones_Slot_intersectsSegment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Slot *this;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  Point *pPVar11;
  undefined8 uVar12;
  uint uVar13;
  Point *unaff_x25;
  uint uVar14;
  Point *unaff_x26;
  Point *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Slot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 5:
    uVar10 = luaval_to_number(param_1,2,&dStack_70,"db.Slot:intersectsSegment");
    uVar7 = luaval_to_number(param_1,3,&local_78,"db.Slot:intersectsSegment");
    uVar8 = luaval_to_number(param_1,4,&dStack_80,"db.Slot:intersectsSegment");
    uVar9 = luaval_to_number(param_1,5,&local_88,"db.Slot:intersectsSegment");
    if ((((uVar10 & 1) != 0) && ((uVar7 & 1) != 0)) && (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))) {
      local_90 = (Point *)0x0;
LAB_00957134:
      unaff_x26 = (Point *)0x0;
LAB_00957148:
      pPVar11 = (Point *)0x0;
LAB_0095714c:
      iVar2 = dragonBones::Slot::intersectsSegment
                        (this,(float)dStack_70,(float)local_78,(float)dStack_80,(float)local_88,
                         local_90,unaff_x26,pPVar11);
      tolua_pushnumber((double)iVar2,param_1);
      uVar12 = 1;
      goto LAB_00957520;
    }
    break;
  case 6:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Slot:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Slot:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Slot:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Slot:intersectsSegment");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 5 < iVar2)) &&
        (uVar10 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar10 & 1) != 0)) &&
       (local_90 = (Point *)tolua_tousertype(param_1,6,0), (uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0)
       ) goto LAB_00957134;
    break;
  case 7:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Slot:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Slot:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Slot:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Slot:intersectsSegment");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 6) || (uVar10 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar10 & 1) == 0)) {
        uVar14 = 0;
        local_90 = unaff_x25;
      }
      else {
        local_90 = (Point *)tolua_tousertype(param_1,6,0);
        uVar14 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((6 < iVar2) && (uVar10 = luaval_is_usertype(param_1,7,"db.Point",0), (uVar10 & 1) != 0))
         && (unaff_x26 = (Point *)tolua_tousertype(param_1,7,0),
            (uVar3 & uVar4 & uVar5 & uVar6 & uVar14) != 0)) goto LAB_00957148;
    }
    break;
  case 8:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Slot:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Slot:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Slot:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Slot:intersectsSegment");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 6) || (uVar10 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar10 & 1) == 0)) {
        uVar14 = 0;
      }
      else {
        local_90 = (Point *)tolua_tousertype(param_1,6,0);
        uVar14 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 7) || (uVar10 = luaval_is_usertype(param_1,7,"db.Point",0), (uVar10 & 1) == 0)) {
        uVar13 = 0;
      }
      else {
        unaff_x26 = (Point *)tolua_tousertype(param_1,7,0);
        uVar13 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((7 < iVar2) && (uVar10 = luaval_is_usertype(param_1,8,"db.Point",0), (uVar10 & 1) != 0))
         && (pPVar11 = (Point *)tolua_tousertype(param_1,8,0),
            (uVar3 & uVar4 & uVar5 & uVar6 & uVar14 & uVar13) != 0)) goto LAB_0095714c;
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:intersectsSegment",iVar2 + -1,4);
    goto LAB_0095751c;
  }
  tolua_error(param_1,&DAT_012d2d8a,0);
LAB_0095751c:
  uVar12 = 0;
LAB_00957520:
                    /* try { // try from 00957520 to 00a57537 has its CatchHandler @ 009575f8 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
                    /* try { // try from 0095753c to 00a57563 has its CatchHandler @ 009575f4 */
  return;
}

