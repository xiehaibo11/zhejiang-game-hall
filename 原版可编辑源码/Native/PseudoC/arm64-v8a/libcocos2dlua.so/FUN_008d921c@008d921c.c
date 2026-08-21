
undefined8 FUN_008d921c(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  GObject *this;
  
                    /* catch() { ... } // from try @ 008d8d78 with catch @ 008d922c
                       catch() { ... } // from try @ 008d8e90 with catch @ 008d922c
                       catch() { ... } // from try @ 008d8f00 with catch @ 008d922c
                       catch() { ... } // from try @ 008d8f78 with catch @ 008d922c
                       catch() { ... } // from try @ 008d9038 with catch @ 008d922c */
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008d9248 to 009d936f has its CatchHandler @ 008d9248
                       catch() { ... } // from try @ 008d9248 with catch @ 008d9248
                       catch() { ... } // from try @ 008d93b0 with catch @ 008d9248
                       catch() { ... } // from try @ 008d9414 with catch @ 008d9248
                       catch() { ... } // from try @ 008d94d8 with catch @ 008d9248
                       catch() { ... } // from try @ 008d9618 with catch @ 008d9248 */
  if (iVar2 + -1 == 1) {
    dVar1 = (double)lua_tonumber(param_1,2);
    fairygui::GObject::setXMin(this,(float)dVar1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setXMin",iVar2 + -1,1);
  }
  return 0;
}

