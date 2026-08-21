
/* fairygui::GComponent::getChildByPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void * __thiscall fairygui::GComponent::getChildByPath(GComponent *this,basic_string *param_1)

{
  size_t __n;
  basic_string *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__s2;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  void *__src;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  ulong local_a0 [2];
  void *local_90;
  FastSplitter aFStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a70cb0 with catch @ 00a70db0 */
  local_68 = *(long *)(lVar3 + 0x28);
  FastSplitter::FastSplitter(aFStack_88);
                    /* try { // try from 00a70dcc to 00b70e17 has its CatchHandler @ 00a70dcc
                       catch() { ... } // from try @ 00a70dcc with catch @ 00a70dcc
                       catch() { ... } // from try @ 00a70e34 with catch @ 00a70dcc */
  uVar5 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = (ulong)((byte)*param_1 >> 1);
  }
  FastSplitter::start(aFStack_88,(char *)pbVar1,uVar5,'.');
  local_a0[1] = 0;
  local_90 = (void *)0x0;
  local_a0[0] = 0;
  pvVar8 = (void *)0x0;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  do {
                    /* try { // try from 00a70e18 to 00b70e33 has its CatchHandler @ 00a70eb0 */
    uVar5 = FastSplitter::next(aFStack_88);
    if ((uVar5 & 1) == 0) break;
    if (this == (GComponent *)0x0) {
      if (pvVar8 == (void *)0x0) break;
                    /* try { // try from 00a70e34 to 00b70ee7 has its CatchHandler @ 00a70dcc */
      this = (GComponent *)__dynamic_cast(pvVar8,&GObject::typeinfo,&typeinfo,0);
      if (this == (GComponent *)0x0) {
        pvVar8 = (void *)0x0;
        break;
      }
    }
    pcVar6 = (char *)FastSplitter::getText(aFStack_88);
    uVar5 = FastSplitter::getTextLength(aFStack_88);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_a0,pcVar6,uVar5);
    __src = (void *)FastSplitter::getText(aFStack_88);
    uVar5 = FastSplitter::getTextLength(aFStack_88);
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 00a70fc8 to 00b70ff3 has its CatchHandler @ 00a71570 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      local_b8 = (ulong)(byte)((int)uVar5 << 1);
      pvVar8 = pvVar12;
      if (uVar5 != 0) goto LAB_00a70ed4;
    }
    else {
      uVar10 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar10);
      local_b8 = uVar10 | 1;
      local_b0 = uVar5;
      local_a8 = pvVar8;
LAB_00a70ed4:
      memcpy(pvVar8,__src,uVar5);
    }
    uVar10 = local_b8;
    *(undefined1 *)((long)pvVar8 + uVar5) = 0;
                    /* try { // try from 00a70ee8 to 00b70f67 has its CatchHandler @ 00a70ee8
                       catch() { ... } // from try @ 00a70ee8 with catch @ 00a70ee8
                       catch() { ... } // from try @ 00a71274 with catch @ 00a70ee8
                       catch() { ... } // from try @ 00a714e0 with catch @ 00a70ee8 */
    puVar9 = *(undefined8 **)(this + 0x1e0);
    puVar2 = *(undefined8 **)(this + 0x1e8);
    if (puVar9 != puVar2) {
      __s2 = pvVar12;
      uVar5 = local_b8 >> 1 & 0x7f;
      if ((local_b8 & 1) != 0) {
        __s2 = local_a8;
        uVar5 = local_b0;
      }
      do {
        pvVar11 = (void *)*puVar9;
        if ((*(byte *)((long)pvVar11 + 0x60) & 1) == 0) {
          uVar7 = (ulong)(*(byte *)((long)pvVar11 + 0x60) >> 1);
          pvVar8 = (void *)((long)pvVar11 + 0x61);
        }
        else {
          uVar7 = *(ulong *)((long)pvVar11 + 0x68);
          pvVar8 = *(void **)((long)pvVar11 + 0x70);
        }
        __n = uVar5;
        if (uVar7 <= uVar5) {
          __n = uVar7;
        }
        if ((__n == 0) || (iVar4 = memcmp(pvVar8,__s2,__n), pvVar8 = __src, iVar4 == 0)) {
          pvVar8 = pvVar11;
          if (uVar7 != uVar5) {
            pvVar8 = __src;
          }
          if (uVar5 == uVar7) goto LAB_00a70f6c;
        }
        puVar9 = puVar9 + 1;
        __src = pvVar8;
      } while (puVar2 != puVar9);
    }
                    /* try { // try from 00a70f68 to 00b70f7f has its CatchHandler @ 00a715d8 */
    pvVar8 = (void *)0x0;
LAB_00a70f6c:
    if ((uVar10 & 1) != 0) {
      operator_delete(local_a8);
    }
    this = (GComponent *)0x0;
  } while (pvVar8 != (void *)0x0);
  if ((local_a0[0] & 1) != 0) {
                    /* try { // try from 00a70f8c to 00b70fa3 has its CatchHandler @ 00a715ac */
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a70fa8 to 00b70fbf has its CatchHandler @ 00a71598 */
    return pvVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

