
void _spRegionAttachment_dispose(void *param_1)

{
                    /* try { // try from 00d5ee00 to 00e5ee0f has its CatchHandler @ 00d5f668 */
  _spAttachment_deinit();
                    /* try { // try from 00d5ee10 to 00e5ee23 has its CatchHandler @ 00d5f664 */
  _spFree(*(void **)((long)param_1 + 0x20));
                    /* try { // try from 00d5ee24 to 00e5ee2f has its CatchHandler @ 00d5f660 */
  _spFree(param_1);
  return;
}

