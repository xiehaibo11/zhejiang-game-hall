
void FUN_009cfda8(undefined8 param_1,long *param_2,uint *param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  long local_68;
  
                    /* try { // try from 009cfdb0 to 00acfdc3 has its CatchHandler @ 009d8054 */
                    /* try { // try from 009cfdc8 to 00acfe33 has its CatchHandler @ 009d8174 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  switch(*param_3) {
  case 0:
    lVar3 = param_2[4];
    *(int *)(param_2 + 4) = (int)lVar3 + 1;
    if ((*(int *)(param_2[3] + 0x540) <= (int)lVar3) ||
       (iVar4 = lua_checkstack(param_1,3), iVar4 == 0)) {
                    /* try { // try from 009cfe34 to 00ad03cb has its CatchHandler @ 009cee70 */
      strbuf_free(param_2[2]);
      luaL_error(param_1,"Found too many nested data structures (%d) at character %d",
                 (int)param_2[4],param_2[1] - *param_2);
    }
    lua_createtable(param_1,0,0);
    FUN_009cf6a0(param_2,&local_80);
    if (local_80 != 1) {
      do {
        if (local_80 != 4) {
          strbuf_free(param_2[2]);
          ppuVar1 = &local_78;
          if (local_80 != 0xc) {
            ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + local_80;
          }
          luaL_error(param_1,"Expected %s but found %s at character %d","object key string",*ppuVar1
                     ,iStack_7c + 1);
        }
        lua_pushlstring(param_1,local_78,(long)local_70);
        FUN_009cf6a0(param_2,&local_80);
        if (local_80 != 8) {
          strbuf_free(param_2[2]);
          ppuVar1 = &local_78;
          if (local_80 != 0xc) {
            ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + local_80;
          }
          luaL_error(param_1,"Expected %s but found %s at character %d","colon",*ppuVar1,
                     iStack_7c + 1);
        }
        FUN_009cf6a0(param_2,&local_80);
        FUN_009cfda8(param_1,param_2,&local_80);
        lua_rawset(param_1,0xfffffffd);
        FUN_009cf6a0(param_2,&local_80);
        if (local_80 != 9) {
          if (local_80 == 1) break;
          strbuf_free(param_2[2]);
          ppuVar1 = &local_78;
          if (local_80 != 0xc) {
            ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + local_80;
          }
          luaL_error(param_1,"Expected %s but found %s at character %d","comma or object end",
                     *ppuVar1,iStack_7c + 1);
        }
        FUN_009cf6a0(param_2,&local_80);
      } while( true );
    }
    goto LAB_009d016c;
  default:
    strbuf_free(param_2[2]);
    ppuVar1 = (undefined **)(param_3 + 2);
    if (*param_3 != 0xc) {
      ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + *param_3;
    }
    luaL_error(param_1,"Expected %s but found %s at character %d","value",*ppuVar1,param_3[1] + 1);
    break;
  case 2:
    lVar3 = param_2[4];
    *(int *)(param_2 + 4) = (int)lVar3 + 1;
    if ((*(int *)(param_2[3] + 0x540) <= (int)lVar3) ||
       (iVar4 = lua_checkstack(param_1,2), iVar4 == 0)) {
      strbuf_free(param_2[2]);
      luaL_error(param_1,"Found too many nested data structures (%d) at character %d",
                 (int)param_2[4],param_2[1] - *param_2);
    }
    lua_createtable(param_1,0,0);
    FUN_009cf6a0(param_2,&local_80);
    if (local_80 != 3) {
      iVar4 = 1;
      do {
        FUN_009cfda8(param_1,param_2,&local_80);
        lua_rawseti(param_1,0xfffffffe,iVar4);
        FUN_009cf6a0(param_2,&local_80);
        if (local_80 != 9) {
          if (local_80 == 3) break;
          strbuf_free(param_2[2]);
          ppuVar1 = &local_78;
          if (local_80 != 0xc) {
            ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + local_80;
          }
          luaL_error(param_1,"Expected %s but found %s at character %d","comma or array end",
                     *ppuVar1,iStack_7c + 1);
        }
        FUN_009cf6a0(param_2,&local_80);
        iVar4 = iVar4 + 1;
      } while( true );
    }
LAB_009d016c:
    *(int *)(param_2 + 4) = (int)param_2[4] + -1;
    break;
  case 4:
    lua_pushlstring(param_1,*(undefined8 *)(param_3 + 2),(long)(int)param_3[4]);
    break;
  case 5:
    lua_pushnumber(*(undefined8 *)(param_3 + 2),param_1);
    break;
  case 6:
    lua_pushboolean(param_1,param_3[2]);
    break;
  case 7:
    if (*(int *)(param_2[3] + 0x544) == 0) {
      lua_pushlightuserdata(param_1,0);
    }
    else {
      lua_pushnil(param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

