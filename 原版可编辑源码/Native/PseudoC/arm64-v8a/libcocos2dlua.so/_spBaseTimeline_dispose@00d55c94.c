
void _spBaseTimeline_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 8));
  _spFree(*(void **)((long)param_1 + 0x10));
  _spFree(*(void **)((long)param_1 + 0x20));
                    /* try { // try from 00d55cc4 to 00e55cfb has its CatchHandler @ 00d55d18 */
  _spFree(param_1);
  return;
}

