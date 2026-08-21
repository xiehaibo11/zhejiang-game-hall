
/* lua_cocos2dx_GLView_getGLContextAttrs(lua_State*) */

void lua_cocos2dx_GLView_getGLContextAttrs(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  GLView *this;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  this = (GLView *)lua_gettop();
  iVar1 = (int)this + -1;
  if (iVar1 == 0) {
    cocos2d::GLView::getGLContextAttrs(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.GLView:getGLContextAttrs",iVar1,0);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}

