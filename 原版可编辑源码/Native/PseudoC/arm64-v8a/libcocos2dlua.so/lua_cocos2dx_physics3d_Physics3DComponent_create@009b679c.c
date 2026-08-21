
/* lua_cocos2dx_physics3d_Physics3DComponent_create(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DComponent_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Physics3DComponent *this;
  ulong uVar4;
  Physics3DObject *pPVar5;
  void *pvVar6;
  undefined8 uVar7;
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 009b67e4 to 00ab67fb has its CatchHandler @ 009b6a7c */
  switch(iVar2 + -1) {
  case 0:
    this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
    if (this != (Physics3DComponent *)0x0) {
                    /* try { // try from 009b6800 to 00ab6813 has its CatchHandler @ 009b6a78 */
      cocos2d::Physics3DComponent::Physics3DComponent(this);
      uVar4 = (**(code **)(*(long *)this + 0x10))(this);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 009b6818 to 00ab683f has its CatchHandler @ 009b6aa0 */
        cocos2d::Ref::autorelease((Ref *)this);
        iVar2 = *(int *)(this + 0xc);
LAB_009b69f0:
        toluafix_pushusertype_ccobject
                  (param_1,iVar2,(int *)(this + 0x10),this,"cc.Physics3DComponent");
        uVar7 = 1;
        goto LAB_009b6a48;
      }
      (**(code **)(*(long *)this + 8))(this);
    }
    goto LAB_009b6a0c;
  case 1:
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DObject",0), (uVar4 & 1) == 0)) break;
    pPVar5 = (Physics3DObject *)tolua_tousertype(param_1,2,0);
    this = (Physics3DComponent *)
           cocos2d::Physics3DComponent::create
                     (pPVar5,(Vec3 *)&cocos2d::Vec3::ZERO,(Quaternion *)cocos2d::Quaternion::ZERO);
joined_r0x009b68b8:
    if (this != (Physics3DComponent *)0x0) {
      iVar2 = *(int *)(this + 0xc);
      goto LAB_009b69f0;
    }
LAB_009b6a0c:
    lua_pushnil(param_1);
                    /* catch() { ... } // from try @ 009b6944 with catch @ 009b6a14 */
    uVar7 = 1;
    goto LAB_009b6a48;
  case 2:
                    /* try { // try from 009b6850 to 00ab6863 has its CatchHandler @ 009b6a68 */
                    /* try { // try from 009b6868 to 00ab688f has its CatchHandler @ 009b6a8c */
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DObject",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DObject *)tolua_tousertype(param_1,2,0);
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar4 = luaval_to_vec3(param_1,3,aVStack_58,"cc.Physics3DComponent:create");
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 009b68a4 to 00ab68c7 has its CatchHandler @ 009b6ab4 */
        this = (Physics3DComponent *)
               cocos2d::Physics3DComponent::create
                         (pPVar5,aVStack_58,(Quaternion *)cocos2d::Quaternion::ZERO);
        goto joined_r0x009b68b8;
      }
    }
    break;
  case 3:
                    /* try { // try from 009b68e4 to 00ab68f7 has its CatchHandler @ 009b6a2c */
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DObject",0), (uVar4 & 1) != 0)) {
                    /* try { // try from 009b68f8 to 00ab6943 has its CatchHandler @ 009b6788 */
      pPVar5 = (Physics3DObject *)tolua_tousertype(param_1,2,0);
      cocos2d::Vec3::Vec3(aVStack_48);
      uVar4 = luaval_to_vec3(param_1,3,aVStack_48,"cc.Physics3DComponent:create");
      if ((uVar4 & 1) != 0) {
        cocos2d::Quaternion::Quaternion((Quaternion *)aVStack_58);
                    /* try { // try from 009b6944 to 00ab694f has its CatchHandler @ 009b6a14 */
        uVar4 = luaval_to_quaternion(param_1,4,(Quaternion *)aVStack_58,"");
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 009b6958 to 00ab6963 has its CatchHandler @ 009b6ab4 */
          pvVar6 = (void *)cocos2d::Physics3DComponent::create
                                     (pPVar5,aVStack_48,(Quaternion *)aVStack_58);
          if (pvVar6 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
                    /* try { // try from 009b6964 to 00ab6b2b has its CatchHandler @ 009b6788 */
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                       "cc.Physics3DComponent");
          }
                    /* catch() { ... } // from try @ 009b6800 with catch @ 009b6a78 */
          cocos2d::Quaternion::~Quaternion((Quaternion *)aVStack_58);
                    /* catch() { ... } // from try @ 009b67e4 with catch @ 009b6a7c */
          uVar7 = 1;
          goto LAB_009b6a48;
        }
        cocos2d::Quaternion::~Quaternion((Quaternion *)aVStack_58);
      }
    }
  }
                    /* catch() { ... } // from try @ 009b68e4 with catch @ 009b6a2c */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Physics3DComponent:create",iVar2 + -1,0);
  uVar7 = 0;
LAB_009b6a48:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009b6850 with catch @ 009b6a68 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

