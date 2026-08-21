
/* fairygui::GComponent::getChildInGroup(fairygui::GGroup const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
fairygui::GComponent::getChildInGroup(GComponent *this,GGroup *param_1,basic_string *param_2)

{
  size_t __n;
  ulong uVar1;
  long *plVar2;
  basic_string *__s2;
  int iVar3;
  void *__s1;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
                    /* try { // try from 00a71000 to 00b71017 has its CatchHandler @ 00a715d4 */
  plVar5 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  if (plVar5 != plVar2) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s2 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00a71024 to 00b7103b has its CatchHandler @ 00a715a8 */
    if (((byte)*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    do {
      lVar4 = *plVar5;
      if (*(GGroup **)(lVar4 + 0x128) == param_1) {
        if ((*(byte *)(lVar4 + 0x60) & 1) == 0) {
          uVar6 = (ulong)(*(byte *)(lVar4 + 0x60) >> 1);
          __s1 = (void *)(lVar4 + 0x61);
        }
        else {
          uVar6 = *(ulong *)(lVar4 + 0x68);
          __s1 = *(void **)(lVar4 + 0x70);
        }
        __n = uVar1;
                    /* try { // try from 00a7107c to 00b71093 has its CatchHandler @ 00a715d0 */
        if (uVar6 <= uVar1) {
          __n = uVar6;
        }
        if (__n == 0) {
          if (uVar6 == uVar1) {
            return lVar4;
          }
        }
        else {
          iVar3 = memcmp(__s1,__s2,__n);
          if ((uVar6 == uVar1) && (iVar3 == 0)) {
            return lVar4;
          }
        }
      }
                    /* try { // try from 00a71040 to 00b7106f has its CatchHandler @ 00a7159c */
      plVar5 = plVar5 + 1;
    } while (plVar2 != plVar5);
  }
                    /* try { // try from 00a710a0 to 00b710b7 has its CatchHandler @ 00a715a4 */
  return 0;
}

