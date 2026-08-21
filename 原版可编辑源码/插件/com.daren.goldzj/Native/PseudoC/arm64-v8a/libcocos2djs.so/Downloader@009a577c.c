
/* cocos2d::network::Downloader::Downloader() */

void __thiscall cocos2d::network::Downloader::Downloader(Downloader *this)

{
  long lVar1;
  undefined8 local_48;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009a5780 to 00aa5797 has its CatchHandler @ 009a5968 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a57a0 to 00aa57ab has its CatchHandler @ 009a5964 */
  *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 009a57ac to 00aa57b7 has its CatchHandler @ 009a5960 */
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 009a57b8 to 00aa58e7 has its CatchHandler @ 009a5978 */
  *(undefined8 *)(this + 0xc0) = 0;
  uStack_38 = 0;
  local_48 = 0x2d00000006;
  local_30 = (void *)0x0;
  local_40 = 0x706d742e08;
  Downloader(this,(DownloaderHints *)&local_48);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

