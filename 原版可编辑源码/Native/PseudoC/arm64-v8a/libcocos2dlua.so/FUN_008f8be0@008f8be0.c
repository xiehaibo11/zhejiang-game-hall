
undefined8 FUN_008f8be0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = lua_gettop();
  if (iVar3 + -1 == 0) {
    fairygui::GObjectPool::clear((GObjectPool *)fairygui::HtmlObject::objectPool);
    puVar1 = DAT_01782a98;
    for (puVar4 = fairygui::HtmlObject::loaderPool; puVar2 = fairygui::HtmlObject::loaderPool,
        puVar4 != puVar1; puVar4 = puVar4 + 1) {
                    /* try { // try from 008f8c40 to 009f8c73 has its CatchHandler @ 008f8d40 */
      cocos2d::Ref::release((Ref *)*puVar4);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.HtmlObject:clearStaticPools",iVar3 + -1,0);
    puVar2 = DAT_01782a98;
  }
  DAT_01782a98 = puVar2;
  return 0;
}

