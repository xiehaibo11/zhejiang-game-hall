
/* cocos2d::renderer::ProgramLib::ProgramLib(cocos2d::renderer::DeviceGraphics*,
   std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template> >&) */

void __thiscall
cocos2d::renderer::ProgramLib::ProgramLib(ProgramLib *this,DeviceGraphics *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  
  *(DeviceGraphics **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  if (param_1 != (DeviceGraphics *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  lVar2 = *(long *)(param_2 + 8);
  for (lVar1 = *(long *)param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x68) {
                    /* try { // try from 009c156c to 00ac1653 has its CatchHandler @ 009c13a4 */
    define(this,(basic_string *)(lVar1 + 8),(basic_string *)(lVar1 + 0x20),
           (basic_string *)(lVar1 + 0x38),(vector *)(lVar1 + 0x50));
  }
  return;
}

