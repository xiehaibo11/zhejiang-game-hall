
/* CCBProxy::createCCBReader() */

CCBReader * CCBProxy::createCCBReader(void)

{
  NodeLoaderLibrary *pNVar1;
  CCBReader *this;
  
  pNVar1 = (NodeLoaderLibrary *)cocosbuilder::NodeLoaderLibrary::getInstance();
  this = operator_new(0x188,(nothrow_t *)&std::nothrow);
  if (this != (CCBReader *)0x0) {
    cocosbuilder::CCBReader::CCBReader
              (this,pNVar1,(CCBMemberVariableAssigner *)0x0,(CCBSelectorResolver *)0x0,
               (NodeLoaderListener *)0x0);
  }
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

