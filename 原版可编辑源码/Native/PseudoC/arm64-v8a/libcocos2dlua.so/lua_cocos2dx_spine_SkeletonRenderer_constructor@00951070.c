
/* lua_cocos2dx_spine_SkeletonRenderer_constructor(lua_State*) */

void lua_cocos2dx_spine_SkeletonRenderer_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonRenderer *pSVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  double local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0095107c to 00a5107f has its CatchHandler @ 009510dc */
                    /* try { // try from 00951080 to 00a510ef has its CatchHandler @ 00951030 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string(param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:SkeletonRenderer")
    ;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 009511f0 to 00a51223 has its CatchHandler @ 009512f0 */
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:SkeletonRenderer");
    if ((uVar5 & 1) == 0) {
      iVar6 = 0xe;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* try { // try from 00951224 to 00a51237 has its CatchHandler @ 009512bc */
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"sp.SkeletonRenderer:SkeletonRenderer")
      ;
                    /* try { // try from 0095123c to 00a5126f has its CatchHandler @ 009512c0 */
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_number(param_1,4,&local_70,"sp.SkeletonRenderer:SkeletonRenderer"),
         (uVar5 & 1) == 0)) {
                    /* catch() { ... } // from try @ 0095123c with catch @ 009512c0 */
        iVar6 = 0xe;
      }
      else {
        pSVar3 = operator_new(0x3b0);
        spine::SkeletonRenderer::SkeletonRenderer
                  (pSVar3,(basic_string *)&local_50,(basic_string *)&local_68,(float)local_70);
                    /* try { // try from 00951270 to 00a5130b has its CatchHandler @ 009510f0 */
        cocos2d::Ref::autorelease((Ref *)pSVar3);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(pSVar3 + 0xc),(int *)(pSVar3 + 0x10),pSVar3,
                   "sp.SkeletonRenderer");
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 0xe) {
LAB_00951340:
      uVar4 = 1;
      goto LAB_00951344;
    }
  }
  else if (iVar2 == 3) {
                    /* try { // try from 009510f0 to 00a511ef has its CatchHandler @ 009510f0
                       catch() { ... } // from try @ 009510f0 with catch @ 009510f0
                       catch() { ... } // from try @ 00951270 with catch @ 009510f0 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string(param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:SkeletonRenderer")
    ;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:SkeletonRenderer");
    if ((uVar5 & 1) == 0) {
      iVar6 = 0xc;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"sp.SkeletonRenderer:SkeletonRenderer")
      ;
      if ((uVar5 & 1) == 0) {
        iVar6 = 0xc;
      }
      else {
        pSVar3 = operator_new(0x3b0);
        spine::SkeletonRenderer::SkeletonRenderer
                  (pSVar3,(basic_string *)&local_50,(basic_string *)&local_68,1.0);
        cocos2d::Ref::autorelease((Ref *)pSVar3);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(pSVar3 + 0xc),(int *)(pSVar3 + 0x10),pSVar3,
                   "sp.SkeletonRenderer");
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 0xc) goto LAB_00951340;
  }
  else if (iVar2 == 1) {
    pSVar3 = operator_new(0x3b0);
    spine::SkeletonRenderer::SkeletonRenderer(pSVar3);
    cocos2d::Ref::autorelease((Ref *)pSVar3);
                    /* catch() { ... } // from try @ 0095107c with catch @ 009510dc */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(pSVar3 + 0xc),(int *)(pSVar3 + 0x10),pSVar3,"sp.SkeletonRenderer");
    uVar4 = 1;
    goto LAB_00951344;
  }
                    /* catch() { ... } // from try @ 009511f0 with catch @ 009512f0 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "sp.SkeletonRenderer:SkeletonRenderer",iVar2 + -1,2);
  uVar4 = 0;
LAB_00951344:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

