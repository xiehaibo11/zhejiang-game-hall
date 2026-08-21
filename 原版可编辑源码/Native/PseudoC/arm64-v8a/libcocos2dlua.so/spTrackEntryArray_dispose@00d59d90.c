
void spTrackEntryArray_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 8));
                    /* try { // try from 00d59dac to 00e59db3 has its CatchHandler @ 00d59df8 */
                    /* try { // try from 00d59db4 to 00e59e13 has its CatchHandler @ 00d59d88 */
  _spFree(param_1);
  return;
}

