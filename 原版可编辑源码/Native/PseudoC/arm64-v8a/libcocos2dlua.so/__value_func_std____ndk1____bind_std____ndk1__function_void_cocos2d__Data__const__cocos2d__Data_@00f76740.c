
/* std::__ndk1::__function::__value_func<void
   ()>::__value_func<std::__ndk1::__bind<std::__ndk1::function<void (cocos2d::Data)> const&,
   cocos2d::Data>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void
   (cocos2d::Data)> const&, cocos2d::Data> > >(std::__ndk1::__bind<std::__ndk1::function<void
   (cocos2d::Data)> const&, cocos2d::Data>&&,
   std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (cocos2d::Data)> const&,
   cocos2d::Data> > const&) */

void std::__ndk1::__function::__value_func<void()>::
     __value_func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>>
               (__bind *param_1,allocator *param_2)

{
  undefined8 *puVar1;
  allocator *paVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = operator_new(0x60);
  *puVar1 = &PTR____func_01720930;
  paVar2 = *(allocator **)(param_2 + 0x30);
  if (paVar2 == (allocator *)0x0) {
    puVar1[8] = 0;
  }
  else if (param_2 + 0x10 == paVar2) {
    puVar1[8] = puVar1 + 4;
    (**(code **)(*(long *)paVar2 + 0x18))(paVar2,puVar1 + 4);
  }
  else {
    puVar1[8] = paVar2;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  cocos2d::Data::Data((Data *)(puVar1 + 10),(Data *)(param_2 + 0x40));
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  return;
}

