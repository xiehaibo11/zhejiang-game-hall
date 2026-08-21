
/* cocos2d::Console::Console() */

void __thiscall cocos2d::Console::Console(Console *this)

{
  Ref::Ref((Ref *)this);
  this[0x21] = (Console)0x7c;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined ***)this = &PTR__Console_01722398;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0xd0) = 0;
  this[0xd2] = (Console)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0xf8) = 0x3f800000;
  this[0x100] = (Console)0x0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x150),"");
  createCommandAllocator(this);
  createCommandConfig(this);
  createCommandDebugMsg(this);
  createCommandDirector(this);
  createCommandExit(this);
  createCommandFileUtils(this);
  createCommandFps(this);
  createCommandHelp(this);
  createCommandProjection(this);
  createCommandResolution(this);
  createCommandSceneGraph(this);
  createCommandTexture(this);
  createCommandTouch(this);
  createCommandUpload(this);
  createCommandVersion(this);
  return;
}

