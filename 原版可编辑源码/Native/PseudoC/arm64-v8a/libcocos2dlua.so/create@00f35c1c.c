
/* cocos2d::ParticleSystemQuad::create(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >&) */

ParticleSystem * cocos2d::ParticleSystemQuad::create(unordered_map *param_1)

{
  ParticleSystem *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystem *)0x0) {
    ParticleSystem::ParticleSystem(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170e2d8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSystemQuad_0170e9f0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystemQuad_0170e9b0;
    *(undefined4 *)(this + 0x540) = 0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    QuadCommand::QuadCommand((QuadCommand *)(this + 0x550));
    *(undefined8 *)(this + 0x544) = 0;
    uVar1 = ParticleSystem::initWithDictionary(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystem *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

