
/* lua_cocos2dx_experimental_video_VideoPlayer_create(lua_State*) */

undefined8 lua_cocos2dx_experimental_video_VideoPlayer_create(lua_State *param_1)

{
  int iVar1;
  VideoPlayer *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.VideoPlayer:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (VideoPlayer *)0x0) {
    cocos2d::experimental::ui::VideoPlayer::VideoPlayer(this);
    uVar2 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccexp.VideoPlayer");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

