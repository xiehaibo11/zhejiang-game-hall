
/* cocostudio::WidgetPropertiesReader::createGUI(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 cocostudio::WidgetPropertiesReader::createGUI(basic_string *param_1)

{
  long lVar1;
  ObjectFactory *this;
  long lVar2;
  undefined8 uVar3;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  getGUIClassName(param_1);
  this = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  lVar2 = cocos2d::ObjectFactory::createObject(this,local_40);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = __dynamic_cast(lVar2,&cocos2d::Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
  }
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

