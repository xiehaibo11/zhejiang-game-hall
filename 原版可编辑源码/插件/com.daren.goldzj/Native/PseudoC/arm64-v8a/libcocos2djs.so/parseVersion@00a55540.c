
/* cocos2d::extension::Manifest::parseVersion(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::parseVersion(Manifest *this,basic_string *param_1)

{
                    /* catch() { ... } // from try @ 00a5547c with catch @ 00a55548 */
                    /* catch() { ... } // from try @ 00a5543c with catch @ 00a5554c */
                    /* catch() { ... } // from try @ 00a55484 with catch @ 00a55550 */
  loadJson(this,param_1);
  if (*(short *)(this + 0x13e) == 3) {
                    /* catch() { ... } // from try @ 00a5546c with catch @ 00a55560 */
    loadVersion(this,(GenericDocument *)(this + 0x128));
    return;
  }
                    /* catch() { ... } // from try @ 00a55428 with catch @ 00a55578 */
                    /* catch() { ... } // from try @ 00a553fc with catch @ 00a5557c */
  return;
}

