
/* cocos2d::CSLoader::isCustomWidget(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::CSLoader::isCustomWidget(CSLoader *this,basic_string *param_1)

{
  ObjectFactory *this_00;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  this_00 = (ObjectFactory *)ObjectFactory::getInstance();
  lVar1 = ObjectFactory::createObject(this_00,param_1);
  uVar3 = 0;
  if ((lVar1 != 0) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0),
     uVar3 = 0, plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 8))();
    uVar3 = 1;
  }
  return uVar3;
}

