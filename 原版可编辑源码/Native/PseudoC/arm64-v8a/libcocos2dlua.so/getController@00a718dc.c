
/* fairygui::GComponent::getController(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall fairygui::GComponent::getController(GComponent *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  long *plVar2;
  basic_string *__s2;
  int iVar3;
  void *__s1;
  long unaff_x19;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
                    /* catch() { ... } // from try @ 00a717f4 with catch @ 00a718f4 */
  plVar5 = *(long **)(this + 0x1f8);
  plVar2 = *(long **)(this + 0x200);
  if (plVar5 != plVar2) {
    uVar1 = *(ulong *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a71910 to 00b7195b has its CatchHandler @ 00a71910
                       catch() { ... } // from try @ 00a71910 with catch @ 00a71910
                       catch() { ... } // from try @ 00a71978 with catch @ 00a71910 */
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar5;
      if ((*(byte *)(lVar6 + 0x48) & 1) == 0) {
        uVar7 = (ulong)(*(byte *)(lVar6 + 0x48) >> 1);
        __s1 = (void *)(lVar6 + 0x49);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x50);
        __s1 = *(void **)(lVar6 + 0x58);
      }
      __n = uVar1;
                    /* try { // try from 00a7195c to 00b71977 has its CatchHandler @ 00a719f4 */
      if (uVar7 <= uVar1) {
        __n = uVar7;
      }
      if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), lVar4 = unaff_x19, iVar3 == 0)) {
        lVar4 = lVar6;
        if (uVar7 != uVar1) {
          lVar4 = unaff_x19;
        }
        if (uVar1 == uVar7) {
          return lVar4;
        }
      }
      plVar5 = plVar5 + 1;
      unaff_x19 = lVar4;
    } while (plVar2 != plVar5);
  }
                    /* try { // try from 00a71978 to 00b71a2b has its CatchHandler @ 00a71910 */
  return 0;
}

