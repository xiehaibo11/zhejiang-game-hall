
/* cocos2d::PUMaterialCache::loadMaterials(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::PUMaterialCache::loadMaterials(PUMaterialCache *this,basic_string *param_1)

{
  long lVar1;
  PUScriptCompiler *this_00;
  list *plVar2;
  PUTranslateManager *this_01;
  undefined8 uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = true;
  this_00 = (PUScriptCompiler *)PUScriptCompiler::Instance();
  plVar2 = (list *)PUScriptCompiler::compile(this_00,param_1,local_3c);
  uVar3 = 0;
  if (plVar2 != (list *)0x0) {
    if (*(long *)(plVar2 + 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      if (local_3c[0] != false) {
        this_01 = (PUTranslateManager *)PUTranslateManager::Instance();
        PUTranslateManager::translateMaterialSystem(this_01,this,plVar2);
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

