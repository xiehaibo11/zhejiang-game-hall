
/* cocos2d::PUParticleSystem3D::initWithFilePathAndMaterialPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined4 __thiscall
cocos2d::PUParticleSystem3D::initWithFilePathAndMaterialPath
          (PUParticleSystem3D *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  long *plVar2;
  PUMaterialCache *this_00;
  PUScriptCompiler *this_01;
  list *plVar3;
  PUTranslateManager *this_02;
  undefined4 uVar4;
  basic_string local_70 [16];
  void *local_60;
  basic_string local_58 [16];
  void *local_48;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x50))(local_58,plVar2,param_2);
  this_00 = (PUMaterialCache *)PUMaterialCache::Instance();
  PUMaterialCache::loadMaterials(this_00,local_58);
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x50))(local_70,plVar2,param_1);
  local_3c[0] = true;
  this_01 = (PUScriptCompiler *)PUScriptCompiler::Instance();
  plVar3 = (list *)PUScriptCompiler::compile(this_01,local_70,local_3c);
  if ((plVar3 == (list *)0x0) || (*(long *)(plVar3 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    this_02 = (PUTranslateManager *)PUTranslateManager::Instance();
    PUTranslateManager::translateParticleSystem(this_02,this,plVar3);
    uVar4 = 1;
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

