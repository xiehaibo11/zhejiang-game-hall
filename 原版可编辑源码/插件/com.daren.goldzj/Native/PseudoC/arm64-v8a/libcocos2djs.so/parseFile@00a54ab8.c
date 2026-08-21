
/* cocos2d::extension::Manifest::parseFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::parseFile(Manifest *this,basic_string *param_1)

{
  ulong __n;
  basic_string *__src;
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  Manifest *pMVar4;
  ulong uVar5;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  loadJson(this,param_1);
                    /* try { // try from 00a54aec to 00b54b03 has its CatchHandler @ 00a54c6c */
  if ((*(int *)(this + 0x180) != 0) || (*(short *)(this + 0x13e) != 3)) goto LAB_00a54c10;
  __n = *(ulong *)(param_1 + 8);
  __src = *(basic_string **)(param_1 + 0x10);
  uVar3 = (ulong)((byte)*param_1 >> 1);
  uVar5 = __n;
                    /* try { // try from 00a54b18 to 00b54b2b has its CatchHandler @ 00a54c68 */
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
    uVar5 = uVar3;
    __n = uVar3;
  }
  do {
    uVar3 = uVar5;
    if (uVar3 == 0) goto LAB_00a54c04;
                    /* try { // try from 00a54b2c to 00b54b3b has its CatchHandler @ 00a54c3c */
    pvVar2 = memchr(&DAT_01889e24,(uint)(byte)__src[uVar3 - 1],2);
    uVar5 = uVar3 - 1;
  } while (pvVar2 == (void *)0x0);
  if (uVar3 - 1 != 0xffffffffffffffff) {
                    /* try { // try from 00a54b54 to 00b54b5b has its CatchHandler @ 00a54c20 */
    if (uVar3 <= __n) {
      __n = uVar3;
    }
                    /* try { // try from 00a54b5c to 00b54b6b has its CatchHandler @ 00a54c50 */
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    if (0xffffffffffffffef < __n) {
                    /* catch() { ... } // from try @ 00a54b74 with catch @ 00a54c40 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a54b6c to 00b54b73 has its CatchHandler @ 00a54c38 */
    if (__n < 0x17) {
                    /* try { // try from 00a54b74 to 00b54ba3 has its CatchHandler @ 00a54c40 */
      pvVar2 = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_00a54bac;
    }
    else {
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar2 = operator_new(uVar5);
      local_70 = uVar5 | 1;
                    /* try { // try from 00a54ba4 to 00b54cbb has its CatchHandler @ 00a54a9c */
      uStack_68 = __n;
      local_60 = pvVar2;
LAB_00a54bac:
      memcpy(pvVar2,__src,__n);
    }
    *(undefined1 *)((long)pvVar2 + __n) = 0;
    pMVar4 = this + 0x18;
    if (((byte)*pMVar4 & 1) == 0) {
      *(undefined2 *)pMVar4 = 0;
    }
    else {
      **(undefined1 **)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (((byte)this[0x18] & 1) != 0) {
        operator_delete(*(void **)(this + 0x28));
        *(undefined8 *)(this + 0x18) = 0;
      }
    }
    *(void **)(this + 0x28) = local_60;
    *(ulong *)(this + 0x20) = uStack_68;
    *(ulong *)pMVar4 = local_70;
  }
LAB_00a54c04:
  loadManifest(this,(GenericDocument *)(this + 0x128));
LAB_00a54c10:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00a54b54 with catch @ 00a54c20 */
                    /* catch() { ... } // from try @ 00a54b6c with catch @ 00a54c38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a54b2c with catch @ 00a54c3c */
  __stack_chk_fail();
}

