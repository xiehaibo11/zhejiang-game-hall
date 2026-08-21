
/* lua_cocos2dx_3d_AttachNode_constructor(lua_State*) */

bool lua_cocos2dx_3d_AttachNode_constructor(lua_State *param_1)

{
  int iVar1;
  AttachNode *this;
  
                    /* try { // try from 009024f0 to 00a024f3 has its CatchHandler @ 00902520 */
                    /* try { // try from 009024f4 to 00a0253f has its CatchHandler @ 0090217c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x340);
    cocos2d::AttachNode::AttachNode(this);
                    /* try { // try from 00902540 to 00a0258b has its CatchHandler @ 00902540
                       catch() { ... } // from try @ 00902540 with catch @ 00902540
                       catch() { ... } // from try @ 00902590 with catch @ 00902540 */
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.AttachNode");
  }
  else {
                    /* catch() { ... } // from try @ 009024f0 with catch @ 00902520 */
                    /* catch() { ... } // from try @ 00902424 with catch @ 00902524 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AttachNode:AttachNode",iVar1,0);
                    /* catch() { ... } // from try @ 009023f4 with catch @ 00902528 */
                    /* catch() { ... } // from try @ 009023c4 with catch @ 0090252c */
  }
  return iVar1 == 0;
}

