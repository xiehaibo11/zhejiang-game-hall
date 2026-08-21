
/* cocos2d::Sprite3DMaterial::createBuiltInMaterial() */

void cocos2d::Sprite3DMaterial::createBuiltInMaterial(void)

{
  long lVar1;
  GLProgramCache *pGVar2;
  GLProgram *pGVar3;
  GLProgramState *pGVar4;
  Material *pMVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  releaseBuiltInMaterial();
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_SKINPOSITION_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _unLitMaterialSkin = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _unLitMaterialSkin = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_unLitMaterialSkin + 0xa4) = 0;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_SKINPOSITION_NORMAL_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _diffuseMaterialSkin = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _diffuseMaterialSkin = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_diffuseMaterialSkin + 0xa4) = 3;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_POSITION_NORMAL_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _diffuseMaterial = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _diffuseMaterial = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_diffuseMaterial + 0xa4) = 3;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_POSITION_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _unLitMaterial = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _unLitMaterial = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_unLitMaterial + 0xa4) = 0;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_POSITION);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _unLitNoTexMaterial = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _unLitNoTexMaterial = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_unLitNoTexMaterial + 0xa4) = 1;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_POSITION_NORMAL);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _diffuseNoTexMaterial = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _diffuseNoTexMaterial = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_diffuseNoTexMaterial + 0xa4) = 4;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_POSITION_BUMPEDNORMAL_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _bumpedDiffuseMaterial = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _bumpedDiffuseMaterial = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_bumpedDiffuseMaterial + 0xa4) = 5;
    }
  }
  pGVar2 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_3D_SKINPOSITION_BUMPEDNORMAL_TEXTURE);
  pGVar3 = (GLProgram *)GLProgramCache::getGLProgram(pGVar2,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pGVar4 = (GLProgramState *)GLProgramState::create(pGVar3);
  pMVar5 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pMVar5 == (Material *)0x0) {
    _bumpedDiffuseMaterialSkin = (Material *)0x0;
  }
  else {
    *(undefined8 *)(pMVar5 + 0xa0) = 0;
    *(undefined8 *)(pMVar5 + 0x88) = 0;
    *(undefined8 *)(pMVar5 + 0x80) = 0;
    *(undefined8 *)(pMVar5 + 0x98) = 0;
    *(undefined8 *)(pMVar5 + 0x90) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    Material::Material(pMVar5);
    *(undefined ***)pMVar5 = &PTR__Material_016d3c98;
    _bumpedDiffuseMaterialSkin = pMVar5;
    uVar6 = Material::initWithGLProgramState(pMVar5,pGVar4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(_bumpedDiffuseMaterialSkin + 0xa4) = 5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

