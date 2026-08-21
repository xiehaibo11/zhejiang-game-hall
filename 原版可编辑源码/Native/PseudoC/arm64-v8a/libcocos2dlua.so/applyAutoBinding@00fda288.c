
/* cocos2d::GLProgramState::applyAutoBinding(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::GLProgramState::applyAutoBinding
          (GLProgramState *this,basic_string *param_1,basic_string *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 00fda260 with catch @ 00fda2a4 */
  if (_customAutoBindingResolvers != DAT_01792688) {
    puVar3 = DAT_01792688 + -1;
                    /* catch() { ... } // from try @ 00fda2f0 with catch @ 00fda2c0 */
    puVar4 = _customAutoBindingResolvers;
    do {
      uVar2 = (**(code **)(*(long *)*puVar4 + 0x10))
                        ((long *)*puVar4,this,*(undefined8 *)(this + 0xd8),param_1,param_2);
      if ((uVar2 & 1) != 0) {
        return;
      }
                    /* try { // try from 00fda2e8 to 010da2ef has its CatchHandler @ 00fda328 */
      bVar1 = puVar3 != puVar4;
      puVar4 = puVar4 + 1;
                    /* try { // try from 00fda2f0 to 010da343 has its CatchHandler @ 00fda2c0 */
    } while (bVar1);
  }
  return;
}

