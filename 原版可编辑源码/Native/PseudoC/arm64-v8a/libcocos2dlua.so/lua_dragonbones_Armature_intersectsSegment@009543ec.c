
/* lua_dragonbones_Armature_intersectsSegment(lua_State*) */

void lua_dragonbones_Armature_intersectsSegment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Armature *this;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  Point *pPVar12;
  Slot *pSVar13;
  undefined8 uVar14;
  uint uVar15;
  Point *unaff_x25;
  uint uVar16;
  Point *unaff_x26;
  Point *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 5:
    uVar11 = luaval_to_number(param_1,2,&dStack_70,"db.Armature:intersectsSegment");
    uVar7 = luaval_to_number(param_1,3,&local_78,"db.Armature:intersectsSegment");
    uVar8 = luaval_to_number(param_1,4,&dStack_80,"db.Armature:intersectsSegment");
    uVar9 = luaval_to_number(param_1,5,&local_88,"db.Armature:intersectsSegment");
    if ((((uVar11 & 1) != 0) && ((uVar7 & 1) != 0)) && (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))) {
      unaff_x25 = (Point *)0x0;
LAB_009544dc:
      pPVar12 = (Point *)0x0;
LAB_009544f0:
      pSVar13 = (Slot *)dragonBones::Armature::intersectsSegment
                                  (this,(float)dStack_70,(float)local_78,(float)dStack_80,
                                   (float)local_88,unaff_x25,pPVar12,(Point *)0x0);
joined_r0x009548c8:
      if (pSVar13 == (Slot *)0x0) {
        lua_pushnil(param_1);
        uVar14 = 1;
      }
      else {
        pcVar10 = getLuaTypeName<dragonBones::Slot>(pSVar13,"db.Slot");
        tolua_pushusertype(param_1,pSVar13,pcVar10);
        uVar14 = 1;
      }
      goto LAB_009548f4;
    }
    break;
  case 6:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Armature:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Armature:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Armature:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Armature:intersectsSegment");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 5 < iVar2)) &&
        (uVar11 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar11 & 1) != 0)) &&
       (unaff_x25 = (Point *)tolua_tousertype(param_1,6,0), (uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0
       )) goto LAB_009544dc;
    break;
  case 7:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Armature:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Armature:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Armature:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Armature:intersectsSegment");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 6) || (uVar11 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar11 & 1) == 0)) {
        uVar16 = 0;
      }
      else {
        unaff_x25 = (Point *)tolua_tousertype(param_1,6,0);
        uVar16 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((6 < iVar2) && (uVar11 = luaval_is_usertype(param_1,7,"db.Point",0), (uVar11 & 1) != 0))
         && (pPVar12 = (Point *)tolua_tousertype(param_1,7,0),
            (uVar3 & uVar4 & uVar5 & uVar6 & uVar16) != 0)) goto LAB_009544f0;
    }
    break;
  case 8:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"db.Armature:intersectsSegment");
    uVar4 = luaval_to_number(param_1,3,&local_78,"db.Armature:intersectsSegment");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"db.Armature:intersectsSegment");
    uVar6 = luaval_to_number(param_1,5,&local_88,"db.Armature:intersectsSegment");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 6) || (uVar11 = luaval_is_usertype(param_1,6,"db.Point",0), (uVar11 & 1) == 0)) {
        uVar16 = 0;
      }
      else {
        local_90 = (Point *)tolua_tousertype(param_1,6,0);
        uVar16 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 7) || (uVar11 = luaval_is_usertype(param_1,7,"db.Point",0), (uVar11 & 1) == 0)) {
        uVar15 = 0;
      }
      else {
        unaff_x26 = (Point *)tolua_tousertype(param_1,7,0);
        uVar15 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((7 < iVar2) && (uVar11 = luaval_is_usertype(param_1,8,"db.Point",0), (uVar11 & 1) != 0))
         && (pPVar12 = (Point *)tolua_tousertype(param_1,8,0),
            (uVar3 & uVar4 & uVar5 & uVar6 & uVar16 & uVar15) != 0)) {
        pSVar13 = (Slot *)dragonBones::Armature::intersectsSegment
                                    (this,(float)dStack_70,(float)local_78,(float)dStack_80,
                                     (float)local_88,local_90,unaff_x26,pPVar12);
        goto joined_r0x009548c8;
      }
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d24c5,
               iVar2 + -1,4);
    goto LAB_009548f0;
  }
  tolua_error(param_1,0x12d24e3,0);
LAB_009548f0:
  uVar14 = 0;
LAB_009548f4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

