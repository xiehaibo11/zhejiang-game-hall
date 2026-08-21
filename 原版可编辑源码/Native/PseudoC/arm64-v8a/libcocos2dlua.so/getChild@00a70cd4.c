
/* fairygui::GComponent::getChild(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall fairygui::GComponent::getChild(GComponent *this,basic_string *param_1)

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
  
                    /* try { // try from 00a70ce4 to 00b70cf7 has its CatchHandler @ 00a70d7c */
  plVar5 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  if (plVar5 != plVar2) {
                    /* try { // try from 00a70cfc to 00b70d2f has its CatchHandler @ 00a70d80 */
    uVar1 = *(ulong *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    do {
                    /* try { // try from 00a70d30 to 00b70dcb has its CatchHandler @ 00a70a30 */
      lVar6 = *plVar5;
      if ((*(byte *)(lVar6 + 0x60) & 1) == 0) {
        uVar7 = (ulong)(*(byte *)(lVar6 + 0x60) >> 1);
        __s1 = (void *)(lVar6 + 0x61);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x68);
        __s1 = *(void **)(lVar6 + 0x70);
      }
      __n = uVar1;
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
                    /* catch() { ... } // from try @ 00a70ce4 with catch @ 00a70d7c */
                    /* catch() { ... } // from try @ 00a70cfc with catch @ 00a70d80 */
  return 0;
}

