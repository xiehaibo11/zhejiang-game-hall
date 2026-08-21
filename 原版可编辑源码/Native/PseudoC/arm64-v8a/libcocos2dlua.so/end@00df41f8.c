
/* CocosDenshion::SimpleAudioEngine::end() */

void CocosDenshion::SimpleAudioEngine::end(void)

{
  if (DAT_01788b08 != (long *)0x0) {
                    /* try { // try from 00df4218 to 00ef421f has its CatchHandler @ 00df42a8 */
    (**(code **)(*DAT_01788b08 + 0xb0))();
    DAT_01788b08 = (long *)0x0;
  }
                    /* try { // try from 00df4220 to 00ef4257 has its CatchHandler @ 00df42b0 */
  return;
}

