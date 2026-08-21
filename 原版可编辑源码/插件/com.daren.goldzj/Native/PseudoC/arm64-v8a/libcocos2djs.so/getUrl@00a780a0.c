
/* cocos2d::PcmAudioPlayer::getUrl() const */

void cocos2d::PcmAudioPlayer::getUrl(void)

{
  long in_x0;
  ulong *in_x8;
  void *__dest;
  ulong uVar1;
  void *__src;
  ulong uVar2;
  
                    /* try { // try from 00a780a0 to 00b780ab has its CatchHandler @ 00a78318 */
                    /* try { // try from 00a780ac to 00b780b7 has its CatchHandler @ 00a78314 */
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00a780b8 to 00b780cf has its CatchHandler @ 00a7832c */
  *in_x8 = 0;
  if ((*(byte *)(in_x0 + 0x10) & 1) == 0) {
    uVar2 = *(ulong *)(in_x0 + 0x18);
    uVar1 = *(ulong *)(in_x0 + 0x10);
    in_x8[2] = *(ulong *)(in_x0 + 0x20);
    in_x8[1] = uVar2;
    *in_x8 = uVar1;
    return;
  }
  uVar1 = *(ulong *)(in_x0 + 0x18);
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(in_x0 + 0x20);
                    /* try { // try from 00a780ec to 00b780f3 has its CatchHandler @ 00a782fc */
  if (uVar1 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_00a78134;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = uVar1;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,uVar1);
LAB_00a78134:
  *(undefined1 *)((long)__dest + uVar1) = 0;
                    /* try { // try from 00a78138 to 00b7819f has its CatchHandler @ 00a7832c */
  return;
}

