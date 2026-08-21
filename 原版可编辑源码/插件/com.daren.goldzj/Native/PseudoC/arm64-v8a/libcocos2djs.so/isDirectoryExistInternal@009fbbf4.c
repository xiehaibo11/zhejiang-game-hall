
/* universe::FileSystemAndroid::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
universe::FileSystemAndroid::isDirectoryExistInternal(FileSystemAndroid *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  basic_string *__file;
  uint local_98;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 009fb4c8 with catch @ 009fbc10 */
  bVar2 = *param_1;
                    /* catch() { ... } // from try @ 009fb4b8 with catch @ 009fbc18 */
  uVar1 = (ulong)((byte)bVar2 >> 1);
                    /* catch() { ... } // from try @ 009fb4a0 with catch @ 009fbc20 */
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 009fb474 with catch @ 009fbc28 */
    __file = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __file = param_1 + 1;
    }
                    /* catch() { ... } // from try @ 009fb458 with catch @ 009fbc38 */
                    /* catch() { ... } // from try @ 009fb9e4 with catch @ 009fbc3c */
    if (*__file != (basic_string)0x2f) {
      bVar4 = false;
      if (((assetmanager != 0) &&
          (lVar6 = AAssetManager_openDir(assetmanager,__file), bVar4 = false, lVar6 != 0)) &&
         (lVar7 = AAssetDir_getNextFileName(), bVar4 = false, lVar7 != 0)) {
        AAssetDir_close(lVar6);
        bVar4 = true;
      }
      goto LAB_009fbc54;
    }
                    /* catch() { ... } // from try @ 009fb444 with catch @ 009fbc48 */
    iVar5 = stat((char *)__file,(stat *)&stack0xffffffffffffff58);
                    /* catch() { ... } // from try @ 009fb418 with catch @ 009fbc4c */
    if (iVar5 == 0) {
      bVar4 = (local_98 & 0xf000) == 0x4000;
                    /* try { // try from 009fbcb8 to 00afbccf has its CatchHandler @ 009fbf54 */
      goto LAB_009fbc54;
    }
  }
  bVar4 = false;
LAB_009fbc54:
                    /* catch() { ... } // from try @ 009fb468 with catch @ 009fbc5c
                       catch() { ... } // from try @ 009fb478 with catch @ 009fbc5c */
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 009fbc64 to 00afbcb7 has its CatchHandler @ 009fbc64
                       catch() { ... } // from try @ 009fbc64 with catch @ 009fbc64
                       catch() { ... } // from try @ 009fbe9c with catch @ 009fbc64 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}

