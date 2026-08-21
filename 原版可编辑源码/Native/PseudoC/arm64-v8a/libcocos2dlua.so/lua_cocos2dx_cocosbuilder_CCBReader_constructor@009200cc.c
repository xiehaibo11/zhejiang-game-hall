
/* lua_cocos2dx_cocosbuilder_CCBReader_constructor(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBReader_constructor(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  NodeLoaderLibrary *pNVar4;
  CCBMemberVariableAssigner *pCVar5;
  CCBSelectorResolver *pCVar6;
  NodeLoaderListener *pNVar7;
  CCBReader *this;
  CCBReader *pCVar8;
  
  iVar1 = lua_gettop();
                    /* try { // try from 009200fc to 00a2012f has its CatchHandler @ 009201fc */
  switch(iVar1 + -1) {
  case 0:
    this = operator_new(0x188);
    cocosbuilder::CCBReader::CCBReader(this);
    goto LAB_0092011c;
  case 1:
    if (param_1 == (lua_State *)0x0) break;
    iVar2 = lua_gettop(param_1);
    if ((iVar2 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"cc.CCBReader",0), (uVar3 & 1) == 0)) {
      iVar2 = lua_gettop(param_1);
                    /* try { // try from 00920468 to 00a2049b has its CatchHandler @ 00920568 */
      if ((iVar2 < 2) ||
         (uVar3 = luaval_is_usertype(param_1,2,"cc.NodeLoaderLibrary",0), (uVar3 & 1) == 0)) break;
      pNVar4 = (NodeLoaderLibrary *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 0092049c to 00a204af has its CatchHandler @ 00920534 */
      this = operator_new(0x188);
                    /* try { // try from 009204b4 to 00a204e7 has its CatchHandler @ 00920538 */
      cocosbuilder::CCBReader::CCBReader
                (this,pNVar4,(CCBMemberVariableAssigner *)0x0,(CCBSelectorResolver *)0x0,
                 (NodeLoaderListener *)0x0);
    }
    else {
      pCVar8 = (CCBReader *)tolua_tousertype(param_1,2,0);
      this = operator_new(0x188);
      cocosbuilder::CCBReader::CCBReader(this,pCVar8);
    }
LAB_0092011c:
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00920130 to 00a20143 has its CatchHandler @ 009201c8 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.CCBReader");
    return 1;
  case 2:
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.NodeLoaderLibrary",0), (uVar3 & 1) != 0)) {
      pNVar4 = (NodeLoaderLibrary *)tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) &&
         (uVar3 = luaval_is_usertype(param_1,3,"cc.CCBMemberVariableAssigner",0), (uVar3 & 1) != 0))
      {
        pCVar5 = (CCBMemberVariableAssigner *)tolua_tousertype(param_1,3,0);
                    /* try { // try from 009202f8 to 00a20343 has its CatchHandler @ 009202f8
                       catch() { ... } // from try @ 009202f8 with catch @ 009202f8
                       catch() { ... } // from try @ 00920348 with catch @ 009202f8 */
        this = operator_new(0x188);
        cocosbuilder::CCBReader::CCBReader
                  (this,pNVar4,pCVar5,(CCBSelectorResolver *)0x0,(NodeLoaderListener *)0x0);
        goto LAB_0092011c;
      }
    }
    break;
  case 3:
                    /* try { // try from 00920344 to 00a20347 has its CatchHandler @ 0092039c */
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.NodeLoaderLibrary",0), (uVar3 & 1) != 0)) {
                    /* try { // try from 00920348 to 00a203af has its CatchHandler @ 009202f8 */
      pNVar4 = (NodeLoaderLibrary *)tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) &&
         (uVar3 = luaval_is_usertype(param_1,3,"cc.CCBMemberVariableAssigner",0), (uVar3 & 1) != 0))
      {
        pCVar5 = (CCBMemberVariableAssigner *)tolua_tousertype(param_1,3,0);
                    /* catch() { ... } // from try @ 00920344 with catch @ 0092039c */
        iVar2 = lua_gettop(param_1);
                    /* try { // try from 009203b0 to 00a20467 has its CatchHandler @ 009203b0
                       catch() { ... } // from try @ 009203b0 with catch @ 009203b0
                       catch() { ... } // from try @ 009204e8 with catch @ 009203b0 */
        if ((3 < iVar2) &&
           (uVar3 = luaval_is_usertype(param_1,4,"cc.CCBSelectorResolver",0), (uVar3 & 1) != 0)) {
          pCVar6 = (CCBSelectorResolver *)tolua_tousertype(param_1,4,0);
          this = operator_new(0x188);
          cocosbuilder::CCBReader::CCBReader(this,pNVar4,pCVar5,pCVar6,(NodeLoaderListener *)0x0);
          goto LAB_0092011c;
        }
      }
    }
    break;
  case 4:
                    /* try { // try from 00920148 to 00a2017b has its CatchHandler @ 009201cc */
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.NodeLoaderLibrary",0), (uVar3 & 1) != 0)) {
                    /* try { // try from 0092017c to 00a20217 has its CatchHandler @ 00920044 */
      pNVar4 = (NodeLoaderLibrary *)tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) &&
         (uVar3 = luaval_is_usertype(param_1,3,"cc.CCBMemberVariableAssigner",0), (uVar3 & 1) != 0))
      {
        pCVar5 = (CCBMemberVariableAssigner *)tolua_tousertype(param_1,3,0);
                    /* catch() { ... } // from try @ 00920130 with catch @ 009201c8 */
                    /* catch() { ... } // from try @ 00920148 with catch @ 009201cc */
        iVar2 = lua_gettop(param_1);
        if ((3 < iVar2) &&
           (uVar3 = luaval_is_usertype(param_1,4,"cc.CCBSelectorResolver",0), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 009200fc with catch @ 009201fc */
          pCVar6 = (CCBSelectorResolver *)tolua_tousertype(param_1,4,0);
          iVar2 = lua_gettop(param_1);
          if ((4 < iVar2) &&
             (uVar3 = luaval_is_usertype(param_1,5,"cc.NodeLoaderListener",0), (uVar3 & 1) != 0)) {
            pNVar7 = (NodeLoaderListener *)tolua_tousertype(param_1,5,0);
            this = operator_new(0x188);
            cocosbuilder::CCBReader::CCBReader(this,pNVar4,pCVar5,pCVar6,pNVar7);
            goto LAB_0092011c;
          }
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.CCBReader:CCBReader",iVar1 + -1,0);
                    /* try { // try from 009204e8 to 00a20583 has its CatchHandler @ 009203b0 */
  return 0;
}

