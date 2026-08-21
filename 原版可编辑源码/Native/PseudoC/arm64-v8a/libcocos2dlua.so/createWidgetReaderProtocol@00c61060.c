
/* cocostudio::WidgetPropertiesReader::createWidgetReaderProtocol(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader::createWidgetReaderProtocol
          (WidgetPropertiesReader *this,basic_string *param_1)

{
  ObjectFactory *this_00;
  long lVar1;
  
  this_00 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  lVar1 = cocos2d::ObjectFactory::createObject(this_00,param_1);
  if (lVar1 != 0) {
    __dynamic_cast(lVar1,&cocos2d::Ref::typeinfo,&WidgetReaderProtocol::typeinfo,0xfffffffffffffffe)
    ;
    return;
  }
  return;
}

