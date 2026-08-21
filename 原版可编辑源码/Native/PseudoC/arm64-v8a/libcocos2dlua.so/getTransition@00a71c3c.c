
/* fairygui::GComponent::getTransition(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall fairygui::GComponent::getTransition(GComponent *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string *__s2;
  int iVar2;
  void *__s1;
  long unaff_x19;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
                    /* try { // try from 00a71c50 to 00b71c67 has its CatchHandler @ 00a72048 */
  plVar4 = *(long **)(this + 0x210);
  plVar5 = *(long **)(this + 0x218);
  if (plVar4 != plVar5) {
    uVar1 = *(ulong *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a71c6c to 00b71ca7 has its CatchHandler @ 00a72040 */
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar4;
      if ((*(byte *)(lVar6 + 0x28) & 1) == 0) {
        uVar7 = (ulong)(*(byte *)(lVar6 + 0x28) >> 1);
        __s1 = (void *)(lVar6 + 0x29);
                    /* try { // try from 00a71cb4 to 00b71ccb has its CatchHandler @ 00a72110 */
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x30);
        __s1 = *(void **)(lVar6 + 0x38);
      }
      __n = uVar1;
      if (uVar7 <= uVar1) {
        __n = uVar7;
      }
      if ((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), lVar3 = unaff_x19, iVar2 == 0)) {
        lVar3 = lVar6;
        if (uVar7 != uVar1) {
          lVar3 = unaff_x19;
        }
        if (uVar1 == uVar7) {
          return lVar3;
        }
      }
      plVar4 = plVar4 + 1;
      unaff_x19 = lVar3;
    } while (plVar5 != plVar4);
  }
                    /* try { // try from 00a71cd8 to 00b71cef has its CatchHandler @ 00a720e4 */
  return 0;
}

