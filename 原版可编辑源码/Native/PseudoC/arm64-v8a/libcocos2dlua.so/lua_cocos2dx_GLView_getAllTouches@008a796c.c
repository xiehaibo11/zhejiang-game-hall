
/* lua_cocos2dx_GLView_getAllTouches(lua_State*) */

void lua_cocos2dx_GLView_getAllTouches(lua_State *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  GLView *this;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long *local_60;
  long *local_58;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  this = (GLView *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocos2d::GLView::getAllTouches(this);
    lua_createtable(param_1,0,0);
    if (local_60 != local_58) {
      iVar4 = 1;
      lVar9 = *local_60;
      plVar1 = local_60;
      while( true ) {
        if (lVar9 != 0) {
          lua_pushnumber((double)iVar4,param_1);
          pvVar7 = (void *)*plVar1;
          if (pvVar7 == (void *)0x0) {
            iVar6 = -1;
          }
          else {
            iVar6 = *(int *)((long)pvVar7 + 0xc);
          }
          piVar2 = (int *)0x0;
          if (pvVar7 != (void *)0x0) {
            piVar2 = (int *)((long)pvVar7 + 0x10);
          }
          toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar7,"cc.Touch");
          lua_rawset(param_1,0xfffffffd);
          iVar4 = iVar4 + 1;
        }
        plVar1 = plVar1 + 1;
        if (local_58 == plVar1) break;
        lVar9 = *plVar1;
      }
    }
    if (local_60 != (long *)0x0) {
      operator_delete(local_60);
    }
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLView:getAllTouches",iVar4 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

