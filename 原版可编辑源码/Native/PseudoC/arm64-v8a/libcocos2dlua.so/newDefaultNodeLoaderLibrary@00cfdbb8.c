
/* cocosbuilder::NodeLoaderLibrary::newDefaultNodeLoaderLibrary() */

Ref * cocosbuilder::NodeLoaderLibrary::newDefaultNodeLoaderLibrary(void)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__NodeLoaderLibrary_016cfd78;
    *(undefined8 *)(this + 0x30) = 0;
    *(Ref **)(this + 0x28) = this + 0x30;
    cocos2d::Ref::autorelease(this);
  }
  registerDefaultNodeLoaders((NodeLoaderLibrary *)this);
  return this;
}

