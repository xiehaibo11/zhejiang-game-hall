
/* cocos2d::UrlAudioPlayer::getUrl() const */

void cocos2d::UrlAudioPlayer::getUrl(void)

{
  long in_x0;
  ulong *in_x8;
  void *__dest;
  ulong uVar1;
  void *__src;
  ulong uVar2;
  
                    /* try { // try from 00a798b0 to 00b798bf has its CatchHandler @ 00a79b44 */
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
                    /* try { // try from 00a798c0 to 00b79b5f has its CatchHandler @ 00a79864 */
  if ((*(byte *)(in_x0 + 0x28) & 1) == 0) {
    uVar2 = *(ulong *)(in_x0 + 0x30);
    uVar1 = *(ulong *)(in_x0 + 0x28);
    in_x8[2] = *(ulong *)(in_x0 + 0x38);
    in_x8[1] = uVar2;
    *in_x8 = uVar1;
    return;
  }
  uVar1 = *(ulong *)(in_x0 + 0x30);
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(in_x0 + 0x38);
  if (uVar1 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_00a79934;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = uVar1;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,uVar1);
LAB_00a79934:
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}

