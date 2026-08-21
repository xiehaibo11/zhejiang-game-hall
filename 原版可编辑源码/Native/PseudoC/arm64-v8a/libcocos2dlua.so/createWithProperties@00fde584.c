
/* cocos2d::Material::createWithProperties(cocos2d::Properties*) */

RenderState * cocos2d::Material::createWithProperties(Properties *param_1)

{
  RenderState *this;
  
                    /* try { // try from 00fde59c to 010de5ff has its CatchHandler @ 00fde59c
                       catch() { ... } // from try @ 00fde59c with catch @ 00fde59c
                       catch() { ... } // from try @ 00fde608 with catch @ 00fde59c */
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
    RenderState::RenderState(this);
    *(undefined ***)this = &PTR__Material_01724038;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"");
    *(undefined8 *)(this + 0x99) = 0;
    *(undefined8 *)(this + 0x91) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined2 *)(this + 0xa1) = 0x101;
    this[0xa3] = (RenderState)0x1;
    parseProperties((Material *)this,param_1);
                    /* try { // try from 00fde600 to 010de607 has its CatchHandler @ 00fde670 */
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00fde608 to 010de68b has its CatchHandler @ 00fde59c */
  return this;
}

