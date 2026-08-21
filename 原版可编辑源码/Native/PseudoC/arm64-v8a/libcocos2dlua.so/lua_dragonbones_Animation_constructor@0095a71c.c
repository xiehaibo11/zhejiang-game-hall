
/* lua_dragonbones_Animation_constructor(lua_State*) */

bool lua_dragonbones_Animation_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Animation *this;
  
                    /* try { // try from 0095a724 to 00a5a76f has its CatchHandler @ 0095a724
                       catch() { ... } // from try @ 0095a724 with catch @ 0095a724
                       catch() { ... } // from try @ 0095a774 with catch @ 0095a724 */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x80);
    dragonBones::Animation::Animation(this);
                    /* try { // try from 0095a770 to 00a5a773 has its CatchHandler @ 0095a7a8 */
                    /* try { // try from 0095a774 to 00a5a7bb has its CatchHandler @ 0095a724 */
    tolua_pushusertype(param_1,this,"db.Animation");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Animation:Animation",iVar1,0);
  }
  return iVar1 == 0;
}

