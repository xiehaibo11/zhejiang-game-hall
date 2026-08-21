
undefined8 FUN_0091b614(lua_State *param_1)

{
  int iVar1;
  Layer *this;
  ulong uVar2;
  Layer *pLVar3;
  
  if (param_1 == (lua_State *)0x0) {
    return 0;
  }
  iVar1 = lua_gettop();
                    /* try { // try from 0091b62c to 00a1b6c7 has its CatchHandler @ 0091b47c */
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,
               "%s function of CCBProxy has wrong number of arguments: %d, was expecting %d\n",
               "cc.CCBProxy:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(800,(nothrow_t *)&std::nothrow);
  if (this != (Layer *)0x0) {
    cocos2d::Layer::Layer(this);
                    /* catch() { ... } // from try @ 0091b5e0 with catch @ 0091b678 */
                    /* catch() { ... } // from try @ 0091b5f8 with catch @ 0091b67c */
    *(undefined ***)this = &PTR__Layer_0169c508;
    uVar2 = cocos2d::Layer::init(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      iVar1 = *(int *)(this + 0xc);
      pLVar3 = this + 0x10;
      goto LAB_0091b6c4;
    }
                    /* catch() { ... } // from try @ 0091b5ac with catch @ 0091b6ac */
    (**(code **)(*(long *)this + 8))(this);
    this = (Layer *)0x0;
  }
  pLVar3 = (Layer *)0x0;
  iVar1 = -1;
LAB_0091b6c4:
  toluafix_pushusertype_ccobject(param_1,iVar1,(int *)pLVar3,this,"cc.CCBProxy");
  return 1;
}

