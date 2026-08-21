
undefined8 FUN_0091bb9c(lua_State *param_1)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  CCBReader *this;
  ulong uVar5;
  void *pvVar6;
  Ref *pRVar7;
  int iVar8;
  undefined8 uVar9;
  Size aSStack_68 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar9 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_0091bd20;
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0091bbdc to 00a1bc0f has its CatchHandler @ 0091bcdc */
  iVar4 = lua_gettop(param_1);
  iVar8 = iVar4 + -1;
  if ((4 < iVar4) || (iVar8 < 1)) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.CCBReader:load",iVar8,1);
    uVar9 = 0;
    goto LAB_0091bd20;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
                    /* try { // try from 0091bc10 to 00a1bc23 has its CatchHandler @ 0091bca8 */
  uVar5 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"cc.CCBReader:load");
                    /* try { // try from 0091bc28 to 00a1bc5b has its CatchHandler @ 0091bcac */
  pcVar1 = (char *)((ulong)local_60 | 1);
  if (((byte)local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  if ((uVar5 & 1) == 0) {
LAB_0091bd0c:
    uVar9 = 0;
  }
  else {
    if (iVar8 == 1) {
      pvVar6 = (void *)cocosbuilder::CCBReader::readNodeGraphFromFile(this,pcVar1);
      piVar2 = (int *)((long)pvVar6 + 0x10);
      if (pvVar6 == (void *)0x0) {
        iVar8 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar8 = *(int *)((long)pvVar6 + 0xc);
                    /* try { // try from 0091bc5c to 00a1bcf7 has its CatchHandler @ 0091bb0c */
      }
      toluafix_pushusertype_ccobject(param_1,iVar8,piVar2,pvVar6,"cc.Node");
    }
    else {
      pRVar7 = (Ref *)tolua_tousertype(param_1,3,0);
      if (iVar8 == 2) {
                    /* catch() { ... } // from try @ 0091bc10 with catch @ 0091bca8 */
                    /* catch() { ... } // from try @ 0091bc28 with catch @ 0091bcac */
        pvVar6 = (void *)cocosbuilder::CCBReader::readNodeGraphFromFile(this,pcVar1,pRVar7);
        piVar2 = (int *)((long)pvVar6 + 0x10);
        if (pvVar6 == (void *)0x0) {
          iVar8 = -1;
          piVar2 = (int *)0x0;
        }
        else {
          iVar8 = *(int *)((long)pvVar6 + 0xc);
        }
        toluafix_pushusertype_ccobject(param_1,iVar8,piVar2,pvVar6,"cc.Node");
      }
      else {
        cocos2d::Size::Size(aSStack_68);
                    /* catch() { ... } // from try @ 0091bbdc with catch @ 0091bcdc */
        uVar5 = luaval_to_size(param_1,4,aSStack_68,"cc.CCBReader:load");
        if ((uVar5 & 1) == 0) goto LAB_0091bd0c;
        pvVar6 = (void *)cocosbuilder::CCBReader::readNodeGraphFromFile
                                   (this,pcVar1,pRVar7,aSStack_68);
        piVar2 = (int *)((long)pvVar6 + 0x10);
        if (pvVar6 == (void *)0x0) {
          iVar8 = -1;
          piVar2 = (int *)0x0;
        }
        else {
          iVar8 = *(int *)((long)pvVar6 + 0xc);
        }
        toluafix_pushusertype_ccobject(param_1,iVar8,piVar2,pvVar6,"cc.Node");
      }
    }
    uVar9 = 1;
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0091bd20:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

