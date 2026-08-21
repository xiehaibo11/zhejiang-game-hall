
/* spine::SkeletonRenderer::setAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*) */

bool spine::SkeletonRenderer::setAttachment(basic_string *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 00d52f08 with catch @ 00d52fd0 */
                    /* catch() { ... } // from try @ 00d52e4c with catch @ 00d52fd4 */
                    /* catch() { ... } // from try @ 00d52f1c with catch @ 00d52fd8 */
  if ((*param_2 & 1U) == 0) {
    pcVar2 = param_2 + 1;
  }
  iVar1 = spSkeleton_setAttachment(*(undefined8 *)(param_1 + 0x388),pcVar2);
  return iVar1 != 0;
}

