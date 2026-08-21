
/* cocos2d::CSLoader::createNodeWithFlatBuffersFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

long __thiscall
cocos2d::CSLoader::createNodeWithFlatBuffersFile
          (CSLoader *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  long lVar2;
  Ref *this_00;
  
  lVar1 = nodeWithFlatBuffersFile(this,param_1,param_2);
  if ((lVar1 != 0) &&
     (lVar2 = __dynamic_cast(lVar1,&Node::typeinfo,
                             &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,0xfffffffffffffffe
                            ), lVar2 != 0)) {
    this_00 = *(Ref **)(*(long *)(this + 0x98) + -8);
    *(undefined8 **)(this + 0x98) = (undefined8 *)(*(long *)(this + 0x98) + -8);
    Ref::release(this_00);
    if (*(long *)(this + 0x90) == *(long *)(this + 0x98)) {
      *(undefined8 *)(this + 0x88) = 0;
    }
    else {
      *(undefined8 *)(this + 0x88) = *(undefined8 *)(*(long *)(this + 0x98) + -8);
    }
  }
  return lVar1;
}

