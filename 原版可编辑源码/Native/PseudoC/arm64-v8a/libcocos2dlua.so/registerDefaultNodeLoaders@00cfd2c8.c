
/* cocosbuilder::NodeLoaderLibrary::registerDefaultNodeLoaders() */

void __thiscall cocosbuilder::NodeLoaderLibrary::registerDefaultNodeLoaders(NodeLoaderLibrary *this)

{
  NodeLoader *pNVar1;
  
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    NodeLoader::NodeLoader(pNVar1);
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCNode",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d16d0;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCLayer",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d12a0;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCLayerColor",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d14b8;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCLayerGradient",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d0610;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCSprite",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d0e70;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCLabelBMFont",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d1088;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCLabelTTF",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d01e0;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCScale9Sprite",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d03f8;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCScrollView",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d0828;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCBFile",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016cfdb0;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCMenu",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d18e8;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCMenuItemImage",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016d0a40;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCControlButton",pNVar1);
  pNVar1 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pNVar1 != (NodeLoader *)0x0) {
    *(undefined8 *)(pNVar1 + 0x38) = 0;
    *(undefined8 *)(pNVar1 + 0x30) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x18) = 0;
    *(undefined8 *)(pNVar1 + 0x10) = 0;
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined8 *)(pNVar1 + 0x20) = 0;
    *(undefined8 *)(pNVar1 + 8) = 0;
    *(undefined8 *)pNVar1 = 0;
    NodeLoader::NodeLoader(pNVar1);
    *(undefined ***)pNVar1 = &PTR__NodeLoader_016cffc8;
    cocos2d::Ref::autorelease((Ref *)pNVar1);
  }
  registerNodeLoader(this,"CCParticleSystemQuad",pNVar1);
  return;
}

