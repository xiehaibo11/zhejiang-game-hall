
/* cocos2d::extension::Manifest::parse(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::parse(Manifest *this,basic_string *param_1)

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
  
                    /* try { // try from 00df9ff8 to 00efa003 has its CatchHandler @ 00dfa438 */
                    /* try { // try from 00dfa010 to 00efa01b has its CatchHandler @ 00dfa3a4 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dfa028 to 00efa033 has its CatchHandler @ 00dfa3bc */
  loadJson(this,param_1);
  if ((*(int *)(this + 0x198) != 0) || (*(short *)(this + 0x156) != 3)) goto LAB_00dfa150;
  __n = *(ulong *)(param_1 + 8);
  __src = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00dfa048 to 00efa053 has its CatchHandler @ 00dfa43c */
  uVar3 = (ulong)((byte)*param_1 >> 1);
  uVar5 = __n;
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
    uVar5 = uVar3;
    __n = uVar3;
  }
  do {
    uVar3 = uVar5;
    if (uVar3 == 0) goto LAB_00dfa144;
                    /* try { // try from 00dfa078 to 00efa083 has its CatchHandler @ 00dfa3c0 */
    pvVar2 = memchr(&DAT_012f2b5a,(uint)(byte)__src[uVar3 - 1],2);
    uVar5 = uVar3 - 1;
  } while (pvVar2 == (void *)0x0);
  if (uVar3 - 1 != 0xffffffffffffffff) {
    if (uVar3 <= __n) {
      __n = uVar3;
    }
    uStack_68 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 00dfa0a4 to 00efa0ab has its CatchHandler @ 00dfa3e4 */
    local_70 = 0;
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* try { // try from 00dfa0ac to 00efa0bf has its CatchHandler @ 00dfa4a8 */
    if (__n < 0x17) {
      pvVar2 = (void *)((ulong)&local_70 | 1);
                    /* try { // try from 00dfa0c0 to 00efa0cb has its CatchHandler @ 00dfa41c */
      local_70 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_00dfa0ec;
    }
    else {
                    /* try { // try from 00dfa0cc to 00efa0d7 has its CatchHandler @ 00dfa420 */
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar2 = operator_new(uVar5);
      local_70 = uVar5 | 1;
      uStack_68 = __n;
      local_60 = pvVar2;
LAB_00dfa0ec:
      memcpy(pvVar2,__src,__n);
    }
    *(undefined1 *)((long)pvVar2 + __n) = 0;
    pMVar4 = this + 0x30;
    if (((byte)*pMVar4 & 1) == 0) {
      *(undefined2 *)pMVar4 = 0;
    }
    else {
                    /* try { // try from 00dfa114 to 00efa11f has its CatchHandler @ 00dfa3d4 */
      **(undefined1 **)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      if (((byte)this[0x30] & 1) != 0) {
        operator_delete(*(void **)(this + 0x40));
        *(undefined8 *)(this + 0x30) = 0;
      }
    }
    *(void **)(this + 0x40) = local_60;
    *(ulong *)(this + 0x38) = uStack_68;
    *(ulong *)pMVar4 = local_70;
  }
LAB_00dfa144:
  loadManifest(this,(GenericDocument *)(this + 0x140));
LAB_00dfa150:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dfa17c to 00efa187 has its CatchHandler @ 00dfa440 */
  __stack_chk_fail();
}

